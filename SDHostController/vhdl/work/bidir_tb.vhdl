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
--use work.converter_global_package.all;

entity bidir is
    port(
        clk: in std_logic;
        reset: in std_logic;
        sdclk: in std_logic;
        dummy: inout std_logic_vector(0 downto 0);
        op_e : in std_logic_vector(0 downto 0);
        dataout : out std_logic_vector(0 downto 0):=(others => '1');
        datain : in std_logic_vector(0 downto 0));
end entity;

architecture rch of bidir is
    signal ope_t: std_logic_vector(0 downto 0);
    begin
        process(op_e,dummy,sdclk,datain)
        begin
            if(sdclk'event and sdclk = '0')then
            if( ope_t = "1") then
                dataout <= dummy;
                dummy <= "Z"; 
            else
                dummy <= datain; 
            end if;
            ope_t <= op_e;
            end if;
        end process;
end rch;
