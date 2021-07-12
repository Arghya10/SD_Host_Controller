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

entity clock is
    port(
        clk : in std_logic;
        reset : in std_logic;
        sdclk : out std_logic;
        enable : in std_logic_vector(0 downto 0);
        stable : out std_logic_vector(0 downto 0);
        frequencySelect: in std_logic_vector(19 downto 0);
        ready : out std_logic_vector(0 downto 0)
    );
end entity;

architecture rch of clock is
    signal tmp : std_logic := '0';
    --signal clock_count : integer := 1;
    signal stable_sig : std_logic_vector(0 downto 0):= "0";
    signal ready_sig : std_logic_vector(0 downto 0):= "0";
    signal count: integer;
    signal count_stable: integer:= 0;
    begin
        count <= to_integer(unsigned(frequencySelect));
        ready <= ready_sig;
        process(clk,reset)
        variable clock_count: integer:= 1;
        begin
            if (clk'event and clk = '1') then
                if(reset = '1') then
                    clock_count := 1;
                    tmp <= '0';
                else
                    clock_count := clock_count +1;
                    if(count = 1)then
                        tmp <= clk;
                    elsif(clock_count = count) then
                        tmp <= NOT tmp;
                        clock_count := 1;
                        stable_sig <= "1";
                        count_stable <= count_stable + 1;
                    elsif(clock_count > count)then
                        clock_count := 1;
                        tmp <= '0';
                    end if;
                end if;
                if(enable = "1")then
                    sdclk <= tmp;
                else
                    sdclk <= '0';
                end if;
                if(count_stable = 200)then
                    ready_sig <= "1";
                end if;
                stable <= stable_sig;
            end if;
        end process;
    end rch;
