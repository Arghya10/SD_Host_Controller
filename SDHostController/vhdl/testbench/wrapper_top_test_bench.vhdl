library ieee;
use ieee.std_logic_1164.all;
library ahir;
use ahir.memory_subsystem_package.all;
use ahir.types.all;
use ahir.subprograms.all;
use ahir.components.all;
use ahir.basecomponents.all;
use ahir.operatorpackage.all;
use ahir.utilities.all;
library GhdlLink;
use GhdlLink.Utility_Package.all;
use GhdlLink.Vhpi_Foreign.all;
-->>>>>
library work;
--<<<<<
entity wrapper_top_Test_Bench is -- 
  -- 
end entity;
architecture VhpiLink of wrapper_top_Test_Bench is -- 
  signal DAT0Rx_pipe_write_data : std_logic_vector(0 downto 0);
  signal DAT0Rx_pipe_write_req  : std_logic_vector(0  downto 0);
  signal DAT0Rx_pipe_write_ack  : std_logic_vector(0  downto 0);
  signal DAT1Rx_pipe_write_data : std_logic_vector(0 downto 0);
  signal DAT1Rx_pipe_write_req  : std_logic_vector(0  downto 0);
  signal DAT1Rx_pipe_write_ack  : std_logic_vector(0  downto 0);
  signal DAT2Rx_pipe_write_data : std_logic_vector(0 downto 0);
  signal DAT2Rx_pipe_write_req  : std_logic_vector(0  downto 0);
  signal DAT2Rx_pipe_write_ack  : std_logic_vector(0  downto 0);
  signal DAT3Rx_pipe_write_data : std_logic_vector(0 downto 0);
  signal DAT3Rx_pipe_write_req  : std_logic_vector(0  downto 0);
  signal DAT3Rx_pipe_write_ack  : std_logic_vector(0  downto 0);
  signal peripheral_bridge_to_sdhc_request_pipe_write_data : std_logic_vector(63 downto 0);
  signal peripheral_bridge_to_sdhc_request_pipe_write_req  : std_logic_vector(0  downto 0);
  signal peripheral_bridge_to_sdhc_request_pipe_write_ack  : std_logic_vector(0  downto 0);
  signal responseRx_pipe_write_data : std_logic_vector(0 downto 0);
  signal responseRx_pipe_write_req  : std_logic_vector(0  downto 0);
  signal responseRx_pipe_write_ack  : std_logic_vector(0  downto 0);
  signal DAT0Tx_pipe_read_data : std_logic_vector(0 downto 0);
  signal DAT0Tx_pipe_read_req  : std_logic_vector(0  downto 0);
  signal DAT0Tx_pipe_read_ack  : std_logic_vector(0  downto 0);
  signal DAT1Tx_pipe_read_data : std_logic_vector(0 downto 0);
  signal DAT1Tx_pipe_read_req  : std_logic_vector(0  downto 0);
  signal DAT1Tx_pipe_read_ack  : std_logic_vector(0  downto 0);
  signal DAT2Tx_pipe_read_data : std_logic_vector(0 downto 0);
  signal DAT2Tx_pipe_read_req  : std_logic_vector(0  downto 0);
  signal DAT2Tx_pipe_read_ack  : std_logic_vector(0  downto 0);
  signal DAT3Tx_pipe_read_data : std_logic_vector(0 downto 0);
  signal DAT3Tx_pipe_read_req  : std_logic_vector(0  downto 0);
  signal DAT3Tx_pipe_read_ack  : std_logic_vector(0  downto 0);
  signal SDHC_to_IRC_INT_pipe_read_data : std_logic_vector(0 downto 0);
  signal SDHC_to_IRC_INT_pipe_read_req  : std_logic_vector(0  downto 0);
  signal SDHC_to_IRC_INT_pipe_read_ack  : std_logic_vector(0  downto 0);
  signal SDHC_to_IRC_INT: std_logic_vector(0 downto 0);
  signal commandTx_pipe_read_data : std_logic_vector(0 downto 0);
  signal commandTx_pipe_read_req  : std_logic_vector(0  downto 0);
  signal commandTx_pipe_read_ack  : std_logic_vector(0  downto 0);
  signal sdhc_to_peripheral_bridge_response_pipe_read_data : std_logic_vector(31 downto 0);
  signal sdhc_to_peripheral_bridge_response_pipe_read_req  : std_logic_vector(0  downto 0);
  signal sdhc_to_peripheral_bridge_response_pipe_read_ack  : std_logic_vector(0  downto 0);
  signal clk : std_logic := '0'; 
  signal reset: std_logic := '1'; 
  component wrapper_top is -- 
    port( -- 
      DAT0Rx_pipe_write_data : in std_logic_vector(0 downto 0);
      DAT0Rx_pipe_write_req  : in std_logic_vector(0  downto 0);
      DAT0Rx_pipe_write_ack  : out std_logic_vector(0  downto 0);
      DAT1Rx_pipe_write_data : in std_logic_vector(0 downto 0);
      DAT1Rx_pipe_write_req  : in std_logic_vector(0  downto 0);
      DAT1Rx_pipe_write_ack  : out std_logic_vector(0  downto 0);
      DAT2Rx_pipe_write_data : in std_logic_vector(0 downto 0);
      DAT2Rx_pipe_write_req  : in std_logic_vector(0  downto 0);
      DAT2Rx_pipe_write_ack  : out std_logic_vector(0  downto 0);
      DAT3Rx_pipe_write_data : in std_logic_vector(0 downto 0);
      DAT3Rx_pipe_write_req  : in std_logic_vector(0  downto 0);
      DAT3Rx_pipe_write_ack  : out std_logic_vector(0  downto 0);
      peripheral_bridge_to_sdhc_request_pipe_write_data : in std_logic_vector(63 downto 0);
      peripheral_bridge_to_sdhc_request_pipe_write_req  : in std_logic_vector(0  downto 0);
      peripheral_bridge_to_sdhc_request_pipe_write_ack  : out std_logic_vector(0  downto 0);
      responseRx_pipe_write_data : in std_logic_vector(0 downto 0);
      responseRx_pipe_write_req  : in std_logic_vector(0  downto 0);
      responseRx_pipe_write_ack  : out std_logic_vector(0  downto 0);
      DAT0Tx_pipe_read_data : out std_logic_vector(0 downto 0);
      DAT0Tx_pipe_read_req  : in std_logic_vector(0  downto 0);
      DAT0Tx_pipe_read_ack  : out std_logic_vector(0  downto 0);
      DAT1Tx_pipe_read_data : out std_logic_vector(0 downto 0);
      DAT1Tx_pipe_read_req  : in std_logic_vector(0  downto 0);
      DAT1Tx_pipe_read_ack  : out std_logic_vector(0  downto 0);
      DAT2Tx_pipe_read_data : out std_logic_vector(0 downto 0);
      DAT2Tx_pipe_read_req  : in std_logic_vector(0  downto 0);
      DAT2Tx_pipe_read_ack  : out std_logic_vector(0  downto 0);
      DAT3Tx_pipe_read_data : out std_logic_vector(0 downto 0);
      DAT3Tx_pipe_read_req  : in std_logic_vector(0  downto 0);
      DAT3Tx_pipe_read_ack  : out std_logic_vector(0  downto 0);
      SDHC_to_IRC_INT : out std_logic_vector(0 downto 0);
      commandTx_pipe_read_data : out std_logic_vector(0 downto 0);
      commandTx_pipe_read_req  : in std_logic_vector(0  downto 0);
      commandTx_pipe_read_ack  : out std_logic_vector(0  downto 0);
      sdhc_to_peripheral_bridge_response_pipe_read_data : out std_logic_vector(31 downto 0);
      sdhc_to_peripheral_bridge_response_pipe_read_req  : in std_logic_vector(0  downto 0);
      sdhc_to_peripheral_bridge_response_pipe_read_ack  : out std_logic_vector(0  downto 0);
      clk, reset: in std_logic 
      -- 
    );
    --
  end component;
  -->>>>>
  for dut :  wrapper_top -- 
    use entity work.wrapper_top; -- 
  --<<<<<
  -- 
begin --
  -- clock/reset generation 
  clk <= not clk after 5 ns;
  process
  begin --
    Vhpi_Initialize;
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
  process
  variable val_string, obj_ref: VhpiString;
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
      Vhpi_Get_Port_Value(obj_ref,val_string,1);
      DAT0Rx_pipe_write_req <= Unpack_String(val_string,1);
      obj_ref := Pack_String_To_Vhpi_String("DAT0Rx 0");
      Vhpi_Get_Port_Value(obj_ref,val_string,1);
      DAT0Rx_pipe_write_data <= Unpack_String(val_string,1);
      wait until clk = '1';
      obj_ref := Pack_String_To_Vhpi_String("DAT0Rx ack");
      val_string := Pack_SLV_To_Vhpi_String(DAT0Rx_pipe_write_ack);
      Vhpi_Set_Port_Value(obj_ref,val_string,1);
      -- 
    end loop;
    --
  end process;
  process
  variable val_string, obj_ref: VhpiString;
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
      Vhpi_Get_Port_Value(obj_ref,val_string,1);
      DAT1Rx_pipe_write_req <= Unpack_String(val_string,1);
      obj_ref := Pack_String_To_Vhpi_String("DAT1Rx 0");
      Vhpi_Get_Port_Value(obj_ref,val_string,1);
      DAT1Rx_pipe_write_data <= Unpack_String(val_string,1);
      wait until clk = '1';
      obj_ref := Pack_String_To_Vhpi_String("DAT1Rx ack");
      val_string := Pack_SLV_To_Vhpi_String(DAT1Rx_pipe_write_ack);
      Vhpi_Set_Port_Value(obj_ref,val_string,1);
      -- 
    end loop;
    --
  end process;
  process
  variable val_string, obj_ref: VhpiString;
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
      Vhpi_Get_Port_Value(obj_ref,val_string,1);
      DAT2Rx_pipe_write_req <= Unpack_String(val_string,1);
      obj_ref := Pack_String_To_Vhpi_String("DAT2Rx 0");
      Vhpi_Get_Port_Value(obj_ref,val_string,1);
      DAT2Rx_pipe_write_data <= Unpack_String(val_string,1);
      wait until clk = '1';
      obj_ref := Pack_String_To_Vhpi_String("DAT2Rx ack");
      val_string := Pack_SLV_To_Vhpi_String(DAT2Rx_pipe_write_ack);
      Vhpi_Set_Port_Value(obj_ref,val_string,1);
      -- 
    end loop;
    --
  end process;
  process
  variable val_string, obj_ref: VhpiString;
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
      Vhpi_Get_Port_Value(obj_ref,val_string,1);
      DAT3Rx_pipe_write_req <= Unpack_String(val_string,1);
      obj_ref := Pack_String_To_Vhpi_String("DAT3Rx 0");
      Vhpi_Get_Port_Value(obj_ref,val_string,1);
      DAT3Rx_pipe_write_data <= Unpack_String(val_string,1);
      wait until clk = '1';
      obj_ref := Pack_String_To_Vhpi_String("DAT3Rx ack");
      val_string := Pack_SLV_To_Vhpi_String(DAT3Rx_pipe_write_ack);
      Vhpi_Set_Port_Value(obj_ref,val_string,1);
      -- 
    end loop;
    --
  end process;
  process
  variable val_string, obj_ref: VhpiString;
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
      Vhpi_Get_Port_Value(obj_ref,val_string,1);
      peripheral_bridge_to_sdhc_request_pipe_write_req <= Unpack_String(val_string,1);
      obj_ref := Pack_String_To_Vhpi_String("peripheral_bridge_to_sdhc_request 0");
      Vhpi_Get_Port_Value(obj_ref,val_string,64);
      peripheral_bridge_to_sdhc_request_pipe_write_data <= Unpack_String(val_string,64);
      wait until clk = '1';
      obj_ref := Pack_String_To_Vhpi_String("peripheral_bridge_to_sdhc_request ack");
      val_string := Pack_SLV_To_Vhpi_String(peripheral_bridge_to_sdhc_request_pipe_write_ack);
      Vhpi_Set_Port_Value(obj_ref,val_string,1);
      -- 
    end loop;
    --
  end process;
  process
  variable val_string, obj_ref: VhpiString;
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
      Vhpi_Get_Port_Value(obj_ref,val_string,1);
      responseRx_pipe_write_req <= Unpack_String(val_string,1);
      obj_ref := Pack_String_To_Vhpi_String("responseRx 0");
      Vhpi_Get_Port_Value(obj_ref,val_string,1);
      responseRx_pipe_write_data <= Unpack_String(val_string,1);
      wait until clk = '1';
      obj_ref := Pack_String_To_Vhpi_String("responseRx ack");
      val_string := Pack_SLV_To_Vhpi_String(responseRx_pipe_write_ack);
      Vhpi_Set_Port_Value(obj_ref,val_string,1);
      -- 
    end loop;
    --
  end process;
  process
  variable val_string, obj_ref: VhpiString;
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
      Vhpi_Get_Port_Value(obj_ref,val_string,1);
      DAT0Tx_pipe_read_req <= Unpack_String(val_string,1);
      wait until clk = '1';
      obj_ref := Pack_String_To_Vhpi_String("DAT0Tx ack");
      val_string := Pack_SLV_To_Vhpi_String(DAT0Tx_pipe_read_ack);
      Vhpi_Set_Port_Value(obj_ref,val_string,1);
      obj_ref := Pack_String_To_Vhpi_String("DAT0Tx 0");
      val_string := Pack_SLV_To_Vhpi_String(DAT0Tx_pipe_read_data);
      Vhpi_Set_Port_Value(obj_ref,val_string,1);
      -- 
    end loop;
    --
  end process;
  process
  variable val_string, obj_ref: VhpiString;
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
      Vhpi_Get_Port_Value(obj_ref,val_string,1);
      DAT1Tx_pipe_read_req <= Unpack_String(val_string,1);
      wait until clk = '1';
      obj_ref := Pack_String_To_Vhpi_String("DAT1Tx ack");
      val_string := Pack_SLV_To_Vhpi_String(DAT1Tx_pipe_read_ack);
      Vhpi_Set_Port_Value(obj_ref,val_string,1);
      obj_ref := Pack_String_To_Vhpi_String("DAT1Tx 0");
      val_string := Pack_SLV_To_Vhpi_String(DAT1Tx_pipe_read_data);
      Vhpi_Set_Port_Value(obj_ref,val_string,1);
      -- 
    end loop;
    --
  end process;
  process
  variable val_string, obj_ref: VhpiString;
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
      Vhpi_Get_Port_Value(obj_ref,val_string,1);
      DAT2Tx_pipe_read_req <= Unpack_String(val_string,1);
      wait until clk = '1';
      obj_ref := Pack_String_To_Vhpi_String("DAT2Tx ack");
      val_string := Pack_SLV_To_Vhpi_String(DAT2Tx_pipe_read_ack);
      Vhpi_Set_Port_Value(obj_ref,val_string,1);
      obj_ref := Pack_String_To_Vhpi_String("DAT2Tx 0");
      val_string := Pack_SLV_To_Vhpi_String(DAT2Tx_pipe_read_data);
      Vhpi_Set_Port_Value(obj_ref,val_string,1);
      -- 
    end loop;
    --
  end process;
  process
  variable val_string, obj_ref: VhpiString;
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
      Vhpi_Get_Port_Value(obj_ref,val_string,1);
      DAT3Tx_pipe_read_req <= Unpack_String(val_string,1);
      wait until clk = '1';
      obj_ref := Pack_String_To_Vhpi_String("DAT3Tx ack");
      val_string := Pack_SLV_To_Vhpi_String(DAT3Tx_pipe_read_ack);
      Vhpi_Set_Port_Value(obj_ref,val_string,1);
      obj_ref := Pack_String_To_Vhpi_String("DAT3Tx 0");
      val_string := Pack_SLV_To_Vhpi_String(DAT3Tx_pipe_read_data);
      Vhpi_Set_Port_Value(obj_ref,val_string,1);
      -- 
    end loop;
    --
  end process;
  SDHC_to_IRC_INT_pipe_read_ack(0) <= '1';
  TruncateOrPad(SDHC_to_IRC_INT, SDHC_to_IRC_INT_pipe_read_data);
  process
  variable val_string, obj_ref: VhpiString;
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
      Vhpi_Get_Port_Value(obj_ref,val_string,1);
      SDHC_to_IRC_INT_pipe_read_req <= Unpack_String(val_string,1);
      wait until clk = '1';
      obj_ref := Pack_String_To_Vhpi_String("SDHC_to_IRC_INT ack");
      val_string := Pack_SLV_To_Vhpi_String(SDHC_to_IRC_INT_pipe_read_ack);
      Vhpi_Set_Port_Value(obj_ref,val_string,1);
      obj_ref := Pack_String_To_Vhpi_String("SDHC_to_IRC_INT 0");
      val_string := Pack_SLV_To_Vhpi_String(SDHC_to_IRC_INT_pipe_read_data);
      Vhpi_Set_Port_Value(obj_ref,val_string,1);
      -- 
    end loop;
    --
  end process;
  process
  variable val_string, obj_ref: VhpiString;
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
      Vhpi_Get_Port_Value(obj_ref,val_string,1);
      commandTx_pipe_read_req <= Unpack_String(val_string,1);
      wait until clk = '1';
      obj_ref := Pack_String_To_Vhpi_String("commandTx ack");
      val_string := Pack_SLV_To_Vhpi_String(commandTx_pipe_read_ack);
      Vhpi_Set_Port_Value(obj_ref,val_string,1);
      obj_ref := Pack_String_To_Vhpi_String("commandTx 0");
      val_string := Pack_SLV_To_Vhpi_String(commandTx_pipe_read_data);
      Vhpi_Set_Port_Value(obj_ref,val_string,1);
      -- 
    end loop;
    --
  end process;
  process
  variable val_string, obj_ref: VhpiString;
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
      Vhpi_Get_Port_Value(obj_ref,val_string,1);
      sdhc_to_peripheral_bridge_response_pipe_read_req <= Unpack_String(val_string,1);
      wait until clk = '1';
      obj_ref := Pack_String_To_Vhpi_String("sdhc_to_peripheral_bridge_response ack");
      val_string := Pack_SLV_To_Vhpi_String(sdhc_to_peripheral_bridge_response_pipe_read_ack);
      Vhpi_Set_Port_Value(obj_ref,val_string,1);
      obj_ref := Pack_String_To_Vhpi_String("sdhc_to_peripheral_bridge_response 0");
      val_string := Pack_SLV_To_Vhpi_String(sdhc_to_peripheral_bridge_response_pipe_read_data);
      Vhpi_Set_Port_Value(obj_ref,val_string,32);
      -- 
    end loop;
    --
  end process;
  dut: wrapper_top
  port map ( --
    DAT0Rx_pipe_write_data => DAT0Rx_pipe_write_data,
    DAT0Rx_pipe_write_req => DAT0Rx_pipe_write_req,
    DAT0Rx_pipe_write_ack => DAT0Rx_pipe_write_ack,
    DAT1Rx_pipe_write_data => DAT1Rx_pipe_write_data,
    DAT1Rx_pipe_write_req => DAT1Rx_pipe_write_req,
    DAT1Rx_pipe_write_ack => DAT1Rx_pipe_write_ack,
    DAT2Rx_pipe_write_data => DAT2Rx_pipe_write_data,
    DAT2Rx_pipe_write_req => DAT2Rx_pipe_write_req,
    DAT2Rx_pipe_write_ack => DAT2Rx_pipe_write_ack,
    DAT3Rx_pipe_write_data => DAT3Rx_pipe_write_data,
    DAT3Rx_pipe_write_req => DAT3Rx_pipe_write_req,
    DAT3Rx_pipe_write_ack => DAT3Rx_pipe_write_ack,
    peripheral_bridge_to_sdhc_request_pipe_write_data => peripheral_bridge_to_sdhc_request_pipe_write_data,
    peripheral_bridge_to_sdhc_request_pipe_write_req => peripheral_bridge_to_sdhc_request_pipe_write_req,
    peripheral_bridge_to_sdhc_request_pipe_write_ack => peripheral_bridge_to_sdhc_request_pipe_write_ack,
    responseRx_pipe_write_data => responseRx_pipe_write_data,
    responseRx_pipe_write_req => responseRx_pipe_write_req,
    responseRx_pipe_write_ack => responseRx_pipe_write_ack,
    DAT0Tx_pipe_read_data => DAT0Tx_pipe_read_data,
    DAT0Tx_pipe_read_req => DAT0Tx_pipe_read_req,
    DAT0Tx_pipe_read_ack => DAT0Tx_pipe_read_ack,
    DAT1Tx_pipe_read_data => DAT1Tx_pipe_read_data,
    DAT1Tx_pipe_read_req => DAT1Tx_pipe_read_req,
    DAT1Tx_pipe_read_ack => DAT1Tx_pipe_read_ack,
    DAT2Tx_pipe_read_data => DAT2Tx_pipe_read_data,
    DAT2Tx_pipe_read_req => DAT2Tx_pipe_read_req,
    DAT2Tx_pipe_read_ack => DAT2Tx_pipe_read_ack,
    DAT3Tx_pipe_read_data => DAT3Tx_pipe_read_data,
    DAT3Tx_pipe_read_req => DAT3Tx_pipe_read_req,
    DAT3Tx_pipe_read_ack => DAT3Tx_pipe_read_ack,
    SDHC_to_IRC_INT => SDHC_to_IRC_INT,
    commandTx_pipe_read_data => commandTx_pipe_read_data,
    commandTx_pipe_read_req => commandTx_pipe_read_req,
    commandTx_pipe_read_ack => commandTx_pipe_read_ack,
    sdhc_to_peripheral_bridge_response_pipe_read_data => sdhc_to_peripheral_bridge_response_pipe_read_data,
    sdhc_to_peripheral_bridge_response_pipe_read_req => sdhc_to_peripheral_bridge_response_pipe_read_req,
    sdhc_to_peripheral_bridge_response_pipe_read_ack => sdhc_to_peripheral_bridge_response_pipe_read_ack,
    clk => clk, reset => reset 
    ); -- 
  -- 
end VhpiLink;
