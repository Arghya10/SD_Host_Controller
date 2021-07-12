library std;
use std.standard.all;
library ieee;
use ieee.std_logic_1164.all;
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

entity bidirectional is
    port(
        --clk : in std_logic;
        --reset : in std_logic;
        sdclk : in std_logic;
        oe : in std_logic_vector(0 downto 0);
        dataIn : in std_logic_vector(0 downto 0);
        dataOut : out std_logic_vector(0 downto 0);
        dataInOut : inout std_logic_vector(0 downto 0);
        op_e : out std_logic_vector(0 downto 0)
    );
end entity;

architecture rch of bidirectional is
    signal oe_t : std_logic_vector(0 downto 0):=(others => '0');
    signal oe_t2 : std_logic_vector(0 downto 0):=(others => '0');
    signal temp : std_logic_vector(0 downto 0):= (others => 'Z');
    signal sdclk_t: std_logic:='0';
    begin
        process(oe,dataIn,sdclk)
        begin
        --if(clk'event and clk ='1')then
            if(sdclk'event and sdclk = '1')then
            if( oe_t = "1") then
                temp <= dataIn;  
            else
                --dataOut <= dataInOut;
                temp <= "Z";
            end if;
            oe_t <= oe;
            oe_t2 <= oe_t;
            end if;
            sdclk_t <= sdclk;
         --end if;
        end process; 
        op_e <= oe_t;
        dataInOut <= temp when oe_t2 = "1" else "Z" ;
        dataOut <= dataInOut; 
    end rch;