#include <pthread.h>
#include <pthreadUtils.h>
#include <Pipes.h>
#include <aa_c_model_internal.h>
#include <aa_c_model.h>
FILE* __report_log_file__ = NULL;
int __trace_on__ = 0;
void _set_trace_file(FILE* fp) {
__report_log_file__ = fp;
}
bit_vector _ONE_1;
#define ONE_1 (_ONE_1)

bit_vector _ONE_2;
#define ONE_2 (_ONE_2)

bit_vector _ONE_8;
#define ONE_8 (_ONE_8)

bit_vector _ZERO_1;
#define ZERO_1 (_ZERO_1)

bit_vector _ZERO_16;
#define ZERO_16 (_ZERO_16)

bit_vector _ZERO_2;
#define ZERO_2 (_ZERO_2)

bit_vector _ZERO_32;
#define ZERO_32 (_ZERO_32)

bit_vector _ZERO_8;
#define ZERO_8 (_ZERO_8)

bit_vector _dataErrorInterruptStatus;
#define dataErrorInterruptStatus (_dataErrorInterruptStatus)

bit_vector _dataRxEnrty1;
#define dataRxEnrty1 (_dataRxEnrty1)

bit_vector _dataRxEnrty2;
#define dataRxEnrty2 (_dataRxEnrty2)

bit_vector _errorInterruptFlag1;
#define errorInterruptFlag1 (_errorInterruptFlag1)

bit_vector _errorInterruptFlag2;
#define errorInterruptFlag2 (_errorInterruptFlag2)

bit_vector _normalInterruptFlag1;
#define normalInterruptFlag1 (_normalInterruptFlag1)

bit_vector _normalInterruptFlag2;
#define normalInterruptFlag2 (_normalInterruptFlag2)

bit_vector _rxBufferPointer;
#define rxBufferPointer (_rxBufferPointer)

bit_vector _sdhcRegisters[72];
#define sdhcRegisters (_sdhcRegisters)

bit_vector _txBufferPointer;
#define txBufferPointer (_txBufferPointer)

void __init_aa_globals__() 
{
register_pipe("DAT0Rx", 5, 8, 0);\
register_pipe("DAT0Tx", 5, 8, 0);\
register_pipe("DAT1Rx", 5, 8, 0);\
register_pipe("DAT1Tx", 5, 8, 0);\
register_pipe("DAT2Rx", 5, 8, 0);\
register_pipe("DAT2Tx", 5, 8, 0);\
register_pipe("DAT3Rx", 5, 8, 0);\
register_pipe("DAT3Tx", 5, 8, 0);\
init_static_bit_vector(&(ONE_1), 1);\
bit_vector_clear(&ONE_1);\
ONE_1.val.byte_array[0] = 1;\
init_static_bit_vector(&(ONE_2), 2);\
bit_vector_clear(&ONE_2);\
ONE_2.val.byte_array[0] = 1;\
init_static_bit_vector(&(ONE_8), 8);\
bit_vector_clear(&ONE_8);\
ONE_8.val.byte_array[0] = 1;\
register_signal("SDHC_to_IRC_INT", 1);\
init_static_bit_vector(&(ZERO_1), 1);\
bit_vector_clear(&ZERO_1);\
init_static_bit_vector(&(ZERO_16), 16);\
bit_vector_clear(&ZERO_16);\
init_static_bit_vector(&(ZERO_2), 2);\
bit_vector_clear(&ZERO_2);\
init_static_bit_vector(&(ZERO_32), 32);\
bit_vector_clear(&ZERO_32);\
init_static_bit_vector(&(ZERO_8), 8);\
bit_vector_clear(&ZERO_8);\
register_signal("bigResponseEnable", 1);\
register_signal("busy", 1);\
register_signal("busyResponse", 1);\
register_signal("clkStable", 1);\
register_pipe("commandTx", 48, 8, 0);\
register_pipe("dataBufferRx", 512, 8, 0);\
register_pipe("dataBufferTx", 512, 8, 0);\
init_static_bit_vector(&(dataErrorInterruptStatus), 8);\
init_static_bit_vector(&(dataRxEnrty1), 1);\
init_static_bit_vector(&(dataRxEnrty2), 1);\
register_pipe("dummy", 1, 8, 0);\
init_static_bit_vector(&(errorInterruptFlag1), 8);\
init_static_bit_vector(&(errorInterruptFlag2), 8);\
register_signal("frequencySelect", 20);\
register_pipe("in_data", 16, 8, 0);\
init_static_bit_vector(&(normalInterruptFlag1), 8);\
init_static_bit_vector(&(normalInterruptFlag2), 8);\
register_signal("oe", 1);\
register_pipe("out_data", 8, 8, 0);\
register_pipe("peripheral_bridge_to_sdhc_request", 1, 64, 0);\
register_signal("ready", 1);\
register_signal("ready8clocks", 1);\
register_signal("readyClockCountEnable", 1);\
register_signal("responseEnable", 1);\
register_pipe("responseRx", 4, 8, 0);\
init_static_bit_vector(&(rxBufferPointer), 10);\
register_signal("sdClkEnable", 1);\
init_static_bit_vector(&(sdhcRegisters[0]), 8);\
init_static_bit_vector(&(sdhcRegisters[1]), 8);\
init_static_bit_vector(&(sdhcRegisters[2]), 8);\
init_static_bit_vector(&(sdhcRegisters[3]), 8);\
init_static_bit_vector(&(sdhcRegisters[4]), 8);\
init_static_bit_vector(&(sdhcRegisters[5]), 8);\
init_static_bit_vector(&(sdhcRegisters[6]), 8);\
init_static_bit_vector(&(sdhcRegisters[7]), 8);\
init_static_bit_vector(&(sdhcRegisters[8]), 8);\
init_static_bit_vector(&(sdhcRegisters[9]), 8);\
init_static_bit_vector(&(sdhcRegisters[10]), 8);\
init_static_bit_vector(&(sdhcRegisters[11]), 8);\
init_static_bit_vector(&(sdhcRegisters[12]), 8);\
init_static_bit_vector(&(sdhcRegisters[13]), 8);\
init_static_bit_vector(&(sdhcRegisters[14]), 8);\
init_static_bit_vector(&(sdhcRegisters[15]), 8);\
init_static_bit_vector(&(sdhcRegisters[16]), 8);\
init_static_bit_vector(&(sdhcRegisters[17]), 8);\
init_static_bit_vector(&(sdhcRegisters[18]), 8);\
init_static_bit_vector(&(sdhcRegisters[19]), 8);\
init_static_bit_vector(&(sdhcRegisters[20]), 8);\
init_static_bit_vector(&(sdhcRegisters[21]), 8);\
init_static_bit_vector(&(sdhcRegisters[22]), 8);\
init_static_bit_vector(&(sdhcRegisters[23]), 8);\
init_static_bit_vector(&(sdhcRegisters[24]), 8);\
init_static_bit_vector(&(sdhcRegisters[25]), 8);\
init_static_bit_vector(&(sdhcRegisters[26]), 8);\
init_static_bit_vector(&(sdhcRegisters[27]), 8);\
init_static_bit_vector(&(sdhcRegisters[28]), 8);\
init_static_bit_vector(&(sdhcRegisters[29]), 8);\
init_static_bit_vector(&(sdhcRegisters[30]), 8);\
init_static_bit_vector(&(sdhcRegisters[31]), 8);\
init_static_bit_vector(&(sdhcRegisters[32]), 8);\
init_static_bit_vector(&(sdhcRegisters[33]), 8);\
init_static_bit_vector(&(sdhcRegisters[34]), 8);\
init_static_bit_vector(&(sdhcRegisters[35]), 8);\
init_static_bit_vector(&(sdhcRegisters[36]), 8);\
init_static_bit_vector(&(sdhcRegisters[37]), 8);\
init_static_bit_vector(&(sdhcRegisters[38]), 8);\
init_static_bit_vector(&(sdhcRegisters[39]), 8);\
init_static_bit_vector(&(sdhcRegisters[40]), 8);\
init_static_bit_vector(&(sdhcRegisters[41]), 8);\
init_static_bit_vector(&(sdhcRegisters[42]), 8);\
init_static_bit_vector(&(sdhcRegisters[43]), 8);\
init_static_bit_vector(&(sdhcRegisters[44]), 8);\
init_static_bit_vector(&(sdhcRegisters[45]), 8);\
init_static_bit_vector(&(sdhcRegisters[46]), 8);\
init_static_bit_vector(&(sdhcRegisters[47]), 8);\
init_static_bit_vector(&(sdhcRegisters[48]), 8);\
init_static_bit_vector(&(sdhcRegisters[49]), 8);\
init_static_bit_vector(&(sdhcRegisters[50]), 8);\
init_static_bit_vector(&(sdhcRegisters[51]), 8);\
init_static_bit_vector(&(sdhcRegisters[52]), 8);\
init_static_bit_vector(&(sdhcRegisters[53]), 8);\
init_static_bit_vector(&(sdhcRegisters[54]), 8);\
init_static_bit_vector(&(sdhcRegisters[55]), 8);\
init_static_bit_vector(&(sdhcRegisters[56]), 8);\
init_static_bit_vector(&(sdhcRegisters[57]), 8);\
init_static_bit_vector(&(sdhcRegisters[58]), 8);\
init_static_bit_vector(&(sdhcRegisters[59]), 8);\
init_static_bit_vector(&(sdhcRegisters[60]), 8);\
init_static_bit_vector(&(sdhcRegisters[61]), 8);\
init_static_bit_vector(&(sdhcRegisters[62]), 8);\
init_static_bit_vector(&(sdhcRegisters[63]), 8);\
init_static_bit_vector(&(sdhcRegisters[64]), 8);\
init_static_bit_vector(&(sdhcRegisters[65]), 8);\
init_static_bit_vector(&(sdhcRegisters[66]), 8);\
init_static_bit_vector(&(sdhcRegisters[67]), 8);\
init_static_bit_vector(&(sdhcRegisters[68]), 8);\
init_static_bit_vector(&(sdhcRegisters[69]), 8);\
init_static_bit_vector(&(sdhcRegisters[70]), 8);\
init_static_bit_vector(&(sdhcRegisters[71]), 8);\
register_pipe("sdhc_to_peripheral_bridge_response", 1, 32, 0);\
init_static_bit_vector(&(txBufferPointer), 10);\
}
void _RW1C_(bit_vector* __pdata, bit_vector* __paddress)
{
MUTEX_DECL(_RW1C_series_block_stmt_88_c_mutex_);
MUTEX_LOCK(_RW1C_series_block_stmt_88_c_mutex_);
_RW1C_inner_inarg_prep_macro__; 
// 	$call readSDHCRegisters (address ) (current_data ) 
_RW1C_call_stmt_93_c_macro_; 
_RW1C_branch_block_stmt_94_c_export_decl_macro_; 
{
// 		$volatile d7 := ( $slice data 7 7 )  $buffering 1
_RW1C_assign_stmt_98_c_macro_; 
// 		$volatile d6 := ( $slice data 6 6 )  $buffering 1
_RW1C_assign_stmt_102_c_macro_; 
// 		$volatile d5 := ( $slice data 5 5 )  $buffering 1
_RW1C_assign_stmt_106_c_macro_; 
// 		$volatile d4 := ( $slice data 4 4 )  $buffering 1
_RW1C_assign_stmt_110_c_macro_; 
// 		$volatile d3 := ( $slice data 3 3 )  $buffering 1
_RW1C_assign_stmt_114_c_macro_; 
// 		$volatile d2 := ( $slice data 2 2 )  $buffering 1
_RW1C_assign_stmt_118_c_macro_; 
// 		$volatile d1 := ( $slice data 1 1 )  $buffering 1
_RW1C_assign_stmt_122_c_macro_; 
// 		$volatile d0 := ( $slice data 0 0 )  $buffering 1
_RW1C_assign_stmt_126_c_macro_; 
// 		$volatile current_d7 := ( $slice current_data 7 7 )  $buffering 1
_RW1C_assign_stmt_130_c_macro_; 
// 		$volatile current_d6 := ( $slice current_data 6 6 )  $buffering 1
_RW1C_assign_stmt_134_c_macro_; 
// 		$volatile current_d5 := ( $slice current_data 5 5 )  $buffering 1
_RW1C_assign_stmt_138_c_macro_; 
// 		$volatile current_d4 := ( $slice current_data 4 4 )  $buffering 1
_RW1C_assign_stmt_142_c_macro_; 
// 		$volatile current_d3 := ( $slice current_data 3 3 )  $buffering 1
_RW1C_assign_stmt_146_c_macro_; 
// 		$volatile current_d2 := ( $slice current_data 2 2 )  $buffering 1
_RW1C_assign_stmt_150_c_macro_; 
// 		$volatile current_d1 := ( $slice current_data 1 1 )  $buffering 1
_RW1C_assign_stmt_154_c_macro_; 
// 		$volatile current_d0 := ( $slice current_data 0 0 )  $buffering 1
_RW1C_assign_stmt_158_c_macro_; 
// 		$volatile b0 := ( $mux d0 ZERO_1  current_d0 )  $buffering 1
_RW1C_assign_stmt_164_c_macro_; 
// 		$volatile b1 := ( $mux d1 ZERO_1  current_d1 )  $buffering 1
_RW1C_assign_stmt_170_c_macro_; 
// 		$volatile b2 := ( $mux d2 ZERO_1  current_d2 )  $buffering 1
_RW1C_assign_stmt_176_c_macro_; 
// 		$volatile b3 := ( $mux d3 ZERO_1  current_d3 )  $buffering 1
_RW1C_assign_stmt_182_c_macro_; 
// 		$volatile b4 := ( $mux d4 ZERO_1  current_d4 )  $buffering 1
_RW1C_assign_stmt_188_c_macro_; 
// 		$volatile b5 := ( $mux d5 ZERO_1  current_d5 )  $buffering 1
_RW1C_assign_stmt_194_c_macro_; 
// 		$volatile b6 := ( $mux d6 ZERO_1  current_d6 )  $buffering 1
_RW1C_assign_stmt_200_c_macro_; 
// 		$volatile b7 := ( $mux d7 ZERO_1  current_d7 )  $buffering 1
_RW1C_assign_stmt_206_c_macro_; 
// 		$call writeSDHCRegisters (address (((b7 && b6) && (b5 && b4)) && ((b3 && b2) && (b1 && b0))) ) () 
_RW1C_call_stmt_223_c_macro_; 
// if statement :  file .Aa/sdhc.linked.aa, line 0
__declare_static_bit_vector(konst_226,8);\
bit_vector_clear(&konst_226);\
konst_226.val.byte_array[0] = 48;\
__declare_static_bit_vector(EQ_u8_u1_227,1);\
bit_vector_clear(&konst_226);\
konst_226.val.byte_array[0] = 48;\
bit_vector_equal(0, &(address), &(konst_226), &(EQ_u8_u1_227));\
if (has_undefined_bit(&EQ_u8_u1_227)) {fprintf(stderr, "Error: variable EQ_u8_u1_227 has undefined value (%s) at test point.\n", to_string(&EQ_u8_u1_227));assert(0);} \

if (bit_vector_to_uint64(0, &EQ_u8_u1_227)) { 
// 			normalInterruptFlag1 := (( ~ data ) & normalInterruptFlag1) $buffering 1// bits of buffering = 8. 
_RW1C_assign_stmt_233_c_macro_; 
} 
else {
 ;
}
// if statement :  file .Aa/sdhc.linked.aa, line 0
__declare_static_bit_vector(konst_237,8);\
bit_vector_clear(&konst_237);\
konst_237.val.byte_array[0] = 49;\
__declare_static_bit_vector(EQ_u8_u1_238,1);\
bit_vector_clear(&konst_237);\
konst_237.val.byte_array[0] = 49;\
bit_vector_equal(0, &(address), &(konst_237), &(EQ_u8_u1_238));\
if (has_undefined_bit(&EQ_u8_u1_238)) {fprintf(stderr, "Error: variable EQ_u8_u1_238 has undefined value (%s) at test point.\n", to_string(&EQ_u8_u1_238));assert(0);} \

if (bit_vector_to_uint64(0, &EQ_u8_u1_238)) { 
// 			normalInterruptFlag2 := (( ~ data ) & normalInterruptFlag2) $buffering 1// bits of buffering = 8. 
_RW1C_assign_stmt_244_c_macro_; 
} 
else {
 ;
}
// if statement :  file .Aa/sdhc.linked.aa, line 0
__declare_static_bit_vector(konst_248,8);\
bit_vector_clear(&konst_248);\
konst_248.val.byte_array[0] = 50;\
__declare_static_bit_vector(EQ_u8_u1_249,1);\
bit_vector_clear(&konst_248);\
konst_248.val.byte_array[0] = 50;\
bit_vector_equal(0, &(address), &(konst_248), &(EQ_u8_u1_249));\
if (has_undefined_bit(&EQ_u8_u1_249)) {fprintf(stderr, "Error: variable EQ_u8_u1_249 has undefined value (%s) at test point.\n", to_string(&EQ_u8_u1_249));assert(0);} \

if (bit_vector_to_uint64(0, &EQ_u8_u1_249)) { 
// 			errorInterruptFlag1 := (( ~ data ) & errorInterruptFlag1) $buffering 1// bits of buffering = 8. 
_RW1C_assign_stmt_255_c_macro_; 
} 
else {
 ;
}
// if statement :  file .Aa/sdhc.linked.aa, line 0
__declare_static_bit_vector(konst_259,8);\
bit_vector_clear(&konst_259);\
konst_259.val.byte_array[0] = 51;\
__declare_static_bit_vector(EQ_u8_u1_260,1);\
bit_vector_clear(&konst_259);\
konst_259.val.byte_array[0] = 51;\
bit_vector_equal(0, &(address), &(konst_259), &(EQ_u8_u1_260));\
if (has_undefined_bit(&EQ_u8_u1_260)) {fprintf(stderr, "Error: variable EQ_u8_u1_260 has undefined value (%s) at test point.\n", to_string(&EQ_u8_u1_260));assert(0);} \

if (bit_vector_to_uint64(0, &EQ_u8_u1_260)) { 
// 			errorInterruptFlag2 := (( ~ data ) & errorInterruptFlag2) $buffering 1// bits of buffering = 8. 
_RW1C_assign_stmt_266_c_macro_; 
} 
else {
 ;
}
_RW1C_branch_block_stmt_94_c_export_apply_macro_;
}
_RW1C_inner_outarg_prep_macro__; 
MUTEX_UNLOCK(_RW1C_series_block_stmt_88_c_mutex_);
}
void RW1C(uint8_t data , uint8_t address )
{
_RW1C_outer_arg_decl_macro__;
_RW1C_( &__data,  &__address);
_RW1C_outer_op_xfer_macro__;
}


void _command_generator_(bit_vector*  __pnormalInterruptStatusVar1, bit_vector*  __pnormalInterruptStatusVar2, bit_vector*  __perrorInterruptStatusVar1, bit_vector*  __perrorInterruptStatusVar2, bit_vector*  __pdataErrorInterruptStatusVar1, bit_vector*  __pdataTransferComplete)
{
MUTEX_DECL(_command_generator_series_block_stmt_1479_c_mutex_);
MUTEX_LOCK(_command_generator_series_block_stmt_1479_c_mutex_);
_command_generator_inner_inarg_prep_macro__; 
_command_generator_branch_block_stmt_1486_c_export_decl_macro_; 
{
// 		$call readSDHCRegisters (14  ) (commandRegVal ) 
_command_generator_call_stmt_1489_c_macro_; 
// 		$call readSDHCRegisters (15  ) (commandRegVal1 ) 
_command_generator_call_stmt_1492_c_macro_; 
// 		$volatile tempVal := ((ZERO_32 && ZERO_1) && (ONE_1 && ( $slice commandRegVal1 5 0 ) )) $buffering 1
_command_generator_assign_stmt_1502_c_macro_; 
// merge  file .Aa/sdhc.linked.aa, line 522
_command_generator_merge_stmt_1503_c_preamble_macro_; 
// 			$phi C := 			  next_C $on   loopcommand40bits 			  ($bitcast ($uint<8>) 3  ) $on   $entry 
 // type of target is $uint<8>
_command_generator_phi_stmt_1504_c_macro_; 
// 			$phi newCommand40bits := 			  command40bits $on   loopcommand40bits 			  tempVal $on   $entry 
 // type of target is $uint<40>
_command_generator_phi_stmt_1509_c_macro_; 
_command_generator_merge_stmt_1503_c_postamble_macro_; 
// 		$call readSDHCRegisters ((8  + C) ) (tempArgument ) 
_command_generator_call_stmt_1518_c_macro_; 
// 		$volatile command40bits := (( $slice newCommand40bits 31 0 )  && tempArgument) $buffering 1
_command_generator_assign_stmt_1524_c_macro_; 
// 		$volatile next_C := (C - 1 ) $buffering 1
_command_generator_assign_stmt_1529_c_macro_; 
// if statement :  file .Aa/sdhc.linked.aa, line 0
__declare_static_bit_vector(konst_1532,8);\
bit_vector_clear(&konst_1532);\
__declare_static_bit_vector(NEQ_u8_u1_1533,1);\
bit_vector_clear(&konst_1532);\
bit_vector_not_equal(0, &(C), &(konst_1532), &NEQ_u8_u1_1533);\
if (has_undefined_bit(&NEQ_u8_u1_1533)) {fprintf(stderr, "Error: variable NEQ_u8_u1_1533 has undefined value (%s) at test point.\n", to_string(&NEQ_u8_u1_1533));assert(0);} \

if (bit_vector_to_uint64(0, &NEQ_u8_u1_1533)) { 
/* 			$place[loopcommand40bits]
*/  goto loopcommand40bits_1486;
} 
else {
 ;
}
// 		$call generate_crc_7 (command40bits ) (crc7 ) 
_command_generator_call_stmt_1538_c_macro_; 
// 		$volatile commandbits := ((command40bits && crc7) && ONE_1) $buffering 1
_command_generator_assign_stmt_1545_c_macro_; 
// 		oe := ONE_1 $buffering 1// bits of buffering = 1. 
_command_generator_assign_stmt_1548_c_macro_; 
_command_generator_branch_block_stmt_1549_c_export_decl_macro_; 
{
{
// do-while:   file .Aa/sdhc.linked.aa, line 539
__declare_static_bit_vector(konst_1580,8);\
bit_vector_clear(&konst_1580);\
konst_1580.val.byte_array[0] = 48;\
__declare_static_bit_vector(ULT_u8_u1_1581,1);\
uint8_t do_while_entry_flag;
do_while_entry_flag = 1;
uint8_t do_while_loopback_flag;
do_while_loopback_flag = 0;
while(1) {
// merge  file .Aa/sdhc.linked.aa, line 541
_command_generator_merge_stmt_1551_c_preamble_macro_; 
// 				$phi J := 				  ZERO_8 $on   $entry 				  next_J $on   $loopback 
 // type of target is $uint<8>
_command_generator_phi_stmt_1552_c_macro_; 
// 				$phi old_commandbits := 				  commandbits $on   $entry 				  new_commandbits $on   $loopback 
 // type of target is $uint<48>
_command_generator_phi_stmt_1556_c_macro_; 
_command_generator_merge_stmt_1551_c_postamble_macro_; 
// 				$volatile next_J := (J + 1 ) $buffering 1
_command_generator_assign_stmt_1565_c_macro_; 
// 				$volatile bit := ( $slice old_commandbits 47 47 )  $buffering 1
_command_generator_assign_stmt_1569_c_macro_; 
// 				commandTx := bit $buffering 1// bits of buffering = 1. 
_command_generator_assign_stmt_1572_c_macro_; 
// 				$volatile new_commandbits := (old_commandbits << 1 ) $buffering 1
_command_generator_assign_stmt_1577_c_macro_; 
do_while_entry_flag = 0;
do_while_loopback_flag = 1;
bit_vector_clear(&konst_1580);\
konst_1580.val.byte_array[0] = 48;\
bit_vector_less(0, &(next_J), &(konst_1580), &(ULT_u8_u1_1581));\
if (has_undefined_bit(&ULT_u8_u1_1581)) {fprintf(stderr, "Error: variable ULT_u8_u1_1581 has undefined value (%s) at test point.\n", to_string(&ULT_u8_u1_1581));assert(0);} \

if (!bit_vector_to_uint64(0, &ULT_u8_u1_1581)) break;
} 
}
_command_generator_branch_block_stmt_1549_c_export_apply_macro_;
}
// 		oe := ZERO_1 $buffering 1// bits of buffering = 1. 
_command_generator_assign_stmt_1585_c_macro_; 
// 		response_type := ( $slice commandRegVal 1 0 )  $buffering 1// bits of buffering = 2. 
_command_generator_assign_stmt_1589_c_macro_; 
// 		dataPresentSelect := (commandRegVal [] 5 ) $buffering 1// bits of buffering = 1. 
_command_generator_assign_stmt_1594_c_macro_; 
// if statement :  file .Aa/sdhc.linked.aa, line 0
__declare_static_bit_vector(konst_1597,1);\
bit_vector_clear(&konst_1597);\
konst_1597.val.byte_array[0] = 1;\
__declare_static_bit_vector(EQ_u1_u1_1598,1);\
bit_vector_clear(&konst_1597);\
konst_1597.val.byte_array[0] = 1;\
bit_vector_equal(0, &(dataPresentSelect), &(konst_1597), &(EQ_u1_u1_1598));\
if (has_undefined_bit(&EQ_u1_u1_1598)) {fprintf(stderr, "Error: variable EQ_u1_u1_1598 has undefined value (%s) at test point.\n", to_string(&EQ_u1_u1_1598));assert(0);} \

if (bit_vector_to_uint64(0, &EQ_u1_u1_1598)) { 
// 			$call readSDHCRegisters (12  ) (transferVal ) 
_command_generator_call_stmt_1601_c_macro_; 
// 			txOrRX := (  $bitreduce |  (transferVal & _h10 ) ) $buffering 1// bits of buffering = 1. 
_command_generator_assign_stmt_1607_c_macro_; 
// merge  file .Aa/sdhc.linked.aa, line 559
_command_generator_merge_stmt_1608_c_preamble_macro_; 
// 				$phi E := 				  ONE_8 $on   $entry 				  next_E $on   loopPresent 
 // type of target is $uint<8>
_command_generator_phi_stmt_1609_c_macro_; 
// 				$phi readNewPresent := 				  ($bitcast ($uint<16>) 0  ) $on   $entry 				  readPresentState $on   loopPresent 
 // type of target is $uint<16>
_command_generator_phi_stmt_1613_c_macro_; 
_command_generator_merge_stmt_1608_c_postamble_macro_; 
// 			$call readSDHCRegisters ((36  + E) ) (readPresentStateTemp ) 
_command_generator_call_stmt_1623_c_macro_; 
// 			$volatile readPresentState := (( $slice readNewPresent 7 0 )  && readPresentStateTemp) $buffering 1
_command_generator_assign_stmt_1629_c_macro_; 
// 			$volatile next_E := (E - 1 ) $buffering 1
_command_generator_assign_stmt_1634_c_macro_; 
// if statement :  file .Aa/sdhc.linked.aa, line 0
__declare_static_bit_vector(konst_1637,8);\
bit_vector_clear(&konst_1637);\
__declare_static_bit_vector(NEQ_u8_u1_1638,1);\
bit_vector_clear(&konst_1637);\
bit_vector_not_equal(0, &(E), &(konst_1637), &NEQ_u8_u1_1638);\
if (has_undefined_bit(&NEQ_u8_u1_1638)) {fprintf(stderr, "Error: variable NEQ_u8_u1_1638 has undefined value (%s) at test point.\n", to_string(&NEQ_u8_u1_1638));assert(0);} \

if (bit_vector_to_uint64(0, &NEQ_u8_u1_1638)) { 
/* 			$place[loopPresent]
*/  goto loopPresent_1486;
} 
else {
 ;
}
// 			$volatile presentState0Var := ( $slice readPresentState 7 0 )  $buffering 1
_command_generator_assign_stmt_1644_c_macro_; 
// 			$volatile presentState1Var := ( $slice readPresentState 15 8 )  $buffering 1
_command_generator_assign_stmt_1648_c_macro_; 
// if statement :  file .Aa/sdhc.linked.aa, line 0
__declare_static_bit_vector(konst_1651,2);\
bit_vector_clear(&konst_1651);\
konst_1651.val.byte_array[0] = 3;\
__declare_static_bit_vector(NEQ_u2_u1_1652,1);\
bit_vector_clear(&konst_1651);\
konst_1651.val.byte_array[0] = 3;\
bit_vector_not_equal(0, &(response_type), &(konst_1651), &NEQ_u2_u1_1652);\
if (has_undefined_bit(&NEQ_u2_u1_1652)) {fprintf(stderr, "Error: variable NEQ_u2_u1_1652 has undefined value (%s) at test point.\n", to_string(&NEQ_u2_u1_1652));assert(0);} \

if (bit_vector_to_uint64(0, &NEQ_u2_u1_1652)) { 
// 			$volatile tempPstate := ( $mux txOrRX (presentState1Var | _h02 )  (presentState1Var | _h01 ) )  $buffering 1
_command_generator_assign_stmt_1662_c_macro_; 
// 			$call writeSDHCRegisters (37  tempPstate ) () 
_command_generator_call_stmt_1665_c_macro_; 
} 
else {
 ;
}
// 			$call writeSDHCRegisters (36  (presentState0Var | _h06 ) ) () 
_command_generator_call_stmt_1671_c_macro_; 
} 
else {
 ;
}
// $report (rsp resp 		 response_type response_type 		 dataPresentSelect dataPresentSelect )
_command_generator_stmt_1675_c_macro_; 
// if statement :  file .Aa/sdhc.linked.aa, line 580
__declare_static_bit_vector(konst_1678,2);\
bit_vector_clear(&konst_1678);\
konst_1678.val.byte_array[0] = 2;\
__declare_static_bit_vector(EQ_u2_u1_1679,1);\
__declare_static_bit_vector(konst_1681,2);\
bit_vector_clear(&konst_1681);\
konst_1681.val.byte_array[0] = 3;\
__declare_static_bit_vector(EQ_u2_u1_1682,1);\
__declare_static_bit_vector(OR_u1_u1_1683,1);\
bit_vector_clear(&konst_1678);\
konst_1678.val.byte_array[0] = 2;\
bit_vector_equal(0, &(response_type), &(konst_1678), &(EQ_u2_u1_1679));\
bit_vector_clear(&konst_1681);\
konst_1681.val.byte_array[0] = 3;\
bit_vector_equal(0, &(response_type), &(konst_1681), &(EQ_u2_u1_1682));\
bit_vector_or(&(EQ_u2_u1_1679), &(EQ_u2_u1_1682), &(OR_u1_u1_1683));\
if (has_undefined_bit(&OR_u1_u1_1683)) {fprintf(stderr, "Error: variable OR_u1_u1_1683 has undefined value (%s) at test point.\n", to_string(&OR_u1_u1_1683));assert(0);} \

if (bit_vector_to_uint64(0, &OR_u1_u1_1683)) { 
// 			responseEnable := ONE_1 $buffering 1// bits of buffering = 1. 
_command_generator_assign_stmt_1686_c_macro_; 
// if statement :  file .Aa/sdhc.linked.aa, line 0
__declare_static_bit_vector(konst_1689,2);\
bit_vector_clear(&konst_1689);\
konst_1689.val.byte_array[0] = 3;\
__declare_static_bit_vector(EQ_u2_u1_1690,1);\
bit_vector_clear(&konst_1689);\
konst_1689.val.byte_array[0] = 3;\
bit_vector_equal(0, &(response_type), &(konst_1689), &(EQ_u2_u1_1690));\
if (has_undefined_bit(&EQ_u2_u1_1690)) {fprintf(stderr, "Error: variable EQ_u2_u1_1690 has undefined value (%s) at test point.\n", to_string(&EQ_u2_u1_1690));assert(0);} \

if (bit_vector_to_uint64(0, &EQ_u2_u1_1690)) { 
// 			busyResponse := ONE_1 $buffering 1// bits of buffering = 1. 
_command_generator_assign_stmt_1693_c_macro_; 
} 
else {
 ;
}
_command_generator_branch_block_stmt_1695_c_export_decl_macro_; 
{
{
// do-while:   file .Aa/sdhc.linked.aa, line 587
__declare_static_bit_vector(konst_1734,6);\
bit_vector_clear(&konst_1734);\
konst_1734.val.byte_array[0] = 48;\
__declare_static_bit_vector(ULT_u6_u1_1735,1);\
uint8_t do_while_entry_flag;
do_while_entry_flag = 1;
uint8_t do_while_loopback_flag;
do_while_loopback_flag = 0;
while(1) {
// merge  file .Aa/sdhc.linked.aa, line 589
_command_generator_merge_stmt_1697_c_preamble_macro_; 
// 				$phi J := 				  ($bitcast ($uint<6>) 0  ) $on   $entry 				  next_J $on   $loopback 
 // type of target is $uint<6>
_command_generator_phi_stmt_1698_c_macro_; 
// 				$phi old_responsebits := 				  ($bitcast ($uint<48>) 0  ) $on   $entry 				  new_responsebits $on   $loopback 
 // type of target is $uint<48>
_command_generator_phi_stmt_1703_c_macro_; 
_command_generator_merge_stmt_1697_c_postamble_macro_; 
// 				$volatile next_J := (J + 1 ) $buffering 1
_command_generator_assign_stmt_1714_c_macro_; 
// 				responsebit := responseRx $buffering 1// bits of buffering = 1. 
_command_generator_assign_stmt_1717_c_macro_; 
// 				$volatile responsebits := (($bitcast ($uint<47>) 0  ) && responsebit) $buffering 1
_command_generator_assign_stmt_1724_c_macro_; 
// 				$volatile new_responsebits := ((old_responsebits << 1 ) | responsebits) $buffering 1
_command_generator_assign_stmt_1731_c_macro_; 
do_while_entry_flag = 0;
do_while_loopback_flag = 1;
bit_vector_clear(&konst_1734);\
konst_1734.val.byte_array[0] = 48;\
bit_vector_less(0, &(next_J), &(konst_1734), &(ULT_u6_u1_1735));\
if (has_undefined_bit(&ULT_u6_u1_1735)) {fprintf(stderr, "Error: variable ULT_u6_u1_1735 has undefined value (%s) at test point.\n", to_string(&ULT_u6_u1_1735));assert(0);} \

if (!bit_vector_to_uint64(0, &ULT_u6_u1_1735)) break;
} 
}
_command_generator_branch_block_stmt_1695_c_export_apply_macro_;
}
// 			responseEnable := ZERO_1 $buffering 1// bits of buffering = 1. 
_command_generator_assign_stmt_1739_c_macro_; 
// $report (gen_comm f 			 response response )
_command_generator_stmt_1741_c_macro_; 
// if statement :  file .Aa/sdhc.linked.aa, line 0
__declare_static_bit_vector(konst_1744,2);\
bit_vector_clear(&konst_1744);\
konst_1744.val.byte_array[0] = 3;\
__declare_static_bit_vector(EQ_u2_u1_1745,1);\
bit_vector_clear(&konst_1744);\
konst_1744.val.byte_array[0] = 3;\
bit_vector_equal(0, &(response_type), &(konst_1744), &(EQ_u2_u1_1745));\
if (has_undefined_bit(&EQ_u2_u1_1745)) {fprintf(stderr, "Error: variable EQ_u2_u1_1745 has undefined value (%s) at test point.\n", to_string(&EQ_u2_u1_1745));assert(0);} \

if (bit_vector_to_uint64(0, &EQ_u2_u1_1745)) { 
// merge  file .Aa/sdhc.linked.aa, line 605
_command_generator_merge_stmt_1746_c_preamble_macro_; 
_command_generator_merge_stmt_1746_c_postamble_macro_; 
// 			wait := DAT0Rx $buffering 1// bits of buffering = 1. 
_command_generator_assign_stmt_1749_c_macro_; 
// if statement :  file .Aa/sdhc.linked.aa, line 0
__declare_static_bit_vector(EQ_u1_u1_1753,1);\
bit_vector_equal(0, &(wait), &(ZERO_1), &(EQ_u1_u1_1753));\
if (has_undefined_bit(&EQ_u1_u1_1753)) {fprintf(stderr, "Error: variable EQ_u1_u1_1753 has undefined value (%s) at test point.\n", to_string(&EQ_u1_u1_1753));assert(0);} \

if (bit_vector_to_uint64(0, &EQ_u1_u1_1753)) { 
/* 			$place[waitloop]
*/  goto waitloop_1486;
} 
else {
 ;
}
// 			busyResponse := ZERO_1 $buffering 1// bits of buffering = 1. 
_command_generator_assign_stmt_1758_c_macro_; 
} 
else {
 ;
}
// if statement :  file .Aa/sdhc.linked.aa, line 0
__declare_static_bit_vector(konst_1762,8);\
bit_vector_clear(&konst_1762);\
konst_1762.val.byte_array[0] = 8;\
__declare_static_bit_vector(AND_u8_u8_1763,8);\
__declare_static_bit_vector(konst_1764,8);\
bit_vector_clear(&konst_1764);\
konst_1764.val.byte_array[0] = 8;\
__declare_static_bit_vector(EQ_u8_u1_1765,1);\
bit_vector_clear(&konst_1762);\
konst_1762.val.byte_array[0] = 8;\
bit_vector_and(&(commandRegVal), &(konst_1762), &(AND_u8_u8_1763));\
bit_vector_clear(&konst_1764);\
konst_1764.val.byte_array[0] = 8;\
bit_vector_equal(0, &(AND_u8_u8_1763), &(konst_1764), &(EQ_u8_u1_1765));\
if (has_undefined_bit(&EQ_u8_u1_1765)) {fprintf(stderr, "Error: variable EQ_u8_u1_1765 has undefined value (%s) at test point.\n", to_string(&EQ_u8_u1_1765));assert(0);} \

if (bit_vector_to_uint64(0, &EQ_u8_u1_1765)) { 
// 			$call generate_crc_7 (( $slice response 47 8 )  ) (R1_6_7CRC ) 
_command_generator_call_stmt_1769_c_macro_; 
// 			CommandCRCError := ( $mux (( $slice response 7 1 )  == R1_6_7CRC) _b00000000   _b00000010  )  $buffering 1// bits of buffering = 8. 
_command_generator_assign_stmt_1778_c_macro_; 
} 
else {
 ;
}
// if statement :  file .Aa/sdhc.linked.aa, line 0
__declare_static_bit_vector(konst_1782,8);\
bit_vector_clear(&konst_1782);\
konst_1782.val.byte_array[0] = 16;\
__declare_static_bit_vector(AND_u8_u8_1783,8);\
__declare_static_bit_vector(konst_1784,8);\
bit_vector_clear(&konst_1784);\
konst_1784.val.byte_array[0] = 16;\
__declare_static_bit_vector(EQ_u8_u1_1785,1);\
bit_vector_clear(&konst_1782);\
konst_1782.val.byte_array[0] = 16;\
bit_vector_and(&(commandRegVal), &(konst_1782), &(AND_u8_u8_1783));\
bit_vector_clear(&konst_1784);\
konst_1784.val.byte_array[0] = 16;\
bit_vector_equal(0, &(AND_u8_u8_1783), &(konst_1784), &(EQ_u8_u1_1785));\
if (has_undefined_bit(&EQ_u8_u1_1785)) {fprintf(stderr, "Error: variable EQ_u8_u1_1785 has undefined value (%s) at test point.\n", to_string(&EQ_u8_u1_1785));assert(0);} \

if (bit_vector_to_uint64(0, &EQ_u8_u1_1785)) { 
// 			commandIndexCheck := (( $slice commandRegVal1 5 0 )  == ( $slice response 45 40 ) ) $buffering 1// bits of buffering = 1. 
_command_generator_assign_stmt_1792_c_macro_; 
// 			CommandIndexError := ( $mux commandIndexCheck _b00000000   _b00001000  )  $buffering 1// bits of buffering = 8. 
_command_generator_assign_stmt_1798_c_macro_; 
} 
else {
 ;
}
// merge  file .Aa/sdhc.linked.aa, line 621
_command_generator_merge_stmt_1800_c_preamble_macro_; 
// 				$phi R := 				  ZERO_8 $on   $entry 				  next_R $on   loopResponse 
 // type of target is $uint<8>
_command_generator_phi_stmt_1801_c_macro_; 
// 				$phi tempResponse := 				  ( $slice response 39 8 )  $on   $entry 				  nextResponse $on   loopResponse 
 // type of target is $uint<32>
_command_generator_phi_stmt_1805_c_macro_; 
_command_generator_merge_stmt_1800_c_postamble_macro_; 
// 			$call writeSDHCRegisters ((16  + R) ( $slice tempResponse 7 0 )  ) () 
_command_generator_call_stmt_1816_c_macro_; 
// 			$volatile nextResponse := (ZERO_8 && ( $slice tempResponse 31 8 ) ) $buffering 1
_command_generator_assign_stmt_1823_c_macro_; 
// 			$volatile next_R := (R + 1 ) $buffering 1
_command_generator_assign_stmt_1828_c_macro_; 
// if statement :  file .Aa/sdhc.linked.aa, line 0
__declare_static_bit_vector(konst_1831,8);\
bit_vector_clear(&konst_1831);\
konst_1831.val.byte_array[0] = 4;\
__declare_static_bit_vector(ULT_u8_u1_1832,1);\
bit_vector_clear(&konst_1831);\
konst_1831.val.byte_array[0] = 4;\
bit_vector_less(0, &(next_R), &(konst_1831), &(ULT_u8_u1_1832));\
if (has_undefined_bit(&ULT_u8_u1_1832)) {fprintf(stderr, "Error: variable ULT_u8_u1_1832 has undefined value (%s) at test point.\n", to_string(&ULT_u8_u1_1832));assert(0);} \

if (bit_vector_to_uint64(0, &ULT_u8_u1_1832)) { 
/* 			$place[loopResponse]
*/  goto loopResponse_1486;
} 
else {
 ;
}
// 			$call readSDHCRegisters (36  ) (tempPresentState2 ) 
_command_generator_call_stmt_1837_c_macro_; 
// 			$volatile presentState2 := ((tempPresentState2 >> 1 ) << 1 ) $buffering 1
_command_generator_assign_stmt_1844_c_macro_; 
// 			$call readSDHCRegisters (48  ) (normalInterrupt2 ) 
_command_generator_call_stmt_1847_c_macro_; 
// 			$call writeSDHCRegisters (36  presentState2 ) () 
_command_generator_call_stmt_1850_c_macro_; 
// 			commandEndBitError := ( $mux (response [] 0 ) ZERO_8  ($bitcast ($uint<8>) 4  ) )  $buffering 1// bits of buffering = 8. 
_command_generator_assign_stmt_1859_c_macro_; 
// 			normalInterruptStatusVar_2 := (normalInterrupt2 | _h01 ) $buffering 1// bits of buffering = 8. 
_command_generator_assign_stmt_1864_c_macro_; 
// 			errorInterruptStatusVar_2 := ((CommandIndexError | CommandCRCError) | commandEndBitError) $buffering 1// bits of buffering = 8. 
_command_generator_assign_stmt_1871_c_macro_; 
/* 			$place[normalInterruptResponse2]
*/  goto normalInterruptResponse2_1486;
} 
else {
// if statement :  file .Aa/sdhc.linked.aa, line 642
__declare_static_bit_vector(konst_1876,2);\
bit_vector_clear(&konst_1876);\
konst_1876.val.byte_array[0] = 1;\
__declare_static_bit_vector(EQ_u2_u1_1877,1);\
bit_vector_clear(&konst_1876);\
konst_1876.val.byte_array[0] = 1;\
bit_vector_equal(0, &(response_type), &(konst_1876), &(EQ_u2_u1_1877));\
if (has_undefined_bit(&EQ_u2_u1_1877)) {fprintf(stderr, "Error: variable EQ_u2_u1_1877 has undefined value (%s) at test point.\n", to_string(&EQ_u2_u1_1877));assert(0);} \

if (bit_vector_to_uint64(0, &EQ_u2_u1_1877)) { 
// 			responseEnable := ONE_1 $buffering 1// bits of buffering = 1. 
_command_generator_assign_stmt_1880_c_macro_; 
// 			bigResponseEnable := ONE_1 $buffering 1// bits of buffering = 1. 
_command_generator_assign_stmt_1883_c_macro_; 
_command_generator_branch_block_stmt_1884_c_export_decl_macro_; 
{
{
// do-while:   file .Aa/sdhc.linked.aa, line 647
__declare_static_bit_vector(konst_1923,8);\
bit_vector_clear(&konst_1923);\
konst_1923.val.byte_array[0] = 136;\
__declare_static_bit_vector(ULT_u8_u1_1924,1);\
uint8_t do_while_entry_flag;
do_while_entry_flag = 1;
uint8_t do_while_loopback_flag;
do_while_loopback_flag = 0;
while(1) {
// merge  file .Aa/sdhc.linked.aa, line 649
_command_generator_merge_stmt_1886_c_preamble_macro_; 
// 				$phi J := 				  ($bitcast ($uint<8>) 0  ) $on   $entry 				  next_J $on   $loopback 
 // type of target is $uint<8>
_command_generator_phi_stmt_1887_c_macro_; 
// 				$phi old_bigresponsebits := 				  ($bitcast ($uint<136>) 0  ) $on   $entry 				  new_bigresponsebits $on   $loopback 
 // type of target is $uint<136>
_command_generator_phi_stmt_1892_c_macro_; 
_command_generator_merge_stmt_1886_c_postamble_macro_; 
// 				$volatile next_J := (J + 1 ) $buffering 1
_command_generator_assign_stmt_1903_c_macro_; 
// 				bigresponsebit := responseRx $buffering 1// bits of buffering = 1. 
_command_generator_assign_stmt_1906_c_macro_; 
// 				$volatile bigresponsebits := (($bitcast ($uint<135>) 0  ) && bigresponsebit) $buffering 1
_command_generator_assign_stmt_1913_c_macro_; 
// 				$volatile new_bigresponsebits := ((old_bigresponsebits << 1 ) | bigresponsebits) $buffering 1
_command_generator_assign_stmt_1920_c_macro_; 
do_while_entry_flag = 0;
do_while_loopback_flag = 1;
bit_vector_clear(&konst_1923);\
konst_1923.val.byte_array[0] = 136;\
bit_vector_less(0, &(next_J), &(konst_1923), &(ULT_u8_u1_1924));\
if (has_undefined_bit(&ULT_u8_u1_1924)) {fprintf(stderr, "Error: variable ULT_u8_u1_1924 has undefined value (%s) at test point.\n", to_string(&ULT_u8_u1_1924));assert(0);} \

if (!bit_vector_to_uint64(0, &ULT_u8_u1_1924)) break;
} 
}
_command_generator_branch_block_stmt_1884_c_export_apply_macro_;
}
// 			responseEnable := ZERO_1 $buffering 1// bits of buffering = 1. 
_command_generator_assign_stmt_1928_c_macro_; 
// 			bigResponseEnable := ZERO_1 $buffering 1// bits of buffering = 1. 
_command_generator_assign_stmt_1931_c_macro_; 
// $report (gen_comm f 			 bigResponse bigResponse )
_command_generator_stmt_1933_c_macro_; 
// 			$volatile CID_CRC := ( $slice bigResponse 7 1 )  $buffering 1
_command_generator_assign_stmt_1937_c_macro_; 
// if statement :  file .Aa/sdhc.linked.aa, line 0
__declare_static_bit_vector(konst_1940,8);\
bit_vector_clear(&konst_1940);\
konst_1940.val.byte_array[0] = 8;\
__declare_static_bit_vector(AND_u8_u8_1941,8);\
__declare_static_bit_vector(konst_1942,8);\
bit_vector_clear(&konst_1942);\
konst_1942.val.byte_array[0] = 8;\
__declare_static_bit_vector(EQ_u8_u1_1943,1);\
bit_vector_clear(&konst_1940);\
konst_1940.val.byte_array[0] = 8;\
bit_vector_and(&(commandRegVal), &(konst_1940), &(AND_u8_u8_1941));\
bit_vector_clear(&konst_1942);\
konst_1942.val.byte_array[0] = 8;\
bit_vector_equal(0, &(AND_u8_u8_1941), &(konst_1942), &(EQ_u8_u1_1943));\
if (has_undefined_bit(&EQ_u8_u1_1943)) {fprintf(stderr, "Error: variable EQ_u8_u1_1943 has undefined value (%s) at test point.\n", to_string(&EQ_u8_u1_1943));assert(0);} \

if (bit_vector_to_uint64(0, &EQ_u8_u1_1943)) { 
// 			$call generate_crc_7_120 (( $slice bigResponse 127 8 )  ) (R2_CRC ) 
_command_generator_call_stmt_1947_c_macro_; 
// 			CommandCRCError1 := ( $mux (CID_CRC == R2_CRC) _b00000000   _b00000010  )  $buffering 1// bits of buffering = 8. 
_command_generator_assign_stmt_1955_c_macro_; 
} 
else {
 ;
}
// 			commandEndBitError1 := ( $mux (bigResponse [] 0 ) ZERO_8  ($bitcast ($uint<8>) 4  ) )  $buffering 1// bits of buffering = 8. 
_command_generator_assign_stmt_1965_c_macro_; 
// 			errorInterruptStatusVar_3 := (CommandCRCError1 | commandEndBitError1) $buffering 1// bits of buffering = 8. 
_command_generator_assign_stmt_1970_c_macro_; 
_command_generator_branch_block_stmt_1971_c_export_decl_macro_; 
{
{
// do-while:   file .Aa/sdhc.linked.aa, line 674
__declare_static_bit_vector(konst_2006,8);\
bit_vector_clear(&konst_2006);\
konst_2006.val.byte_array[0] = 15;\
__declare_static_bit_vector(ULT_u8_u1_2007,1);\
uint8_t do_while_entry_flag;
do_while_entry_flag = 1;
uint8_t do_while_loopback_flag;
do_while_loopback_flag = 0;
while(1) {
// merge  file .Aa/sdhc.linked.aa, line 676
_command_generator_merge_stmt_1973_c_preamble_macro_; 
// 				$phi k := 				  ($bitcast ($uint<8>) 0  ) $on   $entry 				  next_k $on   $loopback 
 // type of target is $uint<8>
_command_generator_phi_stmt_1974_c_macro_; 
// 				$phi temp := 				  ( $slice bigResponse 127 8 )  $on   $entry 				  next_temp $on   $loopback 
 // type of target is $uint<120>
_command_generator_phi_stmt_1979_c_macro_; 
_command_generator_merge_stmt_1973_c_postamble_macro_; 
// 				$volatile address := (16  + k) $buffering 1
_command_generator_assign_stmt_1989_c_macro_; 
// 				$call writeSDHCRegisters (address ( $slice temp 7 0 )  ) () 
_command_generator_call_stmt_1993_c_macro_; 
// 				$volatile next_temp := (temp >> 8 ) $buffering 1
_command_generator_assign_stmt_1998_c_macro_; 
// 				$volatile next_k := (k + 1 ) $buffering 1
_command_generator_assign_stmt_2003_c_macro_; 
do_while_entry_flag = 0;
do_while_loopback_flag = 1;
bit_vector_clear(&konst_2006);\
konst_2006.val.byte_array[0] = 15;\
bit_vector_less(0, &(next_k), &(konst_2006), &(ULT_u8_u1_2007));\
if (has_undefined_bit(&ULT_u8_u1_2007)) {fprintf(stderr, "Error: variable ULT_u8_u1_2007 has undefined value (%s) at test point.\n", to_string(&ULT_u8_u1_2007));assert(0);} \

if (!bit_vector_to_uint64(0, &ULT_u8_u1_2007)) break;
} 
}
_command_generator_branch_block_stmt_1971_c_export_apply_macro_;
}
// 			$call readSDHCRegisters (36  ) (tempPresentState3 ) 
_command_generator_call_stmt_2011_c_macro_; 
// 			presentState3 := ((tempPresentState3 >> 1 ) << 1 ) $buffering 1// bits of buffering = 8. 
_command_generator_assign_stmt_2018_c_macro_; 
// 			$call readSDHCRegisters (48  ) (normalInterrupt3 ) 
_command_generator_call_stmt_2021_c_macro_; 
// 			$call writeSDHCRegisters (36  presentState3 ) () 
_command_generator_call_stmt_2024_c_macro_; 
// 			normalInterruptStatusVar_3 := (normalInterrupt3 | _h01 ) $buffering 1// bits of buffering = 8. 
_command_generator_assign_stmt_2029_c_macro_; 
/* 			$place[normalInterruptResponse3]
*/  goto normalInterruptResponse3_1486;
} 
else {
// if statement :  file .Aa/sdhc.linked.aa, line 0
__declare_static_bit_vector(konst_2034,2);\
bit_vector_clear(&konst_2034);\
__declare_static_bit_vector(EQ_u2_u1_2035,1);\
bit_vector_clear(&konst_2034);\
bit_vector_equal(0, &(response_type), &(konst_2034), &(EQ_u2_u1_2035));\
if (has_undefined_bit(&EQ_u2_u1_2035)) {fprintf(stderr, "Error: variable EQ_u2_u1_2035 has undefined value (%s) at test point.\n", to_string(&EQ_u2_u1_2035));assert(0);} \

if (bit_vector_to_uint64(0, &EQ_u2_u1_2035)) { 
// 			$call readSDHCRegisters (36  ) (tempPresentState1 ) 
_command_generator_call_stmt_2038_c_macro_; 
// 			$volatile presentState1 := ((tempPresentState1 >> 1 ) << 1 ) $buffering 1
_command_generator_assign_stmt_2045_c_macro_; 
// 			$call readSDHCRegisters (48  ) (normalInterrupt1 ) 
_command_generator_call_stmt_2048_c_macro_; 
// 			$call writeSDHCRegisters (36  presentState1 ) () 
_command_generator_call_stmt_2051_c_macro_; 
// 			$volatile normalInterruptStatusVar_1 := (normalInterrupt1 | _h01 ) $buffering 1
_command_generator_assign_stmt_2056_c_macro_; 
// 			$volatile errorInterruptStatusVar_1 := ZERO_8 $buffering 1
_command_generator_assign_stmt_2059_c_macro_; 
/* 			$place[normalInterruptResponse1]
*/  goto normalInterruptResponse1_1486;
} 
else {
 ;
}
}
}
// merge  file .Aa/sdhc.linked.aa, line 706
_command_generator_merge_stmt_2064_c_preamble_macro_; 
// 			$phi normalInterruptStatusVar1 := 			  normalInterruptStatusVar_1 $on   normalInterruptResponse1 			  normalInterruptStatusVar_2 $on   normalInterruptResponse2 			  normalInterruptStatusVar_3 $on   normalInterruptResponse3 
 // type of target is $uint<8>
_command_generator_phi_stmt_2065_c_macro_; 
// 			$phi errorInterruptStatusVar1 := 			  errorInterruptStatusVar_1 $on   normalInterruptResponse1 			  errorInterruptStatusVar_2 $on   normalInterruptResponse2 			  errorInterruptStatusVar_3 $on   normalInterruptResponse3 
 // type of target is $uint<8>
_command_generator_phi_stmt_2070_c_macro_; 
_command_generator_merge_stmt_2064_c_postamble_macro_; 
// if statement :  file .Aa/sdhc.linked.aa, line 0
__declare_static_bit_vector(konst_2078,1);\
bit_vector_clear(&konst_2078);\
konst_2078.val.byte_array[0] = 1;\
__declare_static_bit_vector(EQ_u1_u1_2079,1);\
bit_vector_clear(&konst_2078);\
konst_2078.val.byte_array[0] = 1;\
bit_vector_equal(0, &(dataPresentSelect), &(konst_2078), &(EQ_u1_u1_2079));\
if (has_undefined_bit(&EQ_u1_u1_2079)) {fprintf(stderr, "Error: variable EQ_u1_u1_2079 has undefined value (%s) at test point.\n", to_string(&EQ_u1_u1_2079));assert(0);} \

if (bit_vector_to_uint64(0, &EQ_u1_u1_2079)) { 
// if statement :  file .Aa/sdhc.linked.aa, line 1736322848
__declare_static_bit_vector(konst_2082,1);\
bit_vector_clear(&konst_2082);\
konst_2082.val.byte_array[0] = 1;\
__declare_static_bit_vector(EQ_u1_u1_2083,1);\
__declare_static_bit_vector(konst_2085,2);\
bit_vector_clear(&konst_2085);\
konst_2085.val.byte_array[0] = 3;\
__declare_static_bit_vector(NEQ_u2_u1_2086,1);\
__declare_static_bit_vector(AND_u1_u1_2087,1);\
bit_vector_clear(&konst_2082);\
konst_2082.val.byte_array[0] = 1;\
bit_vector_equal(0, &(txOrRX), &(konst_2082), &(EQ_u1_u1_2083));\
bit_vector_clear(&konst_2085);\
konst_2085.val.byte_array[0] = 3;\
bit_vector_not_equal(0, &(response_type), &(konst_2085), &NEQ_u2_u1_2086);\
bit_vector_and(&(EQ_u1_u1_2083), &(NEQ_u2_u1_2086), &(AND_u1_u1_2087));\
if (has_undefined_bit(&AND_u1_u1_2087)) {fprintf(stderr, "Error: variable AND_u1_u1_2087 has undefined value (%s) at test point.\n", to_string(&AND_u1_u1_2087));assert(0);} \

if (bit_vector_to_uint64(0, &AND_u1_u1_2087)) { 
// 			$call readSDHCRegisters (12  ) (tempTransfer ) 
_command_generator_call_stmt_2090_c_macro_; 
// 			singleMultipleReadBlock := (  $bitreduce |  (tempTransfer & _h20 ) ) $buffering 1// bits of buffering = 1. 
_command_generator_assign_stmt_2096_c_macro_; 
// 			$call dataRx (singleMultipleReadBlock ) (dataErrorInterruptStatusVar1 ) 
_command_generator_call_stmt_2099_c_macro_; 
// 			dataRxEnrty1 := ONE_1 $buffering 1// bits of buffering = 1. 
_command_generator_assign_stmt_2102_c_macro_; 
// 			dataRxEnrty2 := ZERO_1 $buffering 1// bits of buffering = 1. 
_command_generator_assign_stmt_2105_c_macro_; 
// 			transferCompleteData := ( $mux singleMultipleReadBlock ($bitcast ($uint<8>) 2  )  ZERO_8 )  $buffering 1// bits of buffering = 8. 
_command_generator_assign_stmt_2112_c_macro_; 
// if statement :  file .Aa/sdhc.linked.aa, line 40949120
__declare_static_bit_vector(konst_2115,1);\
bit_vector_clear(&konst_2115);\
konst_2115.val.byte_array[0] = 1;\
__declare_static_bit_vector(EQ_u1_u1_2116,1);\
bit_vector_clear(&konst_2115);\
konst_2115.val.byte_array[0] = 1;\
bit_vector_equal(0, &(singleMultipleReadBlock), &(konst_2115), &(EQ_u1_u1_2116));\
if (has_undefined_bit(&EQ_u1_u1_2116)) {fprintf(stderr, "Error: variable EQ_u1_u1_2116 has undefined value (%s) at test point.\n", to_string(&EQ_u1_u1_2116));assert(0);} \

if (bit_vector_to_uint64(0, &EQ_u1_u1_2116)) { 
// merge  file .Aa/sdhc.linked.aa, line 721
_command_generator_merge_stmt_2117_c_preamble_macro_; 
// 				$phi B := 				  next_B $on   loopBlock1 				  ONE_8 $on   $entry 
 // type of target is $uint<8>
_command_generator_phi_stmt_2118_c_macro_; 
// 				$phi readNewBlockCount := 				  readBlockCount $on   loopBlock1 				  ($bitcast ($uint<16>) 0  ) $on   $entry 
 // type of target is $uint<16>
_command_generator_phi_stmt_2122_c_macro_; 
_command_generator_merge_stmt_2117_c_postamble_macro_; 
// 			$call readSDHCRegisters ((6  + B) ) (readnewBlockCountTemp ) 
_command_generator_call_stmt_2132_c_macro_; 
// 			$volatile readBlockCount := (( $slice readNewBlockCount 7 0 )  && readnewBlockCountTemp) $buffering 1
_command_generator_assign_stmt_2138_c_macro_; 
// 			$volatile next_B := (B - 1 ) $buffering 1
_command_generator_assign_stmt_2143_c_macro_; 
// if statement :  file .Aa/sdhc.linked.aa, line 40729344
__declare_static_bit_vector(konst_2146,8);\
bit_vector_clear(&konst_2146);\
__declare_static_bit_vector(NEQ_u8_u1_2147,1);\
bit_vector_clear(&konst_2146);\
bit_vector_not_equal(0, &(B), &(konst_2146), &NEQ_u8_u1_2147);\
if (has_undefined_bit(&NEQ_u8_u1_2147)) {fprintf(stderr, "Error: variable NEQ_u8_u1_2147 has undefined value (%s) at test point.\n", to_string(&NEQ_u8_u1_2147));assert(0);} \

if (bit_vector_to_uint64(0, &NEQ_u8_u1_2147)) { 
/* 			$place[loopBlock1]
*/  goto loopBlock1_1486;
} 
else {
 ;
}
// 			newReadBlockCount := (readBlockCount - 1 ) $buffering 1// bits of buffering = 16. 
_command_generator_assign_stmt_2154_c_macro_; 
// 			$call writeSDHCRegisters (7  ( $slice newReadBlockCount 15 8 )  ) () 
_command_generator_call_stmt_2158_c_macro_; 
// 			$call writeSDHCRegisters (6  ( $slice newReadBlockCount 7 0 )  ) () 
_command_generator_call_stmt_2162_c_macro_; 
} 
else {
 ;
}
} 
else {
 ;
}
// 			dataTransferComplete := ( $mux (response_type == 3 ) ($bitcast ($uint<8>) 2  )  transferCompleteData )  $buffering 1// bits of buffering = 8. 
_command_generator_assign_stmt_2173_c_macro_; 
} 
else {
 ;
}
// 		normalInterruptStatusVar2 := ZERO_8 $buffering 1// bits of buffering = 8. 
_command_generator_assign_stmt_2177_c_macro_; 
// 		errorInterruptStatusVar2 := ZERO_8 $buffering 1// bits of buffering = 8. 
_command_generator_assign_stmt_2180_c_macro_; 
_command_generator_branch_block_stmt_1486_c_export_apply_macro_;
}
_command_generator_inner_outarg_prep_macro__; 
MUTEX_UNLOCK(_command_generator_series_block_stmt_1479_c_mutex_);
}
void command_generator(uint8_t*  normalInterruptStatusVar1 , uint8_t*  normalInterruptStatusVar2 , uint8_t*  errorInterruptStatusVar1 , uint8_t*  errorInterruptStatusVar2 , uint8_t*  dataErrorInterruptStatusVar1 , uint8_t*  dataTransferComplete )
{
_command_generator_outer_arg_decl_macro__;
_command_generator_( &__normalInterruptStatusVar1,  &__normalInterruptStatusVar2,  &__errorInterruptStatusVar1,  &__errorInterruptStatusVar2,  &__dataErrorInterruptStatusVar1,  &__dataTransferComplete);
_command_generator_outer_op_xfer_macro__;
}


void _dataRx_(bit_vector* __psingleMultipleReadBlock, bit_vector*  __pdataErrorInterruptStatusVar1)
{
MUTEX_DECL(_dataRx_series_block_stmt_740_c_mutex_);
MUTEX_LOCK(_dataRx_series_block_stmt_740_c_mutex_);
_dataRx_inner_inarg_prep_macro__; 
_dataRx_branch_block_stmt_743_c_export_decl_macro_; 
{
// 		presentState1Var := sdhcRegisters[37 ] $buffering 1// bits of buffering = 8. 
_dataRx_assign_stmt_747_c_macro_; 
// 		presentState0Var := sdhcRegisters[36 ] $buffering 1// bits of buffering = 8. 
_dataRx_assign_stmt_751_c_macro_; 
// if statement :  file .Aa/sdhc.linked.aa, line 337
__declare_static_bit_vector(konst_753,32);\
bit_vector_clear(&konst_753);\
konst_753.val.byte_array[0] = 40;\
__declare_static_bit_vector(konst_755,8);\
bit_vector_clear(&konst_755);\
konst_755.val.byte_array[0] = 1;\
__declare_static_bit_vector(BITSEL_u8_u1_756,1);\
bit_vector_clear(&konst_753);\
konst_753.val.byte_array[0] = 40;\
bit_vector_clear(&konst_755);\
konst_755.val.byte_array[0] = 1;\
bit_vector_bitsel( &((sdhcRegisters[bit_vector_to_uint64(0, &konst_753)])), &(konst_755), &(BITSEL_u8_u1_756));\
if (has_undefined_bit(&BITSEL_u8_u1_756)) {fprintf(stderr, "Error: variable BITSEL_u8_u1_756 has undefined value (%s) at test point.\n", to_string(&BITSEL_u8_u1_756));assert(0);} \

if (bit_vector_to_uint64(0, &BITSEL_u8_u1_756)) { 
_dataRx_parallel_block_stmt_757_c_export_decl_macro_; 
{
// 				$call recvdat0 () (dat0 nextCRC_0 stopBit0 ) 
_dataRx_call_stmt_761_c_macro_; 
// 				$call recvdat1 () (dat1 nextCRC_1 stopBit1 ) 
_dataRx_call_stmt_765_c_macro_; 
// 				$call recvdat2 () (dat2 nextCRC_2 stopBit2 ) 
_dataRx_call_stmt_769_c_macro_; 
// 				$call recvdat3 () (dat3 nextCRC_3 stopBit3 ) 
_dataRx_call_stmt_773_c_macro_; 
_dataRx_parallel_block_stmt_757_c_export_apply_macro_;
}
// 			$volatile stopBitError0 := (stopBit0 == 0 ) $buffering 1
_dataRx_assign_stmt_779_c_macro_; 
{
// do-while:   file .Aa/sdhc.linked.aa, line 347
__declare_static_bit_vector(konst_845,13);\
bit_vector_clear(&konst_845);\
konst_845.val.byte_array[1] = 4;\
__declare_static_bit_vector(ULT_u13_u1_846,1);\
uint8_t do_while_entry_flag;
do_while_entry_flag = 1;
uint8_t do_while_loopback_flag;
do_while_loopback_flag = 0;
while(1) {
// merge  file .Aa/sdhc.linked.aa, line 349
_dataRx_merge_stmt_781_c_preamble_macro_; 
// 			$phi J_0 := 			  next_J_0 $on   $loopback 			  ($bitcast ($uint<13>) 0  ) $on   $entry 
 // type of target is $uint<13>
_dataRx_phi_stmt_782_c_macro_; 
// 			$phi CRC_16_0 := 			  ($bitcast ($uint<16>) 0  ) $on   $entry 			  nextCRC16_0 $on   $loopback 
 // type of target is $uint<16>
_dataRx_phi_stmt_788_c_macro_; 
// 			$phi tempData0 := 			  dat0 $on   $entry 			  nextTempData0 $on   $loopback 
 // type of target is $uint<1024>
_dataRx_phi_stmt_793_c_macro_; 
_dataRx_merge_stmt_781_c_postamble_macro_; 
// 			$volatile inv0 := ((tempData0 [] 1023 ) ^ (CRC_16_0 [] 15 )) $buffering 1
_dataRx_assign_stmt_806_c_macro_; 
// 			$volatile nextCRC16_0 := (((( $slice CRC_16_0 14 12 )  && ((CRC_16_0 [] 11 ) ^ inv0)) && ( $slice CRC_16_0 10 5 ) ) && ((((CRC_16_0 [] 4 ) ^ inv0) && ( $slice CRC_16_0 3 0 ) ) && inv0)) $buffering 1
_dataRx_assign_stmt_832_c_macro_; 
// 			$volatile nextTempData0 := (tempData0 << 1 ) $buffering 1
_dataRx_assign_stmt_837_c_macro_; 
// 			$volatile next_J_0 := (J_0 + 1 ) $buffering 1
_dataRx_assign_stmt_842_c_macro_; 
do_while_entry_flag = 0;
do_while_loopback_flag = 1;
bit_vector_clear(&konst_845);\
konst_845.val.byte_array[1] = 4;\
bit_vector_less(0, &(next_J_0), &(konst_845), &(ULT_u13_u1_846));\
if (has_undefined_bit(&ULT_u13_u1_846)) {fprintf(stderr, "Error: variable ULT_u13_u1_846 has undefined value (%s) at test point.\n", to_string(&ULT_u13_u1_846));assert(0);} \

if (!bit_vector_to_uint64(0, &ULT_u13_u1_846)) break;
} 
}
// 			$volatile crcError0 := (nextCRC_0 != nextCRC16_0) $buffering 1
_dataRx_assign_stmt_851_c_macro_; 
// 			$volatile stopBitError1 := (stopBit1 == 0 ) $buffering 1
_dataRx_assign_stmt_856_c_macro_; 
{
// do-while:   file .Aa/sdhc.linked.aa, line 364
__declare_static_bit_vector(konst_919,13);\
bit_vector_clear(&konst_919);\
konst_919.val.byte_array[1] = 4;\
__declare_static_bit_vector(ULT_u13_u1_920,1);\
uint8_t do_while_entry_flag;
do_while_entry_flag = 1;
uint8_t do_while_loopback_flag;
do_while_loopback_flag = 0;
while(1) {
// merge  file .Aa/sdhc.linked.aa, line 366
_dataRx_merge_stmt_858_c_preamble_macro_; 
// 			$phi J_1 := 			  ($bitcast ($uint<13>) 0  ) $on   $entry 			  next_J_1 $on   $loopback 
 // type of target is $uint<13>
_dataRx_phi_stmt_859_c_macro_; 
// 			$phi CRC_16_1 := 			  ($bitcast ($uint<16>) 0  ) $on   $entry 			  nextCRC16_1 $on   $loopback 
 // type of target is $uint<16>
_dataRx_phi_stmt_864_c_macro_; 
// 			$phi tempData1 := 			  dat1 $on   $entry 			  nextTempData1 $on   $loopback 
 // type of target is $uint<1024>
_dataRx_phi_stmt_869_c_macro_; 
_dataRx_merge_stmt_858_c_postamble_macro_; 
// 			$volatile inv1 := ((tempData1 [] 1023 ) ^ (CRC_16_1 [] 15 )) $buffering 1
_dataRx_assign_stmt_882_c_macro_; 
// 			$volatile nextCRC16_1 := (((( $slice CRC_16_1 14 12 )  && ((CRC_16_1 [] 11 ) ^ inv1)) && ( $slice CRC_16_1 10 5 ) ) && ((((CRC_16_1 [] 4 ) ^ inv1) && ( $slice CRC_16_1 3 0 ) ) && inv1)) $buffering 1
_dataRx_assign_stmt_906_c_macro_; 
// 			$volatile nextTempData1 := (tempData1 << 1 ) $buffering 1
_dataRx_assign_stmt_911_c_macro_; 
// 			$volatile next_J_1 := (J_1 + 1 ) $buffering 1
_dataRx_assign_stmt_916_c_macro_; 
do_while_entry_flag = 0;
do_while_loopback_flag = 1;
bit_vector_clear(&konst_919);\
konst_919.val.byte_array[1] = 4;\
bit_vector_less(0, &(next_J_1), &(konst_919), &(ULT_u13_u1_920));\
if (has_undefined_bit(&ULT_u13_u1_920)) {fprintf(stderr, "Error: variable ULT_u13_u1_920 has undefined value (%s) at test point.\n", to_string(&ULT_u13_u1_920));assert(0);} \

if (!bit_vector_to_uint64(0, &ULT_u13_u1_920)) break;
} 
}
// 			$volatile crcError1 := (nextCRC_1 != nextCRC16_1) $buffering 1
_dataRx_assign_stmt_925_c_macro_; 
// 			$volatile stopBitError2 := (stopBit2 == 0 ) $buffering 1
_dataRx_assign_stmt_930_c_macro_; 
{
// do-while:   file .Aa/sdhc.linked.aa, line 381
__declare_static_bit_vector(konst_993,13);\
bit_vector_clear(&konst_993);\
konst_993.val.byte_array[1] = 4;\
__declare_static_bit_vector(ULT_u13_u1_994,1);\
uint8_t do_while_entry_flag;
do_while_entry_flag = 1;
uint8_t do_while_loopback_flag;
do_while_loopback_flag = 0;
while(1) {
// merge  file .Aa/sdhc.linked.aa, line 383
_dataRx_merge_stmt_932_c_preamble_macro_; 
// 			$phi J_2 := 			  ($bitcast ($uint<13>) 0  ) $on   $entry 			  next_J_2 $on   $loopback 
 // type of target is $uint<13>
_dataRx_phi_stmt_933_c_macro_; 
// 			$phi CRC_16_2 := 			  ($bitcast ($uint<16>) 0  ) $on   $entry 			  nextCRC16_2 $on   $loopback 
 // type of target is $uint<16>
_dataRx_phi_stmt_938_c_macro_; 
// 			$phi tempData2 := 			  dat2 $on   $entry 			  nextTempData2 $on   $loopback 
 // type of target is $uint<1024>
_dataRx_phi_stmt_943_c_macro_; 
_dataRx_merge_stmt_932_c_postamble_macro_; 
// 			$volatile inv2 := ((tempData2 [] 1023 ) ^ (CRC_16_2 [] 15 )) $buffering 1
_dataRx_assign_stmt_956_c_macro_; 
// 			$volatile nextCRC16_2 := (((( $slice CRC_16_2 14 12 )  && ((CRC_16_2 [] 11 ) ^ inv2)) && ( $slice CRC_16_2 10 5 ) ) && ((((CRC_16_2 [] 4 ) ^ inv2) && ( $slice CRC_16_2 3 0 ) ) && inv2)) $buffering 1
_dataRx_assign_stmt_980_c_macro_; 
// 			$volatile nextTempData2 := (tempData2 << 1 ) $buffering 1
_dataRx_assign_stmt_985_c_macro_; 
// 			$volatile next_J_2 := (J_2 + 1 ) $buffering 1
_dataRx_assign_stmt_990_c_macro_; 
do_while_entry_flag = 0;
do_while_loopback_flag = 1;
bit_vector_clear(&konst_993);\
konst_993.val.byte_array[1] = 4;\
bit_vector_less(0, &(next_J_2), &(konst_993), &(ULT_u13_u1_994));\
if (has_undefined_bit(&ULT_u13_u1_994)) {fprintf(stderr, "Error: variable ULT_u13_u1_994 has undefined value (%s) at test point.\n", to_string(&ULT_u13_u1_994));assert(0);} \

if (!bit_vector_to_uint64(0, &ULT_u13_u1_994)) break;
} 
}
// 			$volatile crcError2 := (nextCRC_2 != nextCRC16_2) $buffering 1
_dataRx_assign_stmt_999_c_macro_; 
// 			$volatile stopBitError3 := (stopBit3 == 0 ) $buffering 1
_dataRx_assign_stmt_1004_c_macro_; 
{
// do-while:   file .Aa/sdhc.linked.aa, line 398
__declare_static_bit_vector(konst_1067,13);\
bit_vector_clear(&konst_1067);\
konst_1067.val.byte_array[1] = 4;\
__declare_static_bit_vector(ULT_u13_u1_1068,1);\
uint8_t do_while_entry_flag;
do_while_entry_flag = 1;
uint8_t do_while_loopback_flag;
do_while_loopback_flag = 0;
while(1) {
// merge  file .Aa/sdhc.linked.aa, line 400
_dataRx_merge_stmt_1006_c_preamble_macro_; 
// 			$phi J_3 := 			  ($bitcast ($uint<13>) 0  ) $on   $entry 			  next_J_3 $on   $loopback 
 // type of target is $uint<13>
_dataRx_phi_stmt_1007_c_macro_; 
// 			$phi CRC_16_3 := 			  ($bitcast ($uint<16>) 0  ) $on   $entry 			  nextCRC16_3 $on   $loopback 
 // type of target is $uint<16>
_dataRx_phi_stmt_1012_c_macro_; 
// 			$phi tempData3 := 			  dat3 $on   $entry 			  nextTempData3 $on   $loopback 
 // type of target is $uint<1024>
_dataRx_phi_stmt_1017_c_macro_; 
_dataRx_merge_stmt_1006_c_postamble_macro_; 
// 			$volatile inv3 := ((tempData3 [] 1023 ) ^ (CRC_16_3 [] 15 )) $buffering 1
_dataRx_assign_stmt_1030_c_macro_; 
// 			$volatile nextCRC16_3 := (((( $slice CRC_16_3 14 12 )  && ((CRC_16_3 [] 11 ) ^ inv3)) && ( $slice CRC_16_3 10 5 ) ) && ((((CRC_16_3 [] 4 ) ^ inv3) && ( $slice CRC_16_3 3 0 ) ) && inv3)) $buffering 1
_dataRx_assign_stmt_1054_c_macro_; 
// 			$volatile nextTempData3 := (tempData3 << 1 ) $buffering 1
_dataRx_assign_stmt_1059_c_macro_; 
// 			$volatile next_J_3 := (J_3 + 1 ) $buffering 1
_dataRx_assign_stmt_1064_c_macro_; 
do_while_entry_flag = 0;
do_while_loopback_flag = 1;
bit_vector_clear(&konst_1067);\
konst_1067.val.byte_array[1] = 4;\
bit_vector_less(0, &(next_J_3), &(konst_1067), &(ULT_u13_u1_1068));\
if (has_undefined_bit(&ULT_u13_u1_1068)) {fprintf(stderr, "Error: variable ULT_u13_u1_1068 has undefined value (%s) at test point.\n", to_string(&ULT_u13_u1_1068));assert(0);} \

if (!bit_vector_to_uint64(0, &ULT_u13_u1_1068)) break;
} 
}
// 			$volatile crcError3 := (nextCRC_3 != nextCRC16_3) $buffering 1
_dataRx_assign_stmt_1073_c_macro_; 
// 			rxBufferPointer := ($bitcast ($uint<10>) 512  ) $buffering 1// bits of buffering = 10. 
_dataRx_assign_stmt_1077_c_macro_; 
// if statement :  file .Aa/sdhc.linked.aa, line 0
__declare_static_bit_vector(konst_1080,1);\
bit_vector_clear(&konst_1080);\
__declare_static_bit_vector(EQ_u1_u1_1081,1);\
bit_vector_clear(&konst_1080);\
bit_vector_equal(0, &(singleMultipleReadBlock), &(konst_1080), &(EQ_u1_u1_1081));\
if (has_undefined_bit(&EQ_u1_u1_1081)) {fprintf(stderr, "Error: variable EQ_u1_u1_1081 has undefined value (%s) at test point.\n", to_string(&EQ_u1_u1_1081));assert(0);} \

if (bit_vector_to_uint64(0, &EQ_u1_u1_1081)) { 
// 			sdhcRegisters[36 ] := (presentState0Var & _hfb ) $buffering 1// bits of buffering = 8. 
_dataRx_assign_stmt_1087_c_macro_; 
} 
else {
 ;
}
{
// do-while:   file .Aa/sdhc.linked.aa, line 418
__declare_static_bit_vector(konst_1173,10);\
bit_vector_clear(&konst_1173);\
konst_1173.val.byte_array[1] = 2;\
__declare_static_bit_vector(ULT_u10_u1_1174,1);\
uint8_t do_while_entry_flag;
do_while_entry_flag = 1;
uint8_t do_while_loopback_flag;
do_while_loopback_flag = 0;
while(1) {
// merge  file .Aa/sdhc.linked.aa, line 420
_dataRx_merge_stmt_1090_c_preamble_macro_; 
// 			$phi B := 			  ($bitcast ($uint<10>) 0  ) $on   $entry 			  next_B $on   $loopback 
 // type of target is $uint<10>
_dataRx_phi_stmt_1091_c_macro_; 
// 			$phi dataForBuffer0 := 			  dat0 $on   $entry 			  nextDataForBuffer0 $on   $loopback 
 // type of target is $uint<1024>
_dataRx_phi_stmt_1096_c_macro_; 
// 			$phi dataForBuffer1 := 			  dat1 $on   $entry 			  nextDataForBuffer1 $on   $loopback 
 // type of target is $uint<1024>
_dataRx_phi_stmt_1100_c_macro_; 
// 			$phi dataForBuffer2 := 			  dat2 $on   $entry 			  nextDataForBuffer2 $on   $loopback 
 // type of target is $uint<1024>
_dataRx_phi_stmt_1104_c_macro_; 
// 			$phi dataForBuffer3 := 			  dat3 $on   $entry 			  nextDataForBuffer3 $on   $loopback 
 // type of target is $uint<1024>
_dataRx_phi_stmt_1108_c_macro_; 
_dataRx_merge_stmt_1090_c_postamble_macro_; 
// 			dataBufferRx := ((((dataForBuffer3 [] 1023 ) && (dataForBuffer2 [] 1023 )) && ((dataForBuffer1 [] 1023 ) && (dataForBuffer0 [] 1023 ))) && (((dataForBuffer3 [] 1022 ) && (dataForBuffer2 [] 1022 )) && ((dataForBuffer1 [] 1022 ) && (dataForBuffer0 [] 1022 )))) $buffering 1// bits of buffering = 8. 
_dataRx_assign_stmt_1145_c_macro_; 
// 			$volatile nextDataForBuffer0 := (dataForBuffer0 << 2 ) $buffering 1
_dataRx_assign_stmt_1150_c_macro_; 
// 			$volatile nextDataForBuffer1 := (dataForBuffer1 << 2 ) $buffering 1
_dataRx_assign_stmt_1155_c_macro_; 
// 			$volatile nextDataForBuffer2 := (dataForBuffer2 << 2 ) $buffering 1
_dataRx_assign_stmt_1160_c_macro_; 
// 			$volatile nextDataForBuffer3 := (dataForBuffer3 << 2 ) $buffering 1
_dataRx_assign_stmt_1165_c_macro_; 
// 			$volatile next_B := (B + 1 ) $buffering 1
_dataRx_assign_stmt_1170_c_macro_; 
do_while_entry_flag = 0;
do_while_loopback_flag = 1;
bit_vector_clear(&konst_1173);\
konst_1173.val.byte_array[1] = 2;\
bit_vector_less(0, &(next_B), &(konst_1173), &(ULT_u10_u1_1174));\
if (has_undefined_bit(&ULT_u10_u1_1174)) {fprintf(stderr, "Error: variable ULT_u10_u1_1174 has undefined value (%s) at test point.\n", to_string(&ULT_u10_u1_1174));assert(0);} \

if (!bit_vector_to_uint64(0, &ULT_u10_u1_1174)) break;
} 
}
// 			$volatile stopBitError_Final := ((stopBitError0 | stopBitError1) | (stopBitError2 | stopBitError3)) $buffering 1
_dataRx_assign_stmt_1183_c_macro_; 
// 			$volatile crcError_Final := ((crcError0 | crcError1) | (crcError2 | crcError3)) $buffering 1
_dataRx_assign_stmt_1192_c_macro_; 
// 			dataErrorInterruptStatusVar1_4 := (((ZERO_1 && stopBitError_Final) && crcError_Final) && ((ZERO_1 && ZERO_2) && ZERO_2)) $buffering 1// bits of buffering = 8. 
_dataRx_assign_stmt_1205_c_macro_; 
} 
else {
// 			startBit := DAT0Rx $buffering 1// bits of buffering = 1. 
_dataRx_assign_stmt_1209_c_macro_; 
_dataRx_branch_block_stmt_1210_c_export_decl_macro_; 
{
// merge  file .Aa/sdhc.linked.aa, line 446
_dataRx_merge_stmt_1211_c_preamble_macro_; 
// 					$phi I := 					  ($bitcast ($uint<10>) 0  ) $on   $entry 					  next_I $on   loopback1 
 // type of target is $uint<10>
_dataRx_phi_stmt_1212_c_macro_; 
// 					$phi dat := 					  ($bitcast ($uint<4096>) 0  ) $on   $entry 					  next_data $on   loopback1 
 // type of target is $uint<4096>
_dataRx_phi_stmt_1217_c_macro_; 
_dataRx_merge_stmt_1211_c_postamble_macro_; 
// 				bit7 := DAT0Rx $buffering 1// bits of buffering = 1. 
_dataRx_assign_stmt_1226_c_macro_; 
// 				bit6 := DAT0Rx $buffering 1// bits of buffering = 1. 
_dataRx_assign_stmt_1229_c_macro_; 
// 				bit5 := DAT0Rx $buffering 1// bits of buffering = 1. 
_dataRx_assign_stmt_1232_c_macro_; 
// 				bit4 := DAT0Rx $buffering 1// bits of buffering = 1. 
_dataRx_assign_stmt_1235_c_macro_; 
// 				bit3 := DAT0Rx $buffering 1// bits of buffering = 1. 
_dataRx_assign_stmt_1238_c_macro_; 
// 				bit2 := DAT0Rx $buffering 1// bits of buffering = 1. 
_dataRx_assign_stmt_1241_c_macro_; 
// 				bit1 := DAT0Rx $buffering 1// bits of buffering = 1. 
_dataRx_assign_stmt_1244_c_macro_; 
// 				bit0 := DAT0Rx $buffering 1// bits of buffering = 1. 
_dataRx_assign_stmt_1247_c_macro_; 
// 				dataBufferRx := (((bit7 && bit6) && (bit5 && bit4)) && ((bit3 && bit2) && (bit1 && bit0))) $buffering 1// bits of buffering = 8. 
_dataRx_assign_stmt_1264_c_macro_; 
// 				next_data := ((dat << 8 ) | (($bitcast ($uint<4088>) 0  ) && (((bit7 && bit6) && (bit5 && bit4)) && ((bit3 && bit2) && (bit1 && bit0))))) $buffering 1// bits of buffering = 4096. 
_dataRx_assign_stmt_1289_c_macro_; 
// 				next_I := (I + 1 ) $buffering 1// bits of buffering = 10. 
_dataRx_assign_stmt_1294_c_macro_; 
// if statement :  file .Aa/sdhc.linked.aa, line 0
__declare_static_bit_vector(konst_1297,10);\
bit_vector_clear(&konst_1297);\
konst_1297.val.byte_array[1] = 2;\
__declare_static_bit_vector(ULT_u10_u1_1298,1);\
bit_vector_clear(&konst_1297);\
konst_1297.val.byte_array[1] = 2;\
bit_vector_less(0, &(next_I), &(konst_1297), &(ULT_u10_u1_1298));\
if (has_undefined_bit(&ULT_u10_u1_1298)) {fprintf(stderr, "Error: variable ULT_u10_u1_1298 has undefined value (%s) at test point.\n", to_string(&ULT_u10_u1_1298));assert(0);} \

if (bit_vector_to_uint64(0, &ULT_u10_u1_1298)) { 
/* 				$place[loopback1]
*/  goto loopback1_1210;
} 
else {
 ;
}
_dataRx_branch_block_stmt_1210_c_export_apply_macro_;
}
// 			rxBufferPointer := ($bitcast ($uint<10>) 512  ) $buffering 1// bits of buffering = 10. 
_dataRx_assign_stmt_1305_c_macro_; 
// merge  file .Aa/sdhc.linked.aa, line 469
_dataRx_merge_stmt_1306_c_preamble_macro_; 
// 				$phi K := 				  ($bitcast ($uint<5>) 0  ) $on   $entry 				  next_K $on   crcloopback 
 // type of target is $uint<5>
_dataRx_phi_stmt_1307_c_macro_; 
// 				$phi currentCRC := 				  ($bitcast ($uint<16>) 0  ) $on   $entry 				  nextCRC $on   crcloopback 
 // type of target is $uint<16>
_dataRx_phi_stmt_1313_c_macro_; 
_dataRx_merge_stmt_1306_c_postamble_macro_; 
// 			nextCRC := ((currentCRC << 1 ) | (($bitcast ($uint<15>) 0  ) && DAT0Rx)) $buffering 1// bits of buffering = 16. 
_dataRx_assign_stmt_1329_c_macro_; 
// 			next_K := (K + 1 ) $buffering 1// bits of buffering = 5. 
_dataRx_assign_stmt_1334_c_macro_; 
// if statement :  file .Aa/sdhc.linked.aa, line 1736322208
__declare_static_bit_vector(konst_1337,5);\
bit_vector_clear(&konst_1337);\
konst_1337.val.byte_array[0] = 16;\
__declare_static_bit_vector(ULT_u5_u1_1338,1);\
bit_vector_clear(&konst_1337);\
konst_1337.val.byte_array[0] = 16;\
bit_vector_less(0, &(next_K), &(konst_1337), &(ULT_u5_u1_1338));\
if (has_undefined_bit(&ULT_u5_u1_1338)) {fprintf(stderr, "Error: variable ULT_u5_u1_1338 has undefined value (%s) at test point.\n", to_string(&ULT_u5_u1_1338));assert(0);} \

if (bit_vector_to_uint64(0, &ULT_u5_u1_1338)) { 
/* 			$place[crcloopback]
*/  goto crcloopback_743;
} 
else {
 ;
}
// 			stopBit := DAT0Rx $buffering 1// bits of buffering = 1. 
_dataRx_assign_stmt_1343_c_macro_; 
// if statement :  file .Aa/sdhc.linked.aa, line 1736322208
__declare_static_bit_vector(konst_1346,1);\
bit_vector_clear(&konst_1346);\
__declare_static_bit_vector(EQ_u1_u1_1347,1);\
bit_vector_clear(&konst_1346);\
bit_vector_equal(0, &(singleMultipleReadBlock), &(konst_1346), &(EQ_u1_u1_1347));\
if (has_undefined_bit(&EQ_u1_u1_1347)) {fprintf(stderr, "Error: variable EQ_u1_u1_1347 has undefined value (%s) at test point.\n", to_string(&EQ_u1_u1_1347));assert(0);} \

if (bit_vector_to_uint64(0, &EQ_u1_u1_1347)) { 
// 			sdhcRegisters[36 ] := (presentState0Var & _hfb ) $buffering 1// bits of buffering = 8. 
_dataRx_assign_stmt_1353_c_macro_; 
} 
else {
 ;
}
// 			stopBitError := (stopBit == 0 ) $buffering 1// bits of buffering = 1. 
_dataRx_assign_stmt_1359_c_macro_; 
// merge  file .Aa/sdhc.linked.aa, line 485
_dataRx_merge_stmt_1360_c_preamble_macro_; 
// 				$phi J := 				  ($bitcast ($uint<13>) 0  ) $on   $entry 				  next_J $on   loopback 
 // type of target is $uint<13>
_dataRx_phi_stmt_1361_c_macro_; 
// 				$phi CRC_16 := 				  ($bitcast ($uint<16>) 0  ) $on   $entry 				  nextCRC16 $on   loopback 
 // type of target is $uint<16>
_dataRx_phi_stmt_1366_c_macro_; 
// 				$phi tempData := 				  dat $on   $entry 				  nextTempData $on   loopback 
 // type of target is $uint<4096>
_dataRx_phi_stmt_1371_c_macro_; 
_dataRx_merge_stmt_1360_c_postamble_macro_; 
// 			inv := ((tempData [] 4095 ) ^ (CRC_16 [] 15 )) $buffering 1// bits of buffering = 1. 
_dataRx_assign_stmt_1384_c_macro_; 
// 			nextCRC16 := (((( $slice CRC_16 14 12 )  && ((CRC_16 [] 11 ) ^ inv)) && ( $slice CRC_16 10 5 ) ) && ((((CRC_16 [] 4 ) ^ inv) && ( $slice CRC_16 3 0 ) ) && inv)) $buffering 1// bits of buffering = 16. 
_dataRx_assign_stmt_1408_c_macro_; 
// 			nextTempData := (tempData << 1 ) $buffering 1// bits of buffering = 4096. 
_dataRx_assign_stmt_1413_c_macro_; 
// 			$volatile next_J := (J + 1 ) $buffering 1
_dataRx_assign_stmt_1418_c_macro_; 
// if statement :  file .Aa/sdhc.linked.aa, line 0
__declare_static_bit_vector(konst_1421,13);\
bit_vector_clear(&konst_1421);\
konst_1421.val.byte_array[1] = 16;\
__declare_static_bit_vector(ULT_u13_u1_1422,1);\
bit_vector_clear(&konst_1421);\
konst_1421.val.byte_array[1] = 16;\
bit_vector_less(0, &(next_J), &(konst_1421), &(ULT_u13_u1_1422));\
if (has_undefined_bit(&ULT_u13_u1_1422)) {fprintf(stderr, "Error: variable ULT_u13_u1_1422 has undefined value (%s) at test point.\n", to_string(&ULT_u13_u1_1422));assert(0);} \

if (bit_vector_to_uint64(0, &ULT_u13_u1_1422)) { 
/* 			$place[loopback]
*/  goto loopback_743;
} 
else {
 ;
}
// 			crcError := (nextCRC != nextCRC16) $buffering 1// bits of buffering = 1. 
_dataRx_assign_stmt_1429_c_macro_; 
// 			dataRxEnrty := ONE_1 $buffering 1// bits of buffering = 1.  Orphaned statement with target dataRxEnrty ?? 
_dataRx_assign_stmt_1432_c_macro_; 
// 			dataErrorInterruptStatusVar1_0 := (((ZERO_1 && stopBitError) && crcError) && ((ZERO_1 && ZERO_2) && ZERO_2)) $buffering 1// bits of buffering = 8. 
_dataRx_assign_stmt_1445_c_macro_; 
}
// 		dataErrorInterruptStatusVar1 := ( $mux (sdhcRegisters[40 ] [] 1 ) dataErrorInterruptStatusVar1_4  dataErrorInterruptStatusVar1_0 )  $buffering 1// bits of buffering = 8. 
_dataRx_assign_stmt_1455_c_macro_; 
// if statement :  file .Aa/sdhc.linked.aa, line 0
__declare_static_bit_vector(konst_1458,1);\
bit_vector_clear(&konst_1458);\
__declare_static_bit_vector(EQ_u1_u1_1459,1);\
bit_vector_clear(&konst_1458);\
bit_vector_equal(0, &(singleMultipleReadBlock), &(konst_1458), &(EQ_u1_u1_1459));\
if (has_undefined_bit(&EQ_u1_u1_1459)) {fprintf(stderr, "Error: variable EQ_u1_u1_1459 has undefined value (%s) at test point.\n", to_string(&EQ_u1_u1_1459));assert(0);} \

if (bit_vector_to_uint64(0, &EQ_u1_u1_1459)) { 
// 			sdhcRegisters[37 ] := (presentState1Var & _hfd ) $buffering 1// bits of buffering = 8. 
_dataRx_assign_stmt_1465_c_macro_; 
// 			sdhcRegisters[36 ] := (presentState0Var & _hfd ) $buffering 1// bits of buffering = 8. 
_dataRx_assign_stmt_1471_c_macro_; 
} 
else {
 ;
}
// $report (You check 		 nextCRC16 nextCRC16 		 nextCRC nextCRC 		 rxBufferPointer rxBufferPointer )
_dataRx_stmt_1476_c_macro_; 
_dataRx_branch_block_stmt_743_c_export_apply_macro_;
}
_dataRx_inner_outarg_prep_macro__; 
MUTEX_UNLOCK(_dataRx_series_block_stmt_740_c_mutex_);
}
void _dataTx_(bit_vector* __plastBlock, bit_vector* __pblockCountEnable, bit_vector* __pblockCount, bit_vector*  __pblockCountNext, bit_vector*  __ptransferComplete)
{
MUTEX_DECL(_dataTx_series_block_stmt_2367_c_mutex_);
MUTEX_LOCK(_dataTx_series_block_stmt_2367_c_mutex_);
_dataTx_inner_inarg_prep_macro__; 
_dataTx_branch_block_stmt_2373_c_export_decl_macro_; 
{
// if statement :  file .Aa/sdhc.linked.aa, line 839
__declare_static_bit_vector(konst_2375,32);\
bit_vector_clear(&konst_2375);\
konst_2375.val.byte_array[0] = 40;\
__declare_static_bit_vector(konst_2377,8);\
bit_vector_clear(&konst_2377);\
konst_2377.val.byte_array[0] = 1;\
__declare_static_bit_vector(BITSEL_u8_u1_2378,1);\
bit_vector_clear(&konst_2375);\
konst_2375.val.byte_array[0] = 40;\
bit_vector_clear(&konst_2377);\
konst_2377.val.byte_array[0] = 1;\
bit_vector_bitsel( &((sdhcRegisters[bit_vector_to_uint64(0, &konst_2375)])), &(konst_2377), &(BITSEL_u8_u1_2378));\
if (has_undefined_bit(&BITSEL_u8_u1_2378)) {fprintf(stderr, "Error: variable BITSEL_u8_u1_2378 has undefined value (%s) at test point.\n", to_string(&BITSEL_u8_u1_2378));assert(0);} \

if (bit_vector_to_uint64(0, &BITSEL_u8_u1_2378)) { 
_dataTx_branch_block_stmt_2379_c_export_decl_macro_; 
{
{
// do-while:   file .Aa/sdhc.linked.aa, line 842
__declare_static_bit_vector(konst_2484,10);\
bit_vector_clear(&konst_2484);\
konst_2484.val.byte_array[1] = 2;\
__declare_static_bit_vector(ULT_u10_u1_2485,1);\
uint8_t do_while_entry_flag;
do_while_entry_flag = 1;
uint8_t do_while_loopback_flag;
do_while_loopback_flag = 0;
while(1) {
// merge  file .Aa/sdhc.linked.aa, line 844
_dataTx_merge_stmt_2381_c_preamble_macro_; 
// 				$phi i := 				  next_i $on   $loopback 				  ($bitcast ($uint<10>) 0  ) $on   $entry 
 // type of target is $uint<10>
_dataTx_phi_stmt_2382_c_macro_; 
// 				$phi dat0 := 				  next_data0 $on   $loopback 				  ($bitcast ($uint<1024>) 0  ) $on   $entry 
 // type of target is $uint<1024>
_dataTx_phi_stmt_2387_c_macro_; 
// 				$phi dat1 := 				  ($bitcast ($uint<1024>) 0  ) $on   $entry 				  next_data1 $on   $loopback 
 // type of target is $uint<1024>
_dataTx_phi_stmt_2392_c_macro_; 
// 				$phi dat2 := 				  next_data2 $on   $loopback 				  ($bitcast ($uint<1024>) 0  ) $on   $entry 
 // type of target is $uint<1024>
_dataTx_phi_stmt_2397_c_macro_; 
// 				$phi dat3 := 				  next_data3 $on   $loopback 				  ($bitcast ($uint<1024>) 0  ) $on   $entry 
 // type of target is $uint<1024>
_dataTx_phi_stmt_2402_c_macro_; 
_dataTx_merge_stmt_2381_c_postamble_macro_; 
// 				tempBuffer := dataBufferTx $buffering 1// bits of buffering = 8. 
_dataTx_assign_stmt_2410_c_macro_; 
// 				$volatile next_data3 := ((dat3 << 2 ) | ((($bitcast ($uint<1022>) 0  ) && (tempBuffer [] 7 )) && (tempBuffer [] 3 ))) $buffering 1
_dataTx_assign_stmt_2428_c_macro_; 
// 				$volatile next_data2 := ((dat2 << 2 ) | ((($bitcast ($uint<1022>) 0  ) && (tempBuffer [] 6 )) && (tempBuffer [] 2 ))) $buffering 1
_dataTx_assign_stmt_2444_c_macro_; 
// 				$volatile next_data1 := ((dat1 << 2 ) | ((($bitcast ($uint<1022>) 0  ) && (tempBuffer [] 5 )) && (tempBuffer [] 1 ))) $buffering 1
_dataTx_assign_stmt_2460_c_macro_; 
// 				$volatile next_data0 := ((dat0 << 2 ) | ((($bitcast ($uint<1022>) 0  ) && (tempBuffer [] 4 )) && (tempBuffer [] 0 ))) $buffering 1
_dataTx_assign_stmt_2476_c_macro_; 
// 				$volatile next_i := (i + 1 ) $buffering 1
_dataTx_assign_stmt_2481_c_macro_; 
do_while_entry_flag = 0;
do_while_loopback_flag = 1;
bit_vector_clear(&konst_2484);\
konst_2484.val.byte_array[1] = 2;\
bit_vector_less(0, &(next_i), &(konst_2484), &(ULT_u10_u1_2485));\
if (has_undefined_bit(&ULT_u10_u1_2485)) {fprintf(stderr, "Error: variable ULT_u10_u1_2485 has undefined value (%s) at test point.\n", to_string(&ULT_u10_u1_2485));assert(0);} \

if (!bit_vector_to_uint64(0, &ULT_u10_u1_2485)) break;
} 
}
_dataTx_branch_block_stmt_2379_c_export_apply_macro_;
}
// 			txBufferPointer := ($bitcast ($uint<10>) 0  ) $buffering 1// bits of buffering = 10. 
_dataTx_assign_stmt_2490_c_macro_; 
{
// do-while:   file .Aa/sdhc.linked.aa, line 866
__declare_static_bit_vector(konst_2553,11);\
bit_vector_clear(&konst_2553);\
konst_2553.val.byte_array[1] = 4;\
__declare_static_bit_vector(ULT_u11_u1_2554,1);\
uint8_t do_while_entry_flag;
do_while_entry_flag = 1;
uint8_t do_while_loopback_flag;
do_while_loopback_flag = 0;
while(1) {
// merge  file .Aa/sdhc.linked.aa, line 868
_dataTx_merge_stmt_2492_c_preamble_macro_; 
// 			$phi j_0 := 			  ($bitcast ($uint<11>) 0  ) $on   $entry 			  next_j_0 $on   $loopback 
 // type of target is $uint<11>
_dataTx_phi_stmt_2493_c_macro_; 
// 			$phi CRC_16_DAT0 := 			  ($bitcast ($uint<16>) 0  ) $on   $entry 			  nextCRC16_DAT0 $on   $loopback 
 // type of target is $uint<16>
_dataTx_phi_stmt_2498_c_macro_; 
// 			$phi tempDataD0 := 			  dat0 $on   $entry 			  nextTempDataD0 $on   $loopback 
 // type of target is $uint<1024>
_dataTx_phi_stmt_2503_c_macro_; 
_dataTx_merge_stmt_2492_c_postamble_macro_; 
// 			$volatile invd0 := ((tempDataD0 [] 1023 ) ^ (CRC_16_DAT0 [] 15 )) $buffering 1
_dataTx_assign_stmt_2516_c_macro_; 
// 			$volatile nextCRC16_DAT0 := (((( $slice CRC_16_DAT0 14 12 )  && ((CRC_16_DAT0 [] 11 ) ^ invd0)) && ( $slice CRC_16_DAT0 10 5 ) ) && ((((CRC_16_DAT0 [] 4 ) ^ invd0) && ( $slice CRC_16_DAT0 3 0 ) ) && invd0)) $buffering 1
_dataTx_assign_stmt_2540_c_macro_; 
// 			$volatile nextTempDataD0 := (tempDataD0 << 1 ) $buffering 1
_dataTx_assign_stmt_2545_c_macro_; 
// 			$volatile next_j_0 := (j_0 + 1 ) $buffering 1
_dataTx_assign_stmt_2550_c_macro_; 
do_while_entry_flag = 0;
do_while_loopback_flag = 1;
bit_vector_clear(&konst_2553);\
konst_2553.val.byte_array[1] = 4;\
bit_vector_less(0, &(next_j_0), &(konst_2553), &(ULT_u11_u1_2554));\
if (has_undefined_bit(&ULT_u11_u1_2554)) {fprintf(stderr, "Error: variable ULT_u11_u1_2554 has undefined value (%s) at test point.\n", to_string(&ULT_u11_u1_2554));assert(0);} \

if (!bit_vector_to_uint64(0, &ULT_u11_u1_2554)) break;
} 
}
{
// do-while:   file .Aa/sdhc.linked.aa, line 881
__declare_static_bit_vector(konst_2617,11);\
bit_vector_clear(&konst_2617);\
konst_2617.val.byte_array[1] = 4;\
__declare_static_bit_vector(ULT_u11_u1_2618,1);\
uint8_t do_while_entry_flag;
do_while_entry_flag = 1;
uint8_t do_while_loopback_flag;
do_while_loopback_flag = 0;
while(1) {
// merge  file .Aa/sdhc.linked.aa, line 883
_dataTx_merge_stmt_2556_c_preamble_macro_; 
// 			$phi j_1 := 			  ($bitcast ($uint<11>) 0  ) $on   $entry 			  next_j_1 $on   $loopback 
 // type of target is $uint<11>
_dataTx_phi_stmt_2557_c_macro_; 
// 			$phi CRC_16_DAT1 := 			  ($bitcast ($uint<16>) 0  ) $on   $entry 			  nextCRC16_DAT1 $on   $loopback 
 // type of target is $uint<16>
_dataTx_phi_stmt_2562_c_macro_; 
// 			$phi tempDataD1 := 			  dat1 $on   $entry 			  nextTempDataD1 $on   $loopback 
 // type of target is $uint<1024>
_dataTx_phi_stmt_2567_c_macro_; 
_dataTx_merge_stmt_2556_c_postamble_macro_; 
// 			$volatile invd1 := ((tempDataD1 [] 1023 ) ^ (CRC_16_DAT1 [] 15 )) $buffering 1
_dataTx_assign_stmt_2580_c_macro_; 
// 			$volatile nextCRC16_DAT1 := (((( $slice CRC_16_DAT1 14 12 )  && ((CRC_16_DAT1 [] 11 ) ^ invd1)) && ( $slice CRC_16_DAT1 10 5 ) ) && ((((CRC_16_DAT1 [] 4 ) ^ invd1) && ( $slice CRC_16_DAT1 3 0 ) ) && invd1)) $buffering 1
_dataTx_assign_stmt_2604_c_macro_; 
// 			$volatile nextTempDataD1 := (tempDataD1 << 1 ) $buffering 1
_dataTx_assign_stmt_2609_c_macro_; 
// 			$volatile next_j_1 := (j_1 + 1 ) $buffering 1
_dataTx_assign_stmt_2614_c_macro_; 
do_while_entry_flag = 0;
do_while_loopback_flag = 1;
bit_vector_clear(&konst_2617);\
konst_2617.val.byte_array[1] = 4;\
bit_vector_less(0, &(next_j_1), &(konst_2617), &(ULT_u11_u1_2618));\
if (has_undefined_bit(&ULT_u11_u1_2618)) {fprintf(stderr, "Error: variable ULT_u11_u1_2618 has undefined value (%s) at test point.\n", to_string(&ULT_u11_u1_2618));assert(0);} \

if (!bit_vector_to_uint64(0, &ULT_u11_u1_2618)) break;
} 
}
{
// do-while:   file .Aa/sdhc.linked.aa, line 896
__declare_static_bit_vector(konst_2681,11);\
bit_vector_clear(&konst_2681);\
konst_2681.val.byte_array[1] = 4;\
__declare_static_bit_vector(ULT_u11_u1_2682,1);\
uint8_t do_while_entry_flag;
do_while_entry_flag = 1;
uint8_t do_while_loopback_flag;
do_while_loopback_flag = 0;
while(1) {
// merge  file .Aa/sdhc.linked.aa, line 898
_dataTx_merge_stmt_2620_c_preamble_macro_; 
// 			$phi j_2 := 			  ($bitcast ($uint<11>) 0  ) $on   $entry 			  next_j_2 $on   $loopback 
 // type of target is $uint<11>
_dataTx_phi_stmt_2621_c_macro_; 
// 			$phi CRC_16_DAT2 := 			  ($bitcast ($uint<16>) 0  ) $on   $entry 			  nextCRC16_DAT2 $on   $loopback 
 // type of target is $uint<16>
_dataTx_phi_stmt_2626_c_macro_; 
// 			$phi tempDataD2 := 			  dat2 $on   $entry 			  nextTempDataD2 $on   $loopback 
 // type of target is $uint<1024>
_dataTx_phi_stmt_2631_c_macro_; 
_dataTx_merge_stmt_2620_c_postamble_macro_; 
// 			$volatile invd2 := ((tempDataD2 [] 1023 ) ^ (CRC_16_DAT2 [] 15 )) $buffering 1
_dataTx_assign_stmt_2644_c_macro_; 
// 			$volatile nextCRC16_DAT2 := (((( $slice CRC_16_DAT2 14 12 )  && ((CRC_16_DAT2 [] 11 ) ^ invd2)) && ( $slice CRC_16_DAT2 10 5 ) ) && ((((CRC_16_DAT2 [] 4 ) ^ invd2) && ( $slice CRC_16_DAT2 3 0 ) ) && invd2)) $buffering 1
_dataTx_assign_stmt_2668_c_macro_; 
// 			$volatile nextTempDataD2 := (tempDataD2 << 1 ) $buffering 1
_dataTx_assign_stmt_2673_c_macro_; 
// 			$volatile next_j_2 := (j_2 + 1 ) $buffering 1
_dataTx_assign_stmt_2678_c_macro_; 
do_while_entry_flag = 0;
do_while_loopback_flag = 1;
bit_vector_clear(&konst_2681);\
konst_2681.val.byte_array[1] = 4;\
bit_vector_less(0, &(next_j_2), &(konst_2681), &(ULT_u11_u1_2682));\
if (has_undefined_bit(&ULT_u11_u1_2682)) {fprintf(stderr, "Error: variable ULT_u11_u1_2682 has undefined value (%s) at test point.\n", to_string(&ULT_u11_u1_2682));assert(0);} \

if (!bit_vector_to_uint64(0, &ULT_u11_u1_2682)) break;
} 
}
{
// do-while:   file .Aa/sdhc.linked.aa, line 911
__declare_static_bit_vector(konst_2745,11);\
bit_vector_clear(&konst_2745);\
konst_2745.val.byte_array[1] = 4;\
__declare_static_bit_vector(ULT_u11_u1_2746,1);\
uint8_t do_while_entry_flag;
do_while_entry_flag = 1;
uint8_t do_while_loopback_flag;
do_while_loopback_flag = 0;
while(1) {
// merge  file .Aa/sdhc.linked.aa, line 913
_dataTx_merge_stmt_2684_c_preamble_macro_; 
// 			$phi j_3 := 			  ($bitcast ($uint<11>) 0  ) $on   $entry 			  next_j_3 $on   $loopback 
 // type of target is $uint<11>
_dataTx_phi_stmt_2685_c_macro_; 
// 			$phi CRC_16_DAT3 := 			  ($bitcast ($uint<16>) 0  ) $on   $entry 			  nextCRC16_DAT3 $on   $loopback 
 // type of target is $uint<16>
_dataTx_phi_stmt_2690_c_macro_; 
// 			$phi tempDataD3 := 			  dat3 $on   $entry 			  nextTempDataD3 $on   $loopback 
 // type of target is $uint<1024>
_dataTx_phi_stmt_2695_c_macro_; 
_dataTx_merge_stmt_2684_c_postamble_macro_; 
// 			$volatile invd3 := ((tempDataD3 [] 1023 ) ^ (CRC_16_DAT3 [] 15 )) $buffering 1
_dataTx_assign_stmt_2708_c_macro_; 
// 			$volatile nextCRC16_DAT3 := (((( $slice CRC_16_DAT3 14 12 )  && ((CRC_16_DAT3 [] 11 ) ^ invd3)) && ( $slice CRC_16_DAT3 10 5 ) ) && ((((CRC_16_DAT3 [] 4 ) ^ invd3) && ( $slice CRC_16_DAT3 3 0 ) ) && invd3)) $buffering 1
_dataTx_assign_stmt_2732_c_macro_; 
// 			$volatile nextTempDataD3 := (tempDataD3 << 1 ) $buffering 1
_dataTx_assign_stmt_2737_c_macro_; 
// 			$volatile next_j_3 := (j_3 + 1 ) $buffering 1
_dataTx_assign_stmt_2742_c_macro_; 
do_while_entry_flag = 0;
do_while_loopback_flag = 1;
bit_vector_clear(&konst_2745);\
konst_2745.val.byte_array[1] = 4;\
bit_vector_less(0, &(next_j_3), &(konst_2745), &(ULT_u11_u1_2746));\
if (has_undefined_bit(&ULT_u11_u1_2746)) {fprintf(stderr, "Error: variable ULT_u11_u1_2746 has undefined value (%s) at test point.\n", to_string(&ULT_u11_u1_2746));assert(0);} \

if (!bit_vector_to_uint64(0, &ULT_u11_u1_2746)) break;
} 
}
// 			oe := ONE_1 $buffering 1// bits of buffering = 1. 
_dataTx_assign_stmt_2749_c_macro_; 
_dataTx_parallel_block_stmt_2750_c_export_decl_macro_; 
{
// 				$call sendDAT0 (dat0 nextCRC16_DAT0 ) () 
_dataTx_call_stmt_2753_c_macro_; 
// 				$call sendDAT1 (dat1 nextCRC16_DAT1 ) () 
_dataTx_call_stmt_2756_c_macro_; 
// 				$call sendDAT2 (dat2 nextCRC16_DAT2 ) () 
_dataTx_call_stmt_2759_c_macro_; 
// 				$call sendDAT3 (dat3 nextCRC16_DAT3 ) () 
_dataTx_call_stmt_2762_c_macro_; 
_dataTx_parallel_block_stmt_2750_c_export_apply_macro_;
}
// 			oe := ZERO_1 $buffering 1// bits of buffering = 1. 
_dataTx_assign_stmt_2766_c_macro_; 
} 
else {
_dataTx_branch_block_stmt_2768_c_export_decl_macro_; 
{
// merge  file .Aa/sdhc.linked.aa, line 938
_dataTx_merge_stmt_2769_c_preamble_macro_; 
// 					$phi I := 					  ($bitcast ($uint<10>) 0  ) $on   $entry 					  next_I $on   loopback1 
 // type of target is $uint<10>
_dataTx_phi_stmt_2770_c_macro_; 
// 					$phi dat := 					  ($bitcast ($uint<4096>) 0  ) $on   $entry 					  next_data $on   loopback1 
 // type of target is $uint<4096>
_dataTx_phi_stmt_2775_c_macro_; 
_dataTx_merge_stmt_2769_c_postamble_macro_; 
// 				next_data := ((dat << 8 ) | (($bitcast ($uint<4088>) 0  ) && dataBufferTx)) $buffering 1// bits of buffering = 4096. 
_dataTx_assign_stmt_2790_c_macro_; 
// 				next_I := (I + 1 ) $buffering 1// bits of buffering = 10. 
_dataTx_assign_stmt_2795_c_macro_; 
// if statement :  file .Aa/sdhc.linked.aa, line 0
__declare_static_bit_vector(konst_2798,10);\
bit_vector_clear(&konst_2798);\
konst_2798.val.byte_array[1] = 2;\
__declare_static_bit_vector(ULT_u10_u1_2799,1);\
bit_vector_clear(&konst_2798);\
konst_2798.val.byte_array[1] = 2;\
bit_vector_less(0, &(next_I), &(konst_2798), &(ULT_u10_u1_2799));\
if (has_undefined_bit(&ULT_u10_u1_2799)) {fprintf(stderr, "Error: variable ULT_u10_u1_2799 has undefined value (%s) at test point.\n", to_string(&ULT_u10_u1_2799));assert(0);} \

if (bit_vector_to_uint64(0, &ULT_u10_u1_2799)) { 
/* 				$place[loopback1]
*/  goto loopback1_2768;
} 
else {
 ;
}
_dataTx_branch_block_stmt_2768_c_export_apply_macro_;
}
// 			txBufferPointer := ($bitcast ($uint<10>) 0  ) $buffering 1// bits of buffering = 10. 
_dataTx_assign_stmt_2806_c_macro_; 
// merge  file .Aa/sdhc.linked.aa, line 952
_dataTx_merge_stmt_2807_c_preamble_macro_; 
// 				$phi J := 				  ($bitcast ($uint<13>) 0  ) $on   $entry 				  next_J $on   loopback 
 // type of target is $uint<13>
_dataTx_phi_stmt_2808_c_macro_; 
// 				$phi CRC_16 := 				  ($bitcast ($uint<16>) 0  ) $on   $entry 				  nextCRC16 $on   loopback 
 // type of target is $uint<16>
_dataTx_phi_stmt_2813_c_macro_; 
// 				$phi tempData := 				  dat $on   $entry 				  nextTempData $on   loopback 
 // type of target is $uint<4096>
_dataTx_phi_stmt_2818_c_macro_; 
_dataTx_merge_stmt_2807_c_postamble_macro_; 
// 			inv := ((tempData [] 4095 ) ^ (CRC_16 [] 15 )) $buffering 1// bits of buffering = 1. 
_dataTx_assign_stmt_2831_c_macro_; 
// 			nextCRC16 := (((( $slice CRC_16 14 12 )  && ((CRC_16 [] 11 ) ^ inv)) && ( $slice CRC_16 10 5 ) ) && ((((CRC_16 [] 4 ) ^ inv) && ( $slice CRC_16 3 0 ) ) && inv)) $buffering 1// bits of buffering = 16. 
_dataTx_assign_stmt_2855_c_macro_; 
// 			nextTempData := (tempData << 1 ) $buffering 1// bits of buffering = 4096. 
_dataTx_assign_stmt_2860_c_macro_; 
// 			$volatile next_J := (J + 1 ) $buffering 1
_dataTx_assign_stmt_2865_c_macro_; 
// if statement :  file .Aa/sdhc.linked.aa, line 0
__declare_static_bit_vector(konst_2868,13);\
bit_vector_clear(&konst_2868);\
konst_2868.val.byte_array[1] = 16;\
__declare_static_bit_vector(ULT_u13_u1_2869,1);\
bit_vector_clear(&konst_2868);\
konst_2868.val.byte_array[1] = 16;\
bit_vector_less(0, &(next_J), &(konst_2868), &(ULT_u13_u1_2869));\
if (has_undefined_bit(&ULT_u13_u1_2869)) {fprintf(stderr, "Error: variable ULT_u13_u1_2869 has undefined value (%s) at test point.\n", to_string(&ULT_u13_u1_2869));assert(0);} \

if (bit_vector_to_uint64(0, &ULT_u13_u1_2869)) { 
/* 			$place[loopback]
*/  goto loopback_2373;
} 
else {
 ;
}
// $report (OUTDATA data 			 dat dat 			 nextCRC16 nextCRC16 			 lastBlock lastBlock )
_dataTx_stmt_2875_c_macro_; 
// 			oe := ONE_1 $buffering 1// bits of buffering = 1. 
_dataTx_assign_stmt_2878_c_macro_; 
// 			DAT0Tx := ZERO_1 $buffering 1// bits of buffering = 1. 
_dataTx_assign_stmt_2881_c_macro_; 
// merge  file .Aa/sdhc.linked.aa, line 970
_dataTx_merge_stmt_2882_c_preamble_macro_; 
// 				$phi K := 				  ($bitcast ($uint<13>) 0  ) $on   $entry 				  next_K $on   dataloop 
 // type of target is $uint<13>
_dataTx_phi_stmt_2883_c_macro_; 
// 				$phi dat0bit := 				  dat $on   $entry 				  nextbit $on   dataloop 
 // type of target is $uint<4096>
_dataTx_phi_stmt_2888_c_macro_; 
_dataTx_merge_stmt_2882_c_postamble_macro_; 
// 			DAT0Tx := (dat0bit [] 4095 ) $buffering 1// bits of buffering = 1. 
_dataTx_assign_stmt_2897_c_macro_; 
// 			nextbit := (dat0bit << 1 ) $buffering 1// bits of buffering = 4096. 
_dataTx_assign_stmt_2902_c_macro_; 
// 			next_K := (K + 1 ) $buffering 1// bits of buffering = 13. 
_dataTx_assign_stmt_2907_c_macro_; 
// if statement :  file .Aa/sdhc.linked.aa, line 0
__declare_static_bit_vector(konst_2910,13);\
bit_vector_clear(&konst_2910);\
konst_2910.val.byte_array[1] = 16;\
__declare_static_bit_vector(ULT_u13_u1_2911,1);\
bit_vector_clear(&konst_2910);\
konst_2910.val.byte_array[1] = 16;\
bit_vector_less(0, &(next_K), &(konst_2910), &(ULT_u13_u1_2911));\
if (has_undefined_bit(&ULT_u13_u1_2911)) {fprintf(stderr, "Error: variable ULT_u13_u1_2911 has undefined value (%s) at test point.\n", to_string(&ULT_u13_u1_2911));assert(0);} \

if (bit_vector_to_uint64(0, &ULT_u13_u1_2911)) { 
/* 			$place[dataloop]
*/  goto dataloop_2373;
} 
else {
 ;
}
// merge  file .Aa/sdhc.linked.aa, line 982
_dataTx_merge_stmt_2914_c_preamble_macro_; 
// 				$phi L := 				  ($bitcast ($uint<5>) 0  ) $on   $entry 				  next_L $on   crcloop 
 // type of target is $uint<5>
_dataTx_phi_stmt_2915_c_macro_; 
// 				$phi dat0crc := 				  nextCRC16 $on   $entry 				  nextbitcrc $on   crcloop 
 // type of target is $uint<16>
_dataTx_phi_stmt_2920_c_macro_; 
_dataTx_merge_stmt_2914_c_postamble_macro_; 
// 			DAT0Tx := (dat0crc [] 15 ) $buffering 1// bits of buffering = 1. 
_dataTx_assign_stmt_2929_c_macro_; 
// 			nextbitcrc := (dat0crc << 1 ) $buffering 1// bits of buffering = 16. 
_dataTx_assign_stmt_2934_c_macro_; 
// 			next_L := (L + 1 ) $buffering 1// bits of buffering = 5. 
_dataTx_assign_stmt_2939_c_macro_; 
// if statement :  file .Aa/sdhc.linked.aa, line 0
__declare_static_bit_vector(konst_2942,5);\
bit_vector_clear(&konst_2942);\
konst_2942.val.byte_array[0] = 16;\
__declare_static_bit_vector(ULT_u5_u1_2943,1);\
bit_vector_clear(&konst_2942);\
konst_2942.val.byte_array[0] = 16;\
bit_vector_less(0, &(next_L), &(konst_2942), &(ULT_u5_u1_2943));\
if (has_undefined_bit(&ULT_u5_u1_2943)) {fprintf(stderr, "Error: variable ULT_u5_u1_2943 has undefined value (%s) at test point.\n", to_string(&ULT_u5_u1_2943));assert(0);} \

if (bit_vector_to_uint64(0, &ULT_u5_u1_2943)) { 
/* 			$place[crcloop]
*/  goto crcloop_2373;
} 
else {
 ;
}
// 			DAT0Tx := ONE_1 $buffering 1// bits of buffering = 1. 
_dataTx_assign_stmt_2948_c_macro_; 
// 			oe := ZERO_1 $buffering 1// bits of buffering = 1. 
_dataTx_assign_stmt_2951_c_macro_; 
}
// 		busy := ONE_1 $buffering 1// bits of buffering = 1. 
_dataTx_assign_stmt_2955_c_macro_; 
// 		$guard (blockCountEnable) blockCountNext := (blockCount - 1 ) $buffering 1// bits of buffering = 16. 
_dataTx_assign_stmt_2961_c_macro_; 
// if statement :  file .Aa/sdhc.linked.aa, line 0
__declare_static_bit_vector(konst_2964,1);\
bit_vector_clear(&konst_2964);\
konst_2964.val.byte_array[0] = 1;\
__declare_static_bit_vector(EQ_u1_u1_2965,1);\
bit_vector_clear(&konst_2964);\
konst_2964.val.byte_array[0] = 1;\
bit_vector_equal(0, &(lastBlock), &(konst_2964), &(EQ_u1_u1_2965));\
if (has_undefined_bit(&EQ_u1_u1_2965)) {fprintf(stderr, "Error: variable EQ_u1_u1_2965 has undefined value (%s) at test point.\n", to_string(&EQ_u1_u1_2965));assert(0);} \

if (bit_vector_to_uint64(0, &EQ_u1_u1_2965)) { 
// 			presentState1Var := sdhcRegisters[37 ] $buffering 1// bits of buffering = 8. 
_dataTx_assign_stmt_2969_c_macro_; 
// 			presentState0Var := sdhcRegisters[36 ] $buffering 1// bits of buffering = 8. 
_dataTx_assign_stmt_2973_c_macro_; 
// 			sdhcRegisters[37 ] := (presentState1Var & _hfe ) $buffering 1// bits of buffering = 8. 
_dataTx_assign_stmt_2979_c_macro_; 
} 
else {
 ;
}
// merge  file .Aa/sdhc.linked.aa, line 1004
_dataTx_merge_stmt_2981_c_preamble_macro_; 
_dataTx_merge_stmt_2981_c_postamble_macro_; 
// 		wait := DAT0Rx $buffering 1// bits of buffering = 1. 
_dataTx_assign_stmt_2984_c_macro_; 
// if statement :  file .Aa/sdhc.linked.aa, line 0
__declare_static_bit_vector(EQ_u1_u1_2988,1);\
bit_vector_equal(0, &(wait), &(ZERO_1), &(EQ_u1_u1_2988));\
if (has_undefined_bit(&EQ_u1_u1_2988)) {fprintf(stderr, "Error: variable EQ_u1_u1_2988 has undefined value (%s) at test point.\n", to_string(&EQ_u1_u1_2988));assert(0);} \

if (bit_vector_to_uint64(0, &EQ_u1_u1_2988)) { 
/* 			$place[waitloop]
*/  goto waitloop_2373;
} 
else {
 ;
}
// 		busy := ZERO_1 $buffering 1// bits of buffering = 1. 
_dataTx_assign_stmt_2993_c_macro_; 
// if statement :  file .Aa/sdhc.linked.aa, line 0
__declare_static_bit_vector(konst_2996,1);\
bit_vector_clear(&konst_2996);\
konst_2996.val.byte_array[0] = 1;\
__declare_static_bit_vector(EQ_u1_u1_2997,1);\
bit_vector_clear(&konst_2996);\
konst_2996.val.byte_array[0] = 1;\
bit_vector_equal(0, &(lastBlock), &(konst_2996), &(EQ_u1_u1_2997));\
if (has_undefined_bit(&EQ_u1_u1_2997)) {fprintf(stderr, "Error: variable EQ_u1_u1_2997 has undefined value (%s) at test point.\n", to_string(&EQ_u1_u1_2997));assert(0);} \

if (bit_vector_to_uint64(0, &EQ_u1_u1_2997)) { 
// 			sdhcRegisters[36 ] := (presentState0Var & _hf9 ) $buffering 1// bits of buffering = 8. 
_dataTx_assign_stmt_3003_c_macro_; 
// 			transferComplete := (ZERO_8 | _h02 ) $buffering 1// bits of buffering = 8. 
_dataTx_assign_stmt_3008_c_macro_; 
} 
else {
 ;
}
// $report (OUTDATA data 		 lastBlock lastBlock 		 blockCount blockCount 		 blockCountEnable blockCountEnable )
_dataTx_stmt_3013_c_macro_; 
_dataTx_branch_block_stmt_2373_c_export_apply_macro_;
}
_dataTx_inner_outarg_prep_macro__; 
MUTEX_UNLOCK(_dataTx_series_block_stmt_2367_c_mutex_);
}
void _generate_crc_7_(bit_vector* __pmessage_signal, bit_vector*  __pgenerated_crc)
{
MUTEX_DECL(_generate_crc_7_series_block_stmt_270_c_mutex_);
MUTEX_LOCK(_generate_crc_7_series_block_stmt_270_c_mutex_);
_generate_crc_7_inner_inarg_prep_macro__; 
_generate_crc_7_branch_block_stmt_275_c_export_decl_macro_; 
{
// merge  file .Aa/sdhc.linked.aa, line 155
_generate_crc_7_merge_stmt_276_c_preamble_macro_; 
// 			$phi I := 			  next_I $on   loopback 			  ($bitcast ($uint<6>) 41  ) $on   $entry 
 // type of target is $uint<6>
_generate_crc_7_phi_stmt_277_c_macro_; 
// 			$phi crc_out := 			  final_crc_out $on   loopback 			  ( $slice message_signal 39 33 )  $on   $entry 
 // type of target is $uint<7>
_generate_crc_7_phi_stmt_283_c_macro_; 
// 			$phi temp := 			  next_temp $on   loopback 			  ( $slice message_signal 32 0 )  $on   $entry 
 // type of target is $uint<33>
_generate_crc_7_phi_stmt_288_c_macro_; 
_generate_crc_7_merge_stmt_276_c_postamble_macro_; 
// if statement :  file .Aa/sdhc.linked.aa, line 163
__declare_static_bit_vector(konst_297,7);\
bit_vector_clear(&konst_297);\
konst_297.val.byte_array[0] = 6;\
__declare_static_bit_vector(BITSEL_u7_u1_298,1);\
__declare_static_bit_vector(konst_299,1);\
bit_vector_clear(&konst_299);\
konst_299.val.byte_array[0] = 1;\
__declare_static_bit_vector(EQ_u1_u1_300,1);\
bit_vector_clear(&konst_297);\
konst_297.val.byte_array[0] = 6;\
bit_vector_bitsel( &(crc_out), &(konst_297), &(BITSEL_u7_u1_298));\
bit_vector_clear(&konst_299);\
konst_299.val.byte_array[0] = 1;\
bit_vector_equal(0, &(BITSEL_u7_u1_298), &(konst_299), &(EQ_u1_u1_300));\
if (has_undefined_bit(&EQ_u1_u1_300)) {fprintf(stderr, "Error: variable EQ_u1_u1_300 has undefined value (%s) at test point.\n", to_string(&EQ_u1_u1_300));assert(0);} \

if (bit_vector_to_uint64(0, &EQ_u1_u1_300)) { 
// 			$volatile a := (crc_out [] 5 ) $buffering 1
_generate_crc_7_assign_stmt_305_c_macro_; 
// 			$volatile b := (crc_out [] 4 ) $buffering 1
_generate_crc_7_assign_stmt_310_c_macro_; 
// 			$volatile c := (crc_out [] 3 ) $buffering 1
_generate_crc_7_assign_stmt_315_c_macro_; 
// 			$volatile d := ((crc_out [] 2 ) ^ 1 ) $buffering 1
_generate_crc_7_assign_stmt_322_c_macro_; 
// 			$volatile e := (crc_out [] 1 ) $buffering 1
_generate_crc_7_assign_stmt_327_c_macro_; 
// 			$volatile f := (crc_out [] 0 ) $buffering 1
_generate_crc_7_assign_stmt_332_c_macro_; 
// 			$volatile g := ((temp [] 32 ) ^ 1 ) $buffering 1
_generate_crc_7_assign_stmt_339_c_macro_; 
// 			$volatile crc_out_true := (((a && b) && (c && d)) && ((e && f) && g)) $buffering 1
_generate_crc_7_assign_stmt_354_c_macro_; 
/* 			$place[MSB_true]
*/  goto MSB_true_275;
} 
else {
// 			$volatile crc_out_false := (( $slice crc_out 5 0 )  && (temp [] 32 )) $buffering 1
_generate_crc_7_assign_stmt_364_c_macro_; 
/* 			$place[MSB_false]
*/  goto MSB_false_275;
}
// merge  file .Aa/sdhc.linked.aa, line 177
_generate_crc_7_merge_stmt_367_c_preamble_macro_; 
// 			$phi final_crc_out := 			  crc_out_true $on   MSB_true 			  crc_out_false $on   MSB_false 
 // type of target is $uint<7>
_generate_crc_7_phi_stmt_368_c_macro_; 
_generate_crc_7_merge_stmt_367_c_postamble_macro_; 
// 		$volatile next_I := (I - 1 ) $buffering 1
_generate_crc_7_assign_stmt_377_c_macro_; 
// 		$volatile next_temp := (temp << 1 ) $buffering 1
_generate_crc_7_assign_stmt_382_c_macro_; 
// if statement :  file .Aa/sdhc.linked.aa, line 0
__declare_static_bit_vector(konst_385,6);\
bit_vector_clear(&konst_385);\
__declare_static_bit_vector(UGT_u6_u1_386,1);\
bit_vector_clear(&konst_385);\
bit_vector_greater(0, &(next_I), &(konst_385), &(UGT_u6_u1_386));\
if (has_undefined_bit(&UGT_u6_u1_386)) {fprintf(stderr, "Error: variable UGT_u6_u1_386 has undefined value (%s) at test point.\n", to_string(&UGT_u6_u1_386));assert(0);} \

if (bit_vector_to_uint64(0, &UGT_u6_u1_386)) { 
/* 			$place[loopback]
*/  goto loopback_275;
} 
else {
 ;
}
_generate_crc_7_branch_block_stmt_275_c_export_apply_macro_;
}
// 	generated_crc := crc_out $buffering 1// bits of buffering = 7. 
_generate_crc_7_assign_stmt_392_c_macro_; 
_generate_crc_7_inner_outarg_prep_macro__; 
MUTEX_UNLOCK(_generate_crc_7_series_block_stmt_270_c_mutex_);
}
void _generate_crc_7_120_(bit_vector* __pmessage_signal, bit_vector*  __pgenerated_crc)
{
MUTEX_DECL(_generate_crc_7_120_series_block_stmt_394_c_mutex_);
MUTEX_LOCK(_generate_crc_7_120_series_block_stmt_394_c_mutex_);
_generate_crc_7_120_inner_inarg_prep_macro__; 
_generate_crc_7_120_branch_block_stmt_398_c_export_decl_macro_; 
{
// merge  file .Aa/sdhc.linked.aa, line 197
_generate_crc_7_120_merge_stmt_399_c_preamble_macro_; 
// 			$phi I := 			  ($bitcast ($uint<8>) 121  ) $on   $entry 			  next_I $on   loopback 
 // type of target is $uint<8>
_generate_crc_7_120_phi_stmt_400_c_macro_; 
// 			$phi crc_out := 			  ( $slice message_signal 119 113 )  $on   $entry 			  final_crc_out $on   loopback 
 // type of target is $uint<7>
_generate_crc_7_120_phi_stmt_405_c_macro_; 
// 			$phi temp := 			  ( $slice message_signal 112 0 )  $on   $entry 			  next_temp $on   loopback 
 // type of target is $uint<113>
_generate_crc_7_120_phi_stmt_410_c_macro_; 
_generate_crc_7_120_merge_stmt_399_c_postamble_macro_; 
// if statement :  file .Aa/sdhc.linked.aa, line 205
__declare_static_bit_vector(konst_419,7);\
bit_vector_clear(&konst_419);\
konst_419.val.byte_array[0] = 6;\
__declare_static_bit_vector(BITSEL_u7_u1_420,1);\
__declare_static_bit_vector(konst_421,1);\
bit_vector_clear(&konst_421);\
konst_421.val.byte_array[0] = 1;\
__declare_static_bit_vector(EQ_u1_u1_422,1);\
bit_vector_clear(&konst_419);\
konst_419.val.byte_array[0] = 6;\
bit_vector_bitsel( &(crc_out), &(konst_419), &(BITSEL_u7_u1_420));\
bit_vector_clear(&konst_421);\
konst_421.val.byte_array[0] = 1;\
bit_vector_equal(0, &(BITSEL_u7_u1_420), &(konst_421), &(EQ_u1_u1_422));\
if (has_undefined_bit(&EQ_u1_u1_422)) {fprintf(stderr, "Error: variable EQ_u1_u1_422 has undefined value (%s) at test point.\n", to_string(&EQ_u1_u1_422));assert(0);} \

if (bit_vector_to_uint64(0, &EQ_u1_u1_422)) { 
// 			$volatile a := (crc_out [] 5 ) $buffering 1
_generate_crc_7_120_assign_stmt_427_c_macro_; 
// 			$volatile b := (crc_out [] 4 ) $buffering 1
_generate_crc_7_120_assign_stmt_432_c_macro_; 
// 			$volatile c := (crc_out [] 3 ) $buffering 1
_generate_crc_7_120_assign_stmt_437_c_macro_; 
// 			$volatile d := ((crc_out [] 2 ) ^ 1 ) $buffering 1
_generate_crc_7_120_assign_stmt_444_c_macro_; 
// 			$volatile e := (crc_out [] 1 ) $buffering 1
_generate_crc_7_120_assign_stmt_449_c_macro_; 
// 			$volatile f := (crc_out [] 0 ) $buffering 1
_generate_crc_7_120_assign_stmt_454_c_macro_; 
// 			$volatile g := ((temp [] 112 ) ^ 1 ) $buffering 1
_generate_crc_7_120_assign_stmt_461_c_macro_; 
// 			$volatile crc_out_true := (((a && b) && (c && d)) && ((e && f) && g)) $buffering 1
_generate_crc_7_120_assign_stmt_476_c_macro_; 
/* 			$place[MSB_true]
*/  goto MSB_true_398;
} 
else {
// 			$volatile crc_out_false := (( $slice crc_out 5 0 )  && (temp [] 112 )) $buffering 1
_generate_crc_7_120_assign_stmt_486_c_macro_; 
/* 			$place[MSB_false]
*/  goto MSB_false_398;
}
// merge  file .Aa/sdhc.linked.aa, line 219
_generate_crc_7_120_merge_stmt_489_c_preamble_macro_; 
// 			$phi final_crc_out := 			  crc_out_true $on   MSB_true 			  crc_out_false $on   MSB_false 
 // type of target is $uint<7>
_generate_crc_7_120_phi_stmt_490_c_macro_; 
_generate_crc_7_120_merge_stmt_489_c_postamble_macro_; 
// 		$volatile next_I := (I - 1 ) $buffering 1
_generate_crc_7_120_assign_stmt_499_c_macro_; 
// 		$volatile next_temp := (temp << 1 ) $buffering 1
_generate_crc_7_120_assign_stmt_504_c_macro_; 
// if statement :  file .Aa/sdhc.linked.aa, line 0
__declare_static_bit_vector(konst_507,8);\
bit_vector_clear(&konst_507);\
__declare_static_bit_vector(UGT_u8_u1_508,1);\
bit_vector_clear(&konst_507);\
bit_vector_greater(0, &(next_I), &(konst_507), &(UGT_u8_u1_508));\
if (has_undefined_bit(&UGT_u8_u1_508)) {fprintf(stderr, "Error: variable UGT_u8_u1_508 has undefined value (%s) at test point.\n", to_string(&UGT_u8_u1_508));assert(0);} \

if (bit_vector_to_uint64(0, &UGT_u8_u1_508)) { 
/* 			$place[loopback]
*/  goto loopback_398;
} 
else {
 ;
}
_generate_crc_7_120_branch_block_stmt_398_c_export_apply_macro_;
}
// 	generated_crc := crc_out $buffering 1// bits of buffering = 7. 
_generate_crc_7_120_assign_stmt_514_c_macro_; 
_generate_crc_7_120_inner_outarg_prep_macro__; 
MUTEX_UNLOCK(_generate_crc_7_120_series_block_stmt_394_c_mutex_);
}
void _global_storage_initializer__()
{
MUTEX_DECL(_global_storage_initializer__series_block_stmt_3016_c_mutex_);
MUTEX_LOCK(_global_storage_initializer__series_block_stmt_3016_c_mutex_);
_global_storage_initializer__inner_inarg_prep_macro__; 
/* null */ ;
_global_storage_initializer__inner_outarg_prep_macro__; 
MUTEX_UNLOCK(_global_storage_initializer__series_block_stmt_3016_c_mutex_);
}
void global_storage_initializer_()
{
_global_storage_initializer__outer_arg_decl_macro__;
_global_storage_initializer__();
_global_storage_initializer__outer_op_xfer_macro__;
}


void _readSDHCRegisters_(bit_vector* __paddress, bit_vector*  __pdata)
{
MUTEX_DECL(_readSDHCRegisters_series_block_stmt_72_c_mutex_);
MUTEX_LOCK(_readSDHCRegisters_series_block_stmt_72_c_mutex_);
_readSDHCRegisters_inner_inarg_prep_macro__; 
// 	data := sdhcRegisters[address] $buffering 1// bits of buffering = 8. 
_readSDHCRegisters_assign_stmt_78_c_macro_; 
_readSDHCRegisters_inner_outarg_prep_macro__; 
MUTEX_UNLOCK(_readSDHCRegisters_series_block_stmt_72_c_mutex_);
}
void readSDHCRegisters(uint8_t address , uint8_t*  data )
{
_readSDHCRegisters_outer_arg_decl_macro__;
_readSDHCRegisters_( &__address,  &__data);
_readSDHCRegisters_outer_op_xfer_macro__;
}


void _recvdat0_(bit_vector*  __pdat0, bit_vector*  __pnextCRC_0, bit_vector*  __pstopBit0)
{
MUTEX_DECL(_recvdat0_series_block_stmt_516_c_mutex_);
MUTEX_LOCK(_recvdat0_series_block_stmt_516_c_mutex_);
_recvdat0_inner_inarg_prep_macro__; 
_recvdat0_branch_block_stmt_521_c_export_decl_macro_; 
{
{
// do-while:   file .Aa/sdhc.linked.aa, line 239
__declare_static_bit_vector(konst_555,11);\
bit_vector_clear(&konst_555);\
konst_555.val.byte_array[0] = 18;\
konst_555.val.byte_array[1] = 4;\
__declare_static_bit_vector(ULT_u11_u1_556,1);\
uint8_t do_while_entry_flag;
do_while_entry_flag = 1;
uint8_t do_while_loopback_flag;
do_while_loopback_flag = 0;
while(1) {
// merge  file .Aa/sdhc.linked.aa, line 241
_recvdat0_merge_stmt_523_c_preamble_macro_; 
// 			$phi I_0 := 			  ($bitcast ($uint<11>) 0  ) $on   $entry 			  next_I_0 $on   $loopback 
 // type of target is $uint<11>
_recvdat0_phi_stmt_524_c_macro_; 
// 			$phi dat0_t := 			  ($bitcast ($uint<1042>) 0  ) $on   $entry 			  next_data0 $on   $loopback 
 // type of target is $uint<1042>
_recvdat0_phi_stmt_530_c_macro_; 
_recvdat0_merge_stmt_523_c_postamble_macro_; 
// 			next_data0 := ((dat0_t << 1 ) | (($bitcast ($uint<1041>) 0  ) && DAT0Rx)) $buffering 1// bits of buffering = 1042. 
_recvdat0_assign_stmt_547_c_macro_; 
// 			$volatile next_I_0 := (I_0 + 1 ) $buffering 1
_recvdat0_assign_stmt_552_c_macro_; 
do_while_entry_flag = 0;
do_while_loopback_flag = 1;
bit_vector_clear(&konst_555);\
konst_555.val.byte_array[0] = 18;\
konst_555.val.byte_array[1] = 4;\
bit_vector_less(0, &(next_I_0), &(konst_555), &(ULT_u11_u1_556));\
if (has_undefined_bit(&ULT_u11_u1_556)) {fprintf(stderr, "Error: variable ULT_u11_u1_556 has undefined value (%s) at test point.\n", to_string(&ULT_u11_u1_556));assert(0);} \

if (!bit_vector_to_uint64(0, &ULT_u11_u1_556)) break;
} 
}
// 		$volatile startBit0 := ( $slice next_data0 1041 1041 )  $buffering 1
_recvdat0_assign_stmt_560_c_macro_; 
// 		$volatile dat0 := ( $slice next_data0 1040 17 )  $buffering 1
_recvdat0_assign_stmt_564_c_macro_; 
// 		$volatile nextCRC_0 := ( $slice next_data0 16 1 )  $buffering 1
_recvdat0_assign_stmt_568_c_macro_; 
// 		$volatile stopBit0 := ( $slice next_data0 0 0 )  $buffering 1
_recvdat0_assign_stmt_572_c_macro_; 
_recvdat0_branch_block_stmt_521_c_export_apply_macro_;
}
_recvdat0_inner_outarg_prep_macro__; 
MUTEX_UNLOCK(_recvdat0_series_block_stmt_516_c_mutex_);
}
void _recvdat1_(bit_vector*  __pdat1, bit_vector*  __pnextCRC_1, bit_vector*  __pstopBit1)
{
MUTEX_DECL(_recvdat1_series_block_stmt_575_c_mutex_);
MUTEX_LOCK(_recvdat1_series_block_stmt_575_c_mutex_);
_recvdat1_inner_inarg_prep_macro__; 
_recvdat1_branch_block_stmt_579_c_export_decl_macro_; 
{
{
// do-while:   file .Aa/sdhc.linked.aa, line 263
__declare_static_bit_vector(konst_610,11);\
bit_vector_clear(&konst_610);\
konst_610.val.byte_array[0] = 18;\
konst_610.val.byte_array[1] = 4;\
__declare_static_bit_vector(ULT_u11_u1_611,1);\
uint8_t do_while_entry_flag;
do_while_entry_flag = 1;
uint8_t do_while_loopback_flag;
do_while_loopback_flag = 0;
while(1) {
// merge  file .Aa/sdhc.linked.aa, line 265
_recvdat1_merge_stmt_581_c_preamble_macro_; 
// 			$phi I_1 := 			  ($bitcast ($uint<11>) 0  ) $on   $entry 			  next_I_1 $on   $loopback 
 // type of target is $uint<11>
_recvdat1_phi_stmt_582_c_macro_; 
// 			$phi dat1_t := 			  ($bitcast ($uint<1042>) 0  ) $on   $entry 			  next_data1 $on   $loopback 
 // type of target is $uint<1042>
_recvdat1_phi_stmt_587_c_macro_; 
_recvdat1_merge_stmt_581_c_postamble_macro_; 
// 			next_data1 := ((dat1_t << 1 ) | (($bitcast ($uint<1041>) 0  ) && DAT1Rx)) $buffering 1// bits of buffering = 1042. 
_recvdat1_assign_stmt_602_c_macro_; 
// 			$volatile next_I_1 := (I_1 + 1 ) $buffering 1
_recvdat1_assign_stmt_607_c_macro_; 
do_while_entry_flag = 0;
do_while_loopback_flag = 1;
bit_vector_clear(&konst_610);\
konst_610.val.byte_array[0] = 18;\
konst_610.val.byte_array[1] = 4;\
bit_vector_less(0, &(next_I_1), &(konst_610), &(ULT_u11_u1_611));\
if (has_undefined_bit(&ULT_u11_u1_611)) {fprintf(stderr, "Error: variable ULT_u11_u1_611 has undefined value (%s) at test point.\n", to_string(&ULT_u11_u1_611));assert(0);} \

if (!bit_vector_to_uint64(0, &ULT_u11_u1_611)) break;
} 
}
// 		$volatile startBit1 := ( $slice next_data1 1041 1041 )  $buffering 1
_recvdat1_assign_stmt_615_c_macro_; 
// 		$volatile dat1 := ( $slice next_data1 1040 17 )  $buffering 1
_recvdat1_assign_stmt_619_c_macro_; 
// 		$volatile nextCRC_1 := ( $slice next_data1 16 1 )  $buffering 1
_recvdat1_assign_stmt_623_c_macro_; 
// 		$volatile stopBit1 := ( $slice next_data1 0 0 )  $buffering 1
_recvdat1_assign_stmt_627_c_macro_; 
_recvdat1_branch_block_stmt_579_c_export_apply_macro_;
}
_recvdat1_inner_outarg_prep_macro__; 
MUTEX_UNLOCK(_recvdat1_series_block_stmt_575_c_mutex_);
}
void _recvdat2_(bit_vector*  __pdat2, bit_vector*  __pnextCRC_2, bit_vector*  __pstopBit2)
{
MUTEX_DECL(_recvdat2_series_block_stmt_630_c_mutex_);
MUTEX_LOCK(_recvdat2_series_block_stmt_630_c_mutex_);
_recvdat2_inner_inarg_prep_macro__; 
_recvdat2_branch_block_stmt_634_c_export_decl_macro_; 
{
{
// do-while:   file .Aa/sdhc.linked.aa, line 287
__declare_static_bit_vector(konst_665,11);\
bit_vector_clear(&konst_665);\
konst_665.val.byte_array[0] = 18;\
konst_665.val.byte_array[1] = 4;\
__declare_static_bit_vector(ULT_u11_u1_666,1);\
uint8_t do_while_entry_flag;
do_while_entry_flag = 1;
uint8_t do_while_loopback_flag;
do_while_loopback_flag = 0;
while(1) {
// merge  file .Aa/sdhc.linked.aa, line 289
_recvdat2_merge_stmt_636_c_preamble_macro_; 
// 			$phi I_2 := 			  ($bitcast ($uint<11>) 0  ) $on   $entry 			  next_I_2 $on   $loopback 
 // type of target is $uint<11>
_recvdat2_phi_stmt_637_c_macro_; 
// 			$phi dat2_t := 			  ($bitcast ($uint<1042>) 0  ) $on   $entry 			  next_data2 $on   $loopback 
 // type of target is $uint<1042>
_recvdat2_phi_stmt_642_c_macro_; 
_recvdat2_merge_stmt_636_c_postamble_macro_; 
// 			next_data2 := ((dat2_t << 1 ) | (($bitcast ($uint<1041>) 0  ) && DAT2Rx)) $buffering 1// bits of buffering = 1042. 
_recvdat2_assign_stmt_657_c_macro_; 
// 			$volatile next_I_2 := (I_2 + 1 ) $buffering 1
_recvdat2_assign_stmt_662_c_macro_; 
do_while_entry_flag = 0;
do_while_loopback_flag = 1;
bit_vector_clear(&konst_665);\
konst_665.val.byte_array[0] = 18;\
konst_665.val.byte_array[1] = 4;\
bit_vector_less(0, &(next_I_2), &(konst_665), &(ULT_u11_u1_666));\
if (has_undefined_bit(&ULT_u11_u1_666)) {fprintf(stderr, "Error: variable ULT_u11_u1_666 has undefined value (%s) at test point.\n", to_string(&ULT_u11_u1_666));assert(0);} \

if (!bit_vector_to_uint64(0, &ULT_u11_u1_666)) break;
} 
}
// 		$volatile startBit2 := ( $slice next_data2 1041 1041 )  $buffering 1
_recvdat2_assign_stmt_670_c_macro_; 
// 		$volatile dat2 := ( $slice next_data2 1040 17 )  $buffering 1
_recvdat2_assign_stmt_674_c_macro_; 
// 		$volatile nextCRC_2 := ( $slice next_data2 16 1 )  $buffering 1
_recvdat2_assign_stmt_678_c_macro_; 
// 		$volatile stopBit2 := ( $slice next_data2 0 0 )  $buffering 1
_recvdat2_assign_stmt_682_c_macro_; 
_recvdat2_branch_block_stmt_634_c_export_apply_macro_;
}
_recvdat2_inner_outarg_prep_macro__; 
MUTEX_UNLOCK(_recvdat2_series_block_stmt_630_c_mutex_);
}
void _recvdat3_(bit_vector*  __pdat3, bit_vector*  __pnextCRC_3, bit_vector*  __pstopBit3)
{
MUTEX_DECL(_recvdat3_series_block_stmt_685_c_mutex_);
MUTEX_LOCK(_recvdat3_series_block_stmt_685_c_mutex_);
_recvdat3_inner_inarg_prep_macro__; 
_recvdat3_branch_block_stmt_689_c_export_decl_macro_; 
{
{
// do-while:   file .Aa/sdhc.linked.aa, line 311
__declare_static_bit_vector(konst_720,11);\
bit_vector_clear(&konst_720);\
konst_720.val.byte_array[0] = 18;\
konst_720.val.byte_array[1] = 4;\
__declare_static_bit_vector(ULT_u11_u1_721,1);\
uint8_t do_while_entry_flag;
do_while_entry_flag = 1;
uint8_t do_while_loopback_flag;
do_while_loopback_flag = 0;
while(1) {
// merge  file .Aa/sdhc.linked.aa, line 313
_recvdat3_merge_stmt_691_c_preamble_macro_; 
// 			$phi I_3 := 			  next_I_3 $on   $loopback 			  ($bitcast ($uint<11>) 0  ) $on   $entry 
 // type of target is $uint<11>
_recvdat3_phi_stmt_692_c_macro_; 
// 			$phi dat3_t := 			  ($bitcast ($uint<1042>) 0  ) $on   $entry 			  next_data3 $on   $loopback 
 // type of target is $uint<1042>
_recvdat3_phi_stmt_697_c_macro_; 
_recvdat3_merge_stmt_691_c_postamble_macro_; 
// 			next_data3 := ((dat3_t << 1 ) | (($bitcast ($uint<1041>) 0  ) && DAT3Rx)) $buffering 1// bits of buffering = 1042. 
_recvdat3_assign_stmt_712_c_macro_; 
// 			$volatile next_I_3 := (I_3 + 1 ) $buffering 1
_recvdat3_assign_stmt_717_c_macro_; 
do_while_entry_flag = 0;
do_while_loopback_flag = 1;
bit_vector_clear(&konst_720);\
konst_720.val.byte_array[0] = 18;\
konst_720.val.byte_array[1] = 4;\
bit_vector_less(0, &(next_I_3), &(konst_720), &(ULT_u11_u1_721));\
if (has_undefined_bit(&ULT_u11_u1_721)) {fprintf(stderr, "Error: variable ULT_u11_u1_721 has undefined value (%s) at test point.\n", to_string(&ULT_u11_u1_721));assert(0);} \

if (!bit_vector_to_uint64(0, &ULT_u11_u1_721)) break;
} 
}
// 		$volatile startBit3 := ( $slice next_data3 1041 1041 )  $buffering 1
_recvdat3_assign_stmt_725_c_macro_; 
// 		$volatile dat3 := ( $slice next_data3 1040 17 )  $buffering 1
_recvdat3_assign_stmt_729_c_macro_; 
// 		$volatile nextCRC_3 := ( $slice next_data3 16 1 )  $buffering 1
_recvdat3_assign_stmt_733_c_macro_; 
// 		$volatile stopBit3 := ( $slice next_data3 0 0 )  $buffering 1
_recvdat3_assign_stmt_737_c_macro_; 
_recvdat3_branch_block_stmt_689_c_export_apply_macro_;
}
_recvdat3_inner_outarg_prep_macro__; 
MUTEX_UNLOCK(_recvdat3_series_block_stmt_685_c_mutex_);
}
void _resetRegisters_(bit_vector* __presetCondition)
{
MUTEX_DECL(_resetRegisters_series_block_stmt_3019_c_mutex_);
MUTEX_LOCK(_resetRegisters_series_block_stmt_3019_c_mutex_);
_resetRegisters_inner_inarg_prep_macro__; 
// 	$call writeSDHCRegisters (64  _h8A  ) () 
_resetRegisters_call_stmt_3023_c_macro_; 
// 	$call writeSDHCRegisters (65  _h64  ) () 
_resetRegisters_call_stmt_3026_c_macro_; 
// 	$call writeSDHCRegisters (66  _h20  ) () 
_resetRegisters_call_stmt_3029_c_macro_; 
// 	$call writeSDHCRegisters (67  _h05  ) () 
_resetRegisters_call_stmt_3032_c_macro_; 
// 	$call writeSDHCRegisters (68  _h31  ) () 
_resetRegisters_call_stmt_3035_c_macro_; 
// 	$call writeSDHCRegisters (69  ZERO_8 ) () 
_resetRegisters_call_stmt_3038_c_macro_; 
// 	$call writeSDHCRegisters (70  ZERO_8 ) () 
_resetRegisters_call_stmt_3041_c_macro_; 
// 	$call writeSDHCRegisters (71  ZERO_8 ) () 
_resetRegisters_call_stmt_3044_c_macro_; 
// 	$call writeSDHCRegisters (45  _h7D  ) () 
_resetRegisters_call_stmt_3047_c_macro_; 
_resetRegisters_branch_block_stmt_3048_c_export_decl_macro_; 
{
// merge  file .Aa/sdhc.linked.aa, line 1041
_resetRegisters_merge_stmt_3049_c_preamble_macro_; 
// 			$phi I := 			  ($bitcast ($uint<8>) 0  ) $on   $entry 			  next_I $on   loopback 
 // type of target is $uint<8>
_resetRegisters_phi_stmt_3050_c_macro_; 
_resetRegisters_merge_stmt_3049_c_postamble_macro_; 
// 		$call readSDHCRegisters (I ) (current_register_value ) 
_resetRegisters_call_stmt_3058_c_macro_; 
// 		$call readSDHCRegisters (47  ) (current_softwarereset_register_value ) 
_resetRegisters_call_stmt_3061_c_macro_; 
// 		$volatile condition := ((I >= 64 ) & (I < 72 )) $buffering 1
_resetRegisters_assign_stmt_3070_c_macro_; 
// 		$volatile condition5 := (I == 45 ) $buffering 1
_resetRegisters_assign_stmt_3075_c_macro_; 
// if statement :  file .Aa/sdhc.linked.aa, line 1049
__declare_static_bit_vector(OR_u1_u1_3079,1);\
bit_vector_or(&(condition), &(condition5), &(OR_u1_u1_3079));\
if (has_undefined_bit(&OR_u1_u1_3079)) {fprintf(stderr, "Error: variable OR_u1_u1_3079 has undefined value (%s) at test point.\n", to_string(&OR_u1_u1_3079));assert(0);} \

if (bit_vector_to_uint64(0, &OR_u1_u1_3079)) { 
/* null */ ;
} 
else {
// if statement :  file .Aa/sdhc.linked.aa, line 1052
__declare_static_bit_vector(EQ_u2_u1_3085,1);\
bit_vector_equal(0, &(resetCondition), &(ZERO_2), &(EQ_u2_u1_3085));\
if (has_undefined_bit(&EQ_u2_u1_3085)) {fprintf(stderr, "Error: variable EQ_u2_u1_3085 has undefined value (%s) at test point.\n", to_string(&EQ_u2_u1_3085));assert(0);} \

if (bit_vector_to_uint64(0, &EQ_u2_u1_3085)) { 
// 			$call writeSDHCRegisters (I ZERO_8 ) () 
_resetRegisters_call_stmt_3088_c_macro_; 
} 
else {
// if statement :  file .Aa/sdhc.linked.aa, line 1055
__declare_static_bit_vector(EQ_u2_u1_3093,1);\
__declare_static_bit_vector(konst_3095,8);\
bit_vector_clear(&konst_3095);\
konst_3095.val.byte_array[0] = 36;\
__declare_static_bit_vector(EQ_u8_u1_3096,1);\
__declare_static_bit_vector(konst_3098,8);\
bit_vector_clear(&konst_3098);\
konst_3098.val.byte_array[0] = 48;\
__declare_static_bit_vector(EQ_u8_u1_3099,1);\
__declare_static_bit_vector(OR_u1_u1_3100,1);\
__declare_static_bit_vector(AND_u1_u1_3101,1);\
bit_vector_equal(0, &(resetCondition), &(ONE_2), &(EQ_u2_u1_3093));\
bit_vector_clear(&konst_3095);\
konst_3095.val.byte_array[0] = 36;\
bit_vector_equal(0, &(I), &(konst_3095), &(EQ_u8_u1_3096));\
bit_vector_clear(&konst_3098);\
konst_3098.val.byte_array[0] = 48;\
bit_vector_equal(0, &(I), &(konst_3098), &(EQ_u8_u1_3099));\
bit_vector_or(&(EQ_u8_u1_3096), &(EQ_u8_u1_3099), &(OR_u1_u1_3100));\
bit_vector_and(&(EQ_u2_u1_3093), &(OR_u1_u1_3100), &(AND_u1_u1_3101));\
if (has_undefined_bit(&AND_u1_u1_3101)) {fprintf(stderr, "Error: variable AND_u1_u1_3101 has undefined value (%s) at test point.\n", to_string(&AND_u1_u1_3101));assert(0);} \

if (bit_vector_to_uint64(0, &AND_u1_u1_3101)) { 
// 			$call writeSDHCRegisters (I (current_register_value & _hfe ) ) () 
_resetRegisters_call_stmt_3106_c_macro_; 
} 
else {
// if statement :  file .Aa/sdhc.linked.aa, line 0
__declare_static_bit_vector(konst_3110,2);\
bit_vector_clear(&konst_3110);\
konst_3110.val.byte_array[0] = 2;\
__declare_static_bit_vector(type_cast_3111,2);\
bit_vector_clear(&type_cast_3111);\
type_cast_3111.val.byte_array[0] = 2;\
__declare_static_bit_vector(EQ_u2_u1_3112,1);\
bit_vector_clear(&konst_3110);\
konst_3110.val.byte_array[0] = 2;\
bit_vector_bitcast_to_bit_vector( &(type_cast_3111), &(konst_3110));\
bit_vector_equal(0, &(resetCondition), &(type_cast_3111), &(EQ_u2_u1_3112));\
if (has_undefined_bit(&EQ_u2_u1_3112)) {fprintf(stderr, "Error: variable EQ_u2_u1_3112 has undefined value (%s) at test point.\n", to_string(&EQ_u2_u1_3112));assert(0);} \

if (bit_vector_to_uint64(0, &EQ_u2_u1_3112)) { 
// if statement :  file .Aa/sdhc.linked.aa, line 0
__declare_static_bit_vector(konst_3115,8);\
bit_vector_clear(&konst_3115);\
konst_3115.val.byte_array[0] = 32;\
__declare_static_bit_vector(UGE_u8_u1_3116,1);\
__declare_static_bit_vector(konst_3118,8);\
bit_vector_clear(&konst_3118);\
konst_3118.val.byte_array[0] = 36;\
__declare_static_bit_vector(ULT_u8_u1_3119,1);\
__declare_static_bit_vector(AND_u1_u1_3120,1);\
bit_vector_clear(&konst_3115);\
konst_3115.val.byte_array[0] = 32;\
bit_vector_greater_equal(0, &(I), &(konst_3115), &(UGE_u8_u1_3116));\
bit_vector_clear(&konst_3118);\
konst_3118.val.byte_array[0] = 36;\
bit_vector_less(0, &(I), &(konst_3118), &(ULT_u8_u1_3119));\
bit_vector_and(&(UGE_u8_u1_3116), &(ULT_u8_u1_3119), &(AND_u1_u1_3120));\
if (has_undefined_bit(&AND_u1_u1_3120)) {fprintf(stderr, "Error: variable AND_u1_u1_3120 has undefined value (%s) at test point.\n", to_string(&AND_u1_u1_3120));assert(0);} \

if (bit_vector_to_uint64(0, &AND_u1_u1_3120)) { 
// 			$call writeSDHCRegisters (I ZERO_8 ) () 
_resetRegisters_call_stmt_3123_c_macro_; 
} 
else {
 ;
}
// if statement :  file .Aa/sdhc.linked.aa, line 0
__declare_static_bit_vector(konst_3127,8);\
bit_vector_clear(&konst_3127);\
konst_3127.val.byte_array[0] = 36;\
__declare_static_bit_vector(EQ_u8_u1_3128,1);\
bit_vector_clear(&konst_3127);\
konst_3127.val.byte_array[0] = 36;\
bit_vector_equal(0, &(I), &(konst_3127), &(EQ_u8_u1_3128));\
if (has_undefined_bit(&EQ_u8_u1_3128)) {fprintf(stderr, "Error: variable EQ_u8_u1_3128 has undefined value (%s) at test point.\n", to_string(&EQ_u8_u1_3128));assert(0);} \

if (bit_vector_to_uint64(0, &EQ_u8_u1_3128)) { 
// 			$call writeSDHCRegisters (I (current_register_value & _h09 ) ) () 
_resetRegisters_call_stmt_3133_c_macro_; 
} 
else {
 ;
}
// if statement :  file .Aa/sdhc.linked.aa, line 0
__declare_static_bit_vector(konst_3137,8);\
bit_vector_clear(&konst_3137);\
konst_3137.val.byte_array[0] = 37;\
__declare_static_bit_vector(EQ_u8_u1_3138,1);\
bit_vector_clear(&konst_3137);\
konst_3137.val.byte_array[0] = 37;\
bit_vector_equal(0, &(I), &(konst_3137), &(EQ_u8_u1_3138));\
if (has_undefined_bit(&EQ_u8_u1_3138)) {fprintf(stderr, "Error: variable EQ_u8_u1_3138 has undefined value (%s) at test point.\n", to_string(&EQ_u8_u1_3138));assert(0);} \

if (bit_vector_to_uint64(0, &EQ_u8_u1_3138)) { 
// 			$call writeSDHCRegisters (I ZERO_8 ) () 
_resetRegisters_call_stmt_3141_c_macro_; 
} 
else {
 ;
}
// if statement :  file .Aa/sdhc.linked.aa, line 0
__declare_static_bit_vector(konst_3145,8);\
bit_vector_clear(&konst_3145);\
konst_3145.val.byte_array[0] = 48;\
__declare_static_bit_vector(EQ_u8_u1_3146,1);\
bit_vector_clear(&konst_3145);\
konst_3145.val.byte_array[0] = 48;\
bit_vector_equal(0, &(I), &(konst_3145), &(EQ_u8_u1_3146));\
if (has_undefined_bit(&EQ_u8_u1_3146)) {fprintf(stderr, "Error: variable EQ_u8_u1_3146 has undefined value (%s) at test point.\n", to_string(&EQ_u8_u1_3146));assert(0);} \

if (bit_vector_to_uint64(0, &EQ_u8_u1_3146)) { 
// 			$call writeSDHCRegisters (I (current_register_value & _hC1 ) ) () 
_resetRegisters_call_stmt_3151_c_macro_; 
} 
else {
 ;
}
} 
else {
 ;
}
}
}
}
// 		$volatile next_I := (I + 1 ) $buffering 1
_resetRegisters_assign_stmt_3161_c_macro_; 
// if statement :  file .Aa/sdhc.linked.aa, line 0
__declare_static_bit_vector(konst_3164,8);\
bit_vector_clear(&konst_3164);\
konst_3164.val.byte_array[0] = 72;\
__declare_static_bit_vector(ULT_u8_u1_3165,1);\
bit_vector_clear(&konst_3164);\
konst_3164.val.byte_array[0] = 72;\
bit_vector_less(0, &(next_I), &(konst_3164), &(ULT_u8_u1_3165));\
if (has_undefined_bit(&ULT_u8_u1_3165)) {fprintf(stderr, "Error: variable ULT_u8_u1_3165 has undefined value (%s) at test point.\n", to_string(&ULT_u8_u1_3165));assert(0);} \

if (bit_vector_to_uint64(0, &ULT_u8_u1_3165)) { 
/* 			$place[loopback]
*/  goto loopback_3048;
} 
else {
 ;
}
// if statement :  file .Aa/sdhc.linked.aa, line 0
__declare_static_bit_vector(EQ_u2_u1_3171,1);\
bit_vector_equal(0, &(resetCondition), &(ONE_2), &(EQ_u2_u1_3171));\
if (has_undefined_bit(&EQ_u2_u1_3171)) {fprintf(stderr, "Error: variable EQ_u2_u1_3171 has undefined value (%s) at test point.\n", to_string(&EQ_u2_u1_3171));assert(0);} \

if (bit_vector_to_uint64(0, &EQ_u2_u1_3171)) { 
// 			$call writeSDHCRegisters (47  (current_softwarereset_register_value & _hfd ) ) () 
_resetRegisters_call_stmt_3176_c_macro_; 
} 
else {
 ;
}
// if statement :  file .Aa/sdhc.linked.aa, line 0
__declare_static_bit_vector(konst_3180,2);\
bit_vector_clear(&konst_3180);\
konst_3180.val.byte_array[0] = 2;\
__declare_static_bit_vector(type_cast_3181,2);\
bit_vector_clear(&type_cast_3181);\
type_cast_3181.val.byte_array[0] = 2;\
__declare_static_bit_vector(EQ_u2_u1_3182,1);\
bit_vector_clear(&konst_3180);\
konst_3180.val.byte_array[0] = 2;\
bit_vector_bitcast_to_bit_vector( &(type_cast_3181), &(konst_3180));\
bit_vector_equal(0, &(resetCondition), &(type_cast_3181), &(EQ_u2_u1_3182));\
if (has_undefined_bit(&EQ_u2_u1_3182)) {fprintf(stderr, "Error: variable EQ_u2_u1_3182 has undefined value (%s) at test point.\n", to_string(&EQ_u2_u1_3182));assert(0);} \

if (bit_vector_to_uint64(0, &EQ_u2_u1_3182)) { 
// 			$call writeSDHCRegisters (47  (current_softwarereset_register_value & _hfb ) ) () 
_resetRegisters_call_stmt_3187_c_macro_; 
} 
else {
 ;
}
_resetRegisters_branch_block_stmt_3048_c_export_apply_macro_;
}
_resetRegisters_inner_outarg_prep_macro__; 
MUTEX_UNLOCK(_resetRegisters_series_block_stmt_3019_c_mutex_);
}
void _sdhc_daemon_()
{
MUTEX_DECL(_sdhc_daemon_series_block_stmt_3389_c_mutex_);
MUTEX_LOCK(_sdhc_daemon_series_block_stmt_3389_c_mutex_);
_sdhc_daemon_inner_inarg_prep_macro__; 
// 	SDHC_to_IRC_INT := ZERO_1 $buffering 1// bits of buffering = 1. 
_sdhc_daemon_assign_stmt_3392_c_macro_; 
// 	oe := ZERO_1 $buffering 1// bits of buffering = 1. 
_sdhc_daemon_assign_stmt_3395_c_macro_; 
// 	busy := ZERO_1 $buffering 1// bits of buffering = 1. 
_sdhc_daemon_assign_stmt_3398_c_macro_; 
// 	readyClockCountEnable := ONE_1 $buffering 1// bits of buffering = 1. 
_sdhc_daemon_assign_stmt_3401_c_macro_; 
// 	normalInterruptFlag1 := _hFF  $buffering 1// bits of buffering = 8. 
_sdhc_daemon_assign_stmt_3404_c_macro_; 
// 	normalInterruptFlag2 := _hFF  $buffering 1// bits of buffering = 8. 
_sdhc_daemon_assign_stmt_3407_c_macro_; 
// 	errorInterruptFlag1 := _hFF  $buffering 1// bits of buffering = 8. 
_sdhc_daemon_assign_stmt_3410_c_macro_; 
// 	errorInterruptFlag2 := _hFF  $buffering 1// bits of buffering = 8. 
_sdhc_daemon_assign_stmt_3413_c_macro_; 
// 	txBufferPointer := ($bitcast ($uint<10>) 0  ) $buffering 1// bits of buffering = 10. 
_sdhc_daemon_assign_stmt_3417_c_macro_; 
// 	rxBufferPointer := ($bitcast ($uint<10>) 0  ) $buffering 1// bits of buffering = 10. 
_sdhc_daemon_assign_stmt_3421_c_macro_; 
// 	dataRxEnrty1 := ZERO_1 $buffering 1// bits of buffering = 1. 
_sdhc_daemon_assign_stmt_3424_c_macro_; 
// 	dataRxEnrty2 := ZERO_1 $buffering 1// bits of buffering = 1. 
_sdhc_daemon_assign_stmt_3427_c_macro_; 
// 	dataErrorInterruptStatus := ZERO_8 $buffering 1// bits of buffering = 8. 
_sdhc_daemon_assign_stmt_3430_c_macro_; 
// 	$call resetRegisters (ZERO_2 ) () 
_sdhc_daemon_call_stmt_3432_c_macro_; 
_sdhc_daemon_branch_block_stmt_3433_c_export_decl_macro_; 
{
// merge  file .Aa/sdhc.linked.aa, line 1209
_sdhc_daemon_merge_stmt_3434_c_preamble_macro_; 
_sdhc_daemon_merge_stmt_3434_c_postamble_macro_; 
// 		request := peripheral_bridge_to_sdhc_request $buffering 1// bits of buffering = 64. 
_sdhc_daemon_assign_stmt_3437_c_macro_; 
// 		$volatile rwbar := ( $slice request 63 63 )  $buffering 1
_sdhc_daemon_assign_stmt_3441_c_macro_; 
// 		$volatile bytemask := ( $slice request 62 59 )  $buffering 1
_sdhc_daemon_assign_stmt_3445_c_macro_; 
// 		$volatile unused := ( $slice request 58 56 )  $buffering 1
_sdhc_daemon_assign_stmt_3449_c_macro_; 
// 		$volatile addressunused := ( $slice request 55 40 )  $buffering 1
_sdhc_daemon_assign_stmt_3453_c_macro_; 
// 		$volatile address := ( $slice request 39 32 )  $buffering 1
_sdhc_daemon_assign_stmt_3457_c_macro_; 
// 		$volatile data3 := ( $slice request 31 24 )  $buffering 1
_sdhc_daemon_assign_stmt_3461_c_macro_; 
// 		$volatile data2 := ( $slice request 23 16 )  $buffering 1
_sdhc_daemon_assign_stmt_3465_c_macro_; 
// 		$volatile data1 := ( $slice request 15 8 )  $buffering 1
_sdhc_daemon_assign_stmt_3469_c_macro_; 
// 		$volatile data0 := ( $slice request 7 0 )  $buffering 1
_sdhc_daemon_assign_stmt_3473_c_macro_; 
// 		$volatile b3 := ( $slice bytemask 3 3 )  $buffering 1
_sdhc_daemon_assign_stmt_3477_c_macro_; 
// 		$volatile b2 := ( $slice bytemask 2 2 )  $buffering 1
_sdhc_daemon_assign_stmt_3481_c_macro_; 
// 		$volatile b1 := ( $slice bytemask 1 1 )  $buffering 1
_sdhc_daemon_assign_stmt_3485_c_macro_; 
// 		$volatile b0 := ( $slice bytemask 0 0 )  $buffering 1
_sdhc_daemon_assign_stmt_3489_c_macro_; 
// if statement :  file .Aa/sdhc.linked.aa, line 1225
__declare_static_bit_vector(konst_3492,1);\
bit_vector_clear(&konst_3492);\
__declare_static_bit_vector(EQ_u1_u1_3493,1);\
bit_vector_clear(&konst_3492);\
bit_vector_equal(0, &(rwbar), &(konst_3492), &(EQ_u1_u1_3493));\
if (has_undefined_bit(&EQ_u1_u1_3493)) {fprintf(stderr, "Error: variable EQ_u1_u1_3493 has undefined value (%s) at test point.\n", to_string(&EQ_u1_u1_3493));assert(0);} \

if (bit_vector_to_uint64(0, &EQ_u1_u1_3493)) { 
// 			$guard (b3) $call sdhc_register_write (address data3 ) () 
_sdhc_daemon_call_stmt_3497_c_macro_; 
// 			$guard (b2) $call sdhc_register_write ((address + 1 ) data2 ) () 
_sdhc_daemon_call_stmt_3503_c_macro_; 
// 			$guard (b1) $call sdhc_register_write ((address + 2 ) data1 ) () 
_sdhc_daemon_call_stmt_3509_c_macro_; 
// 			$guard (b0) $call sdhc_register_write ((address + 3 ) data0 ) () 
_sdhc_daemon_call_stmt_3515_c_macro_; 
// 			sdhc_to_peripheral_bridge_response := ZERO_32 $buffering 1// bits of buffering = 32. 
_sdhc_daemon_assign_stmt_3518_c_macro_; 
// if statement :  file .Aa/sdhc.linked.aa, line 0
__declare_static_bit_vector(konst_3521,8);\
bit_vector_clear(&konst_3521);\
konst_3521.val.byte_array[0] = 3;\
__declare_static_bit_vector(ADD_u8_u8_3522,8);\
__declare_static_bit_vector(konst_3523,8);\
bit_vector_clear(&konst_3523);\
konst_3523.val.byte_array[0] = 47;\
__declare_static_bit_vector(EQ_u8_u1_3524,1);\
bit_vector_clear(&konst_3521);\
konst_3521.val.byte_array[0] = 3;\
bit_vector_plus( &(address), &(konst_3521), &(ADD_u8_u8_3522));\
bit_vector_clear(&konst_3523);\
konst_3523.val.byte_array[0] = 47;\
bit_vector_equal(0, &(ADD_u8_u8_3522), &(konst_3523), &(EQ_u8_u1_3524));\
if (has_undefined_bit(&EQ_u8_u1_3524)) {fprintf(stderr, "Error: variable EQ_u8_u1_3524 has undefined value (%s) at test point.\n", to_string(&EQ_u8_u1_3524));assert(0);} \

if (bit_vector_to_uint64(0, &EQ_u8_u1_3524)) { 
// 			$call readSDHCRegisters (47  ) (softwareResetVal ) 
_sdhc_daemon_call_stmt_3527_c_macro_; 
// if statement :  file .Aa/sdhc.linked.aa, line 0
__declare_static_bit_vector(konst_3530,8);\
bit_vector_clear(&konst_3530);\
__declare_static_bit_vector(BITSEL_u8_u1_3531,1);\
bit_vector_clear(&konst_3530);\
bit_vector_bitsel( &(softwareResetVal), &(konst_3530), &(BITSEL_u8_u1_3531));\
if (has_undefined_bit(&BITSEL_u8_u1_3531)) {fprintf(stderr, "Error: variable BITSEL_u8_u1_3531 has undefined value (%s) at test point.\n", to_string(&BITSEL_u8_u1_3531));assert(0);} \

if (bit_vector_to_uint64(0, &BITSEL_u8_u1_3531)) { 
// 			$call resetRegisters (ZERO_2 ) () 
_sdhc_daemon_call_stmt_3533_c_macro_; 
} 
else {
 ;
}
// if statement :  file .Aa/sdhc.linked.aa, line 0
__declare_static_bit_vector(konst_3537,8);\
bit_vector_clear(&konst_3537);\
konst_3537.val.byte_array[0] = 1;\
__declare_static_bit_vector(BITSEL_u8_u1_3538,1);\
bit_vector_clear(&konst_3537);\
konst_3537.val.byte_array[0] = 1;\
bit_vector_bitsel( &(softwareResetVal), &(konst_3537), &(BITSEL_u8_u1_3538));\
if (has_undefined_bit(&BITSEL_u8_u1_3538)) {fprintf(stderr, "Error: variable BITSEL_u8_u1_3538 has undefined value (%s) at test point.\n", to_string(&BITSEL_u8_u1_3538));assert(0);} \

if (bit_vector_to_uint64(0, &BITSEL_u8_u1_3538)) { 
// 			$call resetRegisters (ONE_2 ) () 
_sdhc_daemon_call_stmt_3540_c_macro_; 
} 
else {
 ;
}
// if statement :  file .Aa/sdhc.linked.aa, line 0
__declare_static_bit_vector(konst_3544,8);\
bit_vector_clear(&konst_3544);\
konst_3544.val.byte_array[0] = 2;\
__declare_static_bit_vector(BITSEL_u8_u1_3545,1);\
bit_vector_clear(&konst_3544);\
konst_3544.val.byte_array[0] = 2;\
bit_vector_bitsel( &(softwareResetVal), &(konst_3544), &(BITSEL_u8_u1_3545));\
if (has_undefined_bit(&BITSEL_u8_u1_3545)) {fprintf(stderr, "Error: variable BITSEL_u8_u1_3545 has undefined value (%s) at test point.\n", to_string(&BITSEL_u8_u1_3545));assert(0);} \

if (bit_vector_to_uint64(0, &BITSEL_u8_u1_3545)) { 
// 			$call resetRegisters (($bitcast ($uint<2>) 2  ) ) () 
_sdhc_daemon_call_stmt_3548_c_macro_; 
} 
else {
 ;
}
} 
else {
 ;
}
// 			$call readSDHCRegisters (36  ) (presentStateVal ) 
_sdhc_daemon_call_stmt_3553_c_macro_; 
// 			$volatile commandInhibit_CMD := ((presentStateVal [] 0 ) == 0 ) $buffering 1
_sdhc_daemon_assign_stmt_3560_c_macro_; 
// 			$volatile addresscheck := (((address + 3 ) == _h0f ) & b0) $buffering 1
_sdhc_daemon_assign_stmt_3569_c_macro_; 
// 			$volatile presentState := ((presentStateVal >> 1 ) << 1 ) $buffering 1
_sdhc_daemon_assign_stmt_3576_c_macro_; 
// if statement :  file .Aa/sdhc.linked.aa, line 0
__declare_static_bit_vector(AND_u1_u1_3580,1);\
bit_vector_and(&(addresscheck), &(commandInhibit_CMD), &(AND_u1_u1_3580));\
if (has_undefined_bit(&AND_u1_u1_3580)) {fprintf(stderr, "Error: variable AND_u1_u1_3580 has undefined value (%s) at test point.\n", to_string(&AND_u1_u1_3580));assert(0);} \

if (bit_vector_to_uint64(0, &AND_u1_u1_3580)) { 
// 			$volatile tempPresentStateHere := (presentState | _h01 ) $buffering 1
_sdhc_daemon_assign_stmt_3585_c_macro_; 
// 			$call writeSDHCRegisters (36  tempPresentStateHere ) () 
_sdhc_daemon_call_stmt_3588_c_macro_; 
// 			dataRxEnrty1 := ZERO_1 $buffering 1// bits of buffering = 1. 
_sdhc_daemon_assign_stmt_3591_c_macro_; 
// 			dataRxEnrty2 := ZERO_1 $buffering 1// bits of buffering = 1. 
_sdhc_daemon_assign_stmt_3594_c_macro_; 
// 			$call command_generator () (normalInterruptStatusVar1 normalInterruptStatusVar2 errorInterruptStatusVar1 errorInterruptStatusVar2 dataErrorInterruptStatusVar1 dataTransferComplete ) 
_sdhc_daemon_call_stmt_3601_c_macro_; 
// 			normalInterruptFlag1 := _hFF  $buffering 1// bits of buffering = 8. 
_sdhc_daemon_assign_stmt_3604_c_macro_; 
// 			normalInterruptFlag2 := _hFF  $buffering 1// bits of buffering = 8. 
_sdhc_daemon_assign_stmt_3607_c_macro_; 
// 			errorInterruptFlag1 := _hFF  $buffering 1// bits of buffering = 8. 
_sdhc_daemon_assign_stmt_3610_c_macro_; 
// 			errorInterruptFlag2 := _hFF  $buffering 1// bits of buffering = 8. 
_sdhc_daemon_assign_stmt_3613_c_macro_; 
} 
else {
 ;
}
// if statement :  file .Aa/sdhc.linked.aa, line 0
__declare_static_bit_vector(konst_3617,10);\
bit_vector_clear(&konst_3617);\
__declare_static_bit_vector(UGT_u10_u1_3618,1);\
bit_vector_clear(&konst_3617);\
bit_vector_greater(0, &(rxBufferPointer), &(konst_3617), &(UGT_u10_u1_3618));\
if (has_undefined_bit(&UGT_u10_u1_3618)) {fprintf(stderr, "Error: variable UGT_u10_u1_3618 has undefined value (%s) at test point.\n", to_string(&UGT_u10_u1_3618));assert(0);} \

if (bit_vector_to_uint64(0, &UGT_u10_u1_3618)) { 
// 			$call readSDHCRegisters (37  ) (tempPresentState_1_1 ) 
_sdhc_daemon_call_stmt_3621_c_macro_; 
// 			$call writeSDHCRegisters (37  (tempPresentState_1_1 | _h08 ) ) () 
_sdhc_daemon_call_stmt_3626_c_macro_; 
// 			bufferReadReady := (ZERO_8 | _h20 ) $buffering 1// bits of buffering = 8. 
_sdhc_daemon_assign_stmt_3631_c_macro_; 
// 			normalInterruptFlag1 := (normalInterruptFlag1 | _h20 ) $buffering 1// bits of buffering = 8. 
_sdhc_daemon_assign_stmt_3636_c_macro_; 
} 
else {
 ;
}
// if statement :  file .Aa/sdhc.linked.aa, line 0
__declare_static_bit_vector(konst_3640,10);\
bit_vector_clear(&konst_3640);\
konst_3640.val.byte_array[1] = 2;\
__declare_static_bit_vector(ULT_u10_u1_3641,1);\
bit_vector_clear(&konst_3640);\
konst_3640.val.byte_array[1] = 2;\
bit_vector_less(0, &(txBufferPointer), &(konst_3640), &(ULT_u10_u1_3641));\
if (has_undefined_bit(&ULT_u10_u1_3641)) {fprintf(stderr, "Error: variable ULT_u10_u1_3641 has undefined value (%s) at test point.\n", to_string(&ULT_u10_u1_3641));assert(0);} \

if (bit_vector_to_uint64(0, &ULT_u10_u1_3641)) { 
// 			$call readSDHCRegisters (37  ) (tempPresentState_1_2 ) 
_sdhc_daemon_call_stmt_3644_c_macro_; 
// 			$call writeSDHCRegisters (37  (tempPresentState_1_2 | _h04 ) ) () 
_sdhc_daemon_call_stmt_3649_c_macro_; 
// 			bufferWriteReady := (ZERO_8 | _h10 ) $buffering 1// bits of buffering = 8. 
_sdhc_daemon_assign_stmt_3654_c_macro_; 
// 			normalInterruptFlag1 := (normalInterruptFlag1 | _h10 ) $buffering 1// bits of buffering = 8. 
_sdhc_daemon_assign_stmt_3659_c_macro_; 
} 
else {
 ;
}
// 			$volatile bufferDataPortCheck := (address == 32 ) $buffering 1
_sdhc_daemon_assign_stmt_3665_c_macro_; 
// if statement :  file .Aa/sdhc.linked.aa, line 0
__declare_static_bit_vector(konst_3668,1);\
bit_vector_clear(&konst_3668);\
konst_3668.val.byte_array[0] = 1;\
__declare_static_bit_vector(EQ_u1_u1_3669,1);\
__declare_static_bit_vector(konst_3671,10);\
bit_vector_clear(&konst_3671);\
konst_3671.val.byte_array[1] = 2;\
__declare_static_bit_vector(ULT_u10_u1_3672,1);\
__declare_static_bit_vector(AND_u1_u1_3673,1);\
bit_vector_clear(&konst_3668);\
konst_3668.val.byte_array[0] = 1;\
bit_vector_equal(0, &(bufferDataPortCheck), &(konst_3668), &(EQ_u1_u1_3669));\
bit_vector_clear(&konst_3671);\
konst_3671.val.byte_array[1] = 2;\
bit_vector_less(0, &(txBufferPointer), &(konst_3671), &(ULT_u10_u1_3672));\
bit_vector_and(&(EQ_u1_u1_3669), &(ULT_u10_u1_3672), &(AND_u1_u1_3673));\
if (has_undefined_bit(&AND_u1_u1_3673)) {fprintf(stderr, "Error: variable AND_u1_u1_3673 has undefined value (%s) at test point.\n", to_string(&AND_u1_u1_3673));assert(0);} \

if (bit_vector_to_uint64(0, &AND_u1_u1_3673)) { 
// merge  file .Aa/sdhc.linked.aa, line 1272
_sdhc_daemon_merge_stmt_3674_c_preamble_macro_; 
// 				$phi B := 				  next_B $on   loopBuffer 				  ($bitcast ($uint<8>) 0  ) $on   $entry 
 // type of target is $uint<8>
_sdhc_daemon_phi_stmt_3675_c_macro_; 
_sdhc_daemon_merge_stmt_3674_c_postamble_macro_; 
// 			$call readSDHCRegisters ((32  + B) ) (tempBuf ) 
_sdhc_daemon_call_stmt_3685_c_macro_; 
// 			dataBufferTx := tempBuf $buffering 1// bits of buffering = 8. 
_sdhc_daemon_assign_stmt_3688_c_macro_; 
// 			$volatile next_B := (B + 1 ) $buffering 1
_sdhc_daemon_assign_stmt_3693_c_macro_; 
// if statement :  file .Aa/sdhc.linked.aa, line 0
__declare_static_bit_vector(konst_3696,8);\
bit_vector_clear(&konst_3696);\
konst_3696.val.byte_array[0] = 4;\
__declare_static_bit_vector(ULT_u8_u1_3697,1);\
bit_vector_clear(&konst_3696);\
konst_3696.val.byte_array[0] = 4;\
bit_vector_less(0, &(next_B), &(konst_3696), &(ULT_u8_u1_3697));\
if (has_undefined_bit(&ULT_u8_u1_3697)) {fprintf(stderr, "Error: variable ULT_u8_u1_3697 has undefined value (%s) at test point.\n", to_string(&ULT_u8_u1_3697));assert(0);} \

if (bit_vector_to_uint64(0, &ULT_u8_u1_3697)) { 
/* 			$place[loopBuffer]
*/  goto loopBuffer_3433;
} 
else {
 ;
}
// 			txBufferPointer := (txBufferPointer + 4 ) $buffering 1// bits of buffering = 10. 
_sdhc_daemon_assign_stmt_3704_c_macro_; 
// if statement :  file .Aa/sdhc.linked.aa, line 0
__declare_static_bit_vector(konst_3707,10);\
bit_vector_clear(&konst_3707);\
konst_3707.val.byte_array[1] = 2;\
__declare_static_bit_vector(EQ_u10_u1_3708,1);\
bit_vector_clear(&konst_3707);\
konst_3707.val.byte_array[1] = 2;\
bit_vector_equal(0, &(txBufferPointer), &(konst_3707), &(EQ_u10_u1_3708));\
if (has_undefined_bit(&EQ_u10_u1_3708)) {fprintf(stderr, "Error: variable EQ_u10_u1_3708 has undefined value (%s) at test point.\n", to_string(&EQ_u10_u1_3708));assert(0);} \

if (bit_vector_to_uint64(0, &EQ_u10_u1_3708)) { 
// 			$call readSDHCRegisters (37  ) (tempPresentState_1_3 ) 
_sdhc_daemon_call_stmt_3711_c_macro_; 
// 			$call writeSDHCRegisters (37  (tempPresentState_1_3 | _hfb ) ) () 
_sdhc_daemon_call_stmt_3716_c_macro_; 
// 			$call readSDHCRegisters (12  ) (transferRegVal ) 
_sdhc_daemon_call_stmt_3719_c_macro_; 
// 			singleMultipleBlock := (  $bitreduce |  (transferRegVal & _h20 ) ) $buffering 1// bits of buffering = 1. 
_sdhc_daemon_assign_stmt_3725_c_macro_; 
// 			blockCountEnable := ((  $bitreduce |  (transferRegVal & _h02 ) ) & singleMultipleBlock) $buffering 1// bits of buffering = 1. 
_sdhc_daemon_assign_stmt_3733_c_macro_; 
// merge  file .Aa/sdhc.linked.aa, line 1289
_sdhc_daemon_merge_stmt_3734_c_preamble_macro_; 
// 				$phi C := 				  ONE_8 $on   $entry 				  next_C $on   loopBlock 
 // type of target is $uint<8>
_sdhc_daemon_phi_stmt_3735_c_macro_; 
// 				$phi newBlockCount := 				  ($bitcast ($uint<16>) 0  ) $on   $entry 				  blockCount $on   loopBlock 
 // type of target is $uint<16>
_sdhc_daemon_phi_stmt_3739_c_macro_; 
_sdhc_daemon_merge_stmt_3734_c_postamble_macro_; 
// 			$call readSDHCRegisters ((6  + C) ) (newBlockCountTemp ) 
_sdhc_daemon_call_stmt_3749_c_macro_; 
// 			$volatile blockCount := (( $slice newBlockCount 7 0 )  && newBlockCountTemp) $buffering 1
_sdhc_daemon_assign_stmt_3755_c_macro_; 
// 			$volatile next_C := (C - 1 ) $buffering 1
_sdhc_daemon_assign_stmt_3760_c_macro_; 
// if statement :  file .Aa/sdhc.linked.aa, line 0
__declare_static_bit_vector(konst_3763,8);\
bit_vector_clear(&konst_3763);\
__declare_static_bit_vector(NEQ_u8_u1_3764,1);\
bit_vector_clear(&konst_3763);\
bit_vector_not_equal(0, &(C), &(konst_3763), &NEQ_u8_u1_3764);\
if (has_undefined_bit(&NEQ_u8_u1_3764)) {fprintf(stderr, "Error: variable NEQ_u8_u1_3764 has undefined value (%s) at test point.\n", to_string(&NEQ_u8_u1_3764));assert(0);} \

if (bit_vector_to_uint64(0, &NEQ_u8_u1_3764)) { 
/* 			$place[loopBlock]
*/  goto loopBlock_3433;
} 
else {
 ;
}
// 			$volatile blockCountTrue := (blockCount == 1 ) $buffering 1
_sdhc_daemon_assign_stmt_3771_c_macro_; 
// 			$volatile lastBlock := (( ~ singleMultipleBlock ) | (blockCountEnable & blockCountTrue)) $buffering 1
_sdhc_daemon_assign_stmt_3779_c_macro_; 
// 			$call dataTx (lastBlock blockCountEnable blockCount ) (blockCountNext transferComplete ) 
_sdhc_daemon_call_stmt_3785_c_macro_; 
// 			$call writeSDHCRegisters (7  ( $slice blockCountNext 15 8 )  ) () 
_sdhc_daemon_call_stmt_3789_c_macro_; 
// 			$call writeSDHCRegisters (6  ( $slice blockCountNext 7 0 )  ) () 
_sdhc_daemon_call_stmt_3793_c_macro_; 
// 			normalInterruptFlag1 := (normalInterruptFlag1 | _h02 ) $buffering 1// bits of buffering = 8. 
_sdhc_daemon_assign_stmt_3798_c_macro_; 
// 			errorInterruptFlag1 := (errorInterruptFlag1 | _h60 ) $buffering 1// bits of buffering = 8. 
_sdhc_daemon_assign_stmt_3803_c_macro_; 
} 
else {
 ;
}
} 
else {
 ;
}
} 
else {
// 			$volatile readBufferDataPortCheck := (address == 32 ) $buffering 1
_sdhc_daemon_assign_stmt_3811_c_macro_; 
// if statement :  file .Aa/sdhc.linked.aa, line 0
__declare_static_bit_vector(konst_3814,1);\
bit_vector_clear(&konst_3814);\
konst_3814.val.byte_array[0] = 1;\
__declare_static_bit_vector(EQ_u1_u1_3815,1);\
__declare_static_bit_vector(konst_3817,10);\
bit_vector_clear(&konst_3817);\
__declare_static_bit_vector(NEQ_u10_u1_3818,1);\
__declare_static_bit_vector(AND_u1_u1_3819,1);\
bit_vector_clear(&konst_3814);\
konst_3814.val.byte_array[0] = 1;\
bit_vector_equal(0, &(readBufferDataPortCheck), &(konst_3814), &(EQ_u1_u1_3815));\
bit_vector_clear(&konst_3817);\
bit_vector_not_equal(0, &(rxBufferPointer), &(konst_3817), &NEQ_u10_u1_3818);\
bit_vector_and(&(EQ_u1_u1_3815), &(NEQ_u10_u1_3818), &(AND_u1_u1_3819));\
if (has_undefined_bit(&AND_u1_u1_3819)) {fprintf(stderr, "Error: variable AND_u1_u1_3819 has undefined value (%s) at test point.\n", to_string(&AND_u1_u1_3819));assert(0);} \

if (bit_vector_to_uint64(0, &AND_u1_u1_3819)) { 
// merge  file .Aa/sdhc.linked.aa, line 1313
_sdhc_daemon_merge_stmt_3820_c_preamble_macro_; 
// 				$phi D := 				  ($bitcast ($uint<8>) 0  ) $on   $entry 				  next_D $on   loopBufferWrite 
 // type of target is $uint<8>
_sdhc_daemon_phi_stmt_3821_c_macro_; 
_sdhc_daemon_merge_stmt_3820_c_postamble_macro_; 
// 			tempBuf2 := dataBufferRx $buffering 1// bits of buffering = 8. 
_sdhc_daemon_assign_stmt_3829_c_macro_; 
// 			$call writeSDHCRegisters ((32  + D) tempBuf2 ) () 
_sdhc_daemon_call_stmt_3834_c_macro_; 
// 			$volatile next_D := (D + 1 ) $buffering 1
_sdhc_daemon_assign_stmt_3839_c_macro_; 
// if statement :  file .Aa/sdhc.linked.aa, line 0
__declare_static_bit_vector(konst_3842,8);\
bit_vector_clear(&konst_3842);\
konst_3842.val.byte_array[0] = 4;\
__declare_static_bit_vector(ULT_u8_u1_3843,1);\
bit_vector_clear(&konst_3842);\
konst_3842.val.byte_array[0] = 4;\
bit_vector_less(0, &(next_D), &(konst_3842), &(ULT_u8_u1_3843));\
if (has_undefined_bit(&ULT_u8_u1_3843)) {fprintf(stderr, "Error: variable ULT_u8_u1_3843 has undefined value (%s) at test point.\n", to_string(&ULT_u8_u1_3843));assert(0);} \

if (bit_vector_to_uint64(0, &ULT_u8_u1_3843)) { 
/* 			$place[loopBufferWrite]
*/  goto loopBufferWrite_3433;
} 
else {
 ;
}
// 			rxBufferPointer := (rxBufferPointer - 4 ) $buffering 1// bits of buffering = 10. 
_sdhc_daemon_assign_stmt_3850_c_macro_; 
// 			$call readSDHCRegisters (12  ) (transferRegVal2 ) 
_sdhc_daemon_call_stmt_3853_c_macro_; 
// 			singleMultipleReadBlock := (  $bitreduce |  (transferRegVal2 & _h20 ) ) $buffering 1// bits of buffering = 1. 
_sdhc_daemon_assign_stmt_3859_c_macro_; 
// if statement :  file .Aa/sdhc.linked.aa, line 0
__declare_static_bit_vector(konst_3862,10);\
bit_vector_clear(&konst_3862);\
__declare_static_bit_vector(EQ_u10_u1_3863,1);\
bit_vector_clear(&konst_3862);\
bit_vector_equal(0, &(rxBufferPointer), &(konst_3862), &(EQ_u10_u1_3863));\
if (has_undefined_bit(&EQ_u10_u1_3863)) {fprintf(stderr, "Error: variable EQ_u10_u1_3863 has undefined value (%s) at test point.\n", to_string(&EQ_u10_u1_3863));assert(0);} \

if (bit_vector_to_uint64(0, &EQ_u10_u1_3863)) { 
// 			$call readSDHCRegisters (37  ) (tempPresentState_1_4 ) 
_sdhc_daemon_call_stmt_3866_c_macro_; 
// 			$call writeSDHCRegisters (37  (tempPresentState_1_4 & _hf7 ) ) () 
_sdhc_daemon_call_stmt_3871_c_macro_; 
// if statement :  file .Aa/sdhc.linked.aa, line 0
__declare_static_bit_vector(konst_3874,1);\
bit_vector_clear(&konst_3874);\
konst_3874.val.byte_array[0] = 1;\
__declare_static_bit_vector(EQ_u1_u1_3875,1);\
bit_vector_clear(&konst_3874);\
konst_3874.val.byte_array[0] = 1;\
bit_vector_equal(0, &(singleMultipleReadBlock), &(konst_3874), &(EQ_u1_u1_3875));\
if (has_undefined_bit(&EQ_u1_u1_3875)) {fprintf(stderr, "Error: variable EQ_u1_u1_3875 has undefined value (%s) at test point.\n", to_string(&EQ_u1_u1_3875));assert(0);} \

if (bit_vector_to_uint64(0, &EQ_u1_u1_3875)) { 
// 			readBlockCountEnable := ((  $bitreduce |  (transferRegVal2 & _h02 ) ) & singleMultipleBlock) $buffering 1// bits of buffering = 1. 
_sdhc_daemon_assign_stmt_3883_c_macro_; 
// merge  file .Aa/sdhc.linked.aa, line 1331
_sdhc_daemon_merge_stmt_3884_c_preamble_macro_; 
// 				$phi E := 				  ONE_8 $on   $entry 				  next_E $on   loopBlock2 
 // type of target is $uint<8>
_sdhc_daemon_phi_stmt_3885_c_macro_; 
// 				$phi readNewBlockCount := 				  ($bitcast ($uint<16>) 0  ) $on   $entry 				  readBlockCount $on   loopBlock2 
 // type of target is $uint<16>
_sdhc_daemon_phi_stmt_3889_c_macro_; 
_sdhc_daemon_merge_stmt_3884_c_postamble_macro_; 
// 			$call readSDHCRegisters ((6  + E) ) (readnewBlockCountTemp ) 
_sdhc_daemon_call_stmt_3899_c_macro_; 
// 			$volatile readBlockCount := (( $slice readNewBlockCount 7 0 )  && readnewBlockCountTemp) $buffering 1
_sdhc_daemon_assign_stmt_3905_c_macro_; 
// 			$volatile next_E := (E - 1 ) $buffering 1
_sdhc_daemon_assign_stmt_3910_c_macro_; 
// if statement :  file .Aa/sdhc.linked.aa, line 0
__declare_static_bit_vector(konst_3913,8);\
bit_vector_clear(&konst_3913);\
__declare_static_bit_vector(NEQ_u8_u1_3914,1);\
bit_vector_clear(&konst_3913);\
bit_vector_not_equal(0, &(E), &(konst_3913), &NEQ_u8_u1_3914);\
if (has_undefined_bit(&NEQ_u8_u1_3914)) {fprintf(stderr, "Error: variable NEQ_u8_u1_3914 has undefined value (%s) at test point.\n", to_string(&NEQ_u8_u1_3914));assert(0);} \

if (bit_vector_to_uint64(0, &NEQ_u8_u1_3914)) { 
/* 			$place[loopBlock2]
*/  goto loopBlock2_3433;
} 
else {
 ;
}
// 			readBlockCountTrue := (readBlockCount == 1 ) $buffering 1// bits of buffering = 1. 
_sdhc_daemon_assign_stmt_3921_c_macro_; 
// 			readLastBlock := (readBlockCountEnable & readBlockCountTrue) $buffering 1// bits of buffering = 1. 
_sdhc_daemon_assign_stmt_3926_c_macro_; 
// if statement :  file .Aa/sdhc.linked.aa, line 0
__declare_static_bit_vector(konst_3929,16);\
bit_vector_clear(&konst_3929);\
__declare_static_bit_vector(NEQ_u16_u1_3930,1);\
bit_vector_clear(&konst_3929);\
bit_vector_not_equal(0, &(readBlockCount), &(konst_3929), &NEQ_u16_u1_3930);\
if (has_undefined_bit(&NEQ_u16_u1_3930)) {fprintf(stderr, "Error: variable NEQ_u16_u1_3930 has undefined value (%s) at test point.\n", to_string(&NEQ_u16_u1_3930));assert(0);} \

if (bit_vector_to_uint64(0, &NEQ_u16_u1_3930)) { 
// 			newReadBlockCount := (readBlockCount - 1 ) $buffering 1// bits of buffering = 16. 
_sdhc_daemon_assign_stmt_3935_c_macro_; 
// 			$call dataRx (readLastBlock ) (dataErrorInterruptStatusVar ) 
_sdhc_daemon_call_stmt_3938_c_macro_; 
// 			dataRxEnrty1 := ZERO_1 $buffering 1// bits of buffering = 1. 
_sdhc_daemon_assign_stmt_3941_c_macro_; 
// 			dataRxEnrty2 := ONE_1 $buffering 1// bits of buffering = 1. 
_sdhc_daemon_assign_stmt_3944_c_macro_; 
// 			$call writeSDHCRegisters (7  ( $slice newReadBlockCount 15 8 )  ) () 
_sdhc_daemon_call_stmt_3948_c_macro_; 
// 			$call writeSDHCRegisters (6  ( $slice newReadBlockCount 7 0 )  ) () 
_sdhc_daemon_call_stmt_3952_c_macro_; 
// 			readDataTransferComplete := ( $mux readLastBlock ($bitcast ($uint<8>) 2  )  ZERO_8 )  $buffering 1// bits of buffering = 8. 
_sdhc_daemon_assign_stmt_3959_c_macro_; 
// 			normalInterruptFlag1 := (normalInterruptFlag1 | _h02 ) $buffering 1// bits of buffering = 8. 
_sdhc_daemon_assign_stmt_3964_c_macro_; 
// 			errorInterruptFlag1 := (errorInterruptFlag1 | _h60 ) $buffering 1// bits of buffering = 8. 
_sdhc_daemon_assign_stmt_3969_c_macro_; 
} 
else {
 ;
}
} 
else {
 ;
}
} 
else {
 ;
}
} 
else {
 ;
}
// 			$call readSDHCRegisters ((address + 0 ) ) (readTemp3 ) 
_sdhc_daemon_call_stmt_3978_c_macro_; 
// 			$call readSDHCRegisters ((address + 1 ) ) (readTemp2 ) 
_sdhc_daemon_call_stmt_3983_c_macro_; 
// 			$call readSDHCRegisters ((address + 2 ) ) (readTemp1 ) 
_sdhc_daemon_call_stmt_3988_c_macro_; 
// 			$call readSDHCRegisters ((address + 3 ) ) (readTemp0 ) 
_sdhc_daemon_call_stmt_3993_c_macro_; 
// 			readdata3 := ( $mux b3 readTemp3  ZERO_8 )  $buffering 1// bits of buffering = 8. 
_sdhc_daemon_assign_stmt_3999_c_macro_; 
// 			readdata2 := ( $mux b2 readTemp2  ZERO_8 )  $buffering 1// bits of buffering = 8. 
_sdhc_daemon_assign_stmt_4005_c_macro_; 
// 			readdata1 := ( $mux b1 readTemp1  ZERO_8 )  $buffering 1// bits of buffering = 8. 
_sdhc_daemon_assign_stmt_4011_c_macro_; 
// 			readdata0 := ( $mux b0 readTemp0  ZERO_8 )  $buffering 1// bits of buffering = 8. 
_sdhc_daemon_assign_stmt_4017_c_macro_; 
// 			sdhc_to_peripheral_bridge_response := ((readdata3 && readdata2) && (readdata1 && readdata0)) $buffering 1// bits of buffering = 32. 
_sdhc_daemon_assign_stmt_4026_c_macro_; 
}
// 		dataErrorInterruptStatus := ((( $mux dataRxEnrty1 dataErrorInterruptStatusVar1  _b0  )  | ( $mux dataRxEnrty2 dataErrorInterruptStatusVar  _b0  ) ) | ( $mux (( ~ dataRxEnrty1 ) & ( ~ dataRxEnrty2 )) ZERO_8  _b0  ) ) $buffering 1// bits of buffering = 8. 
_sdhc_daemon_assign_stmt_4047_c_macro_; 
// 		sdhcRegisters[50 ] := (((sdhcRegisters[50 ] | (dataErrorInterruptStatus | errorInterruptStatusVar1)) & errorInterruptFlag1) & sdhcRegisters[54 ]) $buffering 1// bits of buffering = 8. 
_sdhc_daemon_assign_stmt_4061_c_macro_; 
// merge  file .Aa/sdhc.linked.aa, line 1371
_sdhc_daemon_merge_stmt_4062_c_preamble_macro_; 
// 			$phi S := 			  ONE_8 $on   $entry 			  next_S $on   loopError 
 // type of target is $uint<8>
_sdhc_daemon_phi_stmt_4063_c_macro_; 
// 			$phi readErrorInterruptReg := 			  ($bitcast ($uint<16>) 0  ) $on   $entry 			  errorInterruptReg $on   loopError 
 // type of target is $uint<16>
_sdhc_daemon_phi_stmt_4067_c_macro_; 
// 			$phi readErrorInterruptEnableReg := 			  ($bitcast ($uint<16>) 0  ) $on   $entry 			  errorInterruptEnableReg $on   loopError 
 // type of target is $uint<16>
_sdhc_daemon_phi_stmt_4072_c_macro_; 
// 			$phi readErrorInterruptSignalEnableReg := 			  ($bitcast ($uint<16>) 0  ) $on   $entry 			  errorInterruptSignalEnableReg $on   loopError 
 // type of target is $uint<16>
_sdhc_daemon_phi_stmt_4077_c_macro_; 
// 			$phi readNormalInterruptEnableReg := 			  ($bitcast ($uint<16>) 0  ) $on   $entry 			  normalInterruptEnableReg $on   loopError 
 // type of target is $uint<16>
_sdhc_daemon_phi_stmt_4082_c_macro_; 
_sdhc_daemon_merge_stmt_4062_c_postamble_macro_; 
// 		$call readSDHCRegisters ((50  + S) ) (errorInterruptRegTemp ) 
_sdhc_daemon_call_stmt_4092_c_macro_; 
// 		$volatile errorInterruptReg := (( $slice readErrorInterruptReg 7 0 )  && errorInterruptRegTemp) $buffering 1
_sdhc_daemon_assign_stmt_4098_c_macro_; 
// 		$call readSDHCRegisters ((54  + S) ) (errorInterruptEnableRegTemp ) 
_sdhc_daemon_call_stmt_4103_c_macro_; 
// 		$volatile errorInterruptEnableReg := (( $slice readErrorInterruptEnableReg 7 0 )  && errorInterruptEnableRegTemp) $buffering 1
_sdhc_daemon_assign_stmt_4109_c_macro_; 
// 		$call readSDHCRegisters ((58  + S) ) (errorInterruptSignalEnableRegTemp ) 
_sdhc_daemon_call_stmt_4114_c_macro_; 
// 		$volatile errorInterruptSignalEnableReg := (( $slice readErrorInterruptSignalEnableReg 7 0 )  && errorInterruptSignalEnableRegTemp) $buffering 1
_sdhc_daemon_assign_stmt_4120_c_macro_; 
// 		$call readSDHCRegisters ((52  + S) ) (normalInterruptEnableRegTemp ) 
_sdhc_daemon_call_stmt_4125_c_macro_; 
// 		$volatile normalInterruptEnableReg := (( $slice readNormalInterruptEnableReg 7 0 )  && normalInterruptEnableRegTemp) $buffering 1
_sdhc_daemon_assign_stmt_4131_c_macro_; 
// 		$call readSDHCRegisters ((44  + S) ) (clockControlRegTemp ) 
_sdhc_daemon_call_stmt_4136_c_macro_; 
// 		$volatile next_S := (S - 1 ) $buffering 1
_sdhc_daemon_assign_stmt_4141_c_macro_; 
// if statement :  file .Aa/sdhc.linked.aa, line 0
__declare_static_bit_vector(konst_4144,8);\
bit_vector_clear(&konst_4144);\
__declare_static_bit_vector(NEQ_u8_u1_4145,1);\
bit_vector_clear(&konst_4144);\
bit_vector_not_equal(0, &(S), &(konst_4144), &NEQ_u8_u1_4145);\
if (has_undefined_bit(&NEQ_u8_u1_4145)) {fprintf(stderr, "Error: variable NEQ_u8_u1_4145 has undefined value (%s) at test point.\n", to_string(&NEQ_u8_u1_4145));assert(0);} \

if (bit_vector_to_uint64(0, &NEQ_u8_u1_4145)) { 
/* 			$place[loopError]
*/  goto loopError_3433;
} 
else {
 ;
}
// 		$volatile errorInterruptRegVal0 := ( $slice errorInterruptReg 7 0 )  $buffering 1
_sdhc_daemon_assign_stmt_4151_c_macro_; 
// 		$volatile errorInterruptRegVal1 := ( $slice errorInterruptReg 15 8 )  $buffering 1
_sdhc_daemon_assign_stmt_4155_c_macro_; 
// 		$volatile errorInterruptEnableVal0 := ( $slice errorInterruptEnableReg 7 0 )  $buffering 1
_sdhc_daemon_assign_stmt_4159_c_macro_; 
// 		$volatile errorInterruptEnableVal1 := ( $slice errorInterruptEnableReg 15 8 )  $buffering 1
_sdhc_daemon_assign_stmt_4163_c_macro_; 
// 		$volatile errorInterruptSignalEnableVal0 := ( $slice errorInterruptSignalEnableReg 7 0 )  $buffering 1
_sdhc_daemon_assign_stmt_4167_c_macro_; 
// 		$volatile errorInterruptSignalEnableVal1 := ( $slice errorInterruptSignalEnableReg 15 8 )  $buffering 1
_sdhc_daemon_assign_stmt_4171_c_macro_; 
// 		$volatile normalInterruptEnableVal0 := ( $slice normalInterruptEnableReg 7 0 )  $buffering 1
_sdhc_daemon_assign_stmt_4175_c_macro_; 
// 		$volatile normalInterruptEnableVal1 := ( $slice normalInterruptEnableReg 15 8 )  $buffering 1
_sdhc_daemon_assign_stmt_4179_c_macro_; 
// 		tempErrorReg0 := (((errorInterruptRegVal0 | (dataErrorInterruptStatus | errorInterruptStatusVar1)) & errorInterruptFlag1) & errorInterruptEnableVal0) $buffering 1// bits of buffering = 8. 
_sdhc_daemon_assign_stmt_4190_c_macro_; 
// 		tempErrorReg1 := (((errorInterruptRegVal1 | errorInterruptStatusVar2) & errorInterruptFlag2) & errorInterruptEnableVal1) $buffering 1// bits of buffering = 8. 
_sdhc_daemon_assign_stmt_4199_c_macro_; 
// 		$call writeSDHCRegisters (51  tempErrorReg1 ) () 
_sdhc_daemon_call_stmt_4202_c_macro_; 
// 		errorInterruptBit := (((  $bitreduce |  tempErrorReg0 ) | (  $bitreduce |  tempErrorReg1 )) && ($bitcast ($uint<7>) 0  )) $buffering 1// bits of buffering = 8. 
_sdhc_daemon_assign_stmt_4212_c_macro_; 
// 		$volatile checkInterruptEnable := ((  $bitreduce |  normalInterruptEnableVal0 ) | (  $bitreduce |  normalInterruptEnableVal1 )) $buffering 1
_sdhc_daemon_assign_stmt_4219_c_macro_; 
// if statement :  file .Aa/sdhc.linked.aa, line 1409
__declare_static_bit_vector(konst_4222,1);\
bit_vector_clear(&konst_4222);\
konst_4222.val.byte_array[0] = 1;\
__declare_static_bit_vector(EQ_u1_u1_4223,1);\
bit_vector_clear(&konst_4222);\
konst_4222.val.byte_array[0] = 1;\
bit_vector_equal(0, &(checkInterruptEnable), &(konst_4222), &(EQ_u1_u1_4223));\
if (has_undefined_bit(&EQ_u1_u1_4223)) {fprintf(stderr, "Error: variable EQ_u1_u1_4223 has undefined value (%s) at test point.\n", to_string(&EQ_u1_u1_4223));assert(0);} \

if (bit_vector_to_uint64(0, &EQ_u1_u1_4223)) { 
// 			interrupt := (((((readDataTransferComplete | dataTransferComplete) | transferComplete) | ((bufferReadReady | bufferWriteReady) | normalInterruptStatusVar1)) & normalInterruptEnableVal0) & normalInterruptFlag1) $buffering 1// bits of buffering = 8. 
_sdhc_daemon_assign_stmt_4240_c_macro_; 
// 			$call writeSDHCRegisters (48  interrupt ) () 
_sdhc_daemon_call_stmt_4243_c_macro_; 
// 			$call writeSDHCRegisters (49  errorInterruptBit ) () 
_sdhc_daemon_call_stmt_4246_c_macro_; 
// 			$call readSDHCRegisters (56  ) (tempNormalSignal ) 
_sdhc_daemon_call_stmt_4249_c_macro_; 
// 			interruptLine := (tempNormalSignal & interrupt) $buffering 1// bits of buffering = 8. 
_sdhc_daemon_assign_stmt_4254_c_macro_; 
// 			errorInterruptLine := ((tempErrorReg0 & errorInterruptSignalEnableVal0) | (tempErrorReg1 & errorInterruptSignalEnableVal1)) $buffering 1// bits of buffering = 8. 
_sdhc_daemon_assign_stmt_4263_c_macro_; 
// 			SDHC_to_IRC_INT := ((  $bitreduce |  interruptLine ) | (  $bitreduce |  errorInterruptLine )) $buffering 1// bits of buffering = 1. 
_sdhc_daemon_assign_stmt_4270_c_macro_; 
} 
else {
// 			$call writeSDHCRegisters (48  ZERO_8 ) () 
_sdhc_daemon_call_stmt_4274_c_macro_; 
// 			SDHC_to_IRC_INT := ZERO_1 $buffering 1// bits of buffering = 1. 
_sdhc_daemon_assign_stmt_4277_c_macro_; 
}
// $report (int check 		 dataErrorInterruptStatus dataErrorInterruptStatus 		 errorInterruptStatusVar1 errorInterruptStatusVar1 		 errorInterruptFlag1 errorInterruptFlag1 )
_sdhc_daemon_stmt_4282_c_macro_; 
/* 		$place[loopback]
*/  goto loopback_3433;
_sdhc_daemon_branch_block_stmt_3433_c_export_apply_macro_;
}
_sdhc_daemon_inner_outarg_prep_macro__; 
MUTEX_UNLOCK(_sdhc_daemon_series_block_stmt_3389_c_mutex_);
}
void sdhc_daemon()
{
_sdhc_daemon_outer_arg_decl_macro__;
_sdhc_daemon_();
_sdhc_daemon_outer_op_xfer_macro__;
}


void _sdhc_register_write_(bit_vector* __paddress, bit_vector* __pdata)
{
MUTEX_DECL(_sdhc_register_write_series_block_stmt_3191_c_mutex_);
MUTEX_LOCK(_sdhc_register_write_series_block_stmt_3191_c_mutex_);
_sdhc_register_write_inner_inarg_prep_macro__; 
_sdhc_register_write_branch_block_stmt_3194_c_export_decl_macro_; 
{
// switch statement :  file .Aa/sdhc.linked.aa, line 1094
if (has_undefined_bit(&address)) {fprintf(stderr, "Error: variable address has undefined value (%s) at test point.\n", to_string(&address));assert(0);} \

__declare_static_bit_vector(konst_3197,8);\
bit_vector_clear(&konst_3197);\
konst_3197.val.byte_array[0] = 5;\
bit_vector_clear(&konst_3197);\
konst_3197.val.byte_array[0] = 5;\
__declare_static_bit_vector(konst_3204,8);\
bit_vector_clear(&konst_3204);\
konst_3204.val.byte_array[0] = 12;\
bit_vector_clear(&konst_3204);\
konst_3204.val.byte_array[0] = 12;\
__declare_static_bit_vector(konst_3211,8);\
bit_vector_clear(&konst_3211);\
konst_3211.val.byte_array[0] = 13;\
bit_vector_clear(&konst_3211);\
konst_3211.val.byte_array[0] = 13;\
__declare_static_bit_vector(konst_3216,8);\
bit_vector_clear(&konst_3216);\
konst_3216.val.byte_array[0] = 14;\
bit_vector_clear(&konst_3216);\
konst_3216.val.byte_array[0] = 14;\
__declare_static_bit_vector(konst_3223,8);\
bit_vector_clear(&konst_3223);\
konst_3223.val.byte_array[0] = 15;\
bit_vector_clear(&konst_3223);\
konst_3223.val.byte_array[0] = 15;\
__declare_static_bit_vector(konst_3230,8);\
bit_vector_clear(&konst_3230);\
konst_3230.val.byte_array[0] = 16;\
bit_vector_clear(&konst_3230);\
konst_3230.val.byte_array[0] = 16;\
__declare_static_bit_vector(konst_3233,8);\
bit_vector_clear(&konst_3233);\
konst_3233.val.byte_array[0] = 17;\
bit_vector_clear(&konst_3233);\
konst_3233.val.byte_array[0] = 17;\
__declare_static_bit_vector(konst_3236,8);\
bit_vector_clear(&konst_3236);\
konst_3236.val.byte_array[0] = 18;\
bit_vector_clear(&konst_3236);\
konst_3236.val.byte_array[0] = 18;\
__declare_static_bit_vector(konst_3239,8);\
bit_vector_clear(&konst_3239);\
konst_3239.val.byte_array[0] = 19;\
bit_vector_clear(&konst_3239);\
konst_3239.val.byte_array[0] = 19;\
__declare_static_bit_vector(konst_3242,8);\
bit_vector_clear(&konst_3242);\
konst_3242.val.byte_array[0] = 20;\
bit_vector_clear(&konst_3242);\
konst_3242.val.byte_array[0] = 20;\
__declare_static_bit_vector(konst_3245,8);\
bit_vector_clear(&konst_3245);\
konst_3245.val.byte_array[0] = 21;\
bit_vector_clear(&konst_3245);\
konst_3245.val.byte_array[0] = 21;\
__declare_static_bit_vector(konst_3248,8);\
bit_vector_clear(&konst_3248);\
konst_3248.val.byte_array[0] = 22;\
bit_vector_clear(&konst_3248);\
konst_3248.val.byte_array[0] = 22;\
__declare_static_bit_vector(konst_3251,8);\
bit_vector_clear(&konst_3251);\
konst_3251.val.byte_array[0] = 23;\
bit_vector_clear(&konst_3251);\
konst_3251.val.byte_array[0] = 23;\
__declare_static_bit_vector(konst_3254,8);\
bit_vector_clear(&konst_3254);\
konst_3254.val.byte_array[0] = 24;\
bit_vector_clear(&konst_3254);\
konst_3254.val.byte_array[0] = 24;\
__declare_static_bit_vector(konst_3257,8);\
bit_vector_clear(&konst_3257);\
konst_3257.val.byte_array[0] = 25;\
bit_vector_clear(&konst_3257);\
konst_3257.val.byte_array[0] = 25;\
__declare_static_bit_vector(konst_3260,8);\
bit_vector_clear(&konst_3260);\
konst_3260.val.byte_array[0] = 26;\
bit_vector_clear(&konst_3260);\
konst_3260.val.byte_array[0] = 26;\
__declare_static_bit_vector(konst_3263,8);\
bit_vector_clear(&konst_3263);\
konst_3263.val.byte_array[0] = 27;\
bit_vector_clear(&konst_3263);\
konst_3263.val.byte_array[0] = 27;\
__declare_static_bit_vector(konst_3266,8);\
bit_vector_clear(&konst_3266);\
konst_3266.val.byte_array[0] = 28;\
bit_vector_clear(&konst_3266);\
konst_3266.val.byte_array[0] = 28;\
__declare_static_bit_vector(konst_3269,8);\
bit_vector_clear(&konst_3269);\
konst_3269.val.byte_array[0] = 29;\
bit_vector_clear(&konst_3269);\
konst_3269.val.byte_array[0] = 29;\
__declare_static_bit_vector(konst_3272,8);\
bit_vector_clear(&konst_3272);\
konst_3272.val.byte_array[0] = 30;\
bit_vector_clear(&konst_3272);\
konst_3272.val.byte_array[0] = 30;\
__declare_static_bit_vector(konst_3275,8);\
bit_vector_clear(&konst_3275);\
konst_3275.val.byte_array[0] = 31;\
bit_vector_clear(&konst_3275);\
konst_3275.val.byte_array[0] = 31;\
__declare_static_bit_vector(konst_3278,8);\
bit_vector_clear(&konst_3278);\
konst_3278.val.byte_array[0] = 36;\
bit_vector_clear(&konst_3278);\
konst_3278.val.byte_array[0] = 36;\
__declare_static_bit_vector(konst_3281,8);\
bit_vector_clear(&konst_3281);\
konst_3281.val.byte_array[0] = 37;\
bit_vector_clear(&konst_3281);\
konst_3281.val.byte_array[0] = 37;\
__declare_static_bit_vector(konst_3284,8);\
bit_vector_clear(&konst_3284);\
konst_3284.val.byte_array[0] = 38;\
bit_vector_clear(&konst_3284);\
konst_3284.val.byte_array[0] = 38;\
__declare_static_bit_vector(konst_3287,8);\
bit_vector_clear(&konst_3287);\
konst_3287.val.byte_array[0] = 39;\
bit_vector_clear(&konst_3287);\
konst_3287.val.byte_array[0] = 39;\
__declare_static_bit_vector(konst_3290,8);\
bit_vector_clear(&konst_3290);\
konst_3290.val.byte_array[0] = 44;\
bit_vector_clear(&konst_3290);\
konst_3290.val.byte_array[0] = 44;\
__declare_static_bit_vector(konst_3297,8);\
bit_vector_clear(&konst_3297);\
konst_3297.val.byte_array[0] = 47;\
bit_vector_clear(&konst_3297);\
konst_3297.val.byte_array[0] = 47;\
__declare_static_bit_vector(konst_3304,8);\
bit_vector_clear(&konst_3304);\
konst_3304.val.byte_array[0] = 48;\
bit_vector_clear(&konst_3304);\
konst_3304.val.byte_array[0] = 48;\
__declare_static_bit_vector(konst_3309,8);\
bit_vector_clear(&konst_3309);\
konst_3309.val.byte_array[0] = 49;\
bit_vector_clear(&konst_3309);\
konst_3309.val.byte_array[0] = 49;\
__declare_static_bit_vector(konst_3312,8);\
bit_vector_clear(&konst_3312);\
konst_3312.val.byte_array[0] = 50;\
bit_vector_clear(&konst_3312);\
konst_3312.val.byte_array[0] = 50;\
__declare_static_bit_vector(konst_3317,8);\
bit_vector_clear(&konst_3317);\
konst_3317.val.byte_array[0] = 51;\
bit_vector_clear(&konst_3317);\
konst_3317.val.byte_array[0] = 51;\
__declare_static_bit_vector(konst_3322,8);\
bit_vector_clear(&konst_3322);\
konst_3322.val.byte_array[0] = 53;\
bit_vector_clear(&konst_3322);\
konst_3322.val.byte_array[0] = 53;\
__declare_static_bit_vector(konst_3329,8);\
bit_vector_clear(&konst_3329);\
konst_3329.val.byte_array[0] = 55;\
bit_vector_clear(&konst_3329);\
konst_3329.val.byte_array[0] = 55;\
__declare_static_bit_vector(konst_3336,8);\
bit_vector_clear(&konst_3336);\
konst_3336.val.byte_array[0] = 57;\
bit_vector_clear(&konst_3336);\
konst_3336.val.byte_array[0] = 57;\
__declare_static_bit_vector(konst_3343,8);\
bit_vector_clear(&konst_3343);\
konst_3343.val.byte_array[0] = 59;\
bit_vector_clear(&konst_3343);\
konst_3343.val.byte_array[0] = 59;\
__declare_static_bit_vector(konst_3350,8);\
bit_vector_clear(&konst_3350);\
konst_3350.val.byte_array[0] = 63;\
bit_vector_clear(&konst_3350);\
konst_3350.val.byte_array[0] = 63;\
__declare_static_bit_vector(konst_3357,8);\
bit_vector_clear(&konst_3357);\
konst_3357.val.byte_array[0] = 64;\
bit_vector_clear(&konst_3357);\
konst_3357.val.byte_array[0] = 64;\
__declare_static_bit_vector(konst_3360,8);\
bit_vector_clear(&konst_3360);\
konst_3360.val.byte_array[0] = 65;\
bit_vector_clear(&konst_3360);\
konst_3360.val.byte_array[0] = 65;\
__declare_static_bit_vector(konst_3363,8);\
bit_vector_clear(&konst_3363);\
konst_3363.val.byte_array[0] = 66;\
bit_vector_clear(&konst_3363);\
konst_3363.val.byte_array[0] = 66;\
__declare_static_bit_vector(konst_3366,8);\
bit_vector_clear(&konst_3366);\
konst_3366.val.byte_array[0] = 67;\
bit_vector_clear(&konst_3366);\
konst_3366.val.byte_array[0] = 67;\
__declare_static_bit_vector(konst_3369,8);\
bit_vector_clear(&konst_3369);\
konst_3369.val.byte_array[0] = 68;\
bit_vector_clear(&konst_3369);\
konst_3369.val.byte_array[0] = 68;\
__declare_static_bit_vector(konst_3372,8);\
bit_vector_clear(&konst_3372);\
konst_3372.val.byte_array[0] = 69;\
bit_vector_clear(&konst_3372);\
konst_3372.val.byte_array[0] = 69;\
__declare_static_bit_vector(konst_3375,8);\
bit_vector_clear(&konst_3375);\
konst_3375.val.byte_array[0] = 70;\
bit_vector_clear(&konst_3375);\
konst_3375.val.byte_array[0] = 70;\
__declare_static_bit_vector(konst_3378,8);\
bit_vector_clear(&konst_3378);\
konst_3378.val.byte_array[0] = 71;\
bit_vector_clear(&konst_3378);\
konst_3378.val.byte_array[0] = 71;\
switch (bit_vector_to_uint64(0, &address)) { 
 case 5 : {
// 			$call writeSDHCRegisters (address (data & _h7f ) ) () 
_sdhc_register_write_call_stmt_3202_c_macro_; 
break;}
 case 12 : {
// 			$call writeSDHCRegisters (address (data & _h3f ) ) () 
_sdhc_register_write_call_stmt_3209_c_macro_; 
break;}
 case 13 : {
// 			$call writeSDHCRegisters (address ZERO_8 ) () 
_sdhc_register_write_call_stmt_3214_c_macro_; 
break;}
 case 14 : {
// 			$call writeSDHCRegisters (address (data & _hfb ) ) () 
_sdhc_register_write_call_stmt_3221_c_macro_; 
break;}
 case 15 : {
// 			$call writeSDHCRegisters (address (data & _h3f ) ) () 
_sdhc_register_write_call_stmt_3228_c_macro_; 
break;}
 case 16 : {
/* null */ ;
break;}
 case 17 : {
/* null */ ;
break;}
 case 18 : {
/* null */ ;
break;}
 case 19 : {
/* null */ ;
break;}
 case 20 : {
/* null */ ;
break;}
 case 21 : {
/* null */ ;
break;}
 case 22 : {
/* null */ ;
break;}
 case 23 : {
/* null */ ;
break;}
 case 24 : {
/* null */ ;
break;}
 case 25 : {
/* null */ ;
break;}
 case 26 : {
/* null */ ;
break;}
 case 27 : {
/* null */ ;
break;}
 case 28 : {
/* null */ ;
break;}
 case 29 : {
/* null */ ;
break;}
 case 30 : {
/* null */ ;
break;}
 case 31 : {
/* null */ ;
break;}
 case 36 : {
/* null */ ;
break;}
 case 37 : {
/* null */ ;
break;}
 case 38 : {
/* null */ ;
break;}
 case 39 : {
/* null */ ;
break;}
 case 44 : {
// 			$call writeSDHCRegisters (address (data & _h05 ) ) () 
_sdhc_register_write_call_stmt_3295_c_macro_; 
break;}
 case 47 : {
// 			$call writeSDHCRegisters (address (data & _h7 ) ) () 
_sdhc_register_write_call_stmt_3302_c_macro_; 
break;}
 case 48 : {
// 			$call RW1C (data address ) () 
_sdhc_register_write_call_stmt_3307_c_macro_; 
break;}
 case 49 : {
/* null */ ;
break;}
 case 50 : {
// 			$call RW1C (data address ) () 
_sdhc_register_write_call_stmt_3315_c_macro_; 
break;}
 case 51 : {
// 			$call RW1C (data address ) () 
_sdhc_register_write_call_stmt_3320_c_macro_; 
break;}
 case 53 : {
// 			$call writeSDHCRegisters (address (data & _h1f ) ) () 
_sdhc_register_write_call_stmt_3327_c_macro_; 
break;}
 case 55 : {
// 			$call writeSDHCRegisters (address (data & _hf7 ) ) () 
_sdhc_register_write_call_stmt_3334_c_macro_; 
break;}
 case 57 : {
// 			$call writeSDHCRegisters (address (data & _h1f ) ) () 
_sdhc_register_write_call_stmt_3341_c_macro_; 
break;}
 case 59 : {
// 			$call writeSDHCRegisters (address (data & _hf7 ) ) () 
_sdhc_register_write_call_stmt_3348_c_macro_; 
break;}
 case 63 : {
// 			$call writeSDHCRegisters (address (data & _hC0 ) ) () 
_sdhc_register_write_call_stmt_3355_c_macro_; 
break;}
 case 64 : {
/* null */ ;
break;}
 case 65 : {
/* null */ ;
break;}
 case 66 : {
/* null */ ;
break;}
 case 67 : {
/* null */ ;
break;}
 case 68 : {
/* null */ ;
break;}
 case 69 : {
/* null */ ;
break;}
 case 70 : {
/* null */ ;
break;}
 case 71 : {
// 			$call writeSDHCRegisters (address ZERO_8 ) () 
_sdhc_register_write_call_stmt_3381_c_macro_; 
break;}
 default : {
// 			$call writeSDHCRegisters (address data ) () 
_sdhc_register_write_call_stmt_3385_c_macro_; 
break;}
}
_sdhc_register_write_branch_block_stmt_3194_c_export_apply_macro_;
}
_sdhc_register_write_inner_outarg_prep_macro__; 
MUTEX_UNLOCK(_sdhc_register_write_series_block_stmt_3191_c_mutex_);
}
void sdhc_register_write(uint8_t address , uint8_t data )
{
_sdhc_register_write_outer_arg_decl_macro__;
_sdhc_register_write_( &__address,  &__data);
_sdhc_register_write_outer_op_xfer_macro__;
}


void _sendDAT0_(bit_vector* __pdat0, bit_vector* __pnextCRC16_DAT0)
{
MUTEX_DECL(_sendDAT0_series_block_stmt_2183_c_mutex_);
MUTEX_LOCK(_sendDAT0_series_block_stmt_2183_c_mutex_);
_sendDAT0_inner_inarg_prep_macro__; 
_sendDAT0_branch_block_stmt_2186_c_export_decl_macro_; 
{
// 		newDat0 := ((ZERO_1 && dat0) && (nextCRC16_DAT0 && ONE_1)) $buffering 1// bits of buffering = 1042. 
_sendDAT0_assign_stmt_2195_c_macro_; 
{
// do-while:   file .Aa/sdhc.linked.aa, line 752
__declare_static_bit_vector(konst_2225,11);\
bit_vector_clear(&konst_2225);\
konst_2225.val.byte_array[0] = 18;\
konst_2225.val.byte_array[1] = 4;\
__declare_static_bit_vector(ULT_u11_u1_2226,1);\
uint8_t do_while_entry_flag;
do_while_entry_flag = 1;
uint8_t do_while_loopback_flag;
do_while_loopback_flag = 0;
while(1) {
// merge  file .Aa/sdhc.linked.aa, line 754
_sendDAT0_merge_stmt_2197_c_preamble_macro_; 
// 			$phi k_0 := 			  next_k_0 $on   $loopback 			  ($bitcast ($uint<11>) 0  ) $on   $entry 
 // type of target is $uint<11>
_sendDAT0_phi_stmt_2198_c_macro_; 
// 			$phi dat0bit4_0 := 			  nextbit4_0 $on   $loopback 			  newDat0 $on   $entry 
 // type of target is $uint<1042>
_sendDAT0_phi_stmt_2203_c_macro_; 
_sendDAT0_merge_stmt_2197_c_postamble_macro_; 
// 			DAT0Tx := (dat0bit4_0 [] 1041 ) $buffering 1// bits of buffering = 1. 
_sendDAT0_assign_stmt_2212_c_macro_; 
// 			$volatile nextbit4_0 := (dat0bit4_0 << 1 ) $buffering 1
_sendDAT0_assign_stmt_2217_c_macro_; 
// 			$volatile next_k_0 := (k_0 + 1 ) $buffering 1
_sendDAT0_assign_stmt_2222_c_macro_; 
do_while_entry_flag = 0;
do_while_loopback_flag = 1;
bit_vector_clear(&konst_2225);\
konst_2225.val.byte_array[0] = 18;\
konst_2225.val.byte_array[1] = 4;\
bit_vector_less(0, &(next_k_0), &(konst_2225), &(ULT_u11_u1_2226));\
if (has_undefined_bit(&ULT_u11_u1_2226)) {fprintf(stderr, "Error: variable ULT_u11_u1_2226 has undefined value (%s) at test point.\n", to_string(&ULT_u11_u1_2226));assert(0);} \

if (!bit_vector_to_uint64(0, &ULT_u11_u1_2226)) break;
} 
}
_sendDAT0_branch_block_stmt_2186_c_export_apply_macro_;
}
_sendDAT0_inner_outarg_prep_macro__; 
MUTEX_UNLOCK(_sendDAT0_series_block_stmt_2183_c_mutex_);
}
void _sendDAT1_(bit_vector* __pdat1, bit_vector* __pnextCRC16_DAT1)
{
MUTEX_DECL(_sendDAT1_series_block_stmt_2229_c_mutex_);
MUTEX_LOCK(_sendDAT1_series_block_stmt_2229_c_mutex_);
_sendDAT1_inner_inarg_prep_macro__; 
_sendDAT1_branch_block_stmt_2232_c_export_decl_macro_; 
{
// 		newDat1 := ((ZERO_1 && dat1) && (nextCRC16_DAT1 && ONE_1)) $buffering 1// bits of buffering = 1042. 
_sendDAT1_assign_stmt_2241_c_macro_; 
{
// do-while:   file .Aa/sdhc.linked.aa, line 774
__declare_static_bit_vector(konst_2271,11);\
bit_vector_clear(&konst_2271);\
konst_2271.val.byte_array[0] = 18;\
konst_2271.val.byte_array[1] = 4;\
__declare_static_bit_vector(ULT_u11_u1_2272,1);\
uint8_t do_while_entry_flag;
do_while_entry_flag = 1;
uint8_t do_while_loopback_flag;
do_while_loopback_flag = 0;
while(1) {
// merge  file .Aa/sdhc.linked.aa, line 776
_sendDAT1_merge_stmt_2243_c_preamble_macro_; 
// 			$phi k_1 := 			  next_k_1 $on   $loopback 			  ($bitcast ($uint<11>) 0  ) $on   $entry 
 // type of target is $uint<11>
_sendDAT1_phi_stmt_2244_c_macro_; 
// 			$phi dat0bit4_1 := 			  nextbit4_1 $on   $loopback 			  newDat1 $on   $entry 
 // type of target is $uint<1042>
_sendDAT1_phi_stmt_2249_c_macro_; 
_sendDAT1_merge_stmt_2243_c_postamble_macro_; 
// 			DAT1Tx := (dat0bit4_1 [] 1041 ) $buffering 1// bits of buffering = 1. 
_sendDAT1_assign_stmt_2258_c_macro_; 
// 			$volatile nextbit4_1 := (dat0bit4_1 << 1 ) $buffering 1
_sendDAT1_assign_stmt_2263_c_macro_; 
// 			$volatile next_k_1 := (k_1 + 1 ) $buffering 1
_sendDAT1_assign_stmt_2268_c_macro_; 
do_while_entry_flag = 0;
do_while_loopback_flag = 1;
bit_vector_clear(&konst_2271);\
konst_2271.val.byte_array[0] = 18;\
konst_2271.val.byte_array[1] = 4;\
bit_vector_less(0, &(next_k_1), &(konst_2271), &(ULT_u11_u1_2272));\
if (has_undefined_bit(&ULT_u11_u1_2272)) {fprintf(stderr, "Error: variable ULT_u11_u1_2272 has undefined value (%s) at test point.\n", to_string(&ULT_u11_u1_2272));assert(0);} \

if (!bit_vector_to_uint64(0, &ULT_u11_u1_2272)) break;
} 
}
_sendDAT1_branch_block_stmt_2232_c_export_apply_macro_;
}
_sendDAT1_inner_outarg_prep_macro__; 
MUTEX_UNLOCK(_sendDAT1_series_block_stmt_2229_c_mutex_);
}
void _sendDAT2_(bit_vector* __pdat2, bit_vector* __pnextCRC16_DAT2)
{
MUTEX_DECL(_sendDAT2_series_block_stmt_2275_c_mutex_);
MUTEX_LOCK(_sendDAT2_series_block_stmt_2275_c_mutex_);
_sendDAT2_inner_inarg_prep_macro__; 
_sendDAT2_branch_block_stmt_2278_c_export_decl_macro_; 
{
// 		newDat2 := ((ZERO_1 && dat2) && (nextCRC16_DAT2 && ONE_1)) $buffering 1// bits of buffering = 1042. 
_sendDAT2_assign_stmt_2287_c_macro_; 
{
// do-while:   file .Aa/sdhc.linked.aa, line 796
__declare_static_bit_vector(konst_2317,11);\
bit_vector_clear(&konst_2317);\
konst_2317.val.byte_array[0] = 18;\
konst_2317.val.byte_array[1] = 4;\
__declare_static_bit_vector(ULT_u11_u1_2318,1);\
uint8_t do_while_entry_flag;
do_while_entry_flag = 1;
uint8_t do_while_loopback_flag;
do_while_loopback_flag = 0;
while(1) {
// merge  file .Aa/sdhc.linked.aa, line 798
_sendDAT2_merge_stmt_2289_c_preamble_macro_; 
// 			$phi k_2 := 			  ($bitcast ($uint<11>) 0  ) $on   $entry 			  next_k_2 $on   $loopback 
 // type of target is $uint<11>
_sendDAT2_phi_stmt_2290_c_macro_; 
// 			$phi dat0bit4_2 := 			  nextbit4_2 $on   $loopback 			  newDat2 $on   $entry 
 // type of target is $uint<1042>
_sendDAT2_phi_stmt_2295_c_macro_; 
_sendDAT2_merge_stmt_2289_c_postamble_macro_; 
// 			DAT2Tx := (dat0bit4_2 [] 1041 ) $buffering 1// bits of buffering = 1. 
_sendDAT2_assign_stmt_2304_c_macro_; 
// 			$volatile nextbit4_2 := (dat0bit4_2 << 1 ) $buffering 1
_sendDAT2_assign_stmt_2309_c_macro_; 
// 			$volatile next_k_2 := (k_2 + 1 ) $buffering 1
_sendDAT2_assign_stmt_2314_c_macro_; 
do_while_entry_flag = 0;
do_while_loopback_flag = 1;
bit_vector_clear(&konst_2317);\
konst_2317.val.byte_array[0] = 18;\
konst_2317.val.byte_array[1] = 4;\
bit_vector_less(0, &(next_k_2), &(konst_2317), &(ULT_u11_u1_2318));\
if (has_undefined_bit(&ULT_u11_u1_2318)) {fprintf(stderr, "Error: variable ULT_u11_u1_2318 has undefined value (%s) at test point.\n", to_string(&ULT_u11_u1_2318));assert(0);} \

if (!bit_vector_to_uint64(0, &ULT_u11_u1_2318)) break;
} 
}
_sendDAT2_branch_block_stmt_2278_c_export_apply_macro_;
}
_sendDAT2_inner_outarg_prep_macro__; 
MUTEX_UNLOCK(_sendDAT2_series_block_stmt_2275_c_mutex_);
}
void _sendDAT3_(bit_vector* __pdat3, bit_vector* __pnextCRC16_DAT3)
{
MUTEX_DECL(_sendDAT3_series_block_stmt_2321_c_mutex_);
MUTEX_LOCK(_sendDAT3_series_block_stmt_2321_c_mutex_);
_sendDAT3_inner_inarg_prep_macro__; 
_sendDAT3_branch_block_stmt_2324_c_export_decl_macro_; 
{
// 		newDat3 := ((ZERO_1 && dat3) && (nextCRC16_DAT3 && ONE_1)) $buffering 1// bits of buffering = 1042. 
_sendDAT3_assign_stmt_2333_c_macro_; 
{
// do-while:   file .Aa/sdhc.linked.aa, line 818
__declare_static_bit_vector(konst_2363,11);\
bit_vector_clear(&konst_2363);\
konst_2363.val.byte_array[0] = 18;\
konst_2363.val.byte_array[1] = 4;\
__declare_static_bit_vector(ULT_u11_u1_2364,1);\
uint8_t do_while_entry_flag;
do_while_entry_flag = 1;
uint8_t do_while_loopback_flag;
do_while_loopback_flag = 0;
while(1) {
// merge  file .Aa/sdhc.linked.aa, line 820
_sendDAT3_merge_stmt_2335_c_preamble_macro_; 
// 			$phi k_3 := 			  next_k_3 $on   $loopback 			  ($bitcast ($uint<11>) 0  ) $on   $entry 
 // type of target is $uint<11>
_sendDAT3_phi_stmt_2336_c_macro_; 
// 			$phi dat0bit4_3 := 			  nextbit4_3 $on   $loopback 			  newDat3 $on   $entry 
 // type of target is $uint<1042>
_sendDAT3_phi_stmt_2341_c_macro_; 
_sendDAT3_merge_stmt_2335_c_postamble_macro_; 
// 			DAT3Tx := (dat0bit4_3 [] 1041 ) $buffering 1// bits of buffering = 1. 
_sendDAT3_assign_stmt_2350_c_macro_; 
// 			$volatile nextbit4_3 := (dat0bit4_3 << 1 ) $buffering 1
_sendDAT3_assign_stmt_2355_c_macro_; 
// 			$volatile next_k_3 := (k_3 + 1 ) $buffering 1
_sendDAT3_assign_stmt_2360_c_macro_; 
do_while_entry_flag = 0;
do_while_loopback_flag = 1;
bit_vector_clear(&konst_2363);\
konst_2363.val.byte_array[0] = 18;\
konst_2363.val.byte_array[1] = 4;\
bit_vector_less(0, &(next_k_3), &(konst_2363), &(ULT_u11_u1_2364));\
if (has_undefined_bit(&ULT_u11_u1_2364)) {fprintf(stderr, "Error: variable ULT_u11_u1_2364 has undefined value (%s) at test point.\n", to_string(&ULT_u11_u1_2364));assert(0);} \

if (!bit_vector_to_uint64(0, &ULT_u11_u1_2364)) break;
} 
}
_sendDAT3_branch_block_stmt_2324_c_export_apply_macro_;
}
_sendDAT3_inner_outarg_prep_macro__; 
MUTEX_UNLOCK(_sendDAT3_series_block_stmt_2321_c_mutex_);
}
void _writeSDHCRegisters_(bit_vector* __paddress, bit_vector* __pdata)
{
MUTEX_DECL(_writeSDHCRegisters_series_block_stmt_80_c_mutex_);
MUTEX_LOCK(_writeSDHCRegisters_series_block_stmt_80_c_mutex_);
_writeSDHCRegisters_inner_inarg_prep_macro__; 
// 	sdhcRegisters[address] := data $buffering 1// bits of buffering = 8. 
_writeSDHCRegisters_assign_stmt_86_c_macro_; 
_writeSDHCRegisters_inner_outarg_prep_macro__; 
MUTEX_UNLOCK(_writeSDHCRegisters_series_block_stmt_80_c_mutex_);
}
void writeSDHCRegisters(uint8_t address , uint8_t data )
{
_writeSDHCRegisters_outer_arg_decl_macro__;
_writeSDHCRegisters_( &__address,  &__data);
_writeSDHCRegisters_outer_op_xfer_macro__;
}


DEFINE_THREAD(sdhc_daemon);
PTHREAD_DECL(sdhc_daemon);
void start_daemons(FILE* fp, int trace_on) {
__report_log_file__ = fp;
__trace_on__ = trace_on;
__init_aa_globals__(); 
PTHREAD_CREATE(sdhc_daemon);
}
void stop_daemons() {
PTHREAD_CANCEL(sdhc_daemon);
}
