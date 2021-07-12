library std;
use std.standard.all;
library ieee;
use ieee.std_logic_1164.all;
use ieee.numeric_std.all;
library aHiR_ieee_proposed;
use aHiR_ieee_proposed.math_utility_pkg.all;
use aHiR_ieee_proposed.fixed_pkg.all;
use aHiR_ieee_proposed.float_pkg.all;
library ahir;
use ahir.memory_subsystem_package.all;
use ahir.types.all;
use ahir.subprograms.all;
use ahir.components.all;
use ahir.basecomponents.all;
use ahir.operatorpackage.all;
use ahir.floatoperatorpackage.all;
use ahir.utilities.all;
library work;
use work.ahir_system_global_package.all;

entity receiver_with_busy is
    port(
        clk : in std_logic;
        reset : in std_logic;
        sdclk : in std_logic;
        busy: in std_logic_vector(0 downto 0);
        busyResponse : in std_logic_vector(0 downto 0);
        datasig: in std_logic_vector(0 downto 0);
        dataIn : in std_logic_vector(0 downto 0);
        outgoing_pipe_write_data: out std_logic_vector(0 downto 0);
        outgoing_pipe_write_req : out std_logic_vector(0 downto 0);
        outgoing_pipe_write_ack : in std_logic_vector(0 downto 0)
    );
end entity;

architecture rch of receiver_with_busy is
    signal flag: std_logic:= '0';
    signal busyflag: std_logic:= '0';
    signal busyflagResponse: std_logic:= '0';
    signal busy_t: std_logic_vector(0 downto 0);
    signal datasig_t : std_logic_vector(0 downto 0);
    signal sdclk_t: std_logic:='0';
    signal dataIn_t: std_logic_vector(0 downto 0):= (others => '1');
    --signal dataIn_t1: std_logic_vector(0 downto 0):= (others => '1');
    --signal dataIn_t2: std_logic_vector(0 downto 0):= (others => '1');
    --signal dataIn_t3: std_logic_vector(0 downto 0):= (others => '1');
    --signal dataIn_t4: std_logic_vector(0 downto 0):= (others => '1'); 
    --signal dataIn_delay: std_logic_vector(2900 downto 0):=(others => '1');
    signal outgoing_pipe_write_req_t: std_logic_vector(0 downto 0):= (others => '0');
    --signal count: integer := 0;
    begin
        process(clk,reset,sdclk,outgoing_pipe_write_ack)
        variable count : integer := 0;
        begin
            if(clk'event and clk ='1')then
                if (reset = '1')then
                     outgoing_pipe_write_req_t <= "0";       
                elsif (sdclk = '0' and sdclk_t = '1') then
                --if (reset = '1')then
                --    outgoing_pipe_write_req_t <= "0";
                --else
                    if(busyResponse = "1")then
                        count :=0;
                        flag <= '0';
                        if(dataIn = "0" and (dataIn_t = "1" or dataIn_t = "Z") and busyflagResponse = '0')then
                            outgoing_pipe_write_req_t <= "1";
                            busyflagResponse <= '1';
                        elsif(dataIn = "1" and dataIn_t = "0" and busyflagResponse = '1')then
                            outgoing_pipe_write_req_t <= "1";
                            busyflagResponse <= '0';
                        elsif (busyflagResponse = '1') then
                            outgoing_pipe_write_req_t <= "1";
                        else
                            outgoing_pipe_write_req_t <= "0";
                        end if;
                    elsif(busy = "1")then
                        count := 0;
                        flag <= '0';
                        if(dataIn = "0" and (dataIn_t = "1" or dataIn_t = "Z") and busyflag = '0')then
                            outgoing_pipe_write_req_t <= "1";
                            busyflag <= '1';
                        elsif(dataIn = "1" and dataIn_t = "0" and busyflag = '1')then
                            outgoing_pipe_write_req_t <= "1";
                            busyflag <= '0';
                        elsif (busyflag = '1') then
                            outgoing_pipe_write_req_t <= "1";
                        else
                            outgoing_pipe_write_req_t <= "0";
                        end if;
                        --if(dataIn = "1" and dataIn_t = "0" and busyflag = '0')then
                        --    outgoing_pipe_write_req_t <= "1";
                        --    busyflag <= '1';
                        --elsif (busyflag = '1') then
                        --    outgoing_pipe_write_req_t <= "0";
                        --elsif (outgoing_pipe_write_ack = "0") then
                        --    outgoing_pipe_write_req_t <= "0";
                        --elsif ((dataIn = "1" or dataIn = "Z") and busyflag = '0') then
                        --    outgoing_pipe_write_req_t <= "1";
                        --    busyflag <= '1';
                        --else
                        --    outgoing_pipe_write_req_t <= "1";
                        --end if;
                    elsif(datasig = "0")then
                        if(datasig = "0" and datasig_t = "1")then
                            outgoing_pipe_write_req_t <= "0";
                        elsif(dataIn = "0" and (dataIn_t = "1" or dataIn_t = "Z") and flag = '0')then
                            if(outgoing_pipe_write_ack = "1")then
                                outgoing_pipe_write_req_t <= "1";
                                count := count + 1;
                                flag <= '1';
                            elsif (outgoing_pipe_write_ack = "0") then
                                outgoing_pipe_write_req_t <= "0";
                            end if;
                        elsif(flag = '1' and count <1043)then
                            if(outgoing_pipe_write_ack = "1")then
                                outgoing_pipe_write_req_t <= "1";
                                count := count + 1;
                                flag <= '1';
                            elsif (outgoing_pipe_write_ack = "0") then
                                outgoing_pipe_write_req_t <= "0";
                            end if;
                        else
                            outgoing_pipe_write_req_t <= "0";
                        end if;
                    else
                        flag <= '0';
                        outgoing_pipe_write_req_t <= "0";
                    end if;
                    if(count = 1043)then
                        outgoing_pipe_write_req_t <= "0";
                        count := 0;
                        flag <= '0';
                    end if;
                    --if(busy = "1" and busy_t = "0")then
                    --    busyflag <= '0';
                    --end if;
                --end if;
                outgoing_pipe_write_data <= dataIn;
                dataIn_t <= dataIn;
                --sdclk_t <= sdclk;
                datasig_t <= datasig;
                busy_t <= busy;
                --dataIn_t1 <= dataIn_t;
                --dataIn_t2 <= dataIn_t1;
                --dataIn_t3 <= dataIn_t2;
                --dataIn_t4 <= dataIn_t3;
                --dataIn_delay(0) <= dataIn_t4(0);
                --for i in 0 to 2899 loop
                --    dataIn_delay(i+1) <= dataIn_delay(i);
                --end loop;
           end if;
           sdclk_t <= sdclk;
            --if(clk'event and clk ='1')then
                if(outgoing_pipe_write_req_t = "1")then
                    outgoing_pipe_write_req_t <= "0";
                end if;
            --end if;
            end if;
        end process;

        process(clk,reset)
        begin
            if(clk'event and clk = '0')then
                if (reset = '1')then
                    outgoing_pipe_write_req <= "0";
                else
                    outgoing_pipe_write_req <= outgoing_pipe_write_req_t;
                end if;
            end if;
        end process;
    end architecture;