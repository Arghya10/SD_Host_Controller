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

entity transmitter is
    port(
        clk : in std_logic;
        reset : in std_logic;
        sdclk : in std_logic;
        oe : in std_logic_vector(0 downto 0);
        incoming_pipe_read_data: in std_logic_vector(0 downto 0);
        incoming_pipe_read_req : out std_logic_vector(0 downto 0);
        incoming_pipe_read_ack : in std_logic_vector(0 downto 0);
        dataOut : out std_logic_vector(0 downto 0)
    );
end entity;

architecture rch of transmitter is
    signal oe_t : std_logic_vector(0 downto 0);
    signal sdclk_t: std_logic:='0';
    signal try : std_logic:='0';
    signal incoming_pipe_read_req_t :std_logic_vector(0 downto 0) := (others => '0');
    begin
        process(clk,reset,sdclk,incoming_pipe_read_ack)
        begin
            if (clk'event and clk = '1') then
                if (reset = '1')then
                    incoming_pipe_read_req_t <= "0";
                            
                elsif (sdclk = '0' and sdclk_t = '1') then
                    --if (reset = '1')then
                      --  incoming_pipe_read_req_t <= "0";
                        --dataOut <= "1";
                    
                        if(incoming_pipe_read_ack = "1" and oe_t = "1") then
                            incoming_pipe_read_req_t <= "1";
                            try <= '1';
                            dataOut <= incoming_pipe_read_data;
                        elsif (incoming_pipe_read_ack = "0") then
                            incoming_pipe_read_req_t <= "0";
                            dataOut <= "1";
                        end if;
                   end if;
           -- end if;
                sdclk_t <= sdclk;
            --if (clk'event and clk = '1' and try = '1') then
                if(try = '1')then
                    incoming_pipe_read_req_t <= "0";
                    try <= '0';
                end if;
            end if;
        end process;

        process(clk,reset)
        begin
            if(clk'event and clk = '0')then
                if (reset = '1')then
                    incoming_pipe_read_req <= "0";
                else
                    incoming_pipe_read_req <= incoming_pipe_read_req_t;
                end if;
            end if;
        end process;

        process(sdclk,reset,oe)
        begin
            if(sdclk = '1' and sdclk_t = '0')then
                oe_t <= oe;
            end if;
        end process;
    end architecture;