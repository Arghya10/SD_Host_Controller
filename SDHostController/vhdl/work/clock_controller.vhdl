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

entity clock_controller is
    port(
        clk : in std_logic;
        reset : in std_logic;
        sdclk : out std_logic;
        enable : in std_logic_vector(0 downto 0);
        stable : out std_logic_vector(0 downto 0);
        frequencySelect: in std_logic_vector(19 downto 0);
        ready : out std_logic_vector(0 downto 0);
        ready8clocks : out std_logic_vector(0 downto 0);
        readyClockCountEnable : in std_logic_vector(0 downto 0)
    );
end entity;

architecture rtl of clock_controller is

    signal r_clk_counter        : unsigned(9 downto 0);
    signal r_clk_divider        : unsigned(19 downto 0);
    signal r_clk_divider_half   : unsigned(19 downto 0);
    signal tmp : std_logic := '0';
    signal tmp_t : std_logic := '0';
    signal stable_sig : std_logic_vector(0 downto 0):= "0";
    signal ready_sig : std_logic_vector(0 downto 0):= "0";
    signal ready8clocks_sig : std_logic_vector(0 downto 0):= "1";
    signal count_stable : integer := 0;
    signal count_8clocks : integer := 0;

    begin
    
    process(reset,clk)
    begin

        ready <= ready_sig;
        ready8clocks <= ready8clocks_sig; 
        if(clk'event and clk = '1') then
            if(reset='1') then
                r_clk_counter       <= (others=>'0');
                r_clk_divider       <= (others=>'0');
                r_clk_divider_half  <= (others=>'0');
                tmp               <= '0';
            else
                r_clk_divider       <= unsigned(frequencySelect)-1;
                r_clk_divider_half  <= unsigned('0'&frequencySelect(19 downto 1)); -- half
                if(r_clk_counter < r_clk_divider_half) then 
                    r_clk_counter   <= r_clk_counter + 1;
                    tmp           <= '0';
                elsif(r_clk_counter = r_clk_divider) then
                    r_clk_counter   <= (others=>'0');
                    tmp           <= '1';
                    stable_sig <= "1";
                else
                    r_clk_counter   <= r_clk_counter + 1;
                    tmp           <= '1';
                end if;
            end if;
            if(enable = "1")then
                sdclk <= tmp;
                if((tmp = '0' and tmp_t = '1') or (tmp = '1' and tmp_t = '0') )then
                    count_stable <= count_stable + 1 ;
                    if(readyClockCountEnable = "1")then
                        count_8clocks <= count_8clocks + 1;
                    else
                        count_8clocks <= 0;
                        ready8clocks_sig <= "0";
                    end if;
                end if;
            else
                sdclk <= '0';
            end if;
            if(count_stable = 200)then
                ready_sig <= "1";
            end if;
            if(count_8clocks = 130)then
                ready8clocks_sig <= "1";
            end if;
            stable <= stable_sig;
            tmp_t <= tmp;
        end if;
    end process;
    
end rtl;