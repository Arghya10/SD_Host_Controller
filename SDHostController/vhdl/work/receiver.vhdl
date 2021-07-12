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

entity receiver is
    port(
        clk : in std_logic;
        reset : in std_logic;
        sdclk : in std_logic;
        datasig: in std_logic_vector(0 downto 0);
        bigResponseEnable : in std_logic_vector(0 downto 0);
        dataIn : in std_logic_vector(0 downto 0);
        outgoing_pipe_write_data: out std_logic_vector(0 downto 0);
        outgoing_pipe_write_req : out std_logic_vector(0 downto 0);
        outgoing_pipe_write_ack : in std_logic_vector(0 downto 0)
    );
end entity;

architecture rch of receiver is
    signal flag: std_logic:= '0';
    signal dataIn_t: std_logic_vector(0 downto 0):= (others => '1');
    signal sdclk_t: std_logic:='0';
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
        variable count2 : integer := 0;
        begin
            if(clk'event and clk = '1')then
                if (reset = '1')then
                     outgoing_pipe_write_req_t <= "0";
                elsif (sdclk = '0' and sdclk_t = '1') then
                --if (reset = '1')then
                  --  outgoing_pipe_write_req_t <= "0";
                --else
                    if(datasig = "0")then
                        if(dataIn = "0" and (dataIn_t = "1" or dataIn_t = "Z") and flag = '0')then
                            if(outgoing_pipe_write_ack = "1")then
                                outgoing_pipe_write_req_t <= "1";
                                count := count + 1;
                                flag <= '1';
                            elsif (outgoing_pipe_write_ack = "0") then
                                outgoing_pipe_write_req_t <= "0";
                            end if;
                        elsif(flag = '1' and count < 49 and bigResponseEnable = "0")then
                            if(outgoing_pipe_write_ack = "1")then
                                outgoing_pipe_write_req_t <= "1";
                                count := count + 1;
                                flag <= '1';
                            elsif (outgoing_pipe_write_ack = "0") then
                                outgoing_pipe_write_req_t <= "0";
                            end if;
                        elsif(flag = '1' and count < 137 and bigResponseEnable = "1")then
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
                        count := 0;
                        outgoing_pipe_write_req_t <= "0";
                    end if;
                    if((bigResponseEnable = "0" and count > 48))then
                        outgoing_pipe_write_req_t <= "0";
                        count := 0;
                        --count2 := 0;
                        flag <= '0';
                    end if;
                    --elsif(count2 = 137)then
                    --    outgoing_pipe_write_req_t <= "0";
                    --    count := 0;
                    --    flag <= '0';
                    --end if;
                --end if;
                outgoing_pipe_write_data <= dataIn;
                dataIn_t <= dataIn;
                --sdclk_t <= sdclk;
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