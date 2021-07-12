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

entity tb_pipe is
    port(
        clk : in std_logic;
        reset : in std_logic;
        sdclk : in std_logic;
        dataout : in std_logic_vector(0 downto 0);
        datain : out std_logic_vector(0 downto 0);
        out_e : in std_logic_vector(0 downto 0);
        dummyRx_pipe_write_data: in std_logic_vector(0 downto 0);
        dummyRx_pipe_write_req : in std_logic_vector(0 downto 0);
        dummyRx_pipe_write_ack : out std_logic_vector(0 downto 0);
        dummyTx_pipe_read_data: out std_logic_vector(0 downto 0);
        dummyTx_pipe_read_req : in std_logic_vector(0 downto 0);
        dummyTx_pipe_read_ack : out std_logic_vector(0 downto 0));
end entity;

architecture rch of tb_pipe is
    signal dataout_t: std_logic_vector(0 downto 0);
    --signal datain: std_logic_vector(0 downto 0):=(others => 'Z');
    signal dummyTx_pipe_read_ack_t:std_logic_vector(0 downto 0):=(others => '0');
    signal dummyRx_pipe_write_ack_t:std_logic_vector(0 downto 0):=(others => '0');
    signal flag: std_logic:= '0';
    signal out_e_t : std_logic_vector(0 downto 0);
    signal out_e_t2 : std_logic_vector(0 downto 0);

    begin
        process(clk,reset,sdclk,dummyTx_pipe_read_req)  
        begin
            
            if (sdclk'event and sdclk = '0') then
                if (reset = '1')then
                    dummyTx_pipe_read_ack_t <= "0";
                else
                    if(out_e_t2 = "1")then
                        if(dataout = "0" and dataout_t = "1" and flag = '0')then
                            if(dummyTx_pipe_read_req = "1")then
                                dummyTx_pipe_read_ack_t <= "1";
                                flag <= '1';
                            elsif (dummyTx_pipe_read_req = "0") then
                                dummyTx_pipe_read_ack_t <= "0";
                            end if;
                        elsif(flag = '1')then
                            if(dummyTx_pipe_read_req = "1")then
                                dummyTx_pipe_read_ack_t <= "1";
                                flag <= '1';
                            elsif (dummyTx_pipe_read_req = "0") then
                                dummyTx_pipe_read_ack_t <= "0";
                            end if;
                        else
                            dummyTx_pipe_read_ack_t <= "0";
                        end if;
                    else
                        flag <= '0';
                        dummyTx_pipe_read_ack_t <= "0";
                    end if;
                end if;
                dummyTx_pipe_read_data <= dataout;
                dataout_t <= dataout;
                out_e_t <= out_e;
                out_e_t2 <= out_e_t;
            end if;
            if(clk'event and clk ='1')then
                if(dummyTx_pipe_read_ack_t = "1")then
                    dummyTx_pipe_read_ack_t <= "0";
                end if;
            end if;
        end process;

        process(clk,reset)
        begin
            if(clk'event and clk = '0')then
                if (reset = '1')then
                    dummyTx_pipe_read_ack <= "0";
                    dummyRx_pipe_write_ack <= "0";
                else
                    dummyTx_pipe_read_ack <= dummyTx_pipe_read_ack_t;
                    dummyRx_pipe_write_ack <= dummyRx_pipe_write_ack_t;
                end if;
            end if;
        end process;

        process(clk,reset,sdclk,dummyRx_pipe_write_req)
        begin
            if (sdclk'event and sdclk = '0') then
                if (reset = '1')then
                    dummyRx_pipe_write_ack_t <= "0";
                    datain <= "Z";
                else
                    if(dummyRx_pipe_write_req = "1" and out_e = "0") then
                        dummyRx_pipe_write_ack_t <= "1";
                        datain <= dummyRx_pipe_write_data;
                    elsif (dummyRx_pipe_write_req = "0") then
                        dummyRx_pipe_write_ack_t <= "0";
                        datain <= "Z";
                    end if;
                end if;
            elsif (clk'event and clk = '1' ) then
                dummyRx_pipe_write_ack_t <= "0";
            end if ;
        end process;
    end rch;

