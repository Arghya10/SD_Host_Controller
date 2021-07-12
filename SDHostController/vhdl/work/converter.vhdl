-- VHDL produced by vc2vhdl from virtual circuit (vc) description 
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
use work.converter_global_package.all;
entity inp_daemon is -- 
  generic (tag_length : integer); 
  port ( -- 
    inp_pipe_read_req : out  std_logic_vector(0 downto 0);
    inp_pipe_read_ack : in   std_logic_vector(0 downto 0);
    inp_pipe_read_data : in   std_logic_vector(0 downto 0);
    dTx_pipe_write_req : out  std_logic_vector(0 downto 0);
    dTx_pipe_write_ack : in   std_logic_vector(0 downto 0);
    dTx_pipe_write_data : out  std_logic_vector(0 downto 0);
    tag_in: in std_logic_vector(tag_length-1 downto 0);
    tag_out: out std_logic_vector(tag_length-1 downto 0) ;
    clk : in std_logic;
    reset : in std_logic;
    start_req : in std_logic;
    start_ack : out std_logic;
    fin_req : in std_logic;
    fin_ack   : out std_logic-- 
  );
  -- 
end entity inp_daemon;
architecture inp_daemon_arch of inp_daemon is -- 
  -- always true...
  signal always_true_symbol: Boolean;
  signal in_buffer_data_in, in_buffer_data_out: std_logic_vector((tag_length + 0)-1 downto 0);
  signal default_zero_sig: std_logic;
  signal in_buffer_write_req: std_logic;
  signal in_buffer_write_ack: std_logic;
  signal in_buffer_unload_req_symbol: Boolean;
  signal in_buffer_unload_ack_symbol: Boolean;
  signal out_buffer_data_in, out_buffer_data_out: std_logic_vector((tag_length + 0)-1 downto 0);
  signal out_buffer_read_req: std_logic;
  signal out_buffer_read_ack: std_logic;
  signal out_buffer_write_req_symbol: Boolean;
  signal out_buffer_write_ack_symbol: Boolean;
  signal tag_ub_out, tag_ilock_out: std_logic_vector(tag_length-1 downto 0);
  signal tag_push_req, tag_push_ack, tag_pop_req, tag_pop_ack: std_logic;
  signal tag_unload_req_symbol, tag_unload_ack_symbol, tag_write_req_symbol, tag_write_ack_symbol: Boolean;
  signal tag_ilock_write_req_symbol, tag_ilock_write_ack_symbol, tag_ilock_read_req_symbol, tag_ilock_read_ack_symbol: Boolean;
  signal start_req_sig, fin_req_sig, start_ack_sig, fin_ack_sig: std_logic; 
  signal input_sample_reenable_symbol: Boolean;
  -- input port buffer signals
  -- output port buffer signals
  signal inp_daemon_CP_3_start: Boolean;
  signal inp_daemon_CP_3_symbol: Boolean;
  -- volatile/operator module components. 
  -- links between control-path and data-path
  signal do_while_stmt_9_branch_req_0 : boolean;
  signal do_while_stmt_9_branch_ack_0 : boolean;
  signal do_while_stmt_9_branch_ack_1 : boolean;
  signal RPIPE_inp_12_inst_req_0 : boolean;
  signal RPIPE_inp_12_inst_ack_0 : boolean;
  signal RPIPE_inp_12_inst_req_1 : boolean;
  signal RPIPE_inp_12_inst_ack_1 : boolean;
  signal WPIPE_dTx_11_inst_req_0 : boolean;
  signal WPIPE_dTx_11_inst_ack_0 : boolean;
  signal WPIPE_dTx_11_inst_req_1 : boolean;
  signal WPIPE_dTx_11_inst_ack_1 : boolean;
  -- 
begin --  
  -- input handling ------------------------------------------------
  in_buffer: UnloadBuffer -- 
    generic map(name => "inp_daemon_input_buffer", -- 
      buffer_size => 1,
      bypass_flag => false,
      data_width => tag_length + 0) -- 
    port map(write_req => in_buffer_write_req, -- 
      write_ack => in_buffer_write_ack, 
      write_data => in_buffer_data_in,
      unload_req => in_buffer_unload_req_symbol, 
      unload_ack => in_buffer_unload_ack_symbol, 
      read_data => in_buffer_data_out,
      clk => clk, reset => reset); -- 
  in_buffer_data_in(tag_length-1 downto 0) <= tag_in;
  tag_ub_out <= in_buffer_data_out(tag_length-1 downto 0);
  in_buffer_write_req <= start_req;
  start_ack <= in_buffer_write_ack;
  in_buffer_unload_req_symbol_join: block -- 
    constant place_capacities: IntegerArray(0 to 1) := (0 => 1,1 => 1);
    constant place_markings: IntegerArray(0 to 1)  := (0 => 1,1 => 1);
    constant place_delays: IntegerArray(0 to 1) := (0 => 0,1 => 1);
    constant joinName: string(1 to 32) := "in_buffer_unload_req_symbol_join"; 
    signal preds: BooleanArray(1 to 2); -- 
  begin -- 
    preds <= in_buffer_unload_ack_symbol & input_sample_reenable_symbol;
    gj_in_buffer_unload_req_symbol_join : generic_join generic map(name => joinName, number_of_predecessors => 2, place_capacities => place_capacities, place_markings => place_markings, place_delays => place_delays) -- 
      port map(preds => preds, symbol_out => in_buffer_unload_req_symbol, clk => clk, reset => reset); --
  end block;
  -- join of all unload_ack_symbols.. used to trigger CP.
  inp_daemon_CP_3_start <= in_buffer_unload_ack_symbol;
  -- output handling  -------------------------------------------------------
  out_buffer: ReceiveBuffer -- 
    generic map(name => "inp_daemon_out_buffer", -- 
      buffer_size => 1,
      full_rate => false,
      data_width => tag_length + 0) --
    port map(write_req => out_buffer_write_req_symbol, -- 
      write_ack => out_buffer_write_ack_symbol, 
      write_data => out_buffer_data_in,
      read_req => out_buffer_read_req, 
      read_ack => out_buffer_read_ack, 
      read_data => out_buffer_data_out,
      clk => clk, reset => reset); -- 
  out_buffer_data_in(tag_length-1 downto 0) <= tag_ilock_out;
  tag_out <= out_buffer_data_out(tag_length-1 downto 0);
  out_buffer_write_req_symbol_join: block -- 
    constant place_capacities: IntegerArray(0 to 2) := (0 => 1,1 => 1,2 => 1);
    constant place_markings: IntegerArray(0 to 2)  := (0 => 0,1 => 1,2 => 0);
    constant place_delays: IntegerArray(0 to 2) := (0 => 0,1 => 1,2 => 0);
    constant joinName: string(1 to 32) := "out_buffer_write_req_symbol_join"; 
    signal preds: BooleanArray(1 to 3); -- 
  begin -- 
    preds <= inp_daemon_CP_3_symbol & out_buffer_write_ack_symbol & tag_ilock_read_ack_symbol;
    gj_out_buffer_write_req_symbol_join : generic_join generic map(name => joinName, number_of_predecessors => 3, place_capacities => place_capacities, place_markings => place_markings, place_delays => place_delays) -- 
      port map(preds => preds, symbol_out => out_buffer_write_req_symbol, clk => clk, reset => reset); --
  end block;
  -- write-to output-buffer produces  reenable input sampling
  input_sample_reenable_symbol <= out_buffer_write_ack_symbol;
  -- fin-req/ack level protocol..
  out_buffer_read_req <= fin_req;
  fin_ack <= out_buffer_read_ack;
  ----- tag-queue --------------------------------------------------
  -- interlock buffer for TAG.. to provide required buffering.
  tagIlock: InterlockBuffer -- 
    generic map(name => "tag-interlock-buffer", -- 
      buffer_size => 1,
      bypass_flag => false,
      in_data_width => tag_length,
      out_data_width => tag_length) -- 
    port map(write_req => tag_ilock_write_req_symbol, -- 
      write_ack => tag_ilock_write_ack_symbol, 
      write_data => tag_ub_out,
      read_req => tag_ilock_read_req_symbol, 
      read_ack => tag_ilock_read_ack_symbol, 
      read_data => tag_ilock_out, 
      clk => clk, reset => reset); -- 
  -- tag ilock-buffer control logic. 
  tag_ilock_write_req_symbol_join: block -- 
    constant place_capacities: IntegerArray(0 to 1) := (0 => 1,1 => 1);
    constant place_markings: IntegerArray(0 to 1)  := (0 => 0,1 => 1);
    constant place_delays: IntegerArray(0 to 1) := (0 => 0,1 => 1);
    constant joinName: string(1 to 31) := "tag_ilock_write_req_symbol_join"; 
    signal preds: BooleanArray(1 to 2); -- 
  begin -- 
    preds <= inp_daemon_CP_3_start & tag_ilock_write_ack_symbol;
    gj_tag_ilock_write_req_symbol_join : generic_join generic map(name => joinName, number_of_predecessors => 2, place_capacities => place_capacities, place_markings => place_markings, place_delays => place_delays) -- 
      port map(preds => preds, symbol_out => tag_ilock_write_req_symbol, clk => clk, reset => reset); --
  end block;
  tag_ilock_read_req_symbol_join: block -- 
    constant place_capacities: IntegerArray(0 to 2) := (0 => 1,1 => 1,2 => 1);
    constant place_markings: IntegerArray(0 to 2)  := (0 => 0,1 => 1,2 => 1);
    constant place_delays: IntegerArray(0 to 2) := (0 => 0,1 => 0,2 => 0);
    constant joinName: string(1 to 30) := "tag_ilock_read_req_symbol_join"; 
    signal preds: BooleanArray(1 to 3); -- 
  begin -- 
    preds <= inp_daemon_CP_3_start & tag_ilock_read_ack_symbol & out_buffer_write_ack_symbol;
    gj_tag_ilock_read_req_symbol_join : generic_join generic map(name => joinName, number_of_predecessors => 3, place_capacities => place_capacities, place_markings => place_markings, place_delays => place_delays) -- 
      port map(preds => preds, symbol_out => tag_ilock_read_req_symbol, clk => clk, reset => reset); --
  end block;
  -- the control path --------------------------------------------------
  always_true_symbol <= true; 
  default_zero_sig <= '0';
  inp_daemon_CP_3: Block -- control-path 
    signal inp_daemon_CP_3_elements: BooleanArray(20 downto 0);
    -- 
  begin -- 
    inp_daemon_CP_3_elements(0) <= inp_daemon_CP_3_start;
    inp_daemon_CP_3_symbol <= inp_daemon_CP_3_elements(1);
    -- CP-element group 0:  transition  place  bypass 
    -- CP-element group 0: predecessors 
    -- CP-element group 0: successors 
    -- CP-element group 0: 	2 
    -- CP-element group 0:  members (4) 
      -- CP-element group 0: 	 $entry
      -- CP-element group 0: 	 branch_block_stmt_8/$entry
      -- CP-element group 0: 	 branch_block_stmt_8/branch_block_stmt_8__entry__
      -- CP-element group 0: 	 branch_block_stmt_8/do_while_stmt_9__entry__
      -- 
    -- CP-element group 1:  transition  place  bypass 
    -- CP-element group 1: predecessors 
    -- CP-element group 1: 	20 
    -- CP-element group 1: successors 
    -- CP-element group 1:  members (4) 
      -- CP-element group 1: 	 $exit
      -- CP-element group 1: 	 branch_block_stmt_8/$exit
      -- CP-element group 1: 	 branch_block_stmt_8/branch_block_stmt_8__exit__
      -- CP-element group 1: 	 branch_block_stmt_8/do_while_stmt_9__exit__
      -- 
    inp_daemon_CP_3_elements(1) <= inp_daemon_CP_3_elements(20);
    -- CP-element group 2:  transition  place  bypass  pipeline-parent 
    -- CP-element group 2: predecessors 
    -- CP-element group 2: 	0 
    -- CP-element group 2: successors 
    -- CP-element group 2: 	8 
    -- CP-element group 2:  members (2) 
      -- CP-element group 2: 	 branch_block_stmt_8/do_while_stmt_9/$entry
      -- CP-element group 2: 	 branch_block_stmt_8/do_while_stmt_9/do_while_stmt_9__entry__
      -- 
    inp_daemon_CP_3_elements(2) <= inp_daemon_CP_3_elements(0);
    -- CP-element group 3:  merge  place  bypass  pipeline-parent 
    -- CP-element group 3: predecessors 
    -- CP-element group 3: successors 
    -- CP-element group 3: 	20 
    -- CP-element group 3:  members (1) 
      -- CP-element group 3: 	 branch_block_stmt_8/do_while_stmt_9/do_while_stmt_9__exit__
      -- 
    -- Element group inp_daemon_CP_3_elements(3) is bound as output of CP function.
    -- CP-element group 4:  merge  place  bypass  pipeline-parent 
    -- CP-element group 4: predecessors 
    -- CP-element group 4: successors 
    -- CP-element group 4: 	7 
    -- CP-element group 4:  members (1) 
      -- CP-element group 4: 	 branch_block_stmt_8/do_while_stmt_9/loop_back
      -- 
    -- Element group inp_daemon_CP_3_elements(4) is bound as output of CP function.
    -- CP-element group 5:  branch  transition  place  bypass  pipeline-parent 
    -- CP-element group 5: predecessors 
    -- CP-element group 5: 	17 
    -- CP-element group 5: successors 
    -- CP-element group 5: 	19 
    -- CP-element group 5: 	18 
    -- CP-element group 5:  members (3) 
      -- CP-element group 5: 	 branch_block_stmt_8/do_while_stmt_9/condition_done
      -- CP-element group 5: 	 branch_block_stmt_8/do_while_stmt_9/loop_exit/$entry
      -- CP-element group 5: 	 branch_block_stmt_8/do_while_stmt_9/loop_taken/$entry
      -- 
    inp_daemon_CP_3_elements(5) <= inp_daemon_CP_3_elements(17);
    -- CP-element group 6:  branch  place  bypass  pipeline-parent 
    -- CP-element group 6: predecessors 
    -- CP-element group 6: 	16 
    -- CP-element group 6: successors 
    -- CP-element group 6:  members (1) 
      -- CP-element group 6: 	 branch_block_stmt_8/do_while_stmt_9/loop_body_done
      -- 
    inp_daemon_CP_3_elements(6) <= inp_daemon_CP_3_elements(16);
    -- CP-element group 7:  transition  bypass  pipeline-parent 
    -- CP-element group 7: predecessors 
    -- CP-element group 7: 	4 
    -- CP-element group 7: successors 
    -- CP-element group 7:  members (1) 
      -- CP-element group 7: 	 branch_block_stmt_8/do_while_stmt_9/do_while_stmt_9_loop_body/back_edge_to_loop_body
      -- 
    inp_daemon_CP_3_elements(7) <= inp_daemon_CP_3_elements(4);
    -- CP-element group 8:  transition  bypass  pipeline-parent 
    -- CP-element group 8: predecessors 
    -- CP-element group 8: 	2 
    -- CP-element group 8: successors 
    -- CP-element group 8:  members (1) 
      -- CP-element group 8: 	 branch_block_stmt_8/do_while_stmt_9/do_while_stmt_9_loop_body/first_time_through_loop_body
      -- 
    inp_daemon_CP_3_elements(8) <= inp_daemon_CP_3_elements(2);
    -- CP-element group 9:  fork  transition  bypass  pipeline-parent 
    -- CP-element group 9: predecessors 
    -- CP-element group 9: successors 
    -- CP-element group 9: 	10 
    -- CP-element group 9: 	17 
    -- CP-element group 9:  members (2) 
      -- CP-element group 9: 	 branch_block_stmt_8/do_while_stmt_9/do_while_stmt_9_loop_body/$entry
      -- CP-element group 9: 	 branch_block_stmt_8/do_while_stmt_9/do_while_stmt_9_loop_body/loop_body_start
      -- 
    -- Element group inp_daemon_CP_3_elements(9) is bound as output of CP function.
    -- CP-element group 10:  join  transition  output  bypass  pipeline-parent 
    -- CP-element group 10: predecessors 
    -- CP-element group 10: 	9 
    -- CP-element group 10: marked-predecessors 
    -- CP-element group 10: 	13 
    -- CP-element group 10: successors 
    -- CP-element group 10: 	12 
    -- CP-element group 10:  members (3) 
      -- CP-element group 10: 	 branch_block_stmt_8/do_while_stmt_9/do_while_stmt_9_loop_body/RPIPE_inp_12_sample_start_
      -- CP-element group 10: 	 branch_block_stmt_8/do_while_stmt_9/do_while_stmt_9_loop_body/RPIPE_inp_12_Sample/$entry
      -- CP-element group 10: 	 branch_block_stmt_8/do_while_stmt_9/do_while_stmt_9_loop_body/RPIPE_inp_12_Sample/rr
      -- 
    rr_36_symbol_link_to_dp: control_delay_element -- 
      generic map(name => " rr_36_symbol_delay",delay_value => 0)
      port map(clk => clk, reset => reset, req => inp_daemon_CP_3_elements(10), ack => RPIPE_inp_12_inst_req_0); -- 
    inp_daemon_cp_element_group_10: block -- 
      constant place_capacities: IntegerArray(0 to 1) := (0 => 10,1 => 1);
      constant place_markings: IntegerArray(0 to 1)  := (0 => 0,1 => 1);
      constant place_delays: IntegerArray(0 to 1) := (0 => 0,1 => 0);
      constant joinName: string(1 to 30) := "inp_daemon_cp_element_group_10"; 
      signal preds: BooleanArray(1 to 2); -- 
    begin -- 
      preds <= inp_daemon_CP_3_elements(9) & inp_daemon_CP_3_elements(13);
      gj_inp_daemon_cp_element_group_10 : generic_join generic map(name => joinName, number_of_predecessors => 2, place_capacities => place_capacities, place_markings => place_markings, place_delays => place_delays) -- 
        port map(preds => preds, symbol_out => inp_daemon_CP_3_elements(10), clk => clk, reset => reset); --
    end block;
    -- CP-element group 11:  join  transition  output  bypass  pipeline-parent 
    -- CP-element group 11: predecessors 
    -- CP-element group 11: 	12 
    -- CP-element group 11: marked-predecessors 
    -- CP-element group 11: 	15 
    -- CP-element group 11: successors 
    -- CP-element group 11: 	13 
    -- CP-element group 11:  members (3) 
      -- CP-element group 11: 	 branch_block_stmt_8/do_while_stmt_9/do_while_stmt_9_loop_body/RPIPE_inp_12_update_start_
      -- CP-element group 11: 	 branch_block_stmt_8/do_while_stmt_9/do_while_stmt_9_loop_body/RPIPE_inp_12_Update/$entry
      -- CP-element group 11: 	 branch_block_stmt_8/do_while_stmt_9/do_while_stmt_9_loop_body/RPIPE_inp_12_Update/cr
      -- 
    cr_41_symbol_link_to_dp: control_delay_element -- 
      generic map(name => " cr_41_symbol_delay",delay_value => 0)
      port map(clk => clk, reset => reset, req => inp_daemon_CP_3_elements(11), ack => RPIPE_inp_12_inst_req_1); -- 
    inp_daemon_cp_element_group_11: block -- 
      constant place_capacities: IntegerArray(0 to 1) := (0 => 1,1 => 1);
      constant place_markings: IntegerArray(0 to 1)  := (0 => 0,1 => 1);
      constant place_delays: IntegerArray(0 to 1) := (0 => 0,1 => 0);
      constant joinName: string(1 to 30) := "inp_daemon_cp_element_group_11"; 
      signal preds: BooleanArray(1 to 2); -- 
    begin -- 
      preds <= inp_daemon_CP_3_elements(12) & inp_daemon_CP_3_elements(15);
      gj_inp_daemon_cp_element_group_11 : generic_join generic map(name => joinName, number_of_predecessors => 2, place_capacities => place_capacities, place_markings => place_markings, place_delays => place_delays) -- 
        port map(preds => preds, symbol_out => inp_daemon_CP_3_elements(11), clk => clk, reset => reset); --
    end block;
    -- CP-element group 12:  transition  input  bypass  pipeline-parent 
    -- CP-element group 12: predecessors 
    -- CP-element group 12: 	10 
    -- CP-element group 12: successors 
    -- CP-element group 12: 	11 
    -- CP-element group 12:  members (3) 
      -- CP-element group 12: 	 branch_block_stmt_8/do_while_stmt_9/do_while_stmt_9_loop_body/RPIPE_inp_12_sample_completed_
      -- CP-element group 12: 	 branch_block_stmt_8/do_while_stmt_9/do_while_stmt_9_loop_body/RPIPE_inp_12_Sample/$exit
      -- CP-element group 12: 	 branch_block_stmt_8/do_while_stmt_9/do_while_stmt_9_loop_body/RPIPE_inp_12_Sample/ra
      -- 
    ra_37_symbol_link_from_dp: control_delay_element -- 
      generic map(name => " 12_delay",delay_value => 0)
      port map(clk => clk, reset => reset, req => RPIPE_inp_12_inst_ack_0, ack => inp_daemon_CP_3_elements(12)); -- 
    -- CP-element group 13:  fork  transition  input  bypass  pipeline-parent 
    -- CP-element group 13: predecessors 
    -- CP-element group 13: 	11 
    -- CP-element group 13: successors 
    -- CP-element group 13: 	14 
    -- CP-element group 13: marked-successors 
    -- CP-element group 13: 	10 
    -- CP-element group 13:  members (3) 
      -- CP-element group 13: 	 branch_block_stmt_8/do_while_stmt_9/do_while_stmt_9_loop_body/RPIPE_inp_12_update_completed_
      -- CP-element group 13: 	 branch_block_stmt_8/do_while_stmt_9/do_while_stmt_9_loop_body/RPIPE_inp_12_Update/$exit
      -- CP-element group 13: 	 branch_block_stmt_8/do_while_stmt_9/do_while_stmt_9_loop_body/RPIPE_inp_12_Update/ca
      -- 
    ca_42_symbol_link_from_dp: control_delay_element -- 
      generic map(name => " 13_delay",delay_value => 0)
      port map(clk => clk, reset => reset, req => RPIPE_inp_12_inst_ack_1, ack => inp_daemon_CP_3_elements(13)); -- 
    -- CP-element group 14:  join  transition  output  bypass  pipeline-parent 
    -- CP-element group 14: predecessors 
    -- CP-element group 14: 	13 
    -- CP-element group 14: marked-predecessors 
    -- CP-element group 14: 	16 
    -- CP-element group 14: successors 
    -- CP-element group 14: 	15 
    -- CP-element group 14:  members (3) 
      -- CP-element group 14: 	 branch_block_stmt_8/do_while_stmt_9/do_while_stmt_9_loop_body/WPIPE_dTx_11_sample_start_
      -- CP-element group 14: 	 branch_block_stmt_8/do_while_stmt_9/do_while_stmt_9_loop_body/WPIPE_dTx_11_Sample/$entry
      -- CP-element group 14: 	 branch_block_stmt_8/do_while_stmt_9/do_while_stmt_9_loop_body/WPIPE_dTx_11_Sample/req
      -- 
    req_50_symbol_link_to_dp: control_delay_element -- 
      generic map(name => " req_50_symbol_delay",delay_value => 0)
      port map(clk => clk, reset => reset, req => inp_daemon_CP_3_elements(14), ack => WPIPE_dTx_11_inst_req_0); -- 
    inp_daemon_cp_element_group_14: block -- 
      constant place_capacities: IntegerArray(0 to 1) := (0 => 1,1 => 1);
      constant place_markings: IntegerArray(0 to 1)  := (0 => 0,1 => 1);
      constant place_delays: IntegerArray(0 to 1) := (0 => 0,1 => 0);
      constant joinName: string(1 to 30) := "inp_daemon_cp_element_group_14"; 
      signal preds: BooleanArray(1 to 2); -- 
    begin -- 
      preds <= inp_daemon_CP_3_elements(13) & inp_daemon_CP_3_elements(16);
      gj_inp_daemon_cp_element_group_14 : generic_join generic map(name => joinName, number_of_predecessors => 2, place_capacities => place_capacities, place_markings => place_markings, place_delays => place_delays) -- 
        port map(preds => preds, symbol_out => inp_daemon_CP_3_elements(14), clk => clk, reset => reset); --
    end block;
    -- CP-element group 15:  fork  transition  input  output  bypass  pipeline-parent 
    -- CP-element group 15: predecessors 
    -- CP-element group 15: 	14 
    -- CP-element group 15: successors 
    -- CP-element group 15: 	16 
    -- CP-element group 15: marked-successors 
    -- CP-element group 15: 	11 
    -- CP-element group 15:  members (6) 
      -- CP-element group 15: 	 branch_block_stmt_8/do_while_stmt_9/do_while_stmt_9_loop_body/WPIPE_dTx_11_sample_completed_
      -- CP-element group 15: 	 branch_block_stmt_8/do_while_stmt_9/do_while_stmt_9_loop_body/WPIPE_dTx_11_update_start_
      -- CP-element group 15: 	 branch_block_stmt_8/do_while_stmt_9/do_while_stmt_9_loop_body/WPIPE_dTx_11_Sample/$exit
      -- CP-element group 15: 	 branch_block_stmt_8/do_while_stmt_9/do_while_stmt_9_loop_body/WPIPE_dTx_11_Sample/ack
      -- CP-element group 15: 	 branch_block_stmt_8/do_while_stmt_9/do_while_stmt_9_loop_body/WPIPE_dTx_11_Update/$entry
      -- CP-element group 15: 	 branch_block_stmt_8/do_while_stmt_9/do_while_stmt_9_loop_body/WPIPE_dTx_11_Update/req
      -- 
    ack_51_symbol_link_from_dp: control_delay_element -- 
      generic map(name => " 15_delay",delay_value => 0)
      port map(clk => clk, reset => reset, req => WPIPE_dTx_11_inst_ack_0, ack => inp_daemon_CP_3_elements(15)); -- 
    req_55_symbol_link_to_dp: control_delay_element -- 
      generic map(name => " req_55_symbol_delay",delay_value => 0)
      port map(clk => clk, reset => reset, req => inp_daemon_CP_3_elements(15), ack => WPIPE_dTx_11_inst_req_1); -- 
    -- CP-element group 16:  fork  transition  input  bypass  pipeline-parent 
    -- CP-element group 16: predecessors 
    -- CP-element group 16: 	15 
    -- CP-element group 16: successors 
    -- CP-element group 16: 	6 
    -- CP-element group 16: marked-successors 
    -- CP-element group 16: 	14 
    -- CP-element group 16:  members (4) 
      -- CP-element group 16: 	 branch_block_stmt_8/do_while_stmt_9/do_while_stmt_9_loop_body/$exit
      -- CP-element group 16: 	 branch_block_stmt_8/do_while_stmt_9/do_while_stmt_9_loop_body/WPIPE_dTx_11_update_completed_
      -- CP-element group 16: 	 branch_block_stmt_8/do_while_stmt_9/do_while_stmt_9_loop_body/WPIPE_dTx_11_Update/$exit
      -- CP-element group 16: 	 branch_block_stmt_8/do_while_stmt_9/do_while_stmt_9_loop_body/WPIPE_dTx_11_Update/ack
      -- 
    ack_56_symbol_link_from_dp: control_delay_element -- 
      generic map(name => " 16_delay",delay_value => 0)
      port map(clk => clk, reset => reset, req => WPIPE_dTx_11_inst_ack_1, ack => inp_daemon_CP_3_elements(16)); -- 
    -- CP-element group 17:  transition  output  delay-element  bypass  pipeline-parent 
    -- CP-element group 17: predecessors 
    -- CP-element group 17: 	9 
    -- CP-element group 17: successors 
    -- CP-element group 17: 	5 
    -- CP-element group 17:  members (2) 
      -- CP-element group 17: 	 branch_block_stmt_8/do_while_stmt_9/do_while_stmt_9_loop_body/condition_evaluated
      -- CP-element group 17: 	 branch_block_stmt_8/do_while_stmt_9/do_while_stmt_9_loop_body/loop_body_delay_to_condition_start
      -- 
    condition_evaluated_27_symbol_link_to_dp: control_delay_element -- 
      generic map(name => " condition_evaluated_27_symbol_delay",delay_value => 0)
      port map(clk => clk, reset => reset, req => inp_daemon_CP_3_elements(17), ack => do_while_stmt_9_branch_req_0); -- 
    -- Element group inp_daemon_CP_3_elements(17) is a control-delay.
    cp_element_17_delay: control_delay_element  generic map(name => " 17_delay", delay_value => 1)  port map(req => inp_daemon_CP_3_elements(9), ack => inp_daemon_CP_3_elements(17), clk => clk, reset =>reset);
    -- CP-element group 18:  transition  input  bypass  pipeline-parent 
    -- CP-element group 18: predecessors 
    -- CP-element group 18: 	5 
    -- CP-element group 18: successors 
    -- CP-element group 18:  members (2) 
      -- CP-element group 18: 	 branch_block_stmt_8/do_while_stmt_9/loop_exit/$exit
      -- CP-element group 18: 	 branch_block_stmt_8/do_while_stmt_9/loop_exit/ack
      -- 
    ack_61_symbol_link_from_dp: control_delay_element -- 
      generic map(name => " 18_delay",delay_value => 0)
      port map(clk => clk, reset => reset, req => do_while_stmt_9_branch_ack_0, ack => inp_daemon_CP_3_elements(18)); -- 
    -- CP-element group 19:  transition  input  bypass  pipeline-parent 
    -- CP-element group 19: predecessors 
    -- CP-element group 19: 	5 
    -- CP-element group 19: successors 
    -- CP-element group 19:  members (2) 
      -- CP-element group 19: 	 branch_block_stmt_8/do_while_stmt_9/loop_taken/$exit
      -- CP-element group 19: 	 branch_block_stmt_8/do_while_stmt_9/loop_taken/ack
      -- 
    ack_65_symbol_link_from_dp: control_delay_element -- 
      generic map(name => " 19_delay",delay_value => 0)
      port map(clk => clk, reset => reset, req => do_while_stmt_9_branch_ack_1, ack => inp_daemon_CP_3_elements(19)); -- 
    -- CP-element group 20:  transition  bypass  pipeline-parent 
    -- CP-element group 20: predecessors 
    -- CP-element group 20: 	3 
    -- CP-element group 20: successors 
    -- CP-element group 20: 	1 
    -- CP-element group 20:  members (1) 
      -- CP-element group 20: 	 branch_block_stmt_8/do_while_stmt_9/$exit
      -- 
    inp_daemon_CP_3_elements(20) <= inp_daemon_CP_3_elements(3);
    inp_daemon_do_while_stmt_9_terminator_66: loop_terminator -- 
      generic map (name => " inp_daemon_do_while_stmt_9_terminator_66", max_iterations_in_flight =>10) 
      port map(loop_body_exit => inp_daemon_CP_3_elements(6),loop_continue => inp_daemon_CP_3_elements(19),loop_terminate => inp_daemon_CP_3_elements(18),loop_back => inp_daemon_CP_3_elements(4),loop_exit => inp_daemon_CP_3_elements(3),clk => clk, reset => reset); -- 
    entry_tmerge_28_block : block -- 
      signal preds : BooleanArray(0 to 1);
      begin -- 
        preds(0)  <= inp_daemon_CP_3_elements(7);
        preds(1)  <= inp_daemon_CP_3_elements(8);
        entry_tmerge_28 : transition_merge -- 
          generic map(name => " entry_tmerge_28")
          port map (preds => preds, symbol_out => inp_daemon_CP_3_elements(9));
          -- 
    end block;
    --  hookup: inputs to control-path 
    -- hookup: output from control-path 
    -- 
  end Block; -- control-path
  -- the data path
  data_path: Block -- 
    signal RPIPE_inp_12_wire : std_logic_vector(0 downto 0);
    signal konst_15_wire_constant : std_logic_vector(0 downto 0);
    -- 
  begin -- 
    konst_15_wire_constant <= "1";
    do_while_stmt_9_branch: Block -- 
      -- branch-block
      signal condition_sig : std_logic_vector(0 downto 0);
      begin 
      condition_sig <= konst_15_wire_constant;
      branch_instance: BranchBase -- 
        generic map( name => "do_while_stmt_9_branch", condition_width => 1,  bypass_flag => true)
        port map( -- 
          condition => condition_sig,
          req => do_while_stmt_9_branch_req_0,
          ack0 => do_while_stmt_9_branch_ack_0,
          ack1 => do_while_stmt_9_branch_ack_1,
          clk => clk,
          reset => reset); -- 
      --
    end Block; -- branch-block
    -- shared inport operator group (0) : RPIPE_inp_12_inst 
    InportGroup_0: Block -- 
      signal data_out: std_logic_vector(0 downto 0);
      signal reqL, ackL, reqR, ackR : BooleanArray( 0 downto 0);
      signal reqL_unguarded, ackL_unguarded : BooleanArray( 0 downto 0);
      signal reqR_unguarded, ackR_unguarded : BooleanArray( 0 downto 0);
      signal guard_vector : std_logic_vector( 0 downto 0);
      constant outBUFs : IntegerArray(0 downto 0) := (0 => 1);
      constant guardFlags : BooleanArray(0 downto 0) := (0 => false);
      constant guardBuffering: IntegerArray(0 downto 0)  := (0 => 2);
      -- 
    begin -- 
      reqL_unguarded(0) <= RPIPE_inp_12_inst_req_0;
      RPIPE_inp_12_inst_ack_0 <= ackL_unguarded(0);
      reqR_unguarded(0) <= RPIPE_inp_12_inst_req_1;
      RPIPE_inp_12_inst_ack_1 <= ackR_unguarded(0);
      guard_vector(0)  <=  '1';
      RPIPE_inp_12_wire <= data_out(0 downto 0);
      inp_read_0_gI: SplitGuardInterface generic map(name => "inp_read_0_gI", nreqs => 1, buffering => guardBuffering, use_guards => guardFlags,  sample_only => false,  update_only => true) -- 
        port map(clk => clk, reset => reset,
        sr_in => reqL_unguarded,
        sr_out => reqL,
        sa_in => ackL,
        sa_out => ackL_unguarded,
        cr_in => reqR_unguarded,
        cr_out => reqR,
        ca_in => ackR,
        ca_out => ackR_unguarded,
        guards => guard_vector); -- 
      inp_read_0: InputPortRevised -- 
        generic map ( name => "inp_read_0", data_width => 1,  num_reqs => 1,  output_buffering => outBUFs,   nonblocking_read_flag => False,  no_arbitration => false)
        port map (-- 
          sample_req => reqL , 
          sample_ack => ackL, 
          update_req => reqR, 
          update_ack => ackR, 
          data => data_out, 
          oreq => inp_pipe_read_req(0),
          oack => inp_pipe_read_ack(0),
          odata => inp_pipe_read_data(0 downto 0),
          clk => clk, reset => reset -- 
        ); -- 
      -- 
    end Block; -- inport group 0
    -- shared outport operator group (0) : WPIPE_dTx_11_inst 
    OutportGroup_0: Block -- 
      signal data_in: std_logic_vector(0 downto 0);
      signal sample_req, sample_ack : BooleanArray( 0 downto 0);
      signal update_req, update_ack : BooleanArray( 0 downto 0);
      signal sample_req_unguarded, sample_ack_unguarded : BooleanArray( 0 downto 0);
      signal update_req_unguarded, update_ack_unguarded : BooleanArray( 0 downto 0);
      signal guard_vector : std_logic_vector( 0 downto 0);
      constant inBUFs : IntegerArray(0 downto 0) := (0 => 0);
      constant guardFlags : BooleanArray(0 downto 0) := (0 => false);
      constant guardBuffering: IntegerArray(0 downto 0)  := (0 => 2);
      -- 
    begin -- 
      sample_req_unguarded(0) <= WPIPE_dTx_11_inst_req_0;
      WPIPE_dTx_11_inst_ack_0 <= sample_ack_unguarded(0);
      update_req_unguarded(0) <= WPIPE_dTx_11_inst_req_1;
      WPIPE_dTx_11_inst_ack_1 <= update_ack_unguarded(0);
      guard_vector(0)  <=  '1';
      data_in <= RPIPE_inp_12_wire;
      dTx_write_0_gI: SplitGuardInterface generic map(name => "dTx_write_0_gI", nreqs => 1, buffering => guardBuffering, use_guards => guardFlags,  sample_only => true,  update_only => false) -- 
        port map(clk => clk, reset => reset,
        sr_in => sample_req_unguarded,
        sr_out => sample_req,
        sa_in => sample_ack,
        sa_out => sample_ack_unguarded,
        cr_in => update_req_unguarded,
        cr_out => update_req,
        ca_in => update_ack,
        ca_out => update_ack_unguarded,
        guards => guard_vector); -- 
      dTx_write_0: OutputPortRevised -- 
        generic map ( name => "dTx", data_width => 1, num_reqs => 1, input_buffering => inBUFs, full_rate => true,
        no_arbitration => false)
        port map (--
          sample_req => sample_req , 
          sample_ack => sample_ack , 
          update_req => update_req , 
          update_ack => update_ack , 
          data => data_in, 
          oreq => dTx_pipe_write_req(0),
          oack => dTx_pipe_write_ack(0),
          odata => dTx_pipe_write_data(0 downto 0),
          clk => clk, reset => reset -- 
        );-- 
      -- 
    end Block; -- outport group 0
    -- 
  end Block; -- data_path
  -- 
end inp_daemon_arch;
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
use work.converter_global_package.all;
entity outp_daemon is -- 
  generic (tag_length : integer); 
  port ( -- 
    dTx_pipe_read_req : out  std_logic_vector(0 downto 0);
    dTx_pipe_read_ack : in   std_logic_vector(0 downto 0);
    dTx_pipe_read_data : in   std_logic_vector(0 downto 0);
    outp_pipe_write_req : out  std_logic_vector(0 downto 0);
    outp_pipe_write_ack : in   std_logic_vector(0 downto 0);
    outp_pipe_write_data : out  std_logic_vector(0 downto 0);
    tag_in: in std_logic_vector(tag_length-1 downto 0);
    tag_out: out std_logic_vector(tag_length-1 downto 0) ;
    clk : in std_logic;
    reset : in std_logic;
    start_req : in std_logic;
    start_ack : out std_logic;
    fin_req : in std_logic;
    fin_ack   : out std_logic-- 
  );
  -- 
end entity outp_daemon;
architecture outp_daemon_arch of outp_daemon is -- 
  -- always true...
  signal always_true_symbol: Boolean;
  signal in_buffer_data_in, in_buffer_data_out: std_logic_vector((tag_length + 0)-1 downto 0);
  signal default_zero_sig: std_logic;
  signal in_buffer_write_req: std_logic;
  signal in_buffer_write_ack: std_logic;
  signal in_buffer_unload_req_symbol: Boolean;
  signal in_buffer_unload_ack_symbol: Boolean;
  signal out_buffer_data_in, out_buffer_data_out: std_logic_vector((tag_length + 0)-1 downto 0);
  signal out_buffer_read_req: std_logic;
  signal out_buffer_read_ack: std_logic;
  signal out_buffer_write_req_symbol: Boolean;
  signal out_buffer_write_ack_symbol: Boolean;
  signal tag_ub_out, tag_ilock_out: std_logic_vector(tag_length-1 downto 0);
  signal tag_push_req, tag_push_ack, tag_pop_req, tag_pop_ack: std_logic;
  signal tag_unload_req_symbol, tag_unload_ack_symbol, tag_write_req_symbol, tag_write_ack_symbol: Boolean;
  signal tag_ilock_write_req_symbol, tag_ilock_write_ack_symbol, tag_ilock_read_req_symbol, tag_ilock_read_ack_symbol: Boolean;
  signal start_req_sig, fin_req_sig, start_ack_sig, fin_ack_sig: std_logic; 
  signal input_sample_reenable_symbol: Boolean;
  -- input port buffer signals
  -- output port buffer signals
  signal outp_daemon_CP_67_start: Boolean;
  signal outp_daemon_CP_67_symbol: Boolean;
  -- volatile/operator module components. 
  -- links between control-path and data-path
  signal do_while_stmt_20_branch_req_0 : boolean;
  signal RPIPE_dTx_23_inst_req_0 : boolean;
  signal RPIPE_dTx_23_inst_ack_0 : boolean;
  signal RPIPE_dTx_23_inst_req_1 : boolean;
  signal RPIPE_dTx_23_inst_ack_1 : boolean;
  signal WPIPE_outp_22_inst_req_0 : boolean;
  signal WPIPE_outp_22_inst_ack_0 : boolean;
  signal WPIPE_outp_22_inst_req_1 : boolean;
  signal WPIPE_outp_22_inst_ack_1 : boolean;
  signal do_while_stmt_20_branch_ack_0 : boolean;
  signal do_while_stmt_20_branch_ack_1 : boolean;
  -- 
begin --  
  -- input handling ------------------------------------------------
  in_buffer: UnloadBuffer -- 
    generic map(name => "outp_daemon_input_buffer", -- 
      buffer_size => 1,
      bypass_flag => false,
      data_width => tag_length + 0) -- 
    port map(write_req => in_buffer_write_req, -- 
      write_ack => in_buffer_write_ack, 
      write_data => in_buffer_data_in,
      unload_req => in_buffer_unload_req_symbol, 
      unload_ack => in_buffer_unload_ack_symbol, 
      read_data => in_buffer_data_out,
      clk => clk, reset => reset); -- 
  in_buffer_data_in(tag_length-1 downto 0) <= tag_in;
  tag_ub_out <= in_buffer_data_out(tag_length-1 downto 0);
  in_buffer_write_req <= start_req;
  start_ack <= in_buffer_write_ack;
  in_buffer_unload_req_symbol_join: block -- 
    constant place_capacities: IntegerArray(0 to 1) := (0 => 1,1 => 1);
    constant place_markings: IntegerArray(0 to 1)  := (0 => 1,1 => 1);
    constant place_delays: IntegerArray(0 to 1) := (0 => 0,1 => 1);
    constant joinName: string(1 to 32) := "in_buffer_unload_req_symbol_join"; 
    signal preds: BooleanArray(1 to 2); -- 
  begin -- 
    preds <= in_buffer_unload_ack_symbol & input_sample_reenable_symbol;
    gj_in_buffer_unload_req_symbol_join : generic_join generic map(name => joinName, number_of_predecessors => 2, place_capacities => place_capacities, place_markings => place_markings, place_delays => place_delays) -- 
      port map(preds => preds, symbol_out => in_buffer_unload_req_symbol, clk => clk, reset => reset); --
  end block;
  -- join of all unload_ack_symbols.. used to trigger CP.
  outp_daemon_CP_67_start <= in_buffer_unload_ack_symbol;
  -- output handling  -------------------------------------------------------
  out_buffer: ReceiveBuffer -- 
    generic map(name => "outp_daemon_out_buffer", -- 
      buffer_size => 1,
      full_rate => false,
      data_width => tag_length + 0) --
    port map(write_req => out_buffer_write_req_symbol, -- 
      write_ack => out_buffer_write_ack_symbol, 
      write_data => out_buffer_data_in,
      read_req => out_buffer_read_req, 
      read_ack => out_buffer_read_ack, 
      read_data => out_buffer_data_out,
      clk => clk, reset => reset); -- 
  out_buffer_data_in(tag_length-1 downto 0) <= tag_ilock_out;
  tag_out <= out_buffer_data_out(tag_length-1 downto 0);
  out_buffer_write_req_symbol_join: block -- 
    constant place_capacities: IntegerArray(0 to 2) := (0 => 1,1 => 1,2 => 1);
    constant place_markings: IntegerArray(0 to 2)  := (0 => 0,1 => 1,2 => 0);
    constant place_delays: IntegerArray(0 to 2) := (0 => 0,1 => 1,2 => 0);
    constant joinName: string(1 to 32) := "out_buffer_write_req_symbol_join"; 
    signal preds: BooleanArray(1 to 3); -- 
  begin -- 
    preds <= outp_daemon_CP_67_symbol & out_buffer_write_ack_symbol & tag_ilock_read_ack_symbol;
    gj_out_buffer_write_req_symbol_join : generic_join generic map(name => joinName, number_of_predecessors => 3, place_capacities => place_capacities, place_markings => place_markings, place_delays => place_delays) -- 
      port map(preds => preds, symbol_out => out_buffer_write_req_symbol, clk => clk, reset => reset); --
  end block;
  -- write-to output-buffer produces  reenable input sampling
  input_sample_reenable_symbol <= out_buffer_write_ack_symbol;
  -- fin-req/ack level protocol..
  out_buffer_read_req <= fin_req;
  fin_ack <= out_buffer_read_ack;
  ----- tag-queue --------------------------------------------------
  -- interlock buffer for TAG.. to provide required buffering.
  tagIlock: InterlockBuffer -- 
    generic map(name => "tag-interlock-buffer", -- 
      buffer_size => 1,
      bypass_flag => false,
      in_data_width => tag_length,
      out_data_width => tag_length) -- 
    port map(write_req => tag_ilock_write_req_symbol, -- 
      write_ack => tag_ilock_write_ack_symbol, 
      write_data => tag_ub_out,
      read_req => tag_ilock_read_req_symbol, 
      read_ack => tag_ilock_read_ack_symbol, 
      read_data => tag_ilock_out, 
      clk => clk, reset => reset); -- 
  -- tag ilock-buffer control logic. 
  tag_ilock_write_req_symbol_join: block -- 
    constant place_capacities: IntegerArray(0 to 1) := (0 => 1,1 => 1);
    constant place_markings: IntegerArray(0 to 1)  := (0 => 0,1 => 1);
    constant place_delays: IntegerArray(0 to 1) := (0 => 0,1 => 1);
    constant joinName: string(1 to 31) := "tag_ilock_write_req_symbol_join"; 
    signal preds: BooleanArray(1 to 2); -- 
  begin -- 
    preds <= outp_daemon_CP_67_start & tag_ilock_write_ack_symbol;
    gj_tag_ilock_write_req_symbol_join : generic_join generic map(name => joinName, number_of_predecessors => 2, place_capacities => place_capacities, place_markings => place_markings, place_delays => place_delays) -- 
      port map(preds => preds, symbol_out => tag_ilock_write_req_symbol, clk => clk, reset => reset); --
  end block;
  tag_ilock_read_req_symbol_join: block -- 
    constant place_capacities: IntegerArray(0 to 2) := (0 => 1,1 => 1,2 => 1);
    constant place_markings: IntegerArray(0 to 2)  := (0 => 0,1 => 1,2 => 1);
    constant place_delays: IntegerArray(0 to 2) := (0 => 0,1 => 0,2 => 0);
    constant joinName: string(1 to 30) := "tag_ilock_read_req_symbol_join"; 
    signal preds: BooleanArray(1 to 3); -- 
  begin -- 
    preds <= outp_daemon_CP_67_start & tag_ilock_read_ack_symbol & out_buffer_write_ack_symbol;
    gj_tag_ilock_read_req_symbol_join : generic_join generic map(name => joinName, number_of_predecessors => 3, place_capacities => place_capacities, place_markings => place_markings, place_delays => place_delays) -- 
      port map(preds => preds, symbol_out => tag_ilock_read_req_symbol, clk => clk, reset => reset); --
  end block;
  -- the control path --------------------------------------------------
  always_true_symbol <= true; 
  default_zero_sig <= '0';
  outp_daemon_CP_67: Block -- control-path 
    signal outp_daemon_CP_67_elements: BooleanArray(20 downto 0);
    -- 
  begin -- 
    outp_daemon_CP_67_elements(0) <= outp_daemon_CP_67_start;
    outp_daemon_CP_67_symbol <= outp_daemon_CP_67_elements(1);
    -- CP-element group 0:  transition  place  bypass 
    -- CP-element group 0: predecessors 
    -- CP-element group 0: successors 
    -- CP-element group 0: 	2 
    -- CP-element group 0:  members (4) 
      -- CP-element group 0: 	 $entry
      -- CP-element group 0: 	 branch_block_stmt_19/$entry
      -- CP-element group 0: 	 branch_block_stmt_19/branch_block_stmt_19__entry__
      -- CP-element group 0: 	 branch_block_stmt_19/do_while_stmt_20__entry__
      -- 
    -- CP-element group 1:  transition  place  bypass 
    -- CP-element group 1: predecessors 
    -- CP-element group 1: 	20 
    -- CP-element group 1: successors 
    -- CP-element group 1:  members (4) 
      -- CP-element group 1: 	 $exit
      -- CP-element group 1: 	 branch_block_stmt_19/$exit
      -- CP-element group 1: 	 branch_block_stmt_19/branch_block_stmt_19__exit__
      -- CP-element group 1: 	 branch_block_stmt_19/do_while_stmt_20__exit__
      -- 
    outp_daemon_CP_67_elements(1) <= outp_daemon_CP_67_elements(20);
    -- CP-element group 2:  transition  place  bypass  pipeline-parent 
    -- CP-element group 2: predecessors 
    -- CP-element group 2: 	0 
    -- CP-element group 2: successors 
    -- CP-element group 2: 	8 
    -- CP-element group 2:  members (2) 
      -- CP-element group 2: 	 branch_block_stmt_19/do_while_stmt_20/$entry
      -- CP-element group 2: 	 branch_block_stmt_19/do_while_stmt_20/do_while_stmt_20__entry__
      -- 
    outp_daemon_CP_67_elements(2) <= outp_daemon_CP_67_elements(0);
    -- CP-element group 3:  merge  place  bypass  pipeline-parent 
    -- CP-element group 3: predecessors 
    -- CP-element group 3: successors 
    -- CP-element group 3: 	20 
    -- CP-element group 3:  members (1) 
      -- CP-element group 3: 	 branch_block_stmt_19/do_while_stmt_20/do_while_stmt_20__exit__
      -- 
    -- Element group outp_daemon_CP_67_elements(3) is bound as output of CP function.
    -- CP-element group 4:  merge  place  bypass  pipeline-parent 
    -- CP-element group 4: predecessors 
    -- CP-element group 4: successors 
    -- CP-element group 4: 	7 
    -- CP-element group 4:  members (1) 
      -- CP-element group 4: 	 branch_block_stmt_19/do_while_stmt_20/loop_back
      -- 
    -- Element group outp_daemon_CP_67_elements(4) is bound as output of CP function.
    -- CP-element group 5:  branch  transition  place  bypass  pipeline-parent 
    -- CP-element group 5: predecessors 
    -- CP-element group 5: 	17 
    -- CP-element group 5: successors 
    -- CP-element group 5: 	18 
    -- CP-element group 5: 	19 
    -- CP-element group 5:  members (3) 
      -- CP-element group 5: 	 branch_block_stmt_19/do_while_stmt_20/condition_done
      -- CP-element group 5: 	 branch_block_stmt_19/do_while_stmt_20/loop_exit/$entry
      -- CP-element group 5: 	 branch_block_stmt_19/do_while_stmt_20/loop_taken/$entry
      -- 
    outp_daemon_CP_67_elements(5) <= outp_daemon_CP_67_elements(17);
    -- CP-element group 6:  branch  place  bypass  pipeline-parent 
    -- CP-element group 6: predecessors 
    -- CP-element group 6: 	16 
    -- CP-element group 6: successors 
    -- CP-element group 6:  members (1) 
      -- CP-element group 6: 	 branch_block_stmt_19/do_while_stmt_20/loop_body_done
      -- 
    outp_daemon_CP_67_elements(6) <= outp_daemon_CP_67_elements(16);
    -- CP-element group 7:  transition  bypass  pipeline-parent 
    -- CP-element group 7: predecessors 
    -- CP-element group 7: 	4 
    -- CP-element group 7: successors 
    -- CP-element group 7:  members (1) 
      -- CP-element group 7: 	 branch_block_stmt_19/do_while_stmt_20/do_while_stmt_20_loop_body/back_edge_to_loop_body
      -- 
    outp_daemon_CP_67_elements(7) <= outp_daemon_CP_67_elements(4);
    -- CP-element group 8:  transition  bypass  pipeline-parent 
    -- CP-element group 8: predecessors 
    -- CP-element group 8: 	2 
    -- CP-element group 8: successors 
    -- CP-element group 8:  members (1) 
      -- CP-element group 8: 	 branch_block_stmt_19/do_while_stmt_20/do_while_stmt_20_loop_body/first_time_through_loop_body
      -- 
    outp_daemon_CP_67_elements(8) <= outp_daemon_CP_67_elements(2);
    -- CP-element group 9:  fork  transition  bypass  pipeline-parent 
    -- CP-element group 9: predecessors 
    -- CP-element group 9: successors 
    -- CP-element group 9: 	17 
    -- CP-element group 9: 	10 
    -- CP-element group 9:  members (2) 
      -- CP-element group 9: 	 branch_block_stmt_19/do_while_stmt_20/do_while_stmt_20_loop_body/$entry
      -- CP-element group 9: 	 branch_block_stmt_19/do_while_stmt_20/do_while_stmt_20_loop_body/loop_body_start
      -- 
    -- Element group outp_daemon_CP_67_elements(9) is bound as output of CP function.
    -- CP-element group 10:  join  transition  output  bypass  pipeline-parent 
    -- CP-element group 10: predecessors 
    -- CP-element group 10: 	9 
    -- CP-element group 10: marked-predecessors 
    -- CP-element group 10: 	13 
    -- CP-element group 10: successors 
    -- CP-element group 10: 	12 
    -- CP-element group 10:  members (3) 
      -- CP-element group 10: 	 branch_block_stmt_19/do_while_stmt_20/do_while_stmt_20_loop_body/RPIPE_dTx_23_sample_start_
      -- CP-element group 10: 	 branch_block_stmt_19/do_while_stmt_20/do_while_stmt_20_loop_body/RPIPE_dTx_23_Sample/$entry
      -- CP-element group 10: 	 branch_block_stmt_19/do_while_stmt_20/do_while_stmt_20_loop_body/RPIPE_dTx_23_Sample/rr
      -- 
    rr_100_symbol_link_to_dp: control_delay_element -- 
      generic map(name => " rr_100_symbol_delay",delay_value => 0)
      port map(clk => clk, reset => reset, req => outp_daemon_CP_67_elements(10), ack => RPIPE_dTx_23_inst_req_0); -- 
    outp_daemon_cp_element_group_10: block -- 
      constant place_capacities: IntegerArray(0 to 1) := (0 => 10,1 => 1);
      constant place_markings: IntegerArray(0 to 1)  := (0 => 0,1 => 1);
      constant place_delays: IntegerArray(0 to 1) := (0 => 0,1 => 0);
      constant joinName: string(1 to 31) := "outp_daemon_cp_element_group_10"; 
      signal preds: BooleanArray(1 to 2); -- 
    begin -- 
      preds <= outp_daemon_CP_67_elements(9) & outp_daemon_CP_67_elements(13);
      gj_outp_daemon_cp_element_group_10 : generic_join generic map(name => joinName, number_of_predecessors => 2, place_capacities => place_capacities, place_markings => place_markings, place_delays => place_delays) -- 
        port map(preds => preds, symbol_out => outp_daemon_CP_67_elements(10), clk => clk, reset => reset); --
    end block;
    -- CP-element group 11:  join  transition  output  bypass  pipeline-parent 
    -- CP-element group 11: predecessors 
    -- CP-element group 11: 	12 
    -- CP-element group 11: marked-predecessors 
    -- CP-element group 11: 	15 
    -- CP-element group 11: successors 
    -- CP-element group 11: 	13 
    -- CP-element group 11:  members (3) 
      -- CP-element group 11: 	 branch_block_stmt_19/do_while_stmt_20/do_while_stmt_20_loop_body/RPIPE_dTx_23_update_start_
      -- CP-element group 11: 	 branch_block_stmt_19/do_while_stmt_20/do_while_stmt_20_loop_body/RPIPE_dTx_23_Update/$entry
      -- CP-element group 11: 	 branch_block_stmt_19/do_while_stmt_20/do_while_stmt_20_loop_body/RPIPE_dTx_23_Update/cr
      -- 
    cr_105_symbol_link_to_dp: control_delay_element -- 
      generic map(name => " cr_105_symbol_delay",delay_value => 0)
      port map(clk => clk, reset => reset, req => outp_daemon_CP_67_elements(11), ack => RPIPE_dTx_23_inst_req_1); -- 
    outp_daemon_cp_element_group_11: block -- 
      constant place_capacities: IntegerArray(0 to 1) := (0 => 1,1 => 1);
      constant place_markings: IntegerArray(0 to 1)  := (0 => 0,1 => 1);
      constant place_delays: IntegerArray(0 to 1) := (0 => 0,1 => 0);
      constant joinName: string(1 to 31) := "outp_daemon_cp_element_group_11"; 
      signal preds: BooleanArray(1 to 2); -- 
    begin -- 
      preds <= outp_daemon_CP_67_elements(12) & outp_daemon_CP_67_elements(15);
      gj_outp_daemon_cp_element_group_11 : generic_join generic map(name => joinName, number_of_predecessors => 2, place_capacities => place_capacities, place_markings => place_markings, place_delays => place_delays) -- 
        port map(preds => preds, symbol_out => outp_daemon_CP_67_elements(11), clk => clk, reset => reset); --
    end block;
    -- CP-element group 12:  transition  input  bypass  pipeline-parent 
    -- CP-element group 12: predecessors 
    -- CP-element group 12: 	10 
    -- CP-element group 12: successors 
    -- CP-element group 12: 	11 
    -- CP-element group 12:  members (3) 
      -- CP-element group 12: 	 branch_block_stmt_19/do_while_stmt_20/do_while_stmt_20_loop_body/RPIPE_dTx_23_sample_completed_
      -- CP-element group 12: 	 branch_block_stmt_19/do_while_stmt_20/do_while_stmt_20_loop_body/RPIPE_dTx_23_Sample/$exit
      -- CP-element group 12: 	 branch_block_stmt_19/do_while_stmt_20/do_while_stmt_20_loop_body/RPIPE_dTx_23_Sample/ra
      -- 
    ra_101_symbol_link_from_dp: control_delay_element -- 
      generic map(name => " 12_delay",delay_value => 0)
      port map(clk => clk, reset => reset, req => RPIPE_dTx_23_inst_ack_0, ack => outp_daemon_CP_67_elements(12)); -- 
    -- CP-element group 13:  fork  transition  input  bypass  pipeline-parent 
    -- CP-element group 13: predecessors 
    -- CP-element group 13: 	11 
    -- CP-element group 13: successors 
    -- CP-element group 13: 	14 
    -- CP-element group 13: marked-successors 
    -- CP-element group 13: 	10 
    -- CP-element group 13:  members (3) 
      -- CP-element group 13: 	 branch_block_stmt_19/do_while_stmt_20/do_while_stmt_20_loop_body/RPIPE_dTx_23_update_completed_
      -- CP-element group 13: 	 branch_block_stmt_19/do_while_stmt_20/do_while_stmt_20_loop_body/RPIPE_dTx_23_Update/$exit
      -- CP-element group 13: 	 branch_block_stmt_19/do_while_stmt_20/do_while_stmt_20_loop_body/RPIPE_dTx_23_Update/ca
      -- 
    ca_106_symbol_link_from_dp: control_delay_element -- 
      generic map(name => " 13_delay",delay_value => 0)
      port map(clk => clk, reset => reset, req => RPIPE_dTx_23_inst_ack_1, ack => outp_daemon_CP_67_elements(13)); -- 
    -- CP-element group 14:  join  transition  output  bypass  pipeline-parent 
    -- CP-element group 14: predecessors 
    -- CP-element group 14: 	13 
    -- CP-element group 14: marked-predecessors 
    -- CP-element group 14: 	16 
    -- CP-element group 14: successors 
    -- CP-element group 14: 	15 
    -- CP-element group 14:  members (3) 
      -- CP-element group 14: 	 branch_block_stmt_19/do_while_stmt_20/do_while_stmt_20_loop_body/WPIPE_outp_22_sample_start_
      -- CP-element group 14: 	 branch_block_stmt_19/do_while_stmt_20/do_while_stmt_20_loop_body/WPIPE_outp_22_Sample/$entry
      -- CP-element group 14: 	 branch_block_stmt_19/do_while_stmt_20/do_while_stmt_20_loop_body/WPIPE_outp_22_Sample/req
      -- 
    req_114_symbol_link_to_dp: control_delay_element -- 
      generic map(name => " req_114_symbol_delay",delay_value => 0)
      port map(clk => clk, reset => reset, req => outp_daemon_CP_67_elements(14), ack => WPIPE_outp_22_inst_req_0); -- 
    outp_daemon_cp_element_group_14: block -- 
      constant place_capacities: IntegerArray(0 to 1) := (0 => 1,1 => 1);
      constant place_markings: IntegerArray(0 to 1)  := (0 => 0,1 => 1);
      constant place_delays: IntegerArray(0 to 1) := (0 => 0,1 => 0);
      constant joinName: string(1 to 31) := "outp_daemon_cp_element_group_14"; 
      signal preds: BooleanArray(1 to 2); -- 
    begin -- 
      preds <= outp_daemon_CP_67_elements(13) & outp_daemon_CP_67_elements(16);
      gj_outp_daemon_cp_element_group_14 : generic_join generic map(name => joinName, number_of_predecessors => 2, place_capacities => place_capacities, place_markings => place_markings, place_delays => place_delays) -- 
        port map(preds => preds, symbol_out => outp_daemon_CP_67_elements(14), clk => clk, reset => reset); --
    end block;
    -- CP-element group 15:  fork  transition  input  output  bypass  pipeline-parent 
    -- CP-element group 15: predecessors 
    -- CP-element group 15: 	14 
    -- CP-element group 15: successors 
    -- CP-element group 15: 	16 
    -- CP-element group 15: marked-successors 
    -- CP-element group 15: 	11 
    -- CP-element group 15:  members (6) 
      -- CP-element group 15: 	 branch_block_stmt_19/do_while_stmt_20/do_while_stmt_20_loop_body/WPIPE_outp_22_sample_completed_
      -- CP-element group 15: 	 branch_block_stmt_19/do_while_stmt_20/do_while_stmt_20_loop_body/WPIPE_outp_22_update_start_
      -- CP-element group 15: 	 branch_block_stmt_19/do_while_stmt_20/do_while_stmt_20_loop_body/WPIPE_outp_22_Sample/$exit
      -- CP-element group 15: 	 branch_block_stmt_19/do_while_stmt_20/do_while_stmt_20_loop_body/WPIPE_outp_22_Sample/ack
      -- CP-element group 15: 	 branch_block_stmt_19/do_while_stmt_20/do_while_stmt_20_loop_body/WPIPE_outp_22_Update/$entry
      -- CP-element group 15: 	 branch_block_stmt_19/do_while_stmt_20/do_while_stmt_20_loop_body/WPIPE_outp_22_Update/req
      -- 
    ack_115_symbol_link_from_dp: control_delay_element -- 
      generic map(name => " 15_delay",delay_value => 0)
      port map(clk => clk, reset => reset, req => WPIPE_outp_22_inst_ack_0, ack => outp_daemon_CP_67_elements(15)); -- 
    req_119_symbol_link_to_dp: control_delay_element -- 
      generic map(name => " req_119_symbol_delay",delay_value => 0)
      port map(clk => clk, reset => reset, req => outp_daemon_CP_67_elements(15), ack => WPIPE_outp_22_inst_req_1); -- 
    -- CP-element group 16:  fork  transition  input  bypass  pipeline-parent 
    -- CP-element group 16: predecessors 
    -- CP-element group 16: 	15 
    -- CP-element group 16: successors 
    -- CP-element group 16: 	6 
    -- CP-element group 16: marked-successors 
    -- CP-element group 16: 	14 
    -- CP-element group 16:  members (4) 
      -- CP-element group 16: 	 branch_block_stmt_19/do_while_stmt_20/do_while_stmt_20_loop_body/$exit
      -- CP-element group 16: 	 branch_block_stmt_19/do_while_stmt_20/do_while_stmt_20_loop_body/WPIPE_outp_22_update_completed_
      -- CP-element group 16: 	 branch_block_stmt_19/do_while_stmt_20/do_while_stmt_20_loop_body/WPIPE_outp_22_Update/$exit
      -- CP-element group 16: 	 branch_block_stmt_19/do_while_stmt_20/do_while_stmt_20_loop_body/WPIPE_outp_22_Update/ack
      -- 
    ack_120_symbol_link_from_dp: control_delay_element -- 
      generic map(name => " 16_delay",delay_value => 0)
      port map(clk => clk, reset => reset, req => WPIPE_outp_22_inst_ack_1, ack => outp_daemon_CP_67_elements(16)); -- 
    -- CP-element group 17:  transition  output  delay-element  bypass  pipeline-parent 
    -- CP-element group 17: predecessors 
    -- CP-element group 17: 	9 
    -- CP-element group 17: successors 
    -- CP-element group 17: 	5 
    -- CP-element group 17:  members (2) 
      -- CP-element group 17: 	 branch_block_stmt_19/do_while_stmt_20/do_while_stmt_20_loop_body/condition_evaluated
      -- CP-element group 17: 	 branch_block_stmt_19/do_while_stmt_20/do_while_stmt_20_loop_body/loop_body_delay_to_condition_start
      -- 
    condition_evaluated_91_symbol_link_to_dp: control_delay_element -- 
      generic map(name => " condition_evaluated_91_symbol_delay",delay_value => 0)
      port map(clk => clk, reset => reset, req => outp_daemon_CP_67_elements(17), ack => do_while_stmt_20_branch_req_0); -- 
    -- Element group outp_daemon_CP_67_elements(17) is a control-delay.
    cp_element_17_delay: control_delay_element  generic map(name => " 17_delay", delay_value => 1)  port map(req => outp_daemon_CP_67_elements(9), ack => outp_daemon_CP_67_elements(17), clk => clk, reset =>reset);
    -- CP-element group 18:  transition  input  bypass  pipeline-parent 
    -- CP-element group 18: predecessors 
    -- CP-element group 18: 	5 
    -- CP-element group 18: successors 
    -- CP-element group 18:  members (2) 
      -- CP-element group 18: 	 branch_block_stmt_19/do_while_stmt_20/loop_exit/$exit
      -- CP-element group 18: 	 branch_block_stmt_19/do_while_stmt_20/loop_exit/ack
      -- 
    ack_125_symbol_link_from_dp: control_delay_element -- 
      generic map(name => " 18_delay",delay_value => 0)
      port map(clk => clk, reset => reset, req => do_while_stmt_20_branch_ack_0, ack => outp_daemon_CP_67_elements(18)); -- 
    -- CP-element group 19:  transition  input  bypass  pipeline-parent 
    -- CP-element group 19: predecessors 
    -- CP-element group 19: 	5 
    -- CP-element group 19: successors 
    -- CP-element group 19:  members (2) 
      -- CP-element group 19: 	 branch_block_stmt_19/do_while_stmt_20/loop_taken/$exit
      -- CP-element group 19: 	 branch_block_stmt_19/do_while_stmt_20/loop_taken/ack
      -- 
    ack_129_symbol_link_from_dp: control_delay_element -- 
      generic map(name => " 19_delay",delay_value => 0)
      port map(clk => clk, reset => reset, req => do_while_stmt_20_branch_ack_1, ack => outp_daemon_CP_67_elements(19)); -- 
    -- CP-element group 20:  transition  bypass  pipeline-parent 
    -- CP-element group 20: predecessors 
    -- CP-element group 20: 	3 
    -- CP-element group 20: successors 
    -- CP-element group 20: 	1 
    -- CP-element group 20:  members (1) 
      -- CP-element group 20: 	 branch_block_stmt_19/do_while_stmt_20/$exit
      -- 
    outp_daemon_CP_67_elements(20) <= outp_daemon_CP_67_elements(3);
    outp_daemon_do_while_stmt_20_terminator_130: loop_terminator -- 
      generic map (name => " outp_daemon_do_while_stmt_20_terminator_130", max_iterations_in_flight =>10) 
      port map(loop_body_exit => outp_daemon_CP_67_elements(6),loop_continue => outp_daemon_CP_67_elements(19),loop_terminate => outp_daemon_CP_67_elements(18),loop_back => outp_daemon_CP_67_elements(4),loop_exit => outp_daemon_CP_67_elements(3),clk => clk, reset => reset); -- 
    entry_tmerge_92_block : block -- 
      signal preds : BooleanArray(0 to 1);
      begin -- 
        preds(0)  <= outp_daemon_CP_67_elements(7);
        preds(1)  <= outp_daemon_CP_67_elements(8);
        entry_tmerge_92 : transition_merge -- 
          generic map(name => " entry_tmerge_92")
          port map (preds => preds, symbol_out => outp_daemon_CP_67_elements(9));
          -- 
    end block;
    --  hookup: inputs to control-path 
    -- hookup: output from control-path 
    -- 
  end Block; -- control-path
  -- the data path
  data_path: Block -- 
    signal RPIPE_dTx_23_wire : std_logic_vector(0 downto 0);
    signal konst_26_wire_constant : std_logic_vector(0 downto 0);
    -- 
  begin -- 
    konst_26_wire_constant <= "1";
    do_while_stmt_20_branch: Block -- 
      -- branch-block
      signal condition_sig : std_logic_vector(0 downto 0);
      begin 
      condition_sig <= konst_26_wire_constant;
      branch_instance: BranchBase -- 
        generic map( name => "do_while_stmt_20_branch", condition_width => 1,  bypass_flag => true)
        port map( -- 
          condition => condition_sig,
          req => do_while_stmt_20_branch_req_0,
          ack0 => do_while_stmt_20_branch_ack_0,
          ack1 => do_while_stmt_20_branch_ack_1,
          clk => clk,
          reset => reset); -- 
      --
    end Block; -- branch-block
    -- shared inport operator group (0) : RPIPE_dTx_23_inst 
    InportGroup_0: Block -- 
      signal data_out: std_logic_vector(0 downto 0);
      signal reqL, ackL, reqR, ackR : BooleanArray( 0 downto 0);
      signal reqL_unguarded, ackL_unguarded : BooleanArray( 0 downto 0);
      signal reqR_unguarded, ackR_unguarded : BooleanArray( 0 downto 0);
      signal guard_vector : std_logic_vector( 0 downto 0);
      constant outBUFs : IntegerArray(0 downto 0) := (0 => 1);
      constant guardFlags : BooleanArray(0 downto 0) := (0 => false);
      constant guardBuffering: IntegerArray(0 downto 0)  := (0 => 2);
      -- 
    begin -- 
      reqL_unguarded(0) <= RPIPE_dTx_23_inst_req_0;
      RPIPE_dTx_23_inst_ack_0 <= ackL_unguarded(0);
      reqR_unguarded(0) <= RPIPE_dTx_23_inst_req_1;
      RPIPE_dTx_23_inst_ack_1 <= ackR_unguarded(0);
      guard_vector(0)  <=  '1';
      RPIPE_dTx_23_wire <= data_out(0 downto 0);
      dTx_read_0_gI: SplitGuardInterface generic map(name => "dTx_read_0_gI", nreqs => 1, buffering => guardBuffering, use_guards => guardFlags,  sample_only => false,  update_only => true) -- 
        port map(clk => clk, reset => reset,
        sr_in => reqL_unguarded,
        sr_out => reqL,
        sa_in => ackL,
        sa_out => ackL_unguarded,
        cr_in => reqR_unguarded,
        cr_out => reqR,
        ca_in => ackR,
        ca_out => ackR_unguarded,
        guards => guard_vector); -- 
      dTx_read_0: InputPortRevised -- 
        generic map ( name => "dTx_read_0", data_width => 1,  num_reqs => 1,  output_buffering => outBUFs,   nonblocking_read_flag => False,  no_arbitration => false)
        port map (-- 
          sample_req => reqL , 
          sample_ack => ackL, 
          update_req => reqR, 
          update_ack => ackR, 
          data => data_out, 
          oreq => dTx_pipe_read_req(0),
          oack => dTx_pipe_read_ack(0),
          odata => dTx_pipe_read_data(0 downto 0),
          clk => clk, reset => reset -- 
        ); -- 
      -- 
    end Block; -- inport group 0
    -- shared outport operator group (0) : WPIPE_outp_22_inst 
    OutportGroup_0: Block -- 
      signal data_in: std_logic_vector(0 downto 0);
      signal sample_req, sample_ack : BooleanArray( 0 downto 0);
      signal update_req, update_ack : BooleanArray( 0 downto 0);
      signal sample_req_unguarded, sample_ack_unguarded : BooleanArray( 0 downto 0);
      signal update_req_unguarded, update_ack_unguarded : BooleanArray( 0 downto 0);
      signal guard_vector : std_logic_vector( 0 downto 0);
      constant inBUFs : IntegerArray(0 downto 0) := (0 => 0);
      constant guardFlags : BooleanArray(0 downto 0) := (0 => false);
      constant guardBuffering: IntegerArray(0 downto 0)  := (0 => 2);
      -- 
    begin -- 
      sample_req_unguarded(0) <= WPIPE_outp_22_inst_req_0;
      WPIPE_outp_22_inst_ack_0 <= sample_ack_unguarded(0);
      update_req_unguarded(0) <= WPIPE_outp_22_inst_req_1;
      WPIPE_outp_22_inst_ack_1 <= update_ack_unguarded(0);
      guard_vector(0)  <=  '1';
      data_in <= RPIPE_dTx_23_wire;
      outp_write_0_gI: SplitGuardInterface generic map(name => "outp_write_0_gI", nreqs => 1, buffering => guardBuffering, use_guards => guardFlags,  sample_only => true,  update_only => false) -- 
        port map(clk => clk, reset => reset,
        sr_in => sample_req_unguarded,
        sr_out => sample_req,
        sa_in => sample_ack,
        sa_out => sample_ack_unguarded,
        cr_in => update_req_unguarded,
        cr_out => update_req,
        ca_in => update_ack,
        ca_out => update_ack_unguarded,
        guards => guard_vector); -- 
      outp_write_0: OutputPortRevised -- 
        generic map ( name => "outp", data_width => 1, num_reqs => 1, input_buffering => inBUFs, full_rate => true,
        no_arbitration => false)
        port map (--
          sample_req => sample_req , 
          sample_ack => sample_ack , 
          update_req => update_req , 
          update_ack => update_ack , 
          data => data_in, 
          oreq => outp_pipe_write_req(0),
          oack => outp_pipe_write_ack(0),
          odata => outp_pipe_write_data(0 downto 0),
          clk => clk, reset => reset -- 
        );-- 
      -- 
    end Block; -- outport group 0
    -- 
  end Block; -- data_path
  -- 
end outp_daemon_arch;
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
use work.converter_global_package.all;
entity converter is  -- system 
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
end entity; 
architecture converter_arch  of converter is -- system-architecture 
  -- declarations related to module inp_daemon
  component inp_daemon is -- 
    generic (tag_length : integer); 
    port ( -- 
      inp_pipe_read_req : out  std_logic_vector(0 downto 0);
      inp_pipe_read_ack : in   std_logic_vector(0 downto 0);
      inp_pipe_read_data : in   std_logic_vector(0 downto 0);
      dTx_pipe_write_req : out  std_logic_vector(0 downto 0);
      dTx_pipe_write_ack : in   std_logic_vector(0 downto 0);
      dTx_pipe_write_data : out  std_logic_vector(0 downto 0);
      tag_in: in std_logic_vector(tag_length-1 downto 0);
      tag_out: out std_logic_vector(tag_length-1 downto 0) ;
      clk : in std_logic;
      reset : in std_logic;
      start_req : in std_logic;
      start_ack : out std_logic;
      fin_req : in std_logic;
      fin_ack   : out std_logic-- 
    );
    -- 
  end component;
  -- argument signals for module inp_daemon
  signal inp_daemon_tag_in    : std_logic_vector(1 downto 0) := (others => '0');
  signal inp_daemon_tag_out   : std_logic_vector(1 downto 0);
  signal inp_daemon_start_req : std_logic;
  signal inp_daemon_start_ack : std_logic;
  signal inp_daemon_fin_req   : std_logic;
  signal inp_daemon_fin_ack : std_logic;
  -- declarations related to module outp_daemon
  component outp_daemon is -- 
    generic (tag_length : integer); 
    port ( -- 
      dTx_pipe_read_req : out  std_logic_vector(0 downto 0);
      dTx_pipe_read_ack : in   std_logic_vector(0 downto 0);
      dTx_pipe_read_data : in   std_logic_vector(0 downto 0);
      outp_pipe_write_req : out  std_logic_vector(0 downto 0);
      outp_pipe_write_ack : in   std_logic_vector(0 downto 0);
      outp_pipe_write_data : out  std_logic_vector(0 downto 0);
      tag_in: in std_logic_vector(tag_length-1 downto 0);
      tag_out: out std_logic_vector(tag_length-1 downto 0) ;
      clk : in std_logic;
      reset : in std_logic;
      start_req : in std_logic;
      start_ack : out std_logic;
      fin_req : in std_logic;
      fin_ack   : out std_logic-- 
    );
    -- 
  end component;
  -- argument signals for module outp_daemon
  signal outp_daemon_tag_in    : std_logic_vector(1 downto 0) := (others => '0');
  signal outp_daemon_tag_out   : std_logic_vector(1 downto 0);
  signal outp_daemon_start_req : std_logic;
  signal outp_daemon_start_ack : std_logic;
  signal outp_daemon_fin_req   : std_logic;
  signal outp_daemon_fin_ack : std_logic;
  -- aggregate signals for write to pipe dTx
  signal dTx_pipe_write_data: std_logic_vector(0 downto 0);
  signal dTx_pipe_write_req: std_logic_vector(0 downto 0);
  signal dTx_pipe_write_ack: std_logic_vector(0 downto 0);
  -- aggregate signals for read from pipe dTx
  signal dTx_pipe_read_data: std_logic_vector(0 downto 0);
  signal dTx_pipe_read_req: std_logic_vector(0 downto 0);
  signal dTx_pipe_read_ack: std_logic_vector(0 downto 0);
  -- aggregate signals for read from pipe inp
  signal inp_pipe_read_data: std_logic_vector(0 downto 0);
  signal inp_pipe_read_req: std_logic_vector(0 downto 0);
  signal inp_pipe_read_ack: std_logic_vector(0 downto 0);
  -- aggregate signals for write to pipe outp
  signal outp_pipe_write_data: std_logic_vector(0 downto 0);
  signal outp_pipe_write_req: std_logic_vector(0 downto 0);
  signal outp_pipe_write_ack: std_logic_vector(0 downto 0);
  -- 
begin -- 
  -- module inp_daemon
  inp_daemon_instance:inp_daemon-- 
    generic map(tag_length => 2)
    port map(-- 
      start_req => inp_daemon_start_req,
      start_ack => inp_daemon_start_ack,
      fin_req => inp_daemon_fin_req,
      fin_ack => inp_daemon_fin_ack,
      clk => clk,
      reset => reset,
      inp_pipe_read_req => inp_pipe_read_req(0 downto 0),
      inp_pipe_read_ack => inp_pipe_read_ack(0 downto 0),
      inp_pipe_read_data => inp_pipe_read_data(0 downto 0),
      dTx_pipe_write_req => dTx_pipe_write_req(0 downto 0),
      dTx_pipe_write_ack => dTx_pipe_write_ack(0 downto 0),
      dTx_pipe_write_data => dTx_pipe_write_data(0 downto 0),
      tag_in => inp_daemon_tag_in,
      tag_out => inp_daemon_tag_out-- 
    ); -- 
  -- module will be run forever 
  inp_daemon_tag_in <= (others => '0');
  inp_daemon_auto_run: auto_run generic map(use_delay => true)  port map(clk => clk, reset => reset, start_req => inp_daemon_start_req, start_ack => inp_daemon_start_ack,  fin_req => inp_daemon_fin_req,  fin_ack => inp_daemon_fin_ack);
  -- module outp_daemon
  outp_daemon_instance:outp_daemon-- 
    generic map(tag_length => 2)
    port map(-- 
      start_req => outp_daemon_start_req,
      start_ack => outp_daemon_start_ack,
      fin_req => outp_daemon_fin_req,
      fin_ack => outp_daemon_fin_ack,
      clk => clk,
      reset => reset,
      dTx_pipe_read_req => dTx_pipe_read_req(0 downto 0),
      dTx_pipe_read_ack => dTx_pipe_read_ack(0 downto 0),
      dTx_pipe_read_data => dTx_pipe_read_data(0 downto 0),
      outp_pipe_write_req => outp_pipe_write_req(0 downto 0),
      outp_pipe_write_ack => outp_pipe_write_ack(0 downto 0),
      outp_pipe_write_data => outp_pipe_write_data(0 downto 0),
      tag_in => outp_daemon_tag_in,
      tag_out => outp_daemon_tag_out-- 
    ); -- 
  -- module will be run forever 
  outp_daemon_tag_in <= (others => '0');
  outp_daemon_auto_run: auto_run generic map(use_delay => true)  port map(clk => clk, reset => reset, start_req => outp_daemon_start_req, start_ack => outp_daemon_start_ack,  fin_req => outp_daemon_fin_req,  fin_ack => outp_daemon_fin_ack);
  dTx_Pipe: PipeBase -- 
    generic map( -- 
      name => "pipe dTx",
      num_reads => 1,
      num_writes => 1,
      data_width => 1,
      lifo_mode => false,
      full_rate => false,
      shift_register_mode => false,
      bypass => false,
      depth => 12288 --
    )
    port map( -- 
      read_req => dTx_pipe_read_req,
      read_ack => dTx_pipe_read_ack,
      read_data => dTx_pipe_read_data,
      write_req => dTx_pipe_write_req,
      write_ack => dTx_pipe_write_ack,
      write_data => dTx_pipe_write_data,
      clk => clk,reset => reset -- 
    ); -- 
  inp_Pipe: PipeBase -- 
    generic map( -- 
      name => "pipe inp",
      num_reads => 1,
      num_writes => 1,
      data_width => 1,
      lifo_mode => false,
      full_rate => false,
      shift_register_mode => false,
      bypass => false,
      depth => 0 --
    )
    port map( -- 
      read_req => inp_pipe_read_req,
      read_ack => inp_pipe_read_ack,
      read_data => inp_pipe_read_data,
      write_req => inp_pipe_write_req,
      write_ack => inp_pipe_write_ack,
      write_data => inp_pipe_write_data,
      clk => clk,reset => reset -- 
    ); -- 
  outp_Pipe: PipeBase -- 
    generic map( -- 
      name => "pipe outp",
      num_reads => 1,
      num_writes => 1,
      data_width => 1,
      lifo_mode => false,
      full_rate => false,
      shift_register_mode => false,
      bypass => false,
      depth => 0 --
    )
    port map( -- 
      read_req => outp_pipe_read_req,
      read_ack => outp_pipe_read_ack,
      read_data => outp_pipe_read_data,
      write_req => outp_pipe_write_req,
      write_ack => outp_pipe_write_ack,
      write_data => outp_pipe_write_data,
      clk => clk,reset => reset -- 
    ); -- 
  -- 
end converter_arch;
