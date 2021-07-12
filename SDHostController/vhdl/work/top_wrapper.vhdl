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
use work.converter_global_package.all;


entity top_wrapper is
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


    end entity;

    architecture wrapper of top_wrapper is
        component ahir_system is  
        port ( 
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
    bigResponseEnable: out std_logic_vector(0 downto 0);
    busy: out std_logic_vector(0 downto 0);
    busyResponse: out std_logic_vector(0 downto 0);
    clkStable: in std_logic_vector(0 downto 0);
    commandTx_pipe_read_data: out std_logic_vector(0 downto 0);
    commandTx_pipe_read_req : in std_logic_vector(0 downto 0);
    commandTx_pipe_read_ack : out std_logic_vector(0 downto 0);
    frequencySelect: out std_logic_vector(19 downto 0);
    oe: out std_logic_vector(0 downto 0);
    peripheral_bridge_to_sdhc_request_pipe_write_data: in std_logic_vector(63 downto 0);
    peripheral_bridge_to_sdhc_request_pipe_write_req : in std_logic_vector(0 downto 0);
    peripheral_bridge_to_sdhc_request_pipe_write_ack : out std_logic_vector(0 downto 0);
    ready: in std_logic_vector(0 downto 0);
    ready8clocks: in std_logic_vector(0 downto 0);
    readyClockCountEnable: out std_logic_vector(0 downto 0);
    responseEnable: out std_logic_vector(0 downto 0);
    responseRx_pipe_write_data: in std_logic_vector(0 downto 0);
    responseRx_pipe_write_req : in std_logic_vector(0 downto 0);
    responseRx_pipe_write_ack : out std_logic_vector(0 downto 0);
    sdClkEnable: out std_logic_vector(0 downto 0);
    sdhc_to_peripheral_bridge_response_pipe_read_data: out std_logic_vector(31 downto 0);
    sdhc_to_peripheral_bridge_response_pipe_read_req : in std_logic_vector(0 downto 0);
    sdhc_to_peripheral_bridge_response_pipe_read_ack : out std_logic_vector(0 downto 0));
        
        end component;

        --signal clk: std_logic;
        --signal reset: std_logic;
        --DAT0Enable 
        signal DAT0Enable: std_logic_vector(0 downto 0);
        -- write to pipe DAT0Rx  
        signal DAT0Rx_pipe_write_data: std_logic_vector(0 downto 0);
        signal DAT0Rx_pipe_write_req : std_logic_vector(0 downto 0) := (others => '0');
        signal DAT0Rx_pipe_write_ack : std_logic_vector(0 downto 0);

        signal DAT0Rx_t_pipe_write_data: std_logic_vector(0 downto 0);
        signal DAT0Rx_t_pipe_write_req : std_logic_vector(0 downto 0) := (others => '0');
        signal DAT0Rx_t_pipe_write_ack : std_logic_vector(0 downto 0);
        -- read from pipe DAT0Tx
        signal DAT0Tx_pipe_read_data: std_logic_vector(0 downto 0);
        signal DAT0Tx_pipe_read_req : std_logic_vector(0 downto 0) := (others => '0');
        signal DAT0Tx_pipe_read_ack : std_logic_vector(0 downto 0);
        --DAT1Enable
        signal DAT1Enable: std_logic_vector(0 downto 0);
        -- write to pipe DAT1Rx
        signal DAT1Rx_pipe_write_data: std_logic_vector(0 downto 0);
        signal DAT1Rx_pipe_write_req : std_logic_vector(0 downto 0) := (others => '0');
        signal DAT1Rx_pipe_write_ack : std_logic_vector(0 downto 0);

        signal DAT1Rx_t_pipe_write_data: std_logic_vector(0 downto 0);
        signal DAT1Rx_t_pipe_write_req : std_logic_vector(0 downto 0) := (others => '0');
        signal DAT1Rx_t_pipe_write_ack : std_logic_vector(0 downto 0);
        -- read from pipe DAT1Tx
        signal DAT1Tx_pipe_read_data: std_logic_vector(0 downto 0);
        signal DAT1Tx_pipe_read_req : std_logic_vector(0 downto 0) := (others => '0');
        signal DAT1Tx_pipe_read_ack : std_logic_vector(0 downto 0);       
        --DAT2Enable
        signal DAT2Enable: std_logic_vector(0 downto 0);
        -- write to pipe DAT2Rx
        signal DAT2Rx_pipe_write_data: std_logic_vector(0 downto 0);
        signal DAT2Rx_pipe_write_req : std_logic_vector(0 downto 0) := (others => '0');
        signal DAT2Rx_pipe_write_ack : std_logic_vector(0 downto 0);

        signal DAT2Rx_t_pipe_write_data: std_logic_vector(0 downto 0);
        signal DAT2Rx_t_pipe_write_req : std_logic_vector(0 downto 0) := (others => '0');
        signal DAT2Rx_t_pipe_write_ack : std_logic_vector(0 downto 0);
        -- read from pipe DAT2Tx
        signal DAT2Tx_pipe_read_data: std_logic_vector(0 downto 0);
        signal DAT2Tx_pipe_read_req : std_logic_vector(0 downto 0) := (others => '0');
        signal DAT2Tx_pipe_read_ack : std_logic_vector(0 downto 0);
        --DAT3Enable
        signal DAT3Enable: std_logic_vector(0 downto 0);
        -- write to pipe DAT3Rx
        signal DAT3Rx_pipe_write_data: std_logic_vector(0 downto 0);
        signal DAT3Rx_pipe_write_req : std_logic_vector(0 downto 0) := (others => '0');
        signal DAT3Rx_pipe_write_ack : std_logic_vector(0 downto 0);

        signal DAT3Rx_t_pipe_write_data: std_logic_vector(0 downto 0);
        signal DAT3Rx_t_pipe_write_req : std_logic_vector(0 downto 0) := (others => '0');
        signal DAT3Rx_t_pipe_write_ack : std_logic_vector(0 downto 0);
        -- read from pipe DAT3Tx
        signal DAT3Tx_pipe_read_data: std_logic_vector(0 downto 0);
        signal DAT3Tx_pipe_read_req : std_logic_vector(0 downto 0) := (others => '0');
        signal DAT3Tx_pipe_read_ack : std_logic_vector(0 downto 0);
        -- read from pipe SDHC_to_IRC_INT
        --signal SDHC_to_IRC_INT: std_logic_vector(0 downto 0);
        -- busy signal
        signal busy: std_logic_vector(0 downto 0); 
        signal busyResponse: std_logic_vector(0 downto 0); 
        -- clock stable signal
        signal clkStable: std_logic_vector(0 downto 0);
        -- read from pipe commandTx
        signal commandTx_pipe_read_data: std_logic_vector(0 downto 0);
        signal commandTx_pipe_read_req : std_logic_vector(0 downto 0) := (others => '0');
        signal commandTx_pipe_read_ack : std_logic_vector(0 downto 0);
        -- frequency select signal
        signal frequencySelect: std_logic_vector(19 downto 0);
        -- ready signal
        signal ready : std_logic_vector(0 downto 0);
        signal ready8clocks: std_logic_vector(0 downto 0);
        signal readyClockCountEnable:  std_logic_vector(0 downto 0);
        -- output enable
        signal oe: std_logic_vector(0 downto 0);
        signal NOToe: std_logic_vector(0 downto 0);
        -- response Enable
        signal responseEnable: std_logic_vector(0 downto 0);
        signal bigResponseEnable: std_logic_vector(0 downto 0);
        -- write to pipe responseRx
        signal responseRx_pipe_write_data: std_logic_vector(0 downto 0);
        signal responseRx_pipe_write_req : std_logic_vector(0 downto 0) := (others => '0');
        signal responseRx_pipe_write_ack : std_logic_vector(0 downto 0);

        signal responseRx_t_pipe_write_data: std_logic_vector(0 downto 0);
        signal responseRx_t_pipe_write_req : std_logic_vector(0 downto 0) := (others => '0');
        signal responseRx_t_pipe_write_ack : std_logic_vector(0 downto 0);
        -- write to pipe peripheral_bridge_to_sdhc_request
        --signal peripheral_bridge_to_sdhc_request_pipe_write_data: std_logic_vector(63 downto 0);
        --signal peripheral_bridge_to_sdhc_request_pipe_write_req : std_logic_vector(0 downto 0) := (others => '0');
        --signal peripheral_bridge_to_sdhc_request_pipe_write_ack : std_logic_vector(0 downto 0);
        -- sdclk Enable
        signal sdClkEnable: std_logic_vector(0 downto 0);
        -- read from pipe sdhc_to_peripheral_bridge_response
        --signal sdhc_to_peripheral_bridge_response_pipe_read_data: std_logic_vector(31 downto 0);
        --signal sdhc_to_peripheral_bridge_response_pipe_read_req : std_logic_vector(0 downto 0) := (others => '0');
        --signal sdhc_to_peripheral_bridge_response_pipe_read_ack : std_logic_vector(0 downto 0);

        -- The clock controller
        component clock_controller is
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
        end component;

        signal sdclkSig : std_logic;
	--The data transmitter
        component transmitter is
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
        end component;
	--The receiver for response
        component receiver is
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
        end component;
	--The receiver for DAT0(busy signals included)
        component receiver_with_busy is
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
        end component;
	-- The receiver for rest DAT lines
        component receiver_data is
            port(
                clk : in std_logic;
                reset : in std_logic;
                sdclk : in std_logic;
                datasig: in std_logic_vector(0 downto 0);
                dataIn : in std_logic_vector(0 downto 0);
                outgoing_pipe_write_data: out std_logic_vector(0 downto 0);
                outgoing_pipe_write_req : out std_logic_vector(0 downto 0);
                outgoing_pipe_write_ack : in std_logic_vector(0 downto 0)
            );
        end component;
	--The module for bidirectional signals
        component bidirectional is
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
        end component;
        --Converts bitstream into FIFO data
        component converter is  
        port (-- 
            clk : in std_logic;
            reset : in std_logic;
            inp_pipe_write_data: in std_logic_vector(0 downto 0);
            inp_pipe_write_req : in std_logic_vector(0 downto 0);
            inp_pipe_write_ack : out std_logic_vector(0 downto 0);
            outp_pipe_read_data: out std_logic_vector(0 downto 0);
            outp_pipe_read_req : in std_logic_vector(0 downto 0);
            outp_pipe_read_ack : out std_logic_vector(0 downto 0)); -- 
        -- 
        end component; 

        signal commandTxSig: std_logic_vector(0 downto 0);
        signal responseRxSig: std_logic_vector(0 downto 0);
        signal DAT0TxSig : std_logic_vector(0 downto 0);
        signal DAT0RxSig : std_logic_vector(0 downto 0);
        signal DAT1TxSig : std_logic_vector(0 downto 0);
        signal DAT1RxSig : std_logic_vector(0 downto 0);
        signal DAT2TxSig : std_logic_vector(0 downto 0);
        signal DAT2RxSig : std_logic_vector(0 downto 0);
        signal DAT3TxSig : std_logic_vector(0 downto 0);
        signal DAT3RxSig : std_logic_vector(0 downto 0);
        signal o0: std_logic_vector(0 downto 0);
        signal o1: std_logic_vector(0 downto 0);
        signal o2: std_logic_vector(0 downto 0);
        signal o3: std_logic_vector(0 downto 0);


    begin
        SDCLK <= sdclkSig;
        NOToe <= not oe;
        ahir_system_instance: ahir_system --
        port map ( 
            clk => clk,
            reset => reset,
           -- DAT0Enable => DAT0Enable,
            DAT0Rx_pipe_write_data  => DAT0Rx_pipe_write_data, 
            DAT0Rx_pipe_write_req  => DAT0Rx_pipe_write_req, 
            DAT0Rx_pipe_write_ack  => DAT0Rx_pipe_write_ack,
            DAT0Tx_pipe_read_data  => DAT0Tx_pipe_read_data, 
            DAT0Tx_pipe_read_req  => DAT0Tx_pipe_read_req, 
            DAT0Tx_pipe_read_ack  => DAT0Tx_pipe_read_ack ,
            --DAT1Enable => DAT1Enable,
            DAT1Rx_pipe_write_data  => DAT1Rx_pipe_write_data, 
            DAT1Rx_pipe_write_req  => DAT1Rx_pipe_write_req, 
            DAT1Rx_pipe_write_ack  => DAT1Rx_pipe_write_ack,
            DAT1Tx_pipe_read_data  => DAT1Tx_pipe_read_data, 
            DAT1Tx_pipe_read_req  => DAT1Tx_pipe_read_req, 
            DAT1Tx_pipe_read_ack  => DAT1Tx_pipe_read_ack ,
            --DAT2Enable => DAT2Enable,
            DAT2Rx_pipe_write_data  => DAT2Rx_pipe_write_data, 
            DAT2Rx_pipe_write_req  => DAT2Rx_pipe_write_req, 
            DAT2Rx_pipe_write_ack  => DAT2Rx_pipe_write_ack,
            DAT2Tx_pipe_read_data  => DAT2Tx_pipe_read_data, 
            DAT2Tx_pipe_read_req  => DAT2Tx_pipe_read_req, 
            DAT2Tx_pipe_read_ack  => DAT2Tx_pipe_read_ack ,
           -- DAT3Enable => DAT3Enable,
            DAT3Rx_pipe_write_data  => DAT3Rx_pipe_write_data, 
            DAT3Rx_pipe_write_req  => DAT3Rx_pipe_write_req, 
            DAT3Rx_pipe_write_ack  => DAT3Rx_pipe_write_ack,
            DAT3Tx_pipe_read_data  => DAT3Tx_pipe_read_data, 
            DAT3Tx_pipe_read_req  => DAT3Tx_pipe_read_req, 
            DAT3Tx_pipe_read_ack  => DAT3Tx_pipe_read_ack ,
            SDHC_to_IRC_INT => SDHC_to_IRC_INT,
            bigResponseEnable => bigResponseEnable,
            busy => busy,
            busyResponse => busyResponse,
            clkStable => clkStable,
            commandTx_pipe_read_data  => commandTx_pipe_read_data, 
            commandTx_pipe_read_req  => commandTx_pipe_read_req, 
            commandTx_pipe_read_ack  => commandTx_pipe_read_ack ,
            frequencySelect => frequencySelect,
            sdhc_to_peripheral_bridge_response_pipe_read_data => sdhc_to_peripheral_bridge_response_pipe_read_data,
    	    sdhc_to_peripheral_bridge_response_pipe_read_req => sdhc_to_peripheral_bridge_response_pipe_read_req,
    	    sdhc_to_peripheral_bridge_response_pipe_read_ack => sdhc_to_peripheral_bridge_response_pipe_read_ack,
            oe => oe,
            peripheral_bridge_to_sdhc_request_pipe_write_data => peripheral_bridge_to_sdhc_request_pipe_write_data,
    	    peripheral_bridge_to_sdhc_request_pipe_write_req => peripheral_bridge_to_sdhc_request_pipe_write_req,
    	    peripheral_bridge_to_sdhc_request_pipe_write_ack => peripheral_bridge_to_sdhc_request_pipe_write_ack,
            ready => ready,
            ready8clocks => ready8clocks,
            readyClockCountEnable => readyClockCountEnable,
            responseEnable => responseEnable,
            responseRx_pipe_write_data  => responseRx_pipe_write_data, 
            responseRx_pipe_write_req  => responseRx_pipe_write_req, 
            responseRx_pipe_write_ack  => responseRx_pipe_write_ack,
            sdClkEnable => sdClkEnable);

        clock_control_instance : clock_controller --
        port map(
            clk => clk,
            reset => reset,
            sdclk => sdclkSig,
            enable => sdClkEnable,
            stable => clkStable,
            frequencySelect => frequencySelect,
            ready => ready,
            ready8clocks => ready8clocks,
            readyClockCountEnable => readyClockCountEnable);

        command_transmitter_instance : transmitter --
        port map(
            clk => clk,
            reset => reset,
            sdclk => sdclkSig,
            oe => oe, 
            incoming_pipe_read_data => commandTx_pipe_read_data,
            incoming_pipe_read_req => commandTx_pipe_read_req,
            incoming_pipe_read_ack => commandTx_pipe_read_ack,
            dataOut => commandTxSig);

        command_receiver_instance : receiver --
        port map(
            clk => clk,
            reset => reset,
            sdclk => sdclkSig, 
            datasig => oe,
            bigResponseEnable => bigResponseEnable,
            dataIn => responseRxSig,
            outgoing_pipe_write_data => responseRx_t_pipe_write_data,
            outgoing_pipe_write_req => responseRx_t_pipe_write_req,
            outgoing_pipe_write_ack => responseRx_t_pipe_write_ack);

        convert_inst_cmd : converter --
        port map(
            clk => clk,
            reset => reset,
            inp_pipe_write_data => responseRx_t_pipe_write_data,
            inp_pipe_write_req => responseRx_t_pipe_write_req,
            inp_pipe_write_ack => responseRx_t_pipe_write_ack,
            outp_pipe_read_data => responseRx_pipe_write_data,
            outp_pipe_read_req => responseRx_pipe_write_ack,
            outp_pipe_read_ack => responseRx_pipe_write_req);
        
        DAT0_transmitter_instance : transmitter --
        port map(
            clk => clk,
            reset => reset,
            sdclk => sdclkSig,
            oe => oe, 
            incoming_pipe_read_data => DAT0Tx_pipe_read_data,
            incoming_pipe_read_req => DAT0Tx_pipe_read_req,
            incoming_pipe_read_ack => DAT0Tx_pipe_read_ack,
            dataOut => DAT0TxSig);

        DAT0_receiver_instance : receiver_with_busy --
        port map(
            clk => clk,
            reset => reset,
            sdclk => sdclkSig,
            busy => busy, 
            busyResponse => busyResponse,
            datasig => oe,
            dataIn => DAT0RxSig,
            outgoing_pipe_write_data => DAT0Rx_t_pipe_write_data,
            outgoing_pipe_write_req => DAT0Rx_t_pipe_write_req,
            outgoing_pipe_write_ack => DAT0Rx_t_pipe_write_ack);

        convert_inst_0 : converter --
        port map(
            clk => clk,
            reset => reset,
            inp_pipe_write_data => DAT0Rx_t_pipe_write_data,
            inp_pipe_write_req => DAT0Rx_t_pipe_write_req,
            inp_pipe_write_ack => DAT0Rx_t_pipe_write_ack,
            outp_pipe_read_data => DAT0Rx_pipe_write_data,
            outp_pipe_read_req => DAT0Rx_pipe_write_ack,
            outp_pipe_read_ack => DAT0Rx_pipe_write_req);
        
        DAT1_transmitter_instance : transmitter --
        port map(
            clk => clk,
            reset => reset,
            sdclk => sdclkSig, 
            oe => oe,
            incoming_pipe_read_data => DAT1Tx_pipe_read_data,
            incoming_pipe_read_req => DAT1Tx_pipe_read_req,
            incoming_pipe_read_ack => DAT1Tx_pipe_read_ack,
            dataOut => DAT1TxSig);

        DAT1_receiver_instance : receiver_data --
        port map(
            clk => clk,
            reset => reset,
            sdclk => sdclkSig, 
            datasig => oe,
            dataIn => DAT1RxSig,
            outgoing_pipe_write_data => DAT1Rx_t_pipe_write_data,
            outgoing_pipe_write_req => DAT1Rx_t_pipe_write_req,
            outgoing_pipe_write_ack => DAT1Rx_t_pipe_write_ack);

        convert_inst_1 : converter --
        port map(
            clk => clk,
            reset => reset,
            inp_pipe_write_data => DAT1Rx_t_pipe_write_data,
            inp_pipe_write_req => DAT1Rx_t_pipe_write_req,
            inp_pipe_write_ack => DAT1Rx_t_pipe_write_ack,
            outp_pipe_read_data => DAT1Rx_pipe_write_data,
            outp_pipe_read_req => DAT1Rx_pipe_write_ack,
            outp_pipe_read_ack => DAT1Rx_pipe_write_req);
        
        DAT2_transmitter_instance : transmitter --
        port map(
            clk => clk,
            reset => reset,
            sdclk => sdclkSig, 
            oe => oe,
            incoming_pipe_read_data => DAT2Tx_pipe_read_data,
            incoming_pipe_read_req => DAT2Tx_pipe_read_req,
            incoming_pipe_read_ack => DAT2Tx_pipe_read_ack,
            dataOut => DAT2TxSig);

        DAT2_receiver_instance : receiver_data --
        port map(
            clk => clk,
            reset => reset,
            sdclk => sdclkSig, 
            datasig => oe,
            dataIn => DAT2RxSig,
            outgoing_pipe_write_data => DAT2Rx_t_pipe_write_data,
            outgoing_pipe_write_req => DAT2Rx_t_pipe_write_req,
            outgoing_pipe_write_ack => DAT2Rx_t_pipe_write_ack);

        convert_inst_2 : converter --
        port map(
            clk => clk,
            reset => reset,
            inp_pipe_write_data => DAT2Rx_t_pipe_write_data,
            inp_pipe_write_req => DAT2Rx_t_pipe_write_req,
            inp_pipe_write_ack => DAT2Rx_t_pipe_write_ack,
            outp_pipe_read_data => DAT2Rx_pipe_write_data,
            outp_pipe_read_req => DAT2Rx_pipe_write_ack,
            outp_pipe_read_ack => DAT2Rx_pipe_write_req);

        DAT3_transmitter_instance : transmitter --
        port map(
            clk => clk,
            reset => reset,
            sdclk => sdclkSig,
            oe => oe, 
            incoming_pipe_read_data => DAT3Tx_pipe_read_data,
            incoming_pipe_read_req => DAT3Tx_pipe_read_req,
            incoming_pipe_read_ack => DAT3Tx_pipe_read_ack,
            dataOut => DAT3TxSig);

        DAT3_receiver_instance : receiver_data --
        port map(
            clk => clk,
            reset => reset,
            sdclk => sdclkSig, 
            datasig => oe,
            dataIn => DAT3RxSig,
            outgoing_pipe_write_data => DAT3Rx_t_pipe_write_data,
            outgoing_pipe_write_req => DAT3Rx_t_pipe_write_req,
            outgoing_pipe_write_ack => DAT3Rx_t_pipe_write_ack);
        
        convert_inst_3 : converter --
        port map(
            clk => clk,
            reset => reset,
            inp_pipe_write_data => DAT3Rx_t_pipe_write_data,
            inp_pipe_write_req => DAT3Rx_t_pipe_write_req,
            inp_pipe_write_ack => DAT3Rx_t_pipe_write_ack,
            outp_pipe_read_data => DAT3Rx_pipe_write_data,
            outp_pipe_read_req => DAT3Rx_pipe_write_ack,
            outp_pipe_read_ack => DAT3Rx_pipe_write_req);
            
        CMD_instance: bidirectional --
        port map(
            --clk => clk,
            --reset => reset,
            sdclk => sdclkSig, 
            oe => oe,
            dataIn => commandTxSig,
            dataOut => responseRxSig,
            dataInOut => CMD,
            op_e => op_e);
        
        DAT0_instance: bidirectional --
        port map(
            --clk => clk,
            --reset => reset,
            sdclk => sdclkSig, 
            oe => oe,
            dataIn => DAT0TxSig,
            dataOut => DAT0RxSig,
            dataInOut => DAT0,
            op_e => o0);

        DAT1_instance: bidirectional --
        port map(
            --clk => clk,
            --reset => reset,
            sdclk => sdclkSig, 
            oe => oe,
            dataIn => DAT1TxSig,
            dataOut => DAT1RxSig,
            dataInOut => DAT1,
            op_e => o1);

        DAT2_instance: bidirectional --
        port map(
            --clk => clk,
            --reset => reset,
            sdclk => sdclkSig, 
            oe => oe,
            dataIn => DAT2TxSig,
            dataOut => DAT2RxSig,
            dataInOut => DAT2,
            op_e => o2);

        DAT3_instance: bidirectional --
        port map(
            --clk => clk,
            --reset => reset,
            sdclk => sdclkSig, 
            oe => oe,
            dataIn => DAT3TxSig,
            dataOut => DAT3RxSig,
            dataInOut => DAT3,
            op_e => o3);
        
    end wrapper;
    
