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
library GhdlLink;
use GhdlLink.Utility_Package.all;
use GhdlLink.Vhpi_Foreign.all;
entity ahir_system_Test_Bench is -- 
  -- 
end entity;
architecture VhpiLink of ahir_system_Test_Bench is -- 
  component ahir_system is -- 
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
      sdhc_to_peripheral_bridge_response_pipe_read_ack : out std_logic_vector(0 downto 0)); -- 
    -- 
  end component;
  signal clk: std_logic := '0';
  signal reset: std_logic := '1';
  signal sdhc_daemon_tag_in: std_logic_vector(1 downto 0);
  signal sdhc_daemon_tag_out: std_logic_vector(1 downto 0);
  signal sdhc_daemon_start_req : std_logic := '0';
  signal sdhc_daemon_start_ack : std_logic := '0';
  signal sdhc_daemon_fin_req   : std_logic := '0';
  signal sdhc_daemon_fin_ack   : std_logic := '0';
  -- write to pipe DAT0Rx
  signal DAT0Rx_pipe_write_data: std_logic_vector(0 downto 0);
  signal DAT0Rx_pipe_write_req : std_logic_vector(0 downto 0) := (others => '0');
  signal DAT0Rx_pipe_write_ack : std_logic_vector(0 downto 0);
  -- read from pipe DAT0Tx
  signal DAT0Tx_pipe_read_data: std_logic_vector(0 downto 0);
  signal DAT0Tx_pipe_read_req : std_logic_vector(0 downto 0) := (others => '0');
  signal DAT0Tx_pipe_read_ack : std_logic_vector(0 downto 0);
  -- write to pipe DAT1Rx
  signal DAT1Rx_pipe_write_data: std_logic_vector(0 downto 0);
  signal DAT1Rx_pipe_write_req : std_logic_vector(0 downto 0) := (others => '0');
  signal DAT1Rx_pipe_write_ack : std_logic_vector(0 downto 0);
  -- read from pipe DAT1Tx
  signal DAT1Tx_pipe_read_data: std_logic_vector(0 downto 0);
  signal DAT1Tx_pipe_read_req : std_logic_vector(0 downto 0) := (others => '0');
  signal DAT1Tx_pipe_read_ack : std_logic_vector(0 downto 0);
  -- write to pipe DAT2Rx
  signal DAT2Rx_pipe_write_data: std_logic_vector(0 downto 0);
  signal DAT2Rx_pipe_write_req : std_logic_vector(0 downto 0) := (others => '0');
  signal DAT2Rx_pipe_write_ack : std_logic_vector(0 downto 0);
  -- read from pipe DAT2Tx
  signal DAT2Tx_pipe_read_data: std_logic_vector(0 downto 0);
  signal DAT2Tx_pipe_read_req : std_logic_vector(0 downto 0) := (others => '0');
  signal DAT2Tx_pipe_read_ack : std_logic_vector(0 downto 0);
  -- write to pipe DAT3Rx
  signal DAT3Rx_pipe_write_data: std_logic_vector(0 downto 0);
  signal DAT3Rx_pipe_write_req : std_logic_vector(0 downto 0) := (others => '0');
  signal DAT3Rx_pipe_write_ack : std_logic_vector(0 downto 0);
  -- read from pipe DAT3Tx
  signal DAT3Tx_pipe_read_data: std_logic_vector(0 downto 0);
  signal DAT3Tx_pipe_read_req : std_logic_vector(0 downto 0) := (others => '0');
  signal DAT3Tx_pipe_read_ack : std_logic_vector(0 downto 0);
  -- read from pipe SDHC_to_IRC_INT
  signal SDHC_to_IRC_INT_pipe_read_data: std_logic_vector(0 downto 0);
  signal SDHC_to_IRC_INT_pipe_read_req : std_logic_vector(0 downto 0) := (others => '0');
  signal SDHC_to_IRC_INT_pipe_read_ack : std_logic_vector(0 downto 0);
  signal SDHC_to_IRC_INT: std_logic_vector(0 downto 0);
  -- read from pipe bigResponseEnable
  signal bigResponseEnable_pipe_read_data: std_logic_vector(0 downto 0);
  signal bigResponseEnable_pipe_read_req : std_logic_vector(0 downto 0) := (others => '0');
  signal bigResponseEnable_pipe_read_ack : std_logic_vector(0 downto 0);
  signal bigResponseEnable: std_logic_vector(0 downto 0);
  -- read from pipe busy
  signal busy_pipe_read_data: std_logic_vector(0 downto 0);
  signal busy_pipe_read_req : std_logic_vector(0 downto 0) := (others => '0');
  signal busy_pipe_read_ack : std_logic_vector(0 downto 0);
  signal busy: std_logic_vector(0 downto 0);
  -- read from pipe busyResponse
  signal busyResponse_pipe_read_data: std_logic_vector(0 downto 0);
  signal busyResponse_pipe_read_req : std_logic_vector(0 downto 0) := (others => '0');
  signal busyResponse_pipe_read_ack : std_logic_vector(0 downto 0);
  signal busyResponse: std_logic_vector(0 downto 0);
  -- write to pipe clkStable
  signal clkStable_pipe_write_data: std_logic_vector(0 downto 0);
  signal clkStable_pipe_write_req : std_logic_vector(0 downto 0) := (others => '0');
  signal clkStable_pipe_write_ack : std_logic_vector(0 downto 0);
  signal clkStable: std_logic_vector(0 downto 0);
  -- read from pipe commandTx
  signal commandTx_pipe_read_data: std_logic_vector(0 downto 0);
  signal commandTx_pipe_read_req : std_logic_vector(0 downto 0) := (others => '0');
  signal commandTx_pipe_read_ack : std_logic_vector(0 downto 0);
  -- read from pipe frequencySelect
  signal frequencySelect_pipe_read_data: std_logic_vector(19 downto 0);
  signal frequencySelect_pipe_read_req : std_logic_vector(0 downto 0) := (others => '0');
  signal frequencySelect_pipe_read_ack : std_logic_vector(0 downto 0);
  signal frequencySelect: std_logic_vector(19 downto 0);
  -- read from pipe oe
  signal oe_pipe_read_data: std_logic_vector(0 downto 0);
  signal oe_pipe_read_req : std_logic_vector(0 downto 0) := (others => '0');
  signal oe_pipe_read_ack : std_logic_vector(0 downto 0);
  signal oe: std_logic_vector(0 downto 0);
  -- write to pipe peripheral_bridge_to_sdhc_request
  signal peripheral_bridge_to_sdhc_request_pipe_write_data: std_logic_vector(63 downto 0);
  signal peripheral_bridge_to_sdhc_request_pipe_write_req : std_logic_vector(0 downto 0) := (others => '0');
  signal peripheral_bridge_to_sdhc_request_pipe_write_ack : std_logic_vector(0 downto 0);
  -- write to pipe ready
  signal ready_pipe_write_data: std_logic_vector(0 downto 0);
  signal ready_pipe_write_req : std_logic_vector(0 downto 0) := (others => '0');
  signal ready_pipe_write_ack : std_logic_vector(0 downto 0);
  signal ready: std_logic_vector(0 downto 0);
  -- write to pipe ready8clocks
  signal ready8clocks_pipe_write_data: std_logic_vector(0 downto 0);
  signal ready8clocks_pipe_write_req : std_logic_vector(0 downto 0) := (others => '0');
  signal ready8clocks_pipe_write_ack : std_logic_vector(0 downto 0);
  signal ready8clocks: std_logic_vector(0 downto 0);
  -- read from pipe readyClockCountEnable
  signal readyClockCountEnable_pipe_read_data: std_logic_vector(0 downto 0);
  signal readyClockCountEnable_pipe_read_req : std_logic_vector(0 downto 0) := (others => '0');
  signal readyClockCountEnable_pipe_read_ack : std_logic_vector(0 downto 0);
  signal readyClockCountEnable: std_logic_vector(0 downto 0);
  -- read from pipe responseEnable
  signal responseEnable_pipe_read_data: std_logic_vector(0 downto 0);
  signal responseEnable_pipe_read_req : std_logic_vector(0 downto 0) := (others => '0');
  signal responseEnable_pipe_read_ack : std_logic_vector(0 downto 0);
  signal responseEnable: std_logic_vector(0 downto 0);
  -- write to pipe responseRx
  signal responseRx_pipe_write_data: std_logic_vector(0 downto 0);
  signal responseRx_pipe_write_req : std_logic_vector(0 downto 0) := (others => '0');
  signal responseRx_pipe_write_ack : std_logic_vector(0 downto 0);
  -- read from pipe sdClkEnable
  signal sdClkEnable_pipe_read_data: std_logic_vector(0 downto 0);
  signal sdClkEnable_pipe_read_req : std_logic_vector(0 downto 0) := (others => '0');
  signal sdClkEnable_pipe_read_ack : std_logic_vector(0 downto 0);
  signal sdClkEnable: std_logic_vector(0 downto 0);
  -- read from pipe sdhc_to_peripheral_bridge_response
  signal sdhc_to_peripheral_bridge_response_pipe_read_data: std_logic_vector(31 downto 0);
  signal sdhc_to_peripheral_bridge_response_pipe_read_req : std_logic_vector(0 downto 0) := (others => '0');
  signal sdhc_to_peripheral_bridge_response_pipe_read_ack : std_logic_vector(0 downto 0);
  -- 
begin --
  -- clock/reset generation 
  clk <= not clk after 5 ns;
  -- assert reset for four clocks.
  process
  begin --
    Vhpi_Initialize;
    wait until clk = '1';
    wait until clk = '1';
    wait until clk = '1';
    wait until clk = '1';
    reset <= '0';
    while true loop --
      wait until clk = '0';
      Vhpi_Listen;
      Vhpi_Send;
      --
    end loop;
    wait;
    --
  end process;
  -- connect all the top-level modules to Vhpi
  process
  variable port_val_string, req_val_string, ack_val_string,  obj_ref: VhpiString;
  begin --
    wait until reset = '0';
    -- let the DUT come out of reset.... give it 4 cycles.
    wait until clk = '1';
    wait until clk = '1';
    wait until clk = '1';
    wait until clk = '1';
    while true loop -- 
      wait until clk = '0';
      wait for 1 ns; 
      obj_ref := Pack_String_To_Vhpi_String("DAT0Rx req");
      Vhpi_Get_Port_Value(obj_ref,req_val_string,1);
      DAT0Rx_pipe_write_req <= Unpack_String(req_val_string,1);
      obj_ref := Pack_String_To_Vhpi_String("DAT0Rx 0");
      Vhpi_Get_Port_Value(obj_ref,port_val_string,1);
      DAT0Rx_pipe_write_data <= Unpack_String(port_val_string,1);
      wait until clk = '1';
      obj_ref := Pack_String_To_Vhpi_String("DAT0Rx ack");
      ack_val_string := Pack_SLV_To_Vhpi_String(DAT0Rx_pipe_write_ack);
      Vhpi_Set_Port_Value(obj_ref,ack_val_string,1);
      -- 
    end loop;
    --
  end process;
  process
  variable port_val_string, req_val_string, ack_val_string,  obj_ref: VhpiString;
  begin --
    wait until reset = '0';
    -- let the DUT come out of reset.... give it 4 cycles.
    wait until clk = '1';
    wait until clk = '1';
    wait until clk = '1';
    wait until clk = '1';
    while true loop -- 
      wait until clk = '0';
      wait for 1 ns; 
      obj_ref := Pack_String_To_Vhpi_String("DAT0Tx req");
      Vhpi_Get_Port_Value(obj_ref,req_val_string,1);
      DAT0Tx_pipe_read_req <= Unpack_String(req_val_string,1);
      wait until clk = '1';
      obj_ref := Pack_String_To_Vhpi_String("DAT0Tx ack");
      ack_val_string := Pack_SLV_To_Vhpi_String(DAT0Tx_pipe_read_ack);
      Vhpi_Set_Port_Value(obj_ref,ack_val_string,1);
      obj_ref := Pack_String_To_Vhpi_String("DAT0Tx 0");
      port_val_string := Pack_SLV_To_Vhpi_String(DAT0Tx_pipe_read_data);
      Vhpi_Set_Port_Value(obj_ref,port_val_string,1);
      -- 
    end loop;
    --
  end process;
  process
  variable port_val_string, req_val_string, ack_val_string,  obj_ref: VhpiString;
  begin --
    wait until reset = '0';
    -- let the DUT come out of reset.... give it 4 cycles.
    wait until clk = '1';
    wait until clk = '1';
    wait until clk = '1';
    wait until clk = '1';
    while true loop -- 
      wait until clk = '0';
      wait for 1 ns; 
      obj_ref := Pack_String_To_Vhpi_String("DAT1Rx req");
      Vhpi_Get_Port_Value(obj_ref,req_val_string,1);
      DAT1Rx_pipe_write_req <= Unpack_String(req_val_string,1);
      obj_ref := Pack_String_To_Vhpi_String("DAT1Rx 0");
      Vhpi_Get_Port_Value(obj_ref,port_val_string,1);
      DAT1Rx_pipe_write_data <= Unpack_String(port_val_string,1);
      wait until clk = '1';
      obj_ref := Pack_String_To_Vhpi_String("DAT1Rx ack");
      ack_val_string := Pack_SLV_To_Vhpi_String(DAT1Rx_pipe_write_ack);
      Vhpi_Set_Port_Value(obj_ref,ack_val_string,1);
      -- 
    end loop;
    --
  end process;
  process
  variable port_val_string, req_val_string, ack_val_string,  obj_ref: VhpiString;
  begin --
    wait until reset = '0';
    -- let the DUT come out of reset.... give it 4 cycles.
    wait until clk = '1';
    wait until clk = '1';
    wait until clk = '1';
    wait until clk = '1';
    while true loop -- 
      wait until clk = '0';
      wait for 1 ns; 
      obj_ref := Pack_String_To_Vhpi_String("DAT1Tx req");
      Vhpi_Get_Port_Value(obj_ref,req_val_string,1);
      DAT1Tx_pipe_read_req <= Unpack_String(req_val_string,1);
      wait until clk = '1';
      obj_ref := Pack_String_To_Vhpi_String("DAT1Tx ack");
      ack_val_string := Pack_SLV_To_Vhpi_String(DAT1Tx_pipe_read_ack);
      Vhpi_Set_Port_Value(obj_ref,ack_val_string,1);
      obj_ref := Pack_String_To_Vhpi_String("DAT1Tx 0");
      port_val_string := Pack_SLV_To_Vhpi_String(DAT1Tx_pipe_read_data);
      Vhpi_Set_Port_Value(obj_ref,port_val_string,1);
      -- 
    end loop;
    --
  end process;
  process
  variable port_val_string, req_val_string, ack_val_string,  obj_ref: VhpiString;
  begin --
    wait until reset = '0';
    -- let the DUT come out of reset.... give it 4 cycles.
    wait until clk = '1';
    wait until clk = '1';
    wait until clk = '1';
    wait until clk = '1';
    while true loop -- 
      wait until clk = '0';
      wait for 1 ns; 
      obj_ref := Pack_String_To_Vhpi_String("DAT2Rx req");
      Vhpi_Get_Port_Value(obj_ref,req_val_string,1);
      DAT2Rx_pipe_write_req <= Unpack_String(req_val_string,1);
      obj_ref := Pack_String_To_Vhpi_String("DAT2Rx 0");
      Vhpi_Get_Port_Value(obj_ref,port_val_string,1);
      DAT2Rx_pipe_write_data <= Unpack_String(port_val_string,1);
      wait until clk = '1';
      obj_ref := Pack_String_To_Vhpi_String("DAT2Rx ack");
      ack_val_string := Pack_SLV_To_Vhpi_String(DAT2Rx_pipe_write_ack);
      Vhpi_Set_Port_Value(obj_ref,ack_val_string,1);
      -- 
    end loop;
    --
  end process;
  process
  variable port_val_string, req_val_string, ack_val_string,  obj_ref: VhpiString;
  begin --
    wait until reset = '0';
    -- let the DUT come out of reset.... give it 4 cycles.
    wait until clk = '1';
    wait until clk = '1';
    wait until clk = '1';
    wait until clk = '1';
    while true loop -- 
      wait until clk = '0';
      wait for 1 ns; 
      obj_ref := Pack_String_To_Vhpi_String("DAT2Tx req");
      Vhpi_Get_Port_Value(obj_ref,req_val_string,1);
      DAT2Tx_pipe_read_req <= Unpack_String(req_val_string,1);
      wait until clk = '1';
      obj_ref := Pack_String_To_Vhpi_String("DAT2Tx ack");
      ack_val_string := Pack_SLV_To_Vhpi_String(DAT2Tx_pipe_read_ack);
      Vhpi_Set_Port_Value(obj_ref,ack_val_string,1);
      obj_ref := Pack_String_To_Vhpi_String("DAT2Tx 0");
      port_val_string := Pack_SLV_To_Vhpi_String(DAT2Tx_pipe_read_data);
      Vhpi_Set_Port_Value(obj_ref,port_val_string,1);
      -- 
    end loop;
    --
  end process;
  process
  variable port_val_string, req_val_string, ack_val_string,  obj_ref: VhpiString;
  begin --
    wait until reset = '0';
    -- let the DUT come out of reset.... give it 4 cycles.
    wait until clk = '1';
    wait until clk = '1';
    wait until clk = '1';
    wait until clk = '1';
    while true loop -- 
      wait until clk = '0';
      wait for 1 ns; 
      obj_ref := Pack_String_To_Vhpi_String("DAT3Rx req");
      Vhpi_Get_Port_Value(obj_ref,req_val_string,1);
      DAT3Rx_pipe_write_req <= Unpack_String(req_val_string,1);
      obj_ref := Pack_String_To_Vhpi_String("DAT3Rx 0");
      Vhpi_Get_Port_Value(obj_ref,port_val_string,1);
      DAT3Rx_pipe_write_data <= Unpack_String(port_val_string,1);
      wait until clk = '1';
      obj_ref := Pack_String_To_Vhpi_String("DAT3Rx ack");
      ack_val_string := Pack_SLV_To_Vhpi_String(DAT3Rx_pipe_write_ack);
      Vhpi_Set_Port_Value(obj_ref,ack_val_string,1);
      -- 
    end loop;
    --
  end process;
  process
  variable port_val_string, req_val_string, ack_val_string,  obj_ref: VhpiString;
  begin --
    wait until reset = '0';
    -- let the DUT come out of reset.... give it 4 cycles.
    wait until clk = '1';
    wait until clk = '1';
    wait until clk = '1';
    wait until clk = '1';
    while true loop -- 
      wait until clk = '0';
      wait for 1 ns; 
      obj_ref := Pack_String_To_Vhpi_String("DAT3Tx req");
      Vhpi_Get_Port_Value(obj_ref,req_val_string,1);
      DAT3Tx_pipe_read_req <= Unpack_String(req_val_string,1);
      wait until clk = '1';
      obj_ref := Pack_String_To_Vhpi_String("DAT3Tx ack");
      ack_val_string := Pack_SLV_To_Vhpi_String(DAT3Tx_pipe_read_ack);
      Vhpi_Set_Port_Value(obj_ref,ack_val_string,1);
      obj_ref := Pack_String_To_Vhpi_String("DAT3Tx 0");
      port_val_string := Pack_SLV_To_Vhpi_String(DAT3Tx_pipe_read_data);
      Vhpi_Set_Port_Value(obj_ref,port_val_string,1);
      -- 
    end loop;
    --
  end process;
  SDHC_to_IRC_INT_pipe_read_ack(0) <= '1';
  TruncateOrPad(SDHC_to_IRC_INT, SDHC_to_IRC_INT_pipe_read_data);
  process
  variable port_val_string, req_val_string, ack_val_string,  obj_ref: VhpiString;
  begin --
    wait until reset = '0';
    -- let the DUT come out of reset.... give it 4 cycles.
    wait until clk = '1';
    wait until clk = '1';
    wait until clk = '1';
    wait until clk = '1';
    while true loop -- 
      wait until clk = '0';
      wait for 1 ns; 
      obj_ref := Pack_String_To_Vhpi_String("SDHC_to_IRC_INT req");
      Vhpi_Get_Port_Value(obj_ref,req_val_string,1);
      SDHC_to_IRC_INT_pipe_read_req <= Unpack_String(req_val_string,1);
      wait until clk = '1';
      obj_ref := Pack_String_To_Vhpi_String("SDHC_to_IRC_INT ack");
      ack_val_string := Pack_SLV_To_Vhpi_String(SDHC_to_IRC_INT_pipe_read_ack);
      Vhpi_Set_Port_Value(obj_ref,ack_val_string,1);
      obj_ref := Pack_String_To_Vhpi_String("SDHC_to_IRC_INT 0");
      port_val_string := Pack_SLV_To_Vhpi_String(SDHC_to_IRC_INT_pipe_read_data);
      Vhpi_Set_Port_Value(obj_ref,port_val_string,1);
      -- 
    end loop;
    --
  end process;
  bigResponseEnable_pipe_read_ack(0) <= '1';
  TruncateOrPad(bigResponseEnable, bigResponseEnable_pipe_read_data);
  process
  variable port_val_string, req_val_string, ack_val_string,  obj_ref: VhpiString;
  begin --
    wait until reset = '0';
    -- let the DUT come out of reset.... give it 4 cycles.
    wait until clk = '1';
    wait until clk = '1';
    wait until clk = '1';
    wait until clk = '1';
    while true loop -- 
      wait until clk = '0';
      wait for 1 ns; 
      obj_ref := Pack_String_To_Vhpi_String("bigResponseEnable req");
      Vhpi_Get_Port_Value(obj_ref,req_val_string,1);
      bigResponseEnable_pipe_read_req <= Unpack_String(req_val_string,1);
      wait until clk = '1';
      obj_ref := Pack_String_To_Vhpi_String("bigResponseEnable ack");
      ack_val_string := Pack_SLV_To_Vhpi_String(bigResponseEnable_pipe_read_ack);
      Vhpi_Set_Port_Value(obj_ref,ack_val_string,1);
      obj_ref := Pack_String_To_Vhpi_String("bigResponseEnable 0");
      port_val_string := Pack_SLV_To_Vhpi_String(bigResponseEnable_pipe_read_data);
      Vhpi_Set_Port_Value(obj_ref,port_val_string,1);
      -- 
    end loop;
    --
  end process;
  busy_pipe_read_ack(0) <= '1';
  TruncateOrPad(busy, busy_pipe_read_data);
  process
  variable port_val_string, req_val_string, ack_val_string,  obj_ref: VhpiString;
  begin --
    wait until reset = '0';
    -- let the DUT come out of reset.... give it 4 cycles.
    wait until clk = '1';
    wait until clk = '1';
    wait until clk = '1';
    wait until clk = '1';
    while true loop -- 
      wait until clk = '0';
      wait for 1 ns; 
      obj_ref := Pack_String_To_Vhpi_String("busy req");
      Vhpi_Get_Port_Value(obj_ref,req_val_string,1);
      busy_pipe_read_req <= Unpack_String(req_val_string,1);
      wait until clk = '1';
      obj_ref := Pack_String_To_Vhpi_String("busy ack");
      ack_val_string := Pack_SLV_To_Vhpi_String(busy_pipe_read_ack);
      Vhpi_Set_Port_Value(obj_ref,ack_val_string,1);
      obj_ref := Pack_String_To_Vhpi_String("busy 0");
      port_val_string := Pack_SLV_To_Vhpi_String(busy_pipe_read_data);
      Vhpi_Set_Port_Value(obj_ref,port_val_string,1);
      -- 
    end loop;
    --
  end process;
  busyResponse_pipe_read_ack(0) <= '1';
  TruncateOrPad(busyResponse, busyResponse_pipe_read_data);
  process
  variable port_val_string, req_val_string, ack_val_string,  obj_ref: VhpiString;
  begin --
    wait until reset = '0';
    -- let the DUT come out of reset.... give it 4 cycles.
    wait until clk = '1';
    wait until clk = '1';
    wait until clk = '1';
    wait until clk = '1';
    while true loop -- 
      wait until clk = '0';
      wait for 1 ns; 
      obj_ref := Pack_String_To_Vhpi_String("busyResponse req");
      Vhpi_Get_Port_Value(obj_ref,req_val_string,1);
      busyResponse_pipe_read_req <= Unpack_String(req_val_string,1);
      wait until clk = '1';
      obj_ref := Pack_String_To_Vhpi_String("busyResponse ack");
      ack_val_string := Pack_SLV_To_Vhpi_String(busyResponse_pipe_read_ack);
      Vhpi_Set_Port_Value(obj_ref,ack_val_string,1);
      obj_ref := Pack_String_To_Vhpi_String("busyResponse 0");
      port_val_string := Pack_SLV_To_Vhpi_String(busyResponse_pipe_read_data);
      Vhpi_Set_Port_Value(obj_ref,port_val_string,1);
      -- 
    end loop;
    --
  end process;
  clkStable_pipe_write_ack(0) <= '1';
  TruncateOrPad(clkStable_pipe_write_data,clkStable);
  process
  variable port_val_string, req_val_string, ack_val_string,  obj_ref: VhpiString;
  begin --
    wait until reset = '0';
    -- let the DUT come out of reset.... give it 4 cycles.
    wait until clk = '1';
    wait until clk = '1';
    wait until clk = '1';
    wait until clk = '1';
    while true loop -- 
      wait until clk = '0';
      wait for 1 ns; 
      obj_ref := Pack_String_To_Vhpi_String("clkStable req");
      Vhpi_Get_Port_Value(obj_ref,req_val_string,1);
      clkStable_pipe_write_req <= Unpack_String(req_val_string,1);
      obj_ref := Pack_String_To_Vhpi_String("clkStable 0");
      Vhpi_Get_Port_Value(obj_ref,port_val_string,1);
      wait for 1 ns;
      if (clkStable_pipe_write_req(0) = '1') then 
      -- 
        clkStable_pipe_write_data <= Unpack_String(port_val_string,1);
        -- 
      end if;
      wait until clk = '1';
      obj_ref := Pack_String_To_Vhpi_String("clkStable ack");
      ack_val_string := Pack_SLV_To_Vhpi_String(clkStable_pipe_write_ack);
      Vhpi_Set_Port_Value(obj_ref,ack_val_string,1);
      -- 
    end loop;
    --
  end process;
  process
  variable port_val_string, req_val_string, ack_val_string,  obj_ref: VhpiString;
  begin --
    wait until reset = '0';
    -- let the DUT come out of reset.... give it 4 cycles.
    wait until clk = '1';
    wait until clk = '1';
    wait until clk = '1';
    wait until clk = '1';
    while true loop -- 
      wait until clk = '0';
      wait for 1 ns; 
      obj_ref := Pack_String_To_Vhpi_String("commandTx req");
      Vhpi_Get_Port_Value(obj_ref,req_val_string,1);
      commandTx_pipe_read_req <= Unpack_String(req_val_string,1);
      wait until clk = '1';
      obj_ref := Pack_String_To_Vhpi_String("commandTx ack");
      ack_val_string := Pack_SLV_To_Vhpi_String(commandTx_pipe_read_ack);
      Vhpi_Set_Port_Value(obj_ref,ack_val_string,1);
      obj_ref := Pack_String_To_Vhpi_String("commandTx 0");
      port_val_string := Pack_SLV_To_Vhpi_String(commandTx_pipe_read_data);
      Vhpi_Set_Port_Value(obj_ref,port_val_string,1);
      -- 
    end loop;
    --
  end process;
  process
  variable port_val_string, req_val_string, ack_val_string,  obj_ref: VhpiString;
  begin --
    wait until reset = '0';
    -- let the DUT come out of reset.... give it 4 cycles.
    wait until clk = '1';
    wait until clk = '1';
    wait until clk = '1';
    wait until clk = '1';
    while true loop -- 
      wait until clk = '0';
      wait for 1 ns; 
      wait until clk = '1';
      -- 
    end loop;
    --
  end process;
  frequencySelect_pipe_read_ack(0) <= '1';
  TruncateOrPad(frequencySelect, frequencySelect_pipe_read_data);
  process
  variable port_val_string, req_val_string, ack_val_string,  obj_ref: VhpiString;
  begin --
    wait until reset = '0';
    -- let the DUT come out of reset.... give it 4 cycles.
    wait until clk = '1';
    wait until clk = '1';
    wait until clk = '1';
    wait until clk = '1';
    while true loop -- 
      wait until clk = '0';
      wait for 1 ns; 
      obj_ref := Pack_String_To_Vhpi_String("frequencySelect req");
      Vhpi_Get_Port_Value(obj_ref,req_val_string,1);
      frequencySelect_pipe_read_req <= Unpack_String(req_val_string,1);
      wait until clk = '1';
      obj_ref := Pack_String_To_Vhpi_String("frequencySelect ack");
      ack_val_string := Pack_SLV_To_Vhpi_String(frequencySelect_pipe_read_ack);
      Vhpi_Set_Port_Value(obj_ref,ack_val_string,1);
      obj_ref := Pack_String_To_Vhpi_String("frequencySelect 0");
      port_val_string := Pack_SLV_To_Vhpi_String(frequencySelect_pipe_read_data);
      Vhpi_Set_Port_Value(obj_ref,port_val_string,20);
      -- 
    end loop;
    --
  end process;
  process
  variable port_val_string, req_val_string, ack_val_string,  obj_ref: VhpiString;
  begin --
    wait until reset = '0';
    -- let the DUT come out of reset.... give it 4 cycles.
    wait until clk = '1';
    wait until clk = '1';
    wait until clk = '1';
    wait until clk = '1';
    while true loop -- 
      wait until clk = '0';
      wait for 1 ns; 
      wait until clk = '1';
      -- 
    end loop;
    --
  end process;
  oe_pipe_read_ack(0) <= '1';
  TruncateOrPad(oe, oe_pipe_read_data);
  process
  variable port_val_string, req_val_string, ack_val_string,  obj_ref: VhpiString;
  begin --
    wait until reset = '0';
    -- let the DUT come out of reset.... give it 4 cycles.
    wait until clk = '1';
    wait until clk = '1';
    wait until clk = '1';
    wait until clk = '1';
    while true loop -- 
      wait until clk = '0';
      wait for 1 ns; 
      obj_ref := Pack_String_To_Vhpi_String("oe req");
      Vhpi_Get_Port_Value(obj_ref,req_val_string,1);
      oe_pipe_read_req <= Unpack_String(req_val_string,1);
      wait until clk = '1';
      obj_ref := Pack_String_To_Vhpi_String("oe ack");
      ack_val_string := Pack_SLV_To_Vhpi_String(oe_pipe_read_ack);
      Vhpi_Set_Port_Value(obj_ref,ack_val_string,1);
      obj_ref := Pack_String_To_Vhpi_String("oe 0");
      port_val_string := Pack_SLV_To_Vhpi_String(oe_pipe_read_data);
      Vhpi_Set_Port_Value(obj_ref,port_val_string,1);
      -- 
    end loop;
    --
  end process;
  process
  variable port_val_string, req_val_string, ack_val_string,  obj_ref: VhpiString;
  begin --
    wait until reset = '0';
    -- let the DUT come out of reset.... give it 4 cycles.
    wait until clk = '1';
    wait until clk = '1';
    wait until clk = '1';
    wait until clk = '1';
    while true loop -- 
      wait until clk = '0';
      wait for 1 ns; 
      wait until clk = '1';
      -- 
    end loop;
    --
  end process;
  process
  variable port_val_string, req_val_string, ack_val_string,  obj_ref: VhpiString;
  begin --
    wait until reset = '0';
    -- let the DUT come out of reset.... give it 4 cycles.
    wait until clk = '1';
    wait until clk = '1';
    wait until clk = '1';
    wait until clk = '1';
    while true loop -- 
      wait until clk = '0';
      wait for 1 ns; 
      obj_ref := Pack_String_To_Vhpi_String("peripheral_bridge_to_sdhc_request req");
      Vhpi_Get_Port_Value(obj_ref,req_val_string,1);
      peripheral_bridge_to_sdhc_request_pipe_write_req <= Unpack_String(req_val_string,1);
      obj_ref := Pack_String_To_Vhpi_String("peripheral_bridge_to_sdhc_request 0");
      Vhpi_Get_Port_Value(obj_ref,port_val_string,64);
      peripheral_bridge_to_sdhc_request_pipe_write_data <= Unpack_String(port_val_string,64);
      wait until clk = '1';
      obj_ref := Pack_String_To_Vhpi_String("peripheral_bridge_to_sdhc_request ack");
      ack_val_string := Pack_SLV_To_Vhpi_String(peripheral_bridge_to_sdhc_request_pipe_write_ack);
      Vhpi_Set_Port_Value(obj_ref,ack_val_string,1);
      -- 
    end loop;
    --
  end process;
  ready_pipe_write_ack(0) <= '1';
  TruncateOrPad(ready_pipe_write_data,ready);
  process
  variable port_val_string, req_val_string, ack_val_string,  obj_ref: VhpiString;
  begin --
    wait until reset = '0';
    -- let the DUT come out of reset.... give it 4 cycles.
    wait until clk = '1';
    wait until clk = '1';
    wait until clk = '1';
    wait until clk = '1';
    while true loop -- 
      wait until clk = '0';
      wait for 1 ns; 
      obj_ref := Pack_String_To_Vhpi_String("ready req");
      Vhpi_Get_Port_Value(obj_ref,req_val_string,1);
      ready_pipe_write_req <= Unpack_String(req_val_string,1);
      obj_ref := Pack_String_To_Vhpi_String("ready 0");
      Vhpi_Get_Port_Value(obj_ref,port_val_string,1);
      wait for 1 ns;
      if (ready_pipe_write_req(0) = '1') then 
      -- 
        ready_pipe_write_data <= Unpack_String(port_val_string,1);
        -- 
      end if;
      wait until clk = '1';
      obj_ref := Pack_String_To_Vhpi_String("ready ack");
      ack_val_string := Pack_SLV_To_Vhpi_String(ready_pipe_write_ack);
      Vhpi_Set_Port_Value(obj_ref,ack_val_string,1);
      -- 
    end loop;
    --
  end process;
  ready8clocks_pipe_write_ack(0) <= '1';
  TruncateOrPad(ready8clocks_pipe_write_data,ready8clocks);
  process
  variable port_val_string, req_val_string, ack_val_string,  obj_ref: VhpiString;
  begin --
    wait until reset = '0';
    -- let the DUT come out of reset.... give it 4 cycles.
    wait until clk = '1';
    wait until clk = '1';
    wait until clk = '1';
    wait until clk = '1';
    while true loop -- 
      wait until clk = '0';
      wait for 1 ns; 
      obj_ref := Pack_String_To_Vhpi_String("ready8clocks req");
      Vhpi_Get_Port_Value(obj_ref,req_val_string,1);
      ready8clocks_pipe_write_req <= Unpack_String(req_val_string,1);
      obj_ref := Pack_String_To_Vhpi_String("ready8clocks 0");
      Vhpi_Get_Port_Value(obj_ref,port_val_string,1);
      wait for 1 ns;
      if (ready8clocks_pipe_write_req(0) = '1') then 
      -- 
        ready8clocks_pipe_write_data <= Unpack_String(port_val_string,1);
        -- 
      end if;
      wait until clk = '1';
      obj_ref := Pack_String_To_Vhpi_String("ready8clocks ack");
      ack_val_string := Pack_SLV_To_Vhpi_String(ready8clocks_pipe_write_ack);
      Vhpi_Set_Port_Value(obj_ref,ack_val_string,1);
      -- 
    end loop;
    --
  end process;
  readyClockCountEnable_pipe_read_ack(0) <= '1';
  TruncateOrPad(readyClockCountEnable, readyClockCountEnable_pipe_read_data);
  process
  variable port_val_string, req_val_string, ack_val_string,  obj_ref: VhpiString;
  begin --
    wait until reset = '0';
    -- let the DUT come out of reset.... give it 4 cycles.
    wait until clk = '1';
    wait until clk = '1';
    wait until clk = '1';
    wait until clk = '1';
    while true loop -- 
      wait until clk = '0';
      wait for 1 ns; 
      obj_ref := Pack_String_To_Vhpi_String("readyClockCountEnable req");
      Vhpi_Get_Port_Value(obj_ref,req_val_string,1);
      readyClockCountEnable_pipe_read_req <= Unpack_String(req_val_string,1);
      wait until clk = '1';
      obj_ref := Pack_String_To_Vhpi_String("readyClockCountEnable ack");
      ack_val_string := Pack_SLV_To_Vhpi_String(readyClockCountEnable_pipe_read_ack);
      Vhpi_Set_Port_Value(obj_ref,ack_val_string,1);
      obj_ref := Pack_String_To_Vhpi_String("readyClockCountEnable 0");
      port_val_string := Pack_SLV_To_Vhpi_String(readyClockCountEnable_pipe_read_data);
      Vhpi_Set_Port_Value(obj_ref,port_val_string,1);
      -- 
    end loop;
    --
  end process;
  responseEnable_pipe_read_ack(0) <= '1';
  TruncateOrPad(responseEnable, responseEnable_pipe_read_data);
  process
  variable port_val_string, req_val_string, ack_val_string,  obj_ref: VhpiString;
  begin --
    wait until reset = '0';
    -- let the DUT come out of reset.... give it 4 cycles.
    wait until clk = '1';
    wait until clk = '1';
    wait until clk = '1';
    wait until clk = '1';
    while true loop -- 
      wait until clk = '0';
      wait for 1 ns; 
      obj_ref := Pack_String_To_Vhpi_String("responseEnable req");
      Vhpi_Get_Port_Value(obj_ref,req_val_string,1);
      responseEnable_pipe_read_req <= Unpack_String(req_val_string,1);
      wait until clk = '1';
      obj_ref := Pack_String_To_Vhpi_String("responseEnable ack");
      ack_val_string := Pack_SLV_To_Vhpi_String(responseEnable_pipe_read_ack);
      Vhpi_Set_Port_Value(obj_ref,ack_val_string,1);
      obj_ref := Pack_String_To_Vhpi_String("responseEnable 0");
      port_val_string := Pack_SLV_To_Vhpi_String(responseEnable_pipe_read_data);
      Vhpi_Set_Port_Value(obj_ref,port_val_string,1);
      -- 
    end loop;
    --
  end process;
  process
  variable port_val_string, req_val_string, ack_val_string,  obj_ref: VhpiString;
  begin --
    wait until reset = '0';
    -- let the DUT come out of reset.... give it 4 cycles.
    wait until clk = '1';
    wait until clk = '1';
    wait until clk = '1';
    wait until clk = '1';
    while true loop -- 
      wait until clk = '0';
      wait for 1 ns; 
      obj_ref := Pack_String_To_Vhpi_String("responseRx req");
      Vhpi_Get_Port_Value(obj_ref,req_val_string,1);
      responseRx_pipe_write_req <= Unpack_String(req_val_string,1);
      obj_ref := Pack_String_To_Vhpi_String("responseRx 0");
      Vhpi_Get_Port_Value(obj_ref,port_val_string,1);
      responseRx_pipe_write_data <= Unpack_String(port_val_string,1);
      wait until clk = '1';
      obj_ref := Pack_String_To_Vhpi_String("responseRx ack");
      ack_val_string := Pack_SLV_To_Vhpi_String(responseRx_pipe_write_ack);
      Vhpi_Set_Port_Value(obj_ref,ack_val_string,1);
      -- 
    end loop;
    --
  end process;
  sdClkEnable_pipe_read_ack(0) <= '1';
  TruncateOrPad(sdClkEnable, sdClkEnable_pipe_read_data);
  process
  variable port_val_string, req_val_string, ack_val_string,  obj_ref: VhpiString;
  begin --
    wait until reset = '0';
    -- let the DUT come out of reset.... give it 4 cycles.
    wait until clk = '1';
    wait until clk = '1';
    wait until clk = '1';
    wait until clk = '1';
    while true loop -- 
      wait until clk = '0';
      wait for 1 ns; 
      obj_ref := Pack_String_To_Vhpi_String("sdClkEnable req");
      Vhpi_Get_Port_Value(obj_ref,req_val_string,1);
      sdClkEnable_pipe_read_req <= Unpack_String(req_val_string,1);
      wait until clk = '1';
      obj_ref := Pack_String_To_Vhpi_String("sdClkEnable ack");
      ack_val_string := Pack_SLV_To_Vhpi_String(sdClkEnable_pipe_read_ack);
      Vhpi_Set_Port_Value(obj_ref,ack_val_string,1);
      obj_ref := Pack_String_To_Vhpi_String("sdClkEnable 0");
      port_val_string := Pack_SLV_To_Vhpi_String(sdClkEnable_pipe_read_data);
      Vhpi_Set_Port_Value(obj_ref,port_val_string,1);
      -- 
    end loop;
    --
  end process;
  process
  variable port_val_string, req_val_string, ack_val_string,  obj_ref: VhpiString;
  begin --
    wait until reset = '0';
    -- let the DUT come out of reset.... give it 4 cycles.
    wait until clk = '1';
    wait until clk = '1';
    wait until clk = '1';
    wait until clk = '1';
    while true loop -- 
      wait until clk = '0';
      wait for 1 ns; 
      obj_ref := Pack_String_To_Vhpi_String("sdhc_to_peripheral_bridge_response req");
      Vhpi_Get_Port_Value(obj_ref,req_val_string,1);
      sdhc_to_peripheral_bridge_response_pipe_read_req <= Unpack_String(req_val_string,1);
      wait until clk = '1';
      obj_ref := Pack_String_To_Vhpi_String("sdhc_to_peripheral_bridge_response ack");
      ack_val_string := Pack_SLV_To_Vhpi_String(sdhc_to_peripheral_bridge_response_pipe_read_ack);
      Vhpi_Set_Port_Value(obj_ref,ack_val_string,1);
      obj_ref := Pack_String_To_Vhpi_String("sdhc_to_peripheral_bridge_response 0");
      port_val_string := Pack_SLV_To_Vhpi_String(sdhc_to_peripheral_bridge_response_pipe_read_data);
      Vhpi_Set_Port_Value(obj_ref,port_val_string,32);
      -- 
    end loop;
    --
  end process;
  ahir_system_instance: ahir_system -- 
    port map ( -- 
      clk => clk,
      reset => reset,
      DAT0Rx_pipe_write_data  => DAT0Rx_pipe_write_data, 
      DAT0Rx_pipe_write_req  => DAT0Rx_pipe_write_req, 
      DAT0Rx_pipe_write_ack  => DAT0Rx_pipe_write_ack,
      DAT0Tx_pipe_read_data  => DAT0Tx_pipe_read_data, 
      DAT0Tx_pipe_read_req  => DAT0Tx_pipe_read_req, 
      DAT0Tx_pipe_read_ack  => DAT0Tx_pipe_read_ack ,
      DAT1Rx_pipe_write_data  => DAT1Rx_pipe_write_data, 
      DAT1Rx_pipe_write_req  => DAT1Rx_pipe_write_req, 
      DAT1Rx_pipe_write_ack  => DAT1Rx_pipe_write_ack,
      DAT1Tx_pipe_read_data  => DAT1Tx_pipe_read_data, 
      DAT1Tx_pipe_read_req  => DAT1Tx_pipe_read_req, 
      DAT1Tx_pipe_read_ack  => DAT1Tx_pipe_read_ack ,
      DAT2Rx_pipe_write_data  => DAT2Rx_pipe_write_data, 
      DAT2Rx_pipe_write_req  => DAT2Rx_pipe_write_req, 
      DAT2Rx_pipe_write_ack  => DAT2Rx_pipe_write_ack,
      DAT2Tx_pipe_read_data  => DAT2Tx_pipe_read_data, 
      DAT2Tx_pipe_read_req  => DAT2Tx_pipe_read_req, 
      DAT2Tx_pipe_read_ack  => DAT2Tx_pipe_read_ack ,
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
      oe => oe,
      peripheral_bridge_to_sdhc_request_pipe_write_data  => peripheral_bridge_to_sdhc_request_pipe_write_data, 
      peripheral_bridge_to_sdhc_request_pipe_write_req  => peripheral_bridge_to_sdhc_request_pipe_write_req, 
      peripheral_bridge_to_sdhc_request_pipe_write_ack  => peripheral_bridge_to_sdhc_request_pipe_write_ack,
      ready => ready,
      ready8clocks => ready8clocks,
      readyClockCountEnable => readyClockCountEnable,
      responseEnable => responseEnable,
      responseRx_pipe_write_data  => responseRx_pipe_write_data, 
      responseRx_pipe_write_req  => responseRx_pipe_write_req, 
      responseRx_pipe_write_ack  => responseRx_pipe_write_ack,
      sdClkEnable => sdClkEnable,
      sdhc_to_peripheral_bridge_response_pipe_read_data  => sdhc_to_peripheral_bridge_response_pipe_read_data, 
      sdhc_to_peripheral_bridge_response_pipe_read_req  => sdhc_to_peripheral_bridge_response_pipe_read_req, 
      sdhc_to_peripheral_bridge_response_pipe_read_ack  => sdhc_to_peripheral_bridge_response_pipe_read_ack ); -- 
  -- 
end VhpiLink;
