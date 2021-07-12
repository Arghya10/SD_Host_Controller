ghdl --clean
ghdl --remove
ghdl -i --work=GhdlLink $AHIR_RELEASE/vhdl/GhdlLink.vhdl
ghdl -i --work=aHiR_ieee_proposed $AHIR_RELEASE/vhdl/aHiR_ieee_proposed.vhdl
ghdl -i --work=ahir $AHIR_RELEASE/vhdl/ahir.vhdl
ghdl -i --work=work $AHIR_RELEASE/SDHostController/vhdl/work/tb_pipe.vhdl
ghdl -i --work=work $AHIR_RELEASE/SDHostController/vhdl/work/clock_controller.vhdl
ghdl -i --work=work $AHIR_RELEASE/SDHostController/vhdl/work/bidirectional.vhdl
ghdl -i --work=work $AHIR_RELEASE/SDHostController/vhdl/work/wrapper_top.vhdl
ghdl -i --work=work $AHIR_RELEASE/SDHostController/vhdl/work/receiver_with_busy.vhdl
ghdl -i --work=work $AHIR_RELEASE/SDHostController/vhdl/work/bidir_tb.vhdl
ghdl -i --work=work $AHIR_RELEASE/SDHostController/vhdl/work/top_wrapper.vhdl
ghdl -i --work=work $AHIR_RELEASE/SDHostController/vhdl/work/ahir_system_global_package.vhdl
ghdl -i --work=work $AHIR_RELEASE/SDHostController/vhdl/work/converter_global_package.vhdl
ghdl -i --work=work $AHIR_RELEASE/SDHostController/vhdl/work/converter.vhdl
ghdl -i --work=work $AHIR_RELEASE/SDHostController/vhdl/work/receiver.vhdl
ghdl -i --work=work $AHIR_RELEASE/SDHostController/vhdl/work/receiver_data.vhdl
ghdl -i --work=work $AHIR_RELEASE/SDHostController/vhdl/work/ahir_system.vhdl
ghdl -i --work=work $AHIR_RELEASE/SDHostController/vhdl/work/transmitter.vhdl
ghdl -i --work=work $AHIR_RELEASE/SDHostController/vhdl/testbench/wrapper_top_test_bench.vhdl
ghdl -m --work=work -Wl,-L/$AHIR_RELEASE/lib -Wl,-lVhpi wrapper_top_test_bench
