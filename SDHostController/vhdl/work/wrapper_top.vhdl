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

entity wrapper_top is  
  port (-- 
    clk : in std_logic;
    reset : in std_logic;
    DAT0Rx_pipe_write_data: in std_logic_vector(0 downto 0);
    DAT0Rx_pipe_write_req : in std_logic_vector(0 downto 0);
    DAT0Rx_pipe_write_ack : out std_logic_vector(0 downto 0);
    DAT0Tx_pipe_read_data: out std_logic_vector(0 downto 0);
    DAT0Tx_pipe_read_req : in std_logic_vector(0 downto 0);
    DAT0Tx_pipe_read_ack : out std_logic_vector(0 downto 0);
    DAT1Rx_pipe_write_data: in std_logic_vector(0 downto 0);
    DAT1Rx_pipe_write_req : in std_logic_vector(0 downto 0);
    DAT1Rx_pipe_write_ack : out std_logic_vector(0 downto 0);
    DAT1Tx_pipe_read_data: out std_logic_vector(0 downto 0);
    DAT1Tx_pipe_read_req : in std_logic_vector(0 downto 0);
    DAT1Tx_pipe_read_ack : out std_logic_vector(0 downto 0);
    DAT2Rx_pipe_write_data: in std_logic_vector(0 downto 0);
    DAT2Rx_pipe_write_req : in std_logic_vector(0 downto 0);
    DAT2Rx_pipe_write_ack : out std_logic_vector(0 downto 0);
    DAT2Tx_pipe_read_data: out std_logic_vector(0 downto 0);
    DAT2Tx_pipe_read_req : in std_logic_vector(0 downto 0);
    DAT2Tx_pipe_read_ack : out std_logic_vector(0 downto 0);
    DAT3Rx_pipe_write_data: in std_logic_vector(0 downto 0);
    DAT3Rx_pipe_write_req : in std_logic_vector(0 downto 0);
    DAT3Rx_pipe_write_ack : out std_logic_vector(0 downto 0);
    DAT3Tx_pipe_read_data: out std_logic_vector(0 downto 0);
    DAT3Tx_pipe_read_req : in std_logic_vector(0 downto 0);
    DAT3Tx_pipe_read_ack : out std_logic_vector(0 downto 0);
    SDHC_to_IRC_INT: out std_logic_vector(0 downto 0);
    commandTx_pipe_read_data: out std_logic_vector(0 downto 0);
    commandTx_pipe_read_req : in std_logic_vector(0 downto 0);
    commandTx_pipe_read_ack : out std_logic_vector(0 downto 0);
    peripheral_bridge_to_sdhc_request_pipe_write_data: in std_logic_vector(63 downto 0);
    peripheral_bridge_to_sdhc_request_pipe_write_req : in std_logic_vector(0 downto 0);
    peripheral_bridge_to_sdhc_request_pipe_write_ack : out std_logic_vector(0 downto 0);
    responseRx_pipe_write_data: in std_logic_vector(0 downto 0);
    responseRx_pipe_write_req : in std_logic_vector(0 downto 0);
    responseRx_pipe_write_ack : out std_logic_vector(0 downto 0);
    sdhc_to_peripheral_bridge_response_pipe_read_data: out std_logic_vector(31 downto 0);
    sdhc_to_peripheral_bridge_response_pipe_read_req : in std_logic_vector(0 downto 0);
    sdhc_to_peripheral_bridge_response_pipe_read_ack : out std_logic_vector(0 downto 0));
end entity;

architecture rch of wrapper_top is
    component top_wrapper is
        port(
            clk : in std_logic;
            reset : in std_logic;
            SDCLK : out std_logic;
    
            CMD : inout std_logic_vector(0 downto 0);
    
            DAT0 : inout std_logic_vector(0 downto 0);
            DAT1 : inout std_logic_vector(0 downto 0);
            DAT2 : inout std_logic_vector(0 downto 0);
            DAT3 : inout std_logic_vector(0 downto 0);
    
            op_e : out std_logic_vector(0 downto 0);
            
            peripheral_bridge_to_sdhc_request_pipe_write_data: in std_logic_vector(63 downto 0);
            peripheral_bridge_to_sdhc_request_pipe_write_req : in std_logic_vector(0 downto 0);
            peripheral_bridge_to_sdhc_request_pipe_write_ack : out std_logic_vector(0 downto 0);
            
            sdhc_to_peripheral_bridge_response_pipe_read_data: out std_logic_vector(31 downto 0);
            sdhc_to_peripheral_bridge_response_pipe_read_req : in std_logic_vector(0 downto 0);
            sdhc_to_peripheral_bridge_response_pipe_read_ack : out std_logic_vector(0 downto 0); 
    
            SDHC_to_IRC_INT: out std_logic_vector(0 downto 0));
    
    
        end component;

        signal sdclk: std_logic;
        signal CMD: std_logic_vector(0 downto 0);
        signal DAT0: std_logic_vector(0 downto 0);
        signal DAT1: std_logic_vector(0 downto 0);
        signal DAT2: std_logic_vector(0 downto 0);
        signal DAT3: std_logic_vector(0 downto 0);
        signal op_e: std_logic_vector(0 downto 0);
	-- Module for converting bidirectional signals
        component bidir is
            port(
                clk: in std_logic;
                reset: in std_logic;
                sdclk: in std_logic;
                dummy: inout std_logic_vector(0 downto 0);
                op_e : in std_logic_vector(0 downto 0);
                dataout : out std_logic_vector(0 downto 0):=(others => '1');
                datain : in std_logic_vector(0 downto 0));
        end component;
	-- Takes the bitstream input and connects to the output FIFOs
        component tb_pipe is
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
        end component;

        signal commandTx: std_logic_vector(0 downto 0);
        signal responseRx: std_logic_vector(0 downto 0);
        signal DAT0Tx: std_logic_vector(0 downto 0);
        signal DAT0Rx: std_logic_vector(0 downto 0);
        signal DAT1Tx: std_logic_vector(0 downto 0);
        signal DAT1Rx: std_logic_vector(0 downto 0);
        signal DAT2Tx: std_logic_vector(0 downto 0);
        signal DAT2Rx: std_logic_vector(0 downto 0);
        signal DAT3Tx: std_logic_vector(0 downto 0);
        signal DAT3Rx: std_logic_vector(0 downto 0);

        begin
            inst_wrapper: top_wrapper --
            port map(
                clk => clk,
                reset => reset,
                SDCLK => sdclk,
                CMD => CMD,
                DAT0 => DAT0,
                DAT1 => DAT1,
                DAT2 => DAT2,
                DAT3 => DAT3,
                op_e => op_e,
                peripheral_bridge_to_sdhc_request_pipe_write_data => peripheral_bridge_to_sdhc_request_pipe_write_data,
                peripheral_bridge_to_sdhc_request_pipe_write_req => peripheral_bridge_to_sdhc_request_pipe_write_req,
                peripheral_bridge_to_sdhc_request_pipe_write_ack => peripheral_bridge_to_sdhc_request_pipe_write_ack,
                sdhc_to_peripheral_bridge_response_pipe_read_data => sdhc_to_peripheral_bridge_response_pipe_read_data,
                sdhc_to_peripheral_bridge_response_pipe_read_req => sdhc_to_peripheral_bridge_response_pipe_read_req,
                sdhc_to_peripheral_bridge_response_pipe_read_ack => sdhc_to_peripheral_bridge_response_pipe_read_ack,
                SDHC_to_IRC_INT => SDHC_to_IRC_INT);

            inst_bidir_comm: bidir --
            port map(
                clk => clk,
                reset => reset,
                sdclk => sdclk,
                dummy => CMD,
                op_e => op_e,
                dataout => commandTx,
                datain => responseRx);

            inst_bidir_dat0: bidir --
            port map(
                clk => clk,
                reset => reset,
                sdclk => sdclk,
                dummy => DAT0,
                op_e => op_e,
                dataout => DAT0Tx,
                datain => DAT0Rx);

            inst_bidir_dat1: bidir --
            port map(
                clk => clk,
                reset => reset,
                sdclk => sdclk,
                dummy => DAT1,
                op_e => op_e,
                dataout => DAT1Tx,
                datain => DAT1Rx);
            
            inst_bidir_dat2: bidir --
            port map(
                clk => clk,
                reset => reset,
                sdclk => sdclk,
                dummy => DAT2,
                op_e => op_e,
                dataout => DAT2Tx,
                datain => DAT2Rx);

            inst_bidir_dat3: bidir --
            port map(
                clk => clk,
                reset => reset,
                sdclk => sdclk,
                dummy => DAT3,
                op_e => op_e,
                dataout => DAT3Tx,
                datain => DAT3Rx);
            
            inst_pipe_comm: tb_pipe --
            port map(
                clk => clk,
                reset => reset,
                sdclk => sdclk,
                dataout => commandTx,
                datain => responseRx,
                out_e => op_e,
                dummyRx_pipe_write_data => responseRx_pipe_write_data,
                dummyRx_pipe_write_req => responseRx_pipe_write_req,
                dummyRx_pipe_write_ack => responseRx_pipe_write_ack,
                dummyTx_pipe_read_data => commandTx_pipe_read_data,
                dummyTx_pipe_read_req => commandTx_pipe_read_req,
                dummyTx_pipe_read_ack => commandTx_pipe_read_ack);

            inst_pipe_dat0: tb_pipe --
            port map(
                clk => clk,
                reset => reset,
                sdclk => sdclk,
                dataout => DAT0Tx,
                datain => DAT0Rx,
                out_e => op_e,
                dummyRx_pipe_write_data => DAT0Rx_pipe_write_data,
                dummyRx_pipe_write_req => DAT0Rx_pipe_write_req,
                dummyRx_pipe_write_ack => DAT0Rx_pipe_write_ack,
                dummyTx_pipe_read_data => DAT0Tx_pipe_read_data,
                dummyTx_pipe_read_req => DAT0Tx_pipe_read_req,
                dummyTx_pipe_read_ack => DAT0Tx_pipe_read_ack);
            
            inst_pipe_dat1: tb_pipe --
            port map(
                clk => clk,
                reset => reset,
                sdclk => sdclk,
                dataout => DAT1Tx,
                datain => DAT1Rx,
                out_e => op_e,
                dummyRx_pipe_write_data => DAT1Rx_pipe_write_data,
                dummyRx_pipe_write_req => DAT1Rx_pipe_write_req,
                dummyRx_pipe_write_ack => DAT1Rx_pipe_write_ack,
                dummyTx_pipe_read_data => DAT1Tx_pipe_read_data,
                dummyTx_pipe_read_req => DAT1Tx_pipe_read_req,
                dummyTx_pipe_read_ack => DAT1Tx_pipe_read_ack);

            inst_pipe_dat2: tb_pipe --
            port map(
                clk => clk,
                reset => reset,
                sdclk => sdclk,
                dataout => DAT2Tx,
                datain => DAT2Rx,
                out_e => op_e,
                dummyRx_pipe_write_data => DAT2Rx_pipe_write_data,
                dummyRx_pipe_write_req => DAT2Rx_pipe_write_req,
                dummyRx_pipe_write_ack => DAT2Rx_pipe_write_ack,
                dummyTx_pipe_read_data => DAT2Tx_pipe_read_data,
                dummyTx_pipe_read_req => DAT2Tx_pipe_read_req,
                dummyTx_pipe_read_ack => DAT2Tx_pipe_read_ack);

            inst_pipe_dat3: tb_pipe --
            port map(
                clk => clk,
                reset => reset,
                sdclk => sdclk,
                dataout => DAT3Tx,
                datain => DAT3Rx,
                out_e => op_e,
                dummyRx_pipe_write_data => DAT3Rx_pipe_write_data,
                dummyRx_pipe_write_req => DAT3Rx_pipe_write_req,
                dummyRx_pipe_write_ack => DAT3Rx_pipe_write_ack,
                dummyTx_pipe_read_data => DAT3Tx_pipe_read_data,
                dummyTx_pipe_read_req => DAT3Tx_pipe_read_req,
                dummyTx_pipe_read_ack => DAT3Tx_pipe_read_ack);
        end rch;
