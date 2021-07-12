#include <stdlib.h>
#include <unistd.h>
#include <assert.h>
#include <stdio.h>
#include <BitVectors.h>
#include <pipeHandler.h>
// object initialization 

#define _RW1C_inner_inarg_prep_macro__ __declare_static_bit_vector(data,8);\
bit_vector_cast_to_bit_vector(0, &(data), &((*__pdata)));\
__declare_static_bit_vector(address,8);\
bit_vector_cast_to_bit_vector(0, &(address), &((*__paddress)));\
__declare_static_bit_vector(current_data,8);\

#define _RW1C_call_stmt_93_c_macro_ _readSDHCRegisters_( &(address), &(current_data));\
;

#define _RW1C_branch_block_stmt_94_c_export_decl_macro_ __declare_static_bit_vector(d7,1);\
__declare_static_bit_vector(d6,1);\
__declare_static_bit_vector(d5,1);\
__declare_static_bit_vector(d4,1);\
__declare_static_bit_vector(d3,1);\
__declare_static_bit_vector(d2,1);\
__declare_static_bit_vector(d1,1);\
__declare_static_bit_vector(d0,1);\
__declare_static_bit_vector(current_d7,1);\
__declare_static_bit_vector(current_d6,1);\
__declare_static_bit_vector(current_d5,1);\
__declare_static_bit_vector(current_d4,1);\
__declare_static_bit_vector(current_d3,1);\
__declare_static_bit_vector(current_d2,1);\
__declare_static_bit_vector(current_d1,1);\
__declare_static_bit_vector(current_d0,1);\
__declare_static_bit_vector(b0,1);\
__declare_static_bit_vector(b1,1);\
__declare_static_bit_vector(b2,1);\
__declare_static_bit_vector(b3,1);\
__declare_static_bit_vector(b4,1);\
__declare_static_bit_vector(b5,1);\
__declare_static_bit_vector(b6,1);\
__declare_static_bit_vector(b7,1);\


#define _RW1C_assign_stmt_98_c_macro_ __declare_static_bit_vector(slice_97,1);\
bit_vector_slice(&(data), &(slice_97), 7);\
bit_vector_cast_to_bit_vector(0, &(d7), &(slice_97));\
;

#define _RW1C_assign_stmt_102_c_macro_ __declare_static_bit_vector(slice_101,1);\
bit_vector_slice(&(data), &(slice_101), 6);\
bit_vector_cast_to_bit_vector(0, &(d6), &(slice_101));\
;

#define _RW1C_assign_stmt_106_c_macro_ __declare_static_bit_vector(slice_105,1);\
bit_vector_slice(&(data), &(slice_105), 5);\
bit_vector_cast_to_bit_vector(0, &(d5), &(slice_105));\
;

#define _RW1C_assign_stmt_110_c_macro_ __declare_static_bit_vector(slice_109,1);\
bit_vector_slice(&(data), &(slice_109), 4);\
bit_vector_cast_to_bit_vector(0, &(d4), &(slice_109));\
;

#define _RW1C_assign_stmt_114_c_macro_ __declare_static_bit_vector(slice_113,1);\
bit_vector_slice(&(data), &(slice_113), 3);\
bit_vector_cast_to_bit_vector(0, &(d3), &(slice_113));\
;

#define _RW1C_assign_stmt_118_c_macro_ __declare_static_bit_vector(slice_117,1);\
bit_vector_slice(&(data), &(slice_117), 2);\
bit_vector_cast_to_bit_vector(0, &(d2), &(slice_117));\
;

#define _RW1C_assign_stmt_122_c_macro_ __declare_static_bit_vector(slice_121,1);\
bit_vector_slice(&(data), &(slice_121), 1);\
bit_vector_cast_to_bit_vector(0, &(d1), &(slice_121));\
;

#define _RW1C_assign_stmt_126_c_macro_ __declare_static_bit_vector(slice_125,1);\
bit_vector_slice(&(data), &(slice_125), 0);\
bit_vector_cast_to_bit_vector(0, &(d0), &(slice_125));\
;

#define _RW1C_assign_stmt_130_c_macro_ __declare_static_bit_vector(slice_129,1);\
bit_vector_slice(&(current_data), &(slice_129), 7);\
bit_vector_cast_to_bit_vector(0, &(current_d7), &(slice_129));\
;

#define _RW1C_assign_stmt_134_c_macro_ __declare_static_bit_vector(slice_133,1);\
bit_vector_slice(&(current_data), &(slice_133), 6);\
bit_vector_cast_to_bit_vector(0, &(current_d6), &(slice_133));\
;

#define _RW1C_assign_stmt_138_c_macro_ __declare_static_bit_vector(slice_137,1);\
bit_vector_slice(&(current_data), &(slice_137), 5);\
bit_vector_cast_to_bit_vector(0, &(current_d5), &(slice_137));\
;

#define _RW1C_assign_stmt_142_c_macro_ __declare_static_bit_vector(slice_141,1);\
bit_vector_slice(&(current_data), &(slice_141), 4);\
bit_vector_cast_to_bit_vector(0, &(current_d4), &(slice_141));\
;

#define _RW1C_assign_stmt_146_c_macro_ __declare_static_bit_vector(slice_145,1);\
bit_vector_slice(&(current_data), &(slice_145), 3);\
bit_vector_cast_to_bit_vector(0, &(current_d3), &(slice_145));\
;

#define _RW1C_assign_stmt_150_c_macro_ __declare_static_bit_vector(slice_149,1);\
bit_vector_slice(&(current_data), &(slice_149), 2);\
bit_vector_cast_to_bit_vector(0, &(current_d2), &(slice_149));\
;

#define _RW1C_assign_stmt_154_c_macro_ __declare_static_bit_vector(slice_153,1);\
bit_vector_slice(&(current_data), &(slice_153), 1);\
bit_vector_cast_to_bit_vector(0, &(current_d1), &(slice_153));\
;

#define _RW1C_assign_stmt_158_c_macro_ __declare_static_bit_vector(slice_157,1);\
bit_vector_slice(&(current_data), &(slice_157), 0);\
bit_vector_cast_to_bit_vector(0, &(current_d0), &(slice_157));\
;

#define _RW1C_assign_stmt_164_c_macro_ __declare_static_bit_vector(MUX_163,1);\
if (has_undefined_bit(&d0)) {fprintf(stderr, "Error: variable d0 has undefined value (%s) at test point.\n", to_string(&d0));assert(0);} \
if(bit_vector_to_uint64(0, &d0)){bit_vector_cast_to_bit_vector(0, &(MUX_163), &(ZERO_1));\
}else {bit_vector_cast_to_bit_vector(0, &(MUX_163), &(current_d0));\
}bit_vector_cast_to_bit_vector(0, &(b0), &(MUX_163));\
;

#define _RW1C_assign_stmt_170_c_macro_ __declare_static_bit_vector(MUX_169,1);\
if (has_undefined_bit(&d1)) {fprintf(stderr, "Error: variable d1 has undefined value (%s) at test point.\n", to_string(&d1));assert(0);} \
if(bit_vector_to_uint64(0, &d1)){bit_vector_cast_to_bit_vector(0, &(MUX_169), &(ZERO_1));\
}else {bit_vector_cast_to_bit_vector(0, &(MUX_169), &(current_d1));\
}bit_vector_cast_to_bit_vector(0, &(b1), &(MUX_169));\
;

#define _RW1C_assign_stmt_176_c_macro_ __declare_static_bit_vector(MUX_175,1);\
if (has_undefined_bit(&d2)) {fprintf(stderr, "Error: variable d2 has undefined value (%s) at test point.\n", to_string(&d2));assert(0);} \
if(bit_vector_to_uint64(0, &d2)){bit_vector_cast_to_bit_vector(0, &(MUX_175), &(ZERO_1));\
}else {bit_vector_cast_to_bit_vector(0, &(MUX_175), &(current_d2));\
}bit_vector_cast_to_bit_vector(0, &(b2), &(MUX_175));\
;

#define _RW1C_assign_stmt_182_c_macro_ __declare_static_bit_vector(MUX_181,1);\
if (has_undefined_bit(&d3)) {fprintf(stderr, "Error: variable d3 has undefined value (%s) at test point.\n", to_string(&d3));assert(0);} \
if(bit_vector_to_uint64(0, &d3)){bit_vector_cast_to_bit_vector(0, &(MUX_181), &(ZERO_1));\
}else {bit_vector_cast_to_bit_vector(0, &(MUX_181), &(current_d3));\
}bit_vector_cast_to_bit_vector(0, &(b3), &(MUX_181));\
;

#define _RW1C_assign_stmt_188_c_macro_ __declare_static_bit_vector(MUX_187,1);\
if (has_undefined_bit(&d4)) {fprintf(stderr, "Error: variable d4 has undefined value (%s) at test point.\n", to_string(&d4));assert(0);} \
if(bit_vector_to_uint64(0, &d4)){bit_vector_cast_to_bit_vector(0, &(MUX_187), &(ZERO_1));\
}else {bit_vector_cast_to_bit_vector(0, &(MUX_187), &(current_d4));\
}bit_vector_cast_to_bit_vector(0, &(b4), &(MUX_187));\
;

#define _RW1C_assign_stmt_194_c_macro_ __declare_static_bit_vector(MUX_193,1);\
if (has_undefined_bit(&d5)) {fprintf(stderr, "Error: variable d5 has undefined value (%s) at test point.\n", to_string(&d5));assert(0);} \
if(bit_vector_to_uint64(0, &d5)){bit_vector_cast_to_bit_vector(0, &(MUX_193), &(ZERO_1));\
}else {bit_vector_cast_to_bit_vector(0, &(MUX_193), &(current_d5));\
}bit_vector_cast_to_bit_vector(0, &(b5), &(MUX_193));\
;

#define _RW1C_assign_stmt_200_c_macro_ __declare_static_bit_vector(MUX_199,1);\
if (has_undefined_bit(&d6)) {fprintf(stderr, "Error: variable d6 has undefined value (%s) at test point.\n", to_string(&d6));assert(0);} \
if(bit_vector_to_uint64(0, &d6)){bit_vector_cast_to_bit_vector(0, &(MUX_199), &(ZERO_1));\
}else {bit_vector_cast_to_bit_vector(0, &(MUX_199), &(current_d6));\
}bit_vector_cast_to_bit_vector(0, &(b6), &(MUX_199));\
;

#define _RW1C_assign_stmt_206_c_macro_ __declare_static_bit_vector(MUX_205,1);\
if (has_undefined_bit(&d7)) {fprintf(stderr, "Error: variable d7 has undefined value (%s) at test point.\n", to_string(&d7));assert(0);} \
if(bit_vector_to_uint64(0, &d7)){bit_vector_cast_to_bit_vector(0, &(MUX_205), &(ZERO_1));\
}else {bit_vector_cast_to_bit_vector(0, &(MUX_205), &(current_d7));\
}bit_vector_cast_to_bit_vector(0, &(b7), &(MUX_205));\
;

#define _RW1C_call_stmt_223_c_macro_ __declare_static_bit_vector(CONCAT_u1_u2_210,2);\
__declare_static_bit_vector(CONCAT_u1_u2_213,2);\
__declare_static_bit_vector(CONCAT_u2_u4_214,4);\
__declare_static_bit_vector(CONCAT_u1_u2_217,2);\
__declare_static_bit_vector(CONCAT_u1_u2_220,2);\
__declare_static_bit_vector(CONCAT_u2_u4_221,4);\
__declare_static_bit_vector(CONCAT_u4_u8_222,8);\
bit_vector_concatenate( &(b7), &(b6), &(CONCAT_u1_u2_210));\
bit_vector_concatenate( &(b5), &(b4), &(CONCAT_u1_u2_213));\
bit_vector_concatenate( &(CONCAT_u1_u2_210), &(CONCAT_u1_u2_213), &(CONCAT_u2_u4_214));\
bit_vector_concatenate( &(b3), &(b2), &(CONCAT_u1_u2_217));\
bit_vector_concatenate( &(b1), &(b0), &(CONCAT_u1_u2_220));\
bit_vector_concatenate( &(CONCAT_u1_u2_217), &(CONCAT_u1_u2_220), &(CONCAT_u2_u4_221));\
bit_vector_concatenate( &(CONCAT_u2_u4_214), &(CONCAT_u2_u4_221), &(CONCAT_u4_u8_222));\
_writeSDHCRegisters_( &(address),  &(CONCAT_u4_u8_222));\
;

#define _RW1C_assign_stmt_233_c_macro_ __declare_static_bit_vector(NOT_u8_u8_230,8);\
__declare_static_bit_vector(AND_u8_u8_232,8);\
bit_vector_not( &(data), &(NOT_u8_u8_230));\
bit_vector_and(&(NOT_u8_u8_230), &(normalInterruptFlag1), &(AND_u8_u8_232));\
bit_vector_cast_to_bit_vector(0, &(normalInterruptFlag1), &(AND_u8_u8_232));\
;

#define _RW1C_assign_stmt_244_c_macro_ __declare_static_bit_vector(NOT_u8_u8_241,8);\
__declare_static_bit_vector(AND_u8_u8_243,8);\
bit_vector_not( &(data), &(NOT_u8_u8_241));\
bit_vector_and(&(NOT_u8_u8_241), &(normalInterruptFlag2), &(AND_u8_u8_243));\
bit_vector_cast_to_bit_vector(0, &(normalInterruptFlag2), &(AND_u8_u8_243));\
;

#define _RW1C_assign_stmt_255_c_macro_ __declare_static_bit_vector(NOT_u8_u8_252,8);\
__declare_static_bit_vector(AND_u8_u8_254,8);\
bit_vector_not( &(data), &(NOT_u8_u8_252));\
bit_vector_and(&(NOT_u8_u8_252), &(errorInterruptFlag1), &(AND_u8_u8_254));\
bit_vector_cast_to_bit_vector(0, &(errorInterruptFlag1), &(AND_u8_u8_254));\
;

#define _RW1C_assign_stmt_266_c_macro_ __declare_static_bit_vector(NOT_u8_u8_263,8);\
__declare_static_bit_vector(AND_u8_u8_265,8);\
bit_vector_not( &(data), &(NOT_u8_u8_263));\
bit_vector_and(&(NOT_u8_u8_263), &(errorInterruptFlag2), &(AND_u8_u8_265));\
bit_vector_cast_to_bit_vector(0, &(errorInterruptFlag2), &(AND_u8_u8_265));\
;
;

#define _RW1C_branch_block_stmt_94_c_export_apply_macro_ ;

#define _RW1C_inner_outarg_prep_macro__ ;

#define _RW1C_outer_arg_decl_macro__ __declare_static_bit_vector(__data, 8);\
bit_vector_assign_uint64(0, &__data, data);\
__declare_static_bit_vector(__address, 8);\
bit_vector_assign_uint64(0, &__address, address);\
;

#define _RW1C_outer_op_xfer_macro__ ;

#define _command_generator_inner_inarg_prep_macro__ __declare_static_bit_vector(normalInterruptStatusVar1,8);\
__declare_static_bit_vector(normalInterruptStatusVar2,8);\
__declare_static_bit_vector(errorInterruptStatusVar1,8);\
__declare_static_bit_vector(errorInterruptStatusVar2,8);\
__declare_static_bit_vector(dataErrorInterruptStatusVar1,8);\
__declare_static_bit_vector(dataTransferComplete,8);\

#define _command_generator_branch_block_stmt_1486_c_export_decl_macro_ __declare_static_bit_vector(commandRegVal,8);\
__declare_static_bit_vector(commandRegVal1,8);\
__declare_static_bit_vector(tempVal,40);\
__declare_static_bit_vector(C,8);\
__declare_static_bit_vector(newCommand40bits,40);\
__declare_static_bit_vector(tempArgument,8);\
__declare_static_bit_vector(command40bits,40);\
__declare_static_bit_vector(next_C,8);\
__declare_static_bit_vector(crc7,7);\
__declare_static_bit_vector(commandbits,48);\
__declare_static_bit_vector(response_type,2);\
__declare_static_bit_vector(dataPresentSelect,1);\
__declare_static_bit_vector(transferVal,8);\
__declare_static_bit_vector(txOrRX,1);\
__declare_static_bit_vector(E,8);\
__declare_static_bit_vector(readNewPresent,16);\
__declare_static_bit_vector(readPresentStateTemp,8);\
__declare_static_bit_vector(readPresentState,16);\
__declare_static_bit_vector(next_E,8);\
__declare_static_bit_vector(presentState0Var,8);\
__declare_static_bit_vector(presentState1Var,8);\
__declare_static_bit_vector(tempPstate,8);\
__declare_static_bit_vector(wait,1);\
__declare_static_bit_vector(R1_6_7CRC,7);\
__declare_static_bit_vector(CommandCRCError,8);\
__declare_static_bit_vector(commandIndexCheck,1);\
__declare_static_bit_vector(CommandIndexError,8);\
__declare_static_bit_vector(R,8);\
__declare_static_bit_vector(tempResponse,32);\
__declare_static_bit_vector(nextResponse,32);\
__declare_static_bit_vector(next_R,8);\
__declare_static_bit_vector(tempPresentState2,8);\
__declare_static_bit_vector(presentState2,8);\
__declare_static_bit_vector(normalInterrupt2,8);\
__declare_static_bit_vector(commandEndBitError,8);\
__declare_static_bit_vector(normalInterruptStatusVar_2,8);\
__declare_static_bit_vector(errorInterruptStatusVar_2,8);\
__declare_static_bit_vector(CID_CRC,7);\
__declare_static_bit_vector(R2_CRC,7);\
__declare_static_bit_vector(CommandCRCError1,8);\
__declare_static_bit_vector(commandEndBitError1,8);\
__declare_static_bit_vector(errorInterruptStatusVar_3,8);\
__declare_static_bit_vector(tempPresentState3,8);\
__declare_static_bit_vector(presentState3,8);\
__declare_static_bit_vector(normalInterrupt3,8);\
__declare_static_bit_vector(normalInterruptStatusVar_3,8);\
__declare_static_bit_vector(tempPresentState1,8);\
__declare_static_bit_vector(presentState1,8);\
__declare_static_bit_vector(normalInterrupt1,8);\
__declare_static_bit_vector(normalInterruptStatusVar_1,8);\
__declare_static_bit_vector(errorInterruptStatusVar_1,8);\
bit_vector_clear(&errorInterruptStatusVar_1);\
__declare_static_bit_vector(tempTransfer,8);\
__declare_static_bit_vector(singleMultipleReadBlock,1);\
__declare_static_bit_vector(transferCompleteData,8);\
__declare_static_bit_vector(B,8);\
__declare_static_bit_vector(readNewBlockCount,16);\
__declare_static_bit_vector(readnewBlockCountTemp,8);\
__declare_static_bit_vector(readBlockCount,16);\
__declare_static_bit_vector(next_B,8);\
__declare_static_bit_vector(newReadBlockCount,16);\


#define _command_generator_call_stmt_1489_c_macro_ __declare_static_bit_vector(konst_1487,8);\
bit_vector_clear(&konst_1487);\
konst_1487.val.byte_array[0] = 14;\
bit_vector_clear(&konst_1487);\
konst_1487.val.byte_array[0] = 14;\
_readSDHCRegisters_( &(konst_1487), &(commandRegVal));\
;

#define _command_generator_call_stmt_1492_c_macro_ __declare_static_bit_vector(konst_1490,8);\
bit_vector_clear(&konst_1490);\
konst_1490.val.byte_array[0] = 15;\
bit_vector_clear(&konst_1490);\
konst_1490.val.byte_array[0] = 15;\
_readSDHCRegisters_( &(konst_1490), &(commandRegVal1));\
;

#define _command_generator_assign_stmt_1502_c_macro_ __declare_static_bit_vector(CONCAT_u32_u33_1496,33);\
bit_vector_clear(&CONCAT_u32_u33_1496);\
__declare_static_bit_vector(slice_1499,6);\
__declare_static_bit_vector(CONCAT_u1_u7_1500,7);\
__declare_static_bit_vector(CONCAT_u33_u40_1501,40);\
bit_vector_concatenate( &(ZERO_32), &(ZERO_1), &(CONCAT_u32_u33_1496));\
bit_vector_slice(&(commandRegVal1), &(slice_1499), 0);\
bit_vector_concatenate( &(ONE_1), &(slice_1499), &(CONCAT_u1_u7_1500));\
bit_vector_concatenate( &(CONCAT_u32_u33_1496), &(CONCAT_u1_u7_1500), &(CONCAT_u33_u40_1501));\
bit_vector_cast_to_bit_vector(0, &(tempVal), &(CONCAT_u33_u40_1501));\
;

#define _command_generator_merge_stmt_1503_c_preamble_macro_ uint8_t merge_stmt_1503_entry_flag;\
merge_stmt_1503_entry_flag = 1;\
uint8_t loopcommand40bits_1486_flag = 0;\
goto merge_stmt_1503_run;\
loopcommand40bits_1486: loopcommand40bits_1486_flag = 1;\
goto merge_stmt_1503_run;\
merge_stmt_1503_run: ;\

#define _command_generator_phi_stmt_1504_c_macro_ __declare_static_bit_vector(konst_1507,8);\
bit_vector_clear(&konst_1507);\
konst_1507.val.byte_array[0] = 3;\
__declare_static_bit_vector(type_cast_1508,8);\
bit_vector_clear(&type_cast_1508);\
type_cast_1508.val.byte_array[0] = 3;\
if(loopcommand40bits_1486_flag) {\
bit_vector_cast_to_bit_vector(0, &(C), &(next_C));\
}\
else {\
__declare_static_bit_vector(konst_1507,8);\
bit_vector_clear(&konst_1507);\
konst_1507.val.byte_array[0] = 3;\
__declare_static_bit_vector(type_cast_1508,8);\
bit_vector_clear(&type_cast_1508);\
type_cast_1508.val.byte_array[0] = 3;\
bit_vector_clear(&konst_1507);\
konst_1507.val.byte_array[0] = 3;\
bit_vector_bitcast_to_bit_vector( &(type_cast_1508), &(konst_1507));\
bit_vector_cast_to_bit_vector(0, &(C), &(type_cast_1508));\
}\
;

#define _command_generator_phi_stmt_1509_c_macro_ if(loopcommand40bits_1486_flag) {\
bit_vector_cast_to_bit_vector(0, &(newCommand40bits), &(command40bits));\
}\
else {\
bit_vector_cast_to_bit_vector(0, &(newCommand40bits), &(tempVal));\
}\
;
;

#define _command_generator_merge_stmt_1503_c_postamble_macro_ loopcommand40bits_1486_flag = 0;\
merge_stmt_1503_entry_flag = 0;

#define _command_generator_call_stmt_1518_c_macro_ __declare_static_bit_vector(konst_1514,8);\
bit_vector_clear(&konst_1514);\
konst_1514.val.byte_array[0] = 8;\
__declare_static_bit_vector(ADD_u8_u8_1516,8);\
bit_vector_clear(&konst_1514);\
konst_1514.val.byte_array[0] = 8;\
bit_vector_plus( &(konst_1514), &(C), &(ADD_u8_u8_1516));\
_readSDHCRegisters_( &(ADD_u8_u8_1516), &(tempArgument));\
;

#define _command_generator_assign_stmt_1524_c_macro_ __declare_static_bit_vector(slice_1521,32);\
__declare_static_bit_vector(CONCAT_u32_u40_1523,40);\
bit_vector_slice(&(newCommand40bits), &(slice_1521), 0);\
bit_vector_concatenate( &(slice_1521), &(tempArgument), &(CONCAT_u32_u40_1523));\
bit_vector_cast_to_bit_vector(0, &(command40bits), &(CONCAT_u32_u40_1523));\
;

#define _command_generator_assign_stmt_1529_c_macro_ __declare_static_bit_vector(konst_1527,8);\
bit_vector_clear(&konst_1527);\
konst_1527.val.byte_array[0] = 1;\
__declare_static_bit_vector(SUB_u8_u8_1528,8);\
bit_vector_clear(&konst_1527);\
konst_1527.val.byte_array[0] = 1;\
bit_vector_minus( &(C), &(konst_1527), &(SUB_u8_u8_1528));\
bit_vector_cast_to_bit_vector(0, &(next_C), &(SUB_u8_u8_1528));\
;

#define _command_generator_call_stmt_1538_c_macro_ _generate_crc_7_( &(command40bits), &(crc7));\
;

#define _command_generator_assign_stmt_1545_c_macro_ __declare_static_bit_vector(CONCAT_u40_u47_1542,47);\
__declare_static_bit_vector(CONCAT_u47_u48_1544,48);\
bit_vector_concatenate( &(command40bits), &(crc7), &(CONCAT_u40_u47_1542));\
bit_vector_concatenate( &(CONCAT_u40_u47_1542), &(ONE_1), &(CONCAT_u47_u48_1544));\
bit_vector_cast_to_bit_vector(0, &(commandbits), &(CONCAT_u47_u48_1544));\
;

#define _command_generator_assign_stmt_1548_c_macro_ write_bit_vector_to_pipe("oe",&(ONE_1));\
;

#define _command_generator_branch_block_stmt_1549_c_export_decl_macro_ __declare_static_bit_vector(J,8);\
__declare_static_bit_vector(old_commandbits,48);\
__declare_static_bit_vector(next_J,8);\
__declare_static_bit_vector(bit,1);\
__declare_static_bit_vector(new_commandbits,48);\


#define _command_generator_merge_stmt_1551_c_preamble_macro_ uint8_t merge_stmt_1551_entry_flag;\
merge_stmt_1551_entry_flag = do_while_entry_flag;\
goto merge_stmt_1551_run;\
merge_stmt_1551_run: ;\

#define _command_generator_phi_stmt_1552_c_macro_ if(do_while_loopback_flag) {\
bit_vector_cast_to_bit_vector(0, &(J), &(next_J));\
}\
else {\
bit_vector_cast_to_bit_vector(0, &(J), &(ZERO_8));\
}\
;

#define _command_generator_phi_stmt_1556_c_macro_ if(do_while_loopback_flag) {\
bit_vector_cast_to_bit_vector(0, &(old_commandbits), &(new_commandbits));\
}\
else {\
bit_vector_cast_to_bit_vector(0, &(old_commandbits), &(commandbits));\
}\
;
;

#define _command_generator_merge_stmt_1551_c_postamble_macro_ merge_stmt_1551_entry_flag = 0;

#define _command_generator_assign_stmt_1565_c_macro_ __declare_static_bit_vector(konst_1563,8);\
bit_vector_clear(&konst_1563);\
konst_1563.val.byte_array[0] = 1;\
__declare_static_bit_vector(ADD_u8_u8_1564,8);\
bit_vector_clear(&konst_1563);\
konst_1563.val.byte_array[0] = 1;\
bit_vector_plus( &(J), &(konst_1563), &(ADD_u8_u8_1564));\
bit_vector_cast_to_bit_vector(0, &(next_J), &(ADD_u8_u8_1564));\
;

#define _command_generator_assign_stmt_1569_c_macro_ __declare_static_bit_vector(slice_1568,1);\
bit_vector_slice(&(old_commandbits), &(slice_1568), 47);\
bit_vector_cast_to_bit_vector(0, &(bit), &(slice_1568));\
;

#define _command_generator_assign_stmt_1572_c_macro_ write_bit_vector_to_pipe("commandTx",&(bit));\
;

#define _command_generator_assign_stmt_1577_c_macro_ __declare_static_bit_vector(konst_1575,48);\
bit_vector_clear(&konst_1575);\
konst_1575.val.byte_array[0] = 1;\
__declare_static_bit_vector(SHL_u48_u48_1576,48);\
bit_vector_clear(&konst_1575);\
konst_1575.val.byte_array[0] = 1;\
bit_vector_shift_left(&(old_commandbits), &(konst_1575), &(SHL_u48_u48_1576));\
bit_vector_cast_to_bit_vector(0, &(new_commandbits), &(SHL_u48_u48_1576));\
;
;

#define _command_generator_branch_block_stmt_1549_c_export_apply_macro_ ;

#define _command_generator_assign_stmt_1585_c_macro_ write_bit_vector_to_pipe("oe",&(ZERO_1));\
;

#define _command_generator_assign_stmt_1589_c_macro_ __declare_static_bit_vector(slice_1588,2);\
bit_vector_slice(&(commandRegVal), &(slice_1588), 0);\
bit_vector_cast_to_bit_vector(0, &(response_type), &(slice_1588));\
;

#define _command_generator_assign_stmt_1594_c_macro_ __declare_static_bit_vector(konst_1592,8);\
bit_vector_clear(&konst_1592);\
konst_1592.val.byte_array[0] = 5;\
__declare_static_bit_vector(BITSEL_u8_u1_1593,1);\
bit_vector_clear(&konst_1592);\
konst_1592.val.byte_array[0] = 5;\
bit_vector_bitsel( &(commandRegVal), &(konst_1592), &(BITSEL_u8_u1_1593));\
bit_vector_cast_to_bit_vector(0, &(dataPresentSelect), &(BITSEL_u8_u1_1593));\
;

#define _command_generator_call_stmt_1601_c_macro_ __declare_static_bit_vector(konst_1599,8);\
bit_vector_clear(&konst_1599);\
konst_1599.val.byte_array[0] = 12;\
bit_vector_clear(&konst_1599);\
konst_1599.val.byte_array[0] = 12;\
_readSDHCRegisters_( &(konst_1599), &(transferVal));\
;

#define _command_generator_assign_stmt_1607_c_macro_ __declare_static_bit_vector(konst_1604,8);\
bit_vector_clear(&konst_1604);\
konst_1604.val.byte_array[0] = 16;\
__declare_static_bit_vector(AND_u8_u8_1605,8);\
__declare_static_bit_vector(BITREDUCEOR_u8_u1_1606,1);\
bit_vector_clear(&konst_1604);\
konst_1604.val.byte_array[0] = 16;\
bit_vector_and(&(transferVal), &(konst_1604), &(AND_u8_u8_1605));\
bit_vector_reduce_or( &(AND_u8_u8_1605), &(BITREDUCEOR_u8_u1_1606));\
bit_vector_cast_to_bit_vector(0, &(txOrRX), &(BITREDUCEOR_u8_u1_1606));\
;

#define _command_generator_merge_stmt_1608_c_preamble_macro_ uint8_t merge_stmt_1608_entry_flag;\
merge_stmt_1608_entry_flag = 1;\
uint8_t loopPresent_1486_flag = 0;\
goto merge_stmt_1608_run;\
loopPresent_1486: loopPresent_1486_flag = 1;\
goto merge_stmt_1608_run;\
merge_stmt_1608_run: ;\

#define _command_generator_phi_stmt_1609_c_macro_ if(loopPresent_1486_flag) {\
bit_vector_cast_to_bit_vector(0, &(E), &(next_E));\
}\
else {\
bit_vector_cast_to_bit_vector(0, &(E), &(ONE_8));\
}\
;

#define _command_generator_phi_stmt_1613_c_macro_ __declare_static_bit_vector(konst_1615,16);\
bit_vector_clear(&konst_1615);\
__declare_static_bit_vector(type_cast_1616,16);\
bit_vector_clear(&type_cast_1616);\
if(loopPresent_1486_flag) {\
bit_vector_cast_to_bit_vector(0, &(readNewPresent), &(readPresentState));\
}\
else {\
__declare_static_bit_vector(konst_1615,16);\
bit_vector_clear(&konst_1615);\
__declare_static_bit_vector(type_cast_1616,16);\
bit_vector_clear(&type_cast_1616);\
bit_vector_clear(&konst_1615);\
bit_vector_bitcast_to_bit_vector( &(type_cast_1616), &(konst_1615));\
bit_vector_cast_to_bit_vector(0, &(readNewPresent), &(type_cast_1616));\
}\
;
;

#define _command_generator_merge_stmt_1608_c_postamble_macro_ loopPresent_1486_flag = 0;\
merge_stmt_1608_entry_flag = 0;

#define _command_generator_call_stmt_1623_c_macro_ __declare_static_bit_vector(konst_1619,8);\
bit_vector_clear(&konst_1619);\
konst_1619.val.byte_array[0] = 36;\
__declare_static_bit_vector(ADD_u8_u8_1621,8);\
bit_vector_clear(&konst_1619);\
konst_1619.val.byte_array[0] = 36;\
bit_vector_plus( &(konst_1619), &(E), &(ADD_u8_u8_1621));\
_readSDHCRegisters_( &(ADD_u8_u8_1621), &(readPresentStateTemp));\
;

#define _command_generator_assign_stmt_1629_c_macro_ __declare_static_bit_vector(slice_1626,8);\
__declare_static_bit_vector(CONCAT_u8_u16_1628,16);\
bit_vector_slice(&(readNewPresent), &(slice_1626), 0);\
bit_vector_concatenate( &(slice_1626), &(readPresentStateTemp), &(CONCAT_u8_u16_1628));\
bit_vector_cast_to_bit_vector(0, &(readPresentState), &(CONCAT_u8_u16_1628));\
;

#define _command_generator_assign_stmt_1634_c_macro_ __declare_static_bit_vector(konst_1632,8);\
bit_vector_clear(&konst_1632);\
konst_1632.val.byte_array[0] = 1;\
__declare_static_bit_vector(SUB_u8_u8_1633,8);\
bit_vector_clear(&konst_1632);\
konst_1632.val.byte_array[0] = 1;\
bit_vector_minus( &(E), &(konst_1632), &(SUB_u8_u8_1633));\
bit_vector_cast_to_bit_vector(0, &(next_E), &(SUB_u8_u8_1633));\
;

#define _command_generator_assign_stmt_1644_c_macro_ __declare_static_bit_vector(slice_1643,8);\
bit_vector_slice(&(readPresentState), &(slice_1643), 0);\
bit_vector_cast_to_bit_vector(0, &(presentState0Var), &(slice_1643));\
;

#define _command_generator_assign_stmt_1648_c_macro_ __declare_static_bit_vector(slice_1647,8);\
bit_vector_slice(&(readPresentState), &(slice_1647), 8);\
bit_vector_cast_to_bit_vector(0, &(presentState1Var), &(slice_1647));\
;

#define _command_generator_assign_stmt_1662_c_macro_ __declare_static_bit_vector(konst_1656,8);\
bit_vector_clear(&konst_1656);\
konst_1656.val.byte_array[0] = 2;\
__declare_static_bit_vector(OR_u8_u8_1657,8);\
__declare_static_bit_vector(konst_1659,8);\
bit_vector_clear(&konst_1659);\
konst_1659.val.byte_array[0] = 1;\
__declare_static_bit_vector(OR_u8_u8_1660,8);\
__declare_static_bit_vector(MUX_1661,8);\
if (has_undefined_bit(&txOrRX)) {fprintf(stderr, "Error: variable txOrRX has undefined value (%s) at test point.\n", to_string(&txOrRX));assert(0);} \
if(bit_vector_to_uint64(0, &txOrRX)){bit_vector_clear(&konst_1656);\
konst_1656.val.byte_array[0] = 2;\
bit_vector_or(&(presentState1Var), &(konst_1656), &(OR_u8_u8_1657));\
bit_vector_cast_to_bit_vector(0, &(MUX_1661), &(OR_u8_u8_1657));\
}else {bit_vector_clear(&konst_1659);\
konst_1659.val.byte_array[0] = 1;\
bit_vector_or(&(presentState1Var), &(konst_1659), &(OR_u8_u8_1660));\
bit_vector_cast_to_bit_vector(0, &(MUX_1661), &(OR_u8_u8_1660));\
}bit_vector_cast_to_bit_vector(0, &(tempPstate), &(MUX_1661));\
;

#define _command_generator_call_stmt_1665_c_macro_ __declare_static_bit_vector(konst_1663,8);\
bit_vector_clear(&konst_1663);\
konst_1663.val.byte_array[0] = 37;\
bit_vector_clear(&konst_1663);\
konst_1663.val.byte_array[0] = 37;\
_writeSDHCRegisters_( &(konst_1663),  &(tempPstate));\
;

#define _command_generator_call_stmt_1671_c_macro_ __declare_static_bit_vector(konst_1667,8);\
bit_vector_clear(&konst_1667);\
konst_1667.val.byte_array[0] = 36;\
__declare_static_bit_vector(konst_1669,8);\
bit_vector_clear(&konst_1669);\
konst_1669.val.byte_array[0] = 6;\
__declare_static_bit_vector(OR_u8_u8_1670,8);\
bit_vector_clear(&konst_1667);\
konst_1667.val.byte_array[0] = 36;\
bit_vector_clear(&konst_1669);\
konst_1669.val.byte_array[0] = 6;\
bit_vector_or(&(presentState0Var), &(konst_1669), &(OR_u8_u8_1670));\
_writeSDHCRegisters_( &(konst_1667),  &(OR_u8_u8_1670));\
;

#define _command_generator_stmt_1675_c_macro_ uint32_t _command_generator_stmt_1675_c_macro___print_counter= get_file_print_lock(__report_log_file__);if(__report_log_file__ != NULL) fprintf(__report_log_file__,"[%u]rsp>\t%s\n",_command_generator_stmt_1675_c_macro___print_counter,"resp");if(__report_log_file__ != NULL) {fprintf(__report_log_file__,"[%u]rsp>\t\t%s\t\t",_command_generator_stmt_1675_c_macro___print_counter,"response_type");fprintf(__report_log_file__, ":= 0x%s\n",to_hex_string(&(response_type)));fflush (__report_log_file__);}if(__report_log_file__ != NULL) {fprintf(__report_log_file__,"[%u]rsp>\t\t%s\t\t",_command_generator_stmt_1675_c_macro___print_counter,"dataPresentSelect");fprintf(__report_log_file__, ":= 0x%s\n",to_hex_string(&(dataPresentSelect)));fflush (__report_log_file__);}release_file_print_lock(__report_log_file__);;

#define _command_generator_assign_stmt_1686_c_macro_ write_bit_vector_to_pipe("responseEnable",&(ONE_1));\
;

#define _command_generator_assign_stmt_1693_c_macro_ write_bit_vector_to_pipe("busyResponse",&(ONE_1));\
;

#define _command_generator_branch_block_stmt_1695_c_export_decl_macro_ __declare_static_bit_vector(response__new_responsebits,48);\
__declare_static_bit_vector(J,6);\
__declare_static_bit_vector(old_responsebits,48);\
__declare_static_bit_vector(next_J,6);\
__declare_static_bit_vector(responsebit,1);\
__declare_static_bit_vector(responsebits,48);\
__declare_static_bit_vector(new_responsebits,48);\


#define _command_generator_merge_stmt_1697_c_preamble_macro_ uint8_t merge_stmt_1697_entry_flag;\
merge_stmt_1697_entry_flag = do_while_entry_flag;\
goto merge_stmt_1697_run;\
merge_stmt_1697_run: ;\

#define _command_generator_phi_stmt_1698_c_macro_ __declare_static_bit_vector(konst_1700,6);\
bit_vector_clear(&konst_1700);\
__declare_static_bit_vector(type_cast_1701,6);\
bit_vector_clear(&type_cast_1701);\
if(do_while_loopback_flag) {\
bit_vector_cast_to_bit_vector(0, &(J), &(next_J));\
}\
else {\
__declare_static_bit_vector(konst_1700,6);\
bit_vector_clear(&konst_1700);\
__declare_static_bit_vector(type_cast_1701,6);\
bit_vector_clear(&type_cast_1701);\
bit_vector_clear(&konst_1700);\
bit_vector_bitcast_to_bit_vector( &(type_cast_1701), &(konst_1700));\
bit_vector_cast_to_bit_vector(0, &(J), &(type_cast_1701));\
}\
;

#define _command_generator_phi_stmt_1703_c_macro_ __declare_static_bit_vector(konst_1706,48);\
bit_vector_clear(&konst_1706);\
__declare_static_bit_vector(type_cast_1707,48);\
bit_vector_clear(&type_cast_1707);\
if(do_while_loopback_flag) {\
bit_vector_cast_to_bit_vector(0, &(old_responsebits), &(new_responsebits));\
}\
else {\
__declare_static_bit_vector(konst_1706,48);\
bit_vector_clear(&konst_1706);\
__declare_static_bit_vector(type_cast_1707,48);\
bit_vector_clear(&type_cast_1707);\
bit_vector_clear(&konst_1706);\
bit_vector_bitcast_to_bit_vector( &(type_cast_1707), &(konst_1706));\
bit_vector_cast_to_bit_vector(0, &(old_responsebits), &(type_cast_1707));\
}\
;
;

#define _command_generator_merge_stmt_1697_c_postamble_macro_ merge_stmt_1697_entry_flag = 0;

#define _command_generator_assign_stmt_1714_c_macro_ __declare_static_bit_vector(konst_1712,6);\
bit_vector_clear(&konst_1712);\
konst_1712.val.byte_array[0] = 1;\
__declare_static_bit_vector(ADD_u6_u6_1713,6);\
bit_vector_clear(&konst_1712);\
konst_1712.val.byte_array[0] = 1;\
bit_vector_plus( &(J), &(konst_1712), &(ADD_u6_u6_1713));\
bit_vector_cast_to_bit_vector(0, &(next_J), &(ADD_u6_u6_1713));\
;

#define _command_generator_assign_stmt_1717_c_macro_ __declare_static_bit_vector(RPIPE_responseRx_1716,1);\
read_bit_vector_from_pipe("responseRx",&(RPIPE_responseRx_1716));\
bit_vector_cast_to_bit_vector(0, &(responsebit), &(RPIPE_responseRx_1716));\
;

#define _command_generator_assign_stmt_1724_c_macro_ __declare_static_bit_vector(konst_1720,47);\
bit_vector_clear(&konst_1720);\
__declare_static_bit_vector(type_cast_1721,47);\
bit_vector_clear(&type_cast_1721);\
__declare_static_bit_vector(CONCAT_u47_u48_1723,48);\
bit_vector_clear(&konst_1720);\
bit_vector_bitcast_to_bit_vector( &(type_cast_1721), &(konst_1720));\
bit_vector_concatenate( &(type_cast_1721), &(responsebit), &(CONCAT_u47_u48_1723));\
bit_vector_cast_to_bit_vector(0, &(responsebits), &(CONCAT_u47_u48_1723));\
;

#define _command_generator_assign_stmt_1731_c_macro_ __declare_static_bit_vector(konst_1727,48);\
bit_vector_clear(&konst_1727);\
konst_1727.val.byte_array[0] = 1;\
__declare_static_bit_vector(SHL_u48_u48_1728,48);\
__declare_static_bit_vector(OR_u48_u48_1730,48);\
bit_vector_clear(&konst_1727);\
konst_1727.val.byte_array[0] = 1;\
bit_vector_shift_left(&(old_responsebits), &(konst_1727), &(SHL_u48_u48_1728));\
bit_vector_or(&(SHL_u48_u48_1728), &(responsebits), &(OR_u48_u48_1730));\
bit_vector_cast_to_bit_vector(0, &(new_responsebits), &(OR_u48_u48_1730));\
;
;

#define _command_generator_branch_block_stmt_1695_c_export_apply_macro_ bit_vector_cast_to_bit_vector(0, &(response__new_responsebits), &(new_responsebits));\
;

#define _command_generator_assign_stmt_1739_c_macro_ write_bit_vector_to_pipe("responseEnable",&(ZERO_1));\
;

#define _command_generator_stmt_1741_c_macro_ uint32_t _command_generator_stmt_1741_c_macro___print_counter= get_file_print_lock(__report_log_file__);if(__report_log_file__ != NULL) fprintf(__report_log_file__,"[%u]gen_comm>\t%s\n",_command_generator_stmt_1741_c_macro___print_counter,"f");if(__report_log_file__ != NULL) {fprintf(__report_log_file__,"[%u]gen_comm>\t\t%s\t\t",_command_generator_stmt_1741_c_macro___print_counter,"response");fprintf(__report_log_file__, ":= 0x%s\n",to_hex_string(&(response__new_responsebits)));fflush (__report_log_file__);}release_file_print_lock(__report_log_file__);;

#define _command_generator_merge_stmt_1746_c_preamble_macro_ uint8_t merge_stmt_1746_entry_flag;\
merge_stmt_1746_entry_flag = 1;\
uint8_t waitloop_1486_flag = 0;\
goto merge_stmt_1746_run;\
waitloop_1486: waitloop_1486_flag = 1;\
goto merge_stmt_1746_run;\
merge_stmt_1746_run: ;\
;

#define _command_generator_merge_stmt_1746_c_postamble_macro_ waitloop_1486_flag = 0;\
merge_stmt_1746_entry_flag = 0;

#define _command_generator_assign_stmt_1749_c_macro_ __declare_static_bit_vector(RPIPE_DAT0Rx_1748,1);\
read_bit_vector_from_pipe("DAT0Rx",&(RPIPE_DAT0Rx_1748));\
bit_vector_cast_to_bit_vector(0, &(wait), &(RPIPE_DAT0Rx_1748));\
;

#define _command_generator_assign_stmt_1758_c_macro_ write_bit_vector_to_pipe("busyResponse",&(ZERO_1));\
;

#define _command_generator_call_stmt_1769_c_macro_ __declare_static_bit_vector(slice_1767,40);\
bit_vector_slice(&(response__new_responsebits), &(slice_1767), 8);\
_generate_crc_7_( &(slice_1767), &(R1_6_7CRC));\
;

#define _command_generator_assign_stmt_1778_c_macro_ __declare_static_bit_vector(slice_1772,7);\
__declare_static_bit_vector(EQ_u7_u1_1774,1);\
__declare_static_bit_vector(konst_1775,8);\
bit_vector_clear(&konst_1775);\
__declare_static_bit_vector(konst_1776,8);\
bit_vector_clear(&konst_1776);\
konst_1776.val.byte_array[0] = 2;\
__declare_static_bit_vector(MUX_1777,8);\
bit_vector_slice(&(response__new_responsebits), &(slice_1772), 1);\
bit_vector_equal(0, &(slice_1772), &(R1_6_7CRC), &(EQ_u7_u1_1774));\
if (has_undefined_bit(&EQ_u7_u1_1774)) {fprintf(stderr, "Error: variable EQ_u7_u1_1774 has undefined value (%s) at test point.\n", to_string(&EQ_u7_u1_1774));assert(0);} \
if(bit_vector_to_uint64(0, &EQ_u7_u1_1774)){bit_vector_clear(&konst_1775);\
bit_vector_cast_to_bit_vector(0, &(MUX_1777), &(konst_1775));\
}else {bit_vector_clear(&konst_1776);\
konst_1776.val.byte_array[0] = 2;\
bit_vector_cast_to_bit_vector(0, &(MUX_1777), &(konst_1776));\
}bit_vector_cast_to_bit_vector(0, &(CommandCRCError), &(MUX_1777));\
;

#define _command_generator_assign_stmt_1792_c_macro_ __declare_static_bit_vector(slice_1788,6);\
__declare_static_bit_vector(slice_1790,6);\
__declare_static_bit_vector(EQ_u6_u1_1791,1);\
bit_vector_slice(&(commandRegVal1), &(slice_1788), 0);\
bit_vector_slice(&(response__new_responsebits), &(slice_1790), 40);\
bit_vector_equal(0, &(slice_1788), &(slice_1790), &(EQ_u6_u1_1791));\
bit_vector_cast_to_bit_vector(0, &(commandIndexCheck), &(EQ_u6_u1_1791));\
;

#define _command_generator_assign_stmt_1798_c_macro_ __declare_static_bit_vector(konst_1795,8);\
bit_vector_clear(&konst_1795);\
__declare_static_bit_vector(konst_1796,8);\
bit_vector_clear(&konst_1796);\
konst_1796.val.byte_array[0] = 8;\
__declare_static_bit_vector(MUX_1797,8);\
if (has_undefined_bit(&commandIndexCheck)) {fprintf(stderr, "Error: variable commandIndexCheck has undefined value (%s) at test point.\n", to_string(&commandIndexCheck));assert(0);} \
if(bit_vector_to_uint64(0, &commandIndexCheck)){bit_vector_clear(&konst_1795);\
bit_vector_cast_to_bit_vector(0, &(MUX_1797), &(konst_1795));\
}else {bit_vector_clear(&konst_1796);\
konst_1796.val.byte_array[0] = 8;\
bit_vector_cast_to_bit_vector(0, &(MUX_1797), &(konst_1796));\
}bit_vector_cast_to_bit_vector(0, &(CommandIndexError), &(MUX_1797));\
;

#define _command_generator_merge_stmt_1800_c_preamble_macro_ uint8_t merge_stmt_1800_entry_flag;\
merge_stmt_1800_entry_flag = 1;\
uint8_t loopResponse_1486_flag = 0;\
goto merge_stmt_1800_run;\
loopResponse_1486: loopResponse_1486_flag = 1;\
goto merge_stmt_1800_run;\
merge_stmt_1800_run: ;\

#define _command_generator_phi_stmt_1801_c_macro_ if(loopResponse_1486_flag) {\
bit_vector_cast_to_bit_vector(0, &(R), &(next_R));\
}\
else {\
bit_vector_cast_to_bit_vector(0, &(R), &(ZERO_8));\
}\
;

#define _command_generator_phi_stmt_1805_c_macro_ __declare_static_bit_vector(slice_1808,32);\
if(loopResponse_1486_flag) {\
bit_vector_cast_to_bit_vector(0, &(tempResponse), &(nextResponse));\
}\
else {\
__declare_static_bit_vector(slice_1808,32);\
bit_vector_slice(&(response__new_responsebits), &(slice_1808), 8);\
bit_vector_cast_to_bit_vector(0, &(tempResponse), &(slice_1808));\
}\
;
;

#define _command_generator_merge_stmt_1800_c_postamble_macro_ loopResponse_1486_flag = 0;\
merge_stmt_1800_entry_flag = 0;

#define _command_generator_call_stmt_1816_c_macro_ __declare_static_bit_vector(konst_1811,8);\
bit_vector_clear(&konst_1811);\
konst_1811.val.byte_array[0] = 16;\
__declare_static_bit_vector(ADD_u8_u8_1813,8);\
__declare_static_bit_vector(slice_1815,8);\
bit_vector_clear(&konst_1811);\
konst_1811.val.byte_array[0] = 16;\
bit_vector_plus( &(konst_1811), &(R), &(ADD_u8_u8_1813));\
bit_vector_slice(&(tempResponse), &(slice_1815), 0);\
_writeSDHCRegisters_( &(ADD_u8_u8_1813),  &(slice_1815));\
;

#define _command_generator_assign_stmt_1823_c_macro_ __declare_static_bit_vector(slice_1821,24);\
__declare_static_bit_vector(CONCAT_u8_u32_1822,32);\
bit_vector_slice(&(tempResponse), &(slice_1821), 8);\
bit_vector_concatenate( &(ZERO_8), &(slice_1821), &(CONCAT_u8_u32_1822));\
bit_vector_cast_to_bit_vector(0, &(nextResponse), &(CONCAT_u8_u32_1822));\
;

#define _command_generator_assign_stmt_1828_c_macro_ __declare_static_bit_vector(konst_1826,8);\
bit_vector_clear(&konst_1826);\
konst_1826.val.byte_array[0] = 1;\
__declare_static_bit_vector(ADD_u8_u8_1827,8);\
bit_vector_clear(&konst_1826);\
konst_1826.val.byte_array[0] = 1;\
bit_vector_plus( &(R), &(konst_1826), &(ADD_u8_u8_1827));\
bit_vector_cast_to_bit_vector(0, &(next_R), &(ADD_u8_u8_1827));\
;

#define _command_generator_call_stmt_1837_c_macro_ __declare_static_bit_vector(konst_1835,8);\
bit_vector_clear(&konst_1835);\
konst_1835.val.byte_array[0] = 36;\
bit_vector_clear(&konst_1835);\
konst_1835.val.byte_array[0] = 36;\
_readSDHCRegisters_( &(konst_1835), &(tempPresentState2));\
;

#define _command_generator_assign_stmt_1844_c_macro_ __declare_static_bit_vector(konst_1840,8);\
bit_vector_clear(&konst_1840);\
konst_1840.val.byte_array[0] = 1;\
__declare_static_bit_vector(LSHR_u8_u8_1841,8);\
__declare_static_bit_vector(konst_1842,8);\
bit_vector_clear(&konst_1842);\
konst_1842.val.byte_array[0] = 1;\
__declare_static_bit_vector(SHL_u8_u8_1843,8);\
bit_vector_clear(&konst_1840);\
konst_1840.val.byte_array[0] = 1;\
bit_vector_shift_right(0, &(tempPresentState2), &(konst_1840), &(LSHR_u8_u8_1841));\
bit_vector_clear(&konst_1842);\
konst_1842.val.byte_array[0] = 1;\
bit_vector_shift_left(&(LSHR_u8_u8_1841), &(konst_1842), &(SHL_u8_u8_1843));\
bit_vector_cast_to_bit_vector(0, &(presentState2), &(SHL_u8_u8_1843));\
;

#define _command_generator_call_stmt_1847_c_macro_ __declare_static_bit_vector(konst_1845,8);\
bit_vector_clear(&konst_1845);\
konst_1845.val.byte_array[0] = 48;\
bit_vector_clear(&konst_1845);\
konst_1845.val.byte_array[0] = 48;\
_readSDHCRegisters_( &(konst_1845), &(normalInterrupt2));\
;

#define _command_generator_call_stmt_1850_c_macro_ __declare_static_bit_vector(konst_1848,8);\
bit_vector_clear(&konst_1848);\
konst_1848.val.byte_array[0] = 36;\
bit_vector_clear(&konst_1848);\
konst_1848.val.byte_array[0] = 36;\
_writeSDHCRegisters_( &(konst_1848),  &(presentState2));\
;

#define _command_generator_assign_stmt_1859_c_macro_ __declare_static_bit_vector(konst_1853,48);\
bit_vector_clear(&konst_1853);\
__declare_static_bit_vector(BITSEL_u48_u1_1854,1);\
__declare_static_bit_vector(konst_1856,8);\
bit_vector_clear(&konst_1856);\
konst_1856.val.byte_array[0] = 4;\
__declare_static_bit_vector(type_cast_1857,8);\
bit_vector_clear(&type_cast_1857);\
type_cast_1857.val.byte_array[0] = 4;\
__declare_static_bit_vector(MUX_1858,8);\
bit_vector_clear(&konst_1853);\
bit_vector_bitsel( &(response__new_responsebits), &(konst_1853), &(BITSEL_u48_u1_1854));\
if (has_undefined_bit(&BITSEL_u48_u1_1854)) {fprintf(stderr, "Error: variable BITSEL_u48_u1_1854 has undefined value (%s) at test point.\n", to_string(&BITSEL_u48_u1_1854));assert(0);} \
if(bit_vector_to_uint64(0, &BITSEL_u48_u1_1854)){bit_vector_cast_to_bit_vector(0, &(MUX_1858), &(ZERO_8));\
}else {bit_vector_clear(&konst_1856);\
konst_1856.val.byte_array[0] = 4;\
bit_vector_bitcast_to_bit_vector( &(type_cast_1857), &(konst_1856));\
bit_vector_cast_to_bit_vector(0, &(MUX_1858), &(type_cast_1857));\
}bit_vector_cast_to_bit_vector(0, &(commandEndBitError), &(MUX_1858));\
;

#define _command_generator_assign_stmt_1864_c_macro_ __declare_static_bit_vector(konst_1862,8);\
bit_vector_clear(&konst_1862);\
konst_1862.val.byte_array[0] = 1;\
__declare_static_bit_vector(OR_u8_u8_1863,8);\
bit_vector_clear(&konst_1862);\
konst_1862.val.byte_array[0] = 1;\
bit_vector_or(&(normalInterrupt2), &(konst_1862), &(OR_u8_u8_1863));\
bit_vector_cast_to_bit_vector(0, &(normalInterruptStatusVar_2), &(OR_u8_u8_1863));\
;

#define _command_generator_assign_stmt_1871_c_macro_ __declare_static_bit_vector(OR_u8_u8_1868,8);\
__declare_static_bit_vector(OR_u8_u8_1870,8);\
bit_vector_or(&(CommandIndexError), &(CommandCRCError), &(OR_u8_u8_1868));\
bit_vector_or(&(OR_u8_u8_1868), &(commandEndBitError), &(OR_u8_u8_1870));\
bit_vector_cast_to_bit_vector(0, &(errorInterruptStatusVar_2), &(OR_u8_u8_1870));\
;

#define _command_generator_assign_stmt_1880_c_macro_ write_bit_vector_to_pipe("responseEnable",&(ONE_1));\
;

#define _command_generator_assign_stmt_1883_c_macro_ write_bit_vector_to_pipe("bigResponseEnable",&(ONE_1));\
;

#define _command_generator_branch_block_stmt_1884_c_export_decl_macro_ __declare_static_bit_vector(bigResponse__new_bigresponsebits,136);\
__declare_static_bit_vector(J,8);\
__declare_static_bit_vector(old_bigresponsebits,136);\
__declare_static_bit_vector(next_J,8);\
__declare_static_bit_vector(bigresponsebit,1);\
__declare_static_bit_vector(bigresponsebits,136);\
__declare_static_bit_vector(new_bigresponsebits,136);\


#define _command_generator_merge_stmt_1886_c_preamble_macro_ uint8_t merge_stmt_1886_entry_flag;\
merge_stmt_1886_entry_flag = do_while_entry_flag;\
goto merge_stmt_1886_run;\
merge_stmt_1886_run: ;\

#define _command_generator_phi_stmt_1887_c_macro_ __declare_static_bit_vector(konst_1889,8);\
bit_vector_clear(&konst_1889);\
__declare_static_bit_vector(type_cast_1890,8);\
bit_vector_clear(&type_cast_1890);\
if(do_while_loopback_flag) {\
bit_vector_cast_to_bit_vector(0, &(J), &(next_J));\
}\
else {\
__declare_static_bit_vector(konst_1889,8);\
bit_vector_clear(&konst_1889);\
__declare_static_bit_vector(type_cast_1890,8);\
bit_vector_clear(&type_cast_1890);\
bit_vector_clear(&konst_1889);\
bit_vector_bitcast_to_bit_vector( &(type_cast_1890), &(konst_1889));\
bit_vector_cast_to_bit_vector(0, &(J), &(type_cast_1890));\
}\
;

#define _command_generator_phi_stmt_1892_c_macro_ __declare_static_bit_vector(konst_1895,136);\
bit_vector_clear(&konst_1895);\
__declare_static_bit_vector(type_cast_1896,136);\
bit_vector_clear(&type_cast_1896);\
if(do_while_loopback_flag) {\
bit_vector_cast_to_bit_vector(0, &(old_bigresponsebits), &(new_bigresponsebits));\
}\
else {\
__declare_static_bit_vector(konst_1895,136);\
bit_vector_clear(&konst_1895);\
__declare_static_bit_vector(type_cast_1896,136);\
bit_vector_clear(&type_cast_1896);\
bit_vector_clear(&konst_1895);\
bit_vector_bitcast_to_bit_vector( &(type_cast_1896), &(konst_1895));\
bit_vector_cast_to_bit_vector(0, &(old_bigresponsebits), &(type_cast_1896));\
}\
;
;

#define _command_generator_merge_stmt_1886_c_postamble_macro_ merge_stmt_1886_entry_flag = 0;

#define _command_generator_assign_stmt_1903_c_macro_ __declare_static_bit_vector(konst_1901,8);\
bit_vector_clear(&konst_1901);\
konst_1901.val.byte_array[0] = 1;\
__declare_static_bit_vector(ADD_u8_u8_1902,8);\
bit_vector_clear(&konst_1901);\
konst_1901.val.byte_array[0] = 1;\
bit_vector_plus( &(J), &(konst_1901), &(ADD_u8_u8_1902));\
bit_vector_cast_to_bit_vector(0, &(next_J), &(ADD_u8_u8_1902));\
;

#define _command_generator_assign_stmt_1906_c_macro_ __declare_static_bit_vector(RPIPE_responseRx_1905,1);\
read_bit_vector_from_pipe("responseRx",&(RPIPE_responseRx_1905));\
bit_vector_cast_to_bit_vector(0, &(bigresponsebit), &(RPIPE_responseRx_1905));\
;

#define _command_generator_assign_stmt_1913_c_macro_ __declare_static_bit_vector(konst_1909,135);\
bit_vector_clear(&konst_1909);\
__declare_static_bit_vector(type_cast_1910,135);\
bit_vector_clear(&type_cast_1910);\
__declare_static_bit_vector(CONCAT_u135_u136_1912,136);\
bit_vector_clear(&konst_1909);\
bit_vector_bitcast_to_bit_vector( &(type_cast_1910), &(konst_1909));\
bit_vector_concatenate( &(type_cast_1910), &(bigresponsebit), &(CONCAT_u135_u136_1912));\
bit_vector_cast_to_bit_vector(0, &(bigresponsebits), &(CONCAT_u135_u136_1912));\
;

#define _command_generator_assign_stmt_1920_c_macro_ __declare_static_bit_vector(konst_1916,136);\
bit_vector_clear(&konst_1916);\
konst_1916.val.byte_array[0] = 1;\
__declare_static_bit_vector(SHL_u136_u136_1917,136);\
__declare_static_bit_vector(OR_u136_u136_1919,136);\
bit_vector_clear(&konst_1916);\
konst_1916.val.byte_array[0] = 1;\
bit_vector_shift_left(&(old_bigresponsebits), &(konst_1916), &(SHL_u136_u136_1917));\
bit_vector_or(&(SHL_u136_u136_1917), &(bigresponsebits), &(OR_u136_u136_1919));\
bit_vector_cast_to_bit_vector(0, &(new_bigresponsebits), &(OR_u136_u136_1919));\
;
;

#define _command_generator_branch_block_stmt_1884_c_export_apply_macro_ bit_vector_cast_to_bit_vector(0, &(bigResponse__new_bigresponsebits), &(new_bigresponsebits));\
;

#define _command_generator_assign_stmt_1928_c_macro_ write_bit_vector_to_pipe("responseEnable",&(ZERO_1));\
;

#define _command_generator_assign_stmt_1931_c_macro_ write_bit_vector_to_pipe("bigResponseEnable",&(ZERO_1));\
;

#define _command_generator_stmt_1933_c_macro_ uint32_t _command_generator_stmt_1933_c_macro___print_counter= get_file_print_lock(__report_log_file__);if(__report_log_file__ != NULL) fprintf(__report_log_file__,"[%u]gen_comm>\t%s\n",_command_generator_stmt_1933_c_macro___print_counter,"f");if(__report_log_file__ != NULL) {fprintf(__report_log_file__,"[%u]gen_comm>\t\t%s\t\t",_command_generator_stmt_1933_c_macro___print_counter,"bigResponse");fprintf(__report_log_file__, ":= 0x%s\n",to_hex_string(&(bigResponse__new_bigresponsebits)));fflush (__report_log_file__);}release_file_print_lock(__report_log_file__);;

#define _command_generator_assign_stmt_1937_c_macro_ __declare_static_bit_vector(slice_1936,7);\
bit_vector_slice(&(bigResponse__new_bigresponsebits), &(slice_1936), 1);\
bit_vector_cast_to_bit_vector(0, &(CID_CRC), &(slice_1936));\
;

#define _command_generator_call_stmt_1947_c_macro_ __declare_static_bit_vector(slice_1945,120);\
bit_vector_slice(&(bigResponse__new_bigresponsebits), &(slice_1945), 8);\
_generate_crc_7_120_( &(slice_1945), &(R2_CRC));\
;

#define _command_generator_assign_stmt_1955_c_macro_ __declare_static_bit_vector(EQ_u7_u1_1951,1);\
__declare_static_bit_vector(konst_1952,8);\
bit_vector_clear(&konst_1952);\
__declare_static_bit_vector(konst_1953,8);\
bit_vector_clear(&konst_1953);\
konst_1953.val.byte_array[0] = 2;\
__declare_static_bit_vector(MUX_1954,8);\
bit_vector_equal(0, &(CID_CRC), &(R2_CRC), &(EQ_u7_u1_1951));\
if (has_undefined_bit(&EQ_u7_u1_1951)) {fprintf(stderr, "Error: variable EQ_u7_u1_1951 has undefined value (%s) at test point.\n", to_string(&EQ_u7_u1_1951));assert(0);} \
if(bit_vector_to_uint64(0, &EQ_u7_u1_1951)){bit_vector_clear(&konst_1952);\
bit_vector_cast_to_bit_vector(0, &(MUX_1954), &(konst_1952));\
}else {bit_vector_clear(&konst_1953);\
konst_1953.val.byte_array[0] = 2;\
bit_vector_cast_to_bit_vector(0, &(MUX_1954), &(konst_1953));\
}bit_vector_cast_to_bit_vector(0, &(CommandCRCError1), &(MUX_1954));\
;

#define _command_generator_assign_stmt_1965_c_macro_ __declare_static_bit_vector(konst_1959,136);\
bit_vector_clear(&konst_1959);\
__declare_static_bit_vector(BITSEL_u136_u1_1960,1);\
__declare_static_bit_vector(konst_1962,8);\
bit_vector_clear(&konst_1962);\
konst_1962.val.byte_array[0] = 4;\
__declare_static_bit_vector(type_cast_1963,8);\
bit_vector_clear(&type_cast_1963);\
type_cast_1963.val.byte_array[0] = 4;\
__declare_static_bit_vector(MUX_1964,8);\
bit_vector_clear(&konst_1959);\
bit_vector_bitsel( &(bigResponse__new_bigresponsebits), &(konst_1959), &(BITSEL_u136_u1_1960));\
if (has_undefined_bit(&BITSEL_u136_u1_1960)) {fprintf(stderr, "Error: variable BITSEL_u136_u1_1960 has undefined value (%s) at test point.\n", to_string(&BITSEL_u136_u1_1960));assert(0);} \
if(bit_vector_to_uint64(0, &BITSEL_u136_u1_1960)){bit_vector_cast_to_bit_vector(0, &(MUX_1964), &(ZERO_8));\
}else {bit_vector_clear(&konst_1962);\
konst_1962.val.byte_array[0] = 4;\
bit_vector_bitcast_to_bit_vector( &(type_cast_1963), &(konst_1962));\
bit_vector_cast_to_bit_vector(0, &(MUX_1964), &(type_cast_1963));\
}bit_vector_cast_to_bit_vector(0, &(commandEndBitError1), &(MUX_1964));\
;

#define _command_generator_assign_stmt_1970_c_macro_ __declare_static_bit_vector(OR_u8_u8_1969,8);\
bit_vector_or(&(CommandCRCError1), &(commandEndBitError1), &(OR_u8_u8_1969));\
bit_vector_cast_to_bit_vector(0, &(errorInterruptStatusVar_3), &(OR_u8_u8_1969));\
;

#define _command_generator_branch_block_stmt_1971_c_export_decl_macro_ __declare_static_bit_vector(k,8);\
__declare_static_bit_vector(temp,120);\
__declare_static_bit_vector(address,8);\
__declare_static_bit_vector(next_temp,120);\
__declare_static_bit_vector(next_k,8);\


#define _command_generator_merge_stmt_1973_c_preamble_macro_ uint8_t merge_stmt_1973_entry_flag;\
merge_stmt_1973_entry_flag = do_while_entry_flag;\
goto merge_stmt_1973_run;\
merge_stmt_1973_run: ;\

#define _command_generator_phi_stmt_1974_c_macro_ __declare_static_bit_vector(konst_1976,8);\
bit_vector_clear(&konst_1976);\
__declare_static_bit_vector(type_cast_1977,8);\
bit_vector_clear(&type_cast_1977);\
if(do_while_loopback_flag) {\
bit_vector_cast_to_bit_vector(0, &(k), &(next_k));\
}\
else {\
__declare_static_bit_vector(konst_1976,8);\
bit_vector_clear(&konst_1976);\
__declare_static_bit_vector(type_cast_1977,8);\
bit_vector_clear(&type_cast_1977);\
bit_vector_clear(&konst_1976);\
bit_vector_bitcast_to_bit_vector( &(type_cast_1977), &(konst_1976));\
bit_vector_cast_to_bit_vector(0, &(k), &(type_cast_1977));\
}\
;

#define _command_generator_phi_stmt_1979_c_macro_ __declare_static_bit_vector(slice_1982,120);\
if(do_while_loopback_flag) {\
bit_vector_cast_to_bit_vector(0, &(temp), &(next_temp));\
}\
else {\
__declare_static_bit_vector(slice_1982,120);\
bit_vector_slice(&(new_bigresponsebits), &(slice_1982), 8);\
bit_vector_cast_to_bit_vector(0, &(temp), &(slice_1982));\
}\
;
;

#define _command_generator_merge_stmt_1973_c_postamble_macro_ merge_stmt_1973_entry_flag = 0;

#define _command_generator_assign_stmt_1989_c_macro_ __declare_static_bit_vector(konst_1986,8);\
bit_vector_clear(&konst_1986);\
konst_1986.val.byte_array[0] = 16;\
__declare_static_bit_vector(ADD_u8_u8_1988,8);\
bit_vector_clear(&konst_1986);\
konst_1986.val.byte_array[0] = 16;\
bit_vector_plus( &(konst_1986), &(k), &(ADD_u8_u8_1988));\
bit_vector_cast_to_bit_vector(0, &(address), &(ADD_u8_u8_1988));\
;

#define _command_generator_call_stmt_1993_c_macro_ __declare_static_bit_vector(slice_1992,8);\
bit_vector_slice(&(temp), &(slice_1992), 0);\
_writeSDHCRegisters_( &(address),  &(slice_1992));\
;

#define _command_generator_assign_stmt_1998_c_macro_ __declare_static_bit_vector(konst_1996,120);\
bit_vector_clear(&konst_1996);\
konst_1996.val.byte_array[0] = 8;\
__declare_static_bit_vector(LSHR_u120_u120_1997,120);\
bit_vector_clear(&konst_1996);\
konst_1996.val.byte_array[0] = 8;\
bit_vector_shift_right(0, &(temp), &(konst_1996), &(LSHR_u120_u120_1997));\
bit_vector_cast_to_bit_vector(0, &(next_temp), &(LSHR_u120_u120_1997));\
;

#define _command_generator_assign_stmt_2003_c_macro_ __declare_static_bit_vector(konst_2001,8);\
bit_vector_clear(&konst_2001);\
konst_2001.val.byte_array[0] = 1;\
__declare_static_bit_vector(ADD_u8_u8_2002,8);\
bit_vector_clear(&konst_2001);\
konst_2001.val.byte_array[0] = 1;\
bit_vector_plus( &(k), &(konst_2001), &(ADD_u8_u8_2002));\
bit_vector_cast_to_bit_vector(0, &(next_k), &(ADD_u8_u8_2002));\
;
;

#define _command_generator_branch_block_stmt_1971_c_export_apply_macro_ ;

#define _command_generator_call_stmt_2011_c_macro_ __declare_static_bit_vector(konst_2009,8);\
bit_vector_clear(&konst_2009);\
konst_2009.val.byte_array[0] = 36;\
bit_vector_clear(&konst_2009);\
konst_2009.val.byte_array[0] = 36;\
_readSDHCRegisters_( &(konst_2009), &(tempPresentState3));\
;

#define _command_generator_assign_stmt_2018_c_macro_ __declare_static_bit_vector(konst_2014,8);\
bit_vector_clear(&konst_2014);\
konst_2014.val.byte_array[0] = 1;\
__declare_static_bit_vector(LSHR_u8_u8_2015,8);\
__declare_static_bit_vector(konst_2016,8);\
bit_vector_clear(&konst_2016);\
konst_2016.val.byte_array[0] = 1;\
__declare_static_bit_vector(SHL_u8_u8_2017,8);\
bit_vector_clear(&konst_2014);\
konst_2014.val.byte_array[0] = 1;\
bit_vector_shift_right(0, &(tempPresentState3), &(konst_2014), &(LSHR_u8_u8_2015));\
bit_vector_clear(&konst_2016);\
konst_2016.val.byte_array[0] = 1;\
bit_vector_shift_left(&(LSHR_u8_u8_2015), &(konst_2016), &(SHL_u8_u8_2017));\
bit_vector_cast_to_bit_vector(0, &(presentState3), &(SHL_u8_u8_2017));\
;

#define _command_generator_call_stmt_2021_c_macro_ __declare_static_bit_vector(konst_2019,8);\
bit_vector_clear(&konst_2019);\
konst_2019.val.byte_array[0] = 48;\
bit_vector_clear(&konst_2019);\
konst_2019.val.byte_array[0] = 48;\
_readSDHCRegisters_( &(konst_2019), &(normalInterrupt3));\
;

#define _command_generator_call_stmt_2024_c_macro_ __declare_static_bit_vector(konst_2022,8);\
bit_vector_clear(&konst_2022);\
konst_2022.val.byte_array[0] = 36;\
bit_vector_clear(&konst_2022);\
konst_2022.val.byte_array[0] = 36;\
_writeSDHCRegisters_( &(konst_2022),  &(presentState3));\
;

#define _command_generator_assign_stmt_2029_c_macro_ __declare_static_bit_vector(konst_2027,8);\
bit_vector_clear(&konst_2027);\
konst_2027.val.byte_array[0] = 1;\
__declare_static_bit_vector(OR_u8_u8_2028,8);\
bit_vector_clear(&konst_2027);\
konst_2027.val.byte_array[0] = 1;\
bit_vector_or(&(normalInterrupt3), &(konst_2027), &(OR_u8_u8_2028));\
bit_vector_cast_to_bit_vector(0, &(normalInterruptStatusVar_3), &(OR_u8_u8_2028));\
;

#define _command_generator_call_stmt_2038_c_macro_ __declare_static_bit_vector(konst_2036,8);\
bit_vector_clear(&konst_2036);\
konst_2036.val.byte_array[0] = 36;\
bit_vector_clear(&konst_2036);\
konst_2036.val.byte_array[0] = 36;\
_readSDHCRegisters_( &(konst_2036), &(tempPresentState1));\
;

#define _command_generator_assign_stmt_2045_c_macro_ __declare_static_bit_vector(konst_2041,8);\
bit_vector_clear(&konst_2041);\
konst_2041.val.byte_array[0] = 1;\
__declare_static_bit_vector(LSHR_u8_u8_2042,8);\
__declare_static_bit_vector(konst_2043,8);\
bit_vector_clear(&konst_2043);\
konst_2043.val.byte_array[0] = 1;\
__declare_static_bit_vector(SHL_u8_u8_2044,8);\
bit_vector_clear(&konst_2041);\
konst_2041.val.byte_array[0] = 1;\
bit_vector_shift_right(0, &(tempPresentState1), &(konst_2041), &(LSHR_u8_u8_2042));\
bit_vector_clear(&konst_2043);\
konst_2043.val.byte_array[0] = 1;\
bit_vector_shift_left(&(LSHR_u8_u8_2042), &(konst_2043), &(SHL_u8_u8_2044));\
bit_vector_cast_to_bit_vector(0, &(presentState1), &(SHL_u8_u8_2044));\
;

#define _command_generator_call_stmt_2048_c_macro_ __declare_static_bit_vector(konst_2046,8);\
bit_vector_clear(&konst_2046);\
konst_2046.val.byte_array[0] = 48;\
bit_vector_clear(&konst_2046);\
konst_2046.val.byte_array[0] = 48;\
_readSDHCRegisters_( &(konst_2046), &(normalInterrupt1));\
;

#define _command_generator_call_stmt_2051_c_macro_ __declare_static_bit_vector(konst_2049,8);\
bit_vector_clear(&konst_2049);\
konst_2049.val.byte_array[0] = 36;\
bit_vector_clear(&konst_2049);\
konst_2049.val.byte_array[0] = 36;\
_writeSDHCRegisters_( &(konst_2049),  &(presentState1));\
;

#define _command_generator_assign_stmt_2056_c_macro_ __declare_static_bit_vector(konst_2054,8);\
bit_vector_clear(&konst_2054);\
konst_2054.val.byte_array[0] = 1;\
__declare_static_bit_vector(OR_u8_u8_2055,8);\
bit_vector_clear(&konst_2054);\
konst_2054.val.byte_array[0] = 1;\
bit_vector_or(&(normalInterrupt1), &(konst_2054), &(OR_u8_u8_2055));\
bit_vector_cast_to_bit_vector(0, &(normalInterruptStatusVar_1), &(OR_u8_u8_2055));\
;

#define _command_generator_assign_stmt_2059_c_macro_ bit_vector_cast_to_bit_vector(0, &(errorInterruptStatusVar_1), &(ZERO_8));\
;

#define _command_generator_merge_stmt_2064_c_preamble_macro_ uint8_t merge_stmt_2064_entry_flag;\
merge_stmt_2064_entry_flag = 1;\
uint8_t normalInterruptResponse1_1486_flag = 0;\
uint8_t normalInterruptResponse2_1486_flag = 0;\
uint8_t normalInterruptResponse3_1486_flag = 0;\
goto merge_stmt_2064_run;\
normalInterruptResponse1_1486: normalInterruptResponse1_1486_flag = 1;\
normalInterruptResponse2_1486_flag = 0;\
normalInterruptResponse3_1486_flag = 0;\
goto merge_stmt_2064_run;\
normalInterruptResponse2_1486: normalInterruptResponse2_1486_flag = 1;\
normalInterruptResponse1_1486_flag = 0;\
normalInterruptResponse3_1486_flag = 0;\
goto merge_stmt_2064_run;\
normalInterruptResponse3_1486: normalInterruptResponse3_1486_flag = 1;\
normalInterruptResponse1_1486_flag = 0;\
normalInterruptResponse2_1486_flag = 0;\
goto merge_stmt_2064_run;\
merge_stmt_2064_run: ;\

#define _command_generator_phi_stmt_2065_c_macro_ if(normalInterruptResponse1_1486_flag) {\
bit_vector_cast_to_bit_vector(0, &(normalInterruptStatusVar1), &(normalInterruptStatusVar_1));\
}\
 else if(normalInterruptResponse2_1486_flag) {\
bit_vector_cast_to_bit_vector(0, &(normalInterruptStatusVar1), &(normalInterruptStatusVar_2));\
}\
 else if(normalInterruptResponse3_1486_flag) {\
bit_vector_cast_to_bit_vector(0, &(normalInterruptStatusVar1), &(normalInterruptStatusVar_3));\
}\
;

#define _command_generator_phi_stmt_2070_c_macro_ if(normalInterruptResponse1_1486_flag) {\
bit_vector_cast_to_bit_vector(0, &(errorInterruptStatusVar1), &(errorInterruptStatusVar_1));\
}\
 else if(normalInterruptResponse2_1486_flag) {\
bit_vector_cast_to_bit_vector(0, &(errorInterruptStatusVar1), &(errorInterruptStatusVar_2));\
}\
 else if(normalInterruptResponse3_1486_flag) {\
bit_vector_cast_to_bit_vector(0, &(errorInterruptStatusVar1), &(errorInterruptStatusVar_3));\
}\
;
;

#define _command_generator_merge_stmt_2064_c_postamble_macro_ normalInterruptResponse1_1486_flag = 0;\
normalInterruptResponse2_1486_flag = 0;\
normalInterruptResponse3_1486_flag = 0;\
merge_stmt_2064_entry_flag = 0;

#define _command_generator_call_stmt_2090_c_macro_ __declare_static_bit_vector(konst_2088,8);\
bit_vector_clear(&konst_2088);\
konst_2088.val.byte_array[0] = 12;\
bit_vector_clear(&konst_2088);\
konst_2088.val.byte_array[0] = 12;\
_readSDHCRegisters_( &(konst_2088), &(tempTransfer));\
;

#define _command_generator_assign_stmt_2096_c_macro_ __declare_static_bit_vector(konst_2093,8);\
bit_vector_clear(&konst_2093);\
konst_2093.val.byte_array[0] = 32;\
__declare_static_bit_vector(AND_u8_u8_2094,8);\
__declare_static_bit_vector(BITREDUCEOR_u8_u1_2095,1);\
bit_vector_clear(&konst_2093);\
konst_2093.val.byte_array[0] = 32;\
bit_vector_and(&(tempTransfer), &(konst_2093), &(AND_u8_u8_2094));\
bit_vector_reduce_or( &(AND_u8_u8_2094), &(BITREDUCEOR_u8_u1_2095));\
bit_vector_cast_to_bit_vector(0, &(singleMultipleReadBlock), &(BITREDUCEOR_u8_u1_2095));\
;

#define _command_generator_call_stmt_2099_c_macro_ _dataRx_( &(singleMultipleReadBlock), &(dataErrorInterruptStatusVar1));\
;

#define _command_generator_assign_stmt_2102_c_macro_ bit_vector_cast_to_bit_vector(0, &(dataRxEnrty1), &(ONE_1));\
;

#define _command_generator_assign_stmt_2105_c_macro_ bit_vector_cast_to_bit_vector(0, &(dataRxEnrty2), &(ZERO_1));\
;

#define _command_generator_assign_stmt_2112_c_macro_ __declare_static_bit_vector(konst_2108,8);\
bit_vector_clear(&konst_2108);\
konst_2108.val.byte_array[0] = 2;\
__declare_static_bit_vector(type_cast_2109,8);\
bit_vector_clear(&type_cast_2109);\
type_cast_2109.val.byte_array[0] = 2;\
__declare_static_bit_vector(MUX_2111,8);\
if (has_undefined_bit(&singleMultipleReadBlock)) {fprintf(stderr, "Error: variable singleMultipleReadBlock has undefined value (%s) at test point.\n", to_string(&singleMultipleReadBlock));assert(0);} \
if(bit_vector_to_uint64(0, &singleMultipleReadBlock)){bit_vector_clear(&konst_2108);\
konst_2108.val.byte_array[0] = 2;\
bit_vector_bitcast_to_bit_vector( &(type_cast_2109), &(konst_2108));\
bit_vector_cast_to_bit_vector(0, &(MUX_2111), &(type_cast_2109));\
}else {bit_vector_cast_to_bit_vector(0, &(MUX_2111), &(ZERO_8));\
}bit_vector_cast_to_bit_vector(0, &(transferCompleteData), &(MUX_2111));\
;

#define _command_generator_merge_stmt_2117_c_preamble_macro_ uint8_t merge_stmt_2117_entry_flag;\
merge_stmt_2117_entry_flag = 1;\
uint8_t loopBlock1_1486_flag = 0;\
goto merge_stmt_2117_run;\
loopBlock1_1486: loopBlock1_1486_flag = 1;\
goto merge_stmt_2117_run;\
merge_stmt_2117_run: ;\

#define _command_generator_phi_stmt_2118_c_macro_ if(loopBlock1_1486_flag) {\
bit_vector_cast_to_bit_vector(0, &(B), &(next_B));\
}\
else {\
bit_vector_cast_to_bit_vector(0, &(B), &(ONE_8));\
}\
;

#define _command_generator_phi_stmt_2122_c_macro_ __declare_static_bit_vector(konst_2124,16);\
bit_vector_clear(&konst_2124);\
__declare_static_bit_vector(type_cast_2125,16);\
bit_vector_clear(&type_cast_2125);\
if(loopBlock1_1486_flag) {\
bit_vector_cast_to_bit_vector(0, &(readNewBlockCount), &(readBlockCount));\
}\
else {\
__declare_static_bit_vector(konst_2124,16);\
bit_vector_clear(&konst_2124);\
__declare_static_bit_vector(type_cast_2125,16);\
bit_vector_clear(&type_cast_2125);\
bit_vector_clear(&konst_2124);\
bit_vector_bitcast_to_bit_vector( &(type_cast_2125), &(konst_2124));\
bit_vector_cast_to_bit_vector(0, &(readNewBlockCount), &(type_cast_2125));\
}\
;
;

#define _command_generator_merge_stmt_2117_c_postamble_macro_ loopBlock1_1486_flag = 0;\
merge_stmt_2117_entry_flag = 0;

#define _command_generator_call_stmt_2132_c_macro_ __declare_static_bit_vector(konst_2128,8);\
bit_vector_clear(&konst_2128);\
konst_2128.val.byte_array[0] = 6;\
__declare_static_bit_vector(ADD_u8_u8_2130,8);\
bit_vector_clear(&konst_2128);\
konst_2128.val.byte_array[0] = 6;\
bit_vector_plus( &(konst_2128), &(B), &(ADD_u8_u8_2130));\
_readSDHCRegisters_( &(ADD_u8_u8_2130), &(readnewBlockCountTemp));\
;

#define _command_generator_assign_stmt_2138_c_macro_ __declare_static_bit_vector(slice_2135,8);\
__declare_static_bit_vector(CONCAT_u8_u16_2137,16);\
bit_vector_slice(&(readNewBlockCount), &(slice_2135), 0);\
bit_vector_concatenate( &(slice_2135), &(readnewBlockCountTemp), &(CONCAT_u8_u16_2137));\
bit_vector_cast_to_bit_vector(0, &(readBlockCount), &(CONCAT_u8_u16_2137));\
;

#define _command_generator_assign_stmt_2143_c_macro_ __declare_static_bit_vector(konst_2141,8);\
bit_vector_clear(&konst_2141);\
konst_2141.val.byte_array[0] = 1;\
__declare_static_bit_vector(SUB_u8_u8_2142,8);\
bit_vector_clear(&konst_2141);\
konst_2141.val.byte_array[0] = 1;\
bit_vector_minus( &(B), &(konst_2141), &(SUB_u8_u8_2142));\
bit_vector_cast_to_bit_vector(0, &(next_B), &(SUB_u8_u8_2142));\
;

#define _command_generator_assign_stmt_2154_c_macro_ __declare_static_bit_vector(konst_2152,16);\
bit_vector_clear(&konst_2152);\
konst_2152.val.byte_array[0] = 1;\
__declare_static_bit_vector(SUB_u16_u16_2153,16);\
bit_vector_clear(&konst_2152);\
konst_2152.val.byte_array[0] = 1;\
bit_vector_minus( &(readBlockCount), &(konst_2152), &(SUB_u16_u16_2153));\
bit_vector_cast_to_bit_vector(0, &(newReadBlockCount), &(SUB_u16_u16_2153));\
;

#define _command_generator_call_stmt_2158_c_macro_ __declare_static_bit_vector(konst_2155,8);\
bit_vector_clear(&konst_2155);\
konst_2155.val.byte_array[0] = 7;\
__declare_static_bit_vector(slice_2157,8);\
bit_vector_clear(&konst_2155);\
konst_2155.val.byte_array[0] = 7;\
bit_vector_slice(&(newReadBlockCount), &(slice_2157), 8);\
_writeSDHCRegisters_( &(konst_2155),  &(slice_2157));\
;

#define _command_generator_call_stmt_2162_c_macro_ __declare_static_bit_vector(konst_2159,8);\
bit_vector_clear(&konst_2159);\
konst_2159.val.byte_array[0] = 6;\
__declare_static_bit_vector(slice_2161,8);\
bit_vector_clear(&konst_2159);\
konst_2159.val.byte_array[0] = 6;\
bit_vector_slice(&(newReadBlockCount), &(slice_2161), 0);\
_writeSDHCRegisters_( &(konst_2159),  &(slice_2161));\
;

#define _command_generator_assign_stmt_2173_c_macro_ __declare_static_bit_vector(konst_2167,2);\
bit_vector_clear(&konst_2167);\
konst_2167.val.byte_array[0] = 3;\
__declare_static_bit_vector(EQ_u2_u1_2168,1);\
__declare_static_bit_vector(konst_2169,8);\
bit_vector_clear(&konst_2169);\
konst_2169.val.byte_array[0] = 2;\
__declare_static_bit_vector(type_cast_2170,8);\
bit_vector_clear(&type_cast_2170);\
type_cast_2170.val.byte_array[0] = 2;\
__declare_static_bit_vector(MUX_2172,8);\
bit_vector_clear(&konst_2167);\
konst_2167.val.byte_array[0] = 3;\
bit_vector_equal(0, &(response_type), &(konst_2167), &(EQ_u2_u1_2168));\
if (has_undefined_bit(&EQ_u2_u1_2168)) {fprintf(stderr, "Error: variable EQ_u2_u1_2168 has undefined value (%s) at test point.\n", to_string(&EQ_u2_u1_2168));assert(0);} \
if(bit_vector_to_uint64(0, &EQ_u2_u1_2168)){bit_vector_clear(&konst_2169);\
konst_2169.val.byte_array[0] = 2;\
bit_vector_bitcast_to_bit_vector( &(type_cast_2170), &(konst_2169));\
bit_vector_cast_to_bit_vector(0, &(MUX_2172), &(type_cast_2170));\
}else {bit_vector_cast_to_bit_vector(0, &(MUX_2172), &(transferCompleteData));\
}bit_vector_cast_to_bit_vector(0, &(dataTransferComplete), &(MUX_2172));\
;

#define _command_generator_assign_stmt_2177_c_macro_ bit_vector_cast_to_bit_vector(0, &(normalInterruptStatusVar2), &(ZERO_8));\
;

#define _command_generator_assign_stmt_2180_c_macro_ bit_vector_cast_to_bit_vector(0, &(errorInterruptStatusVar2), &(ZERO_8));\
;
;

#define _command_generator_branch_block_stmt_1486_c_export_apply_macro_ ;

#define _command_generator_inner_outarg_prep_macro__ bit_vector_cast_to_bit_vector(0, &((*__pnormalInterruptStatusVar1)), &(normalInterruptStatusVar1));\
bit_vector_cast_to_bit_vector(0, &((*__pnormalInterruptStatusVar2)), &(normalInterruptStatusVar2));\
bit_vector_cast_to_bit_vector(0, &((*__perrorInterruptStatusVar1)), &(errorInterruptStatusVar1));\
bit_vector_cast_to_bit_vector(0, &((*__perrorInterruptStatusVar2)), &(errorInterruptStatusVar2));\
bit_vector_cast_to_bit_vector(0, &((*__pdataErrorInterruptStatusVar1)), &(dataErrorInterruptStatusVar1));\
bit_vector_cast_to_bit_vector(0, &((*__pdataTransferComplete)), &(dataTransferComplete));\
;

#define _command_generator_outer_arg_decl_macro__ __declare_static_bit_vector(__normalInterruptStatusVar1, 8);\
__declare_static_bit_vector(__normalInterruptStatusVar2, 8);\
__declare_static_bit_vector(__errorInterruptStatusVar1, 8);\
__declare_static_bit_vector(__errorInterruptStatusVar2, 8);\
__declare_static_bit_vector(__dataErrorInterruptStatusVar1, 8);\
__declare_static_bit_vector(__dataTransferComplete, 8);\
;

#define _command_generator_outer_op_xfer_macro__  *normalInterruptStatusVar1 =  bit_vector_to_uint64(0, &__normalInterruptStatusVar1);\
 *normalInterruptStatusVar2 =  bit_vector_to_uint64(0, &__normalInterruptStatusVar2);\
 *errorInterruptStatusVar1 =  bit_vector_to_uint64(0, &__errorInterruptStatusVar1);\
 *errorInterruptStatusVar2 =  bit_vector_to_uint64(0, &__errorInterruptStatusVar2);\
 *dataErrorInterruptStatusVar1 =  bit_vector_to_uint64(0, &__dataErrorInterruptStatusVar1);\
 *dataTransferComplete =  bit_vector_to_uint64(0, &__dataTransferComplete);\
;

#define _dataRx_inner_inarg_prep_macro__ __declare_static_bit_vector(singleMultipleReadBlock,1);\
bit_vector_cast_to_bit_vector(0, &(singleMultipleReadBlock), &((*__psingleMultipleReadBlock)));\
__declare_static_bit_vector(dataErrorInterruptStatusVar1,8);\

#define _dataRx_branch_block_stmt_743_c_export_decl_macro_ __declare_static_bit_vector(presentState1Var,8);\
__declare_static_bit_vector(presentState0Var,8);\
__declare_static_bit_vector(stopBitError0,1);\
__declare_static_bit_vector(J_0,13);\
__declare_static_bit_vector(CRC_16_0,16);\
__declare_static_bit_vector(tempData0,1024);\
__declare_static_bit_vector(inv0,1);\
__declare_static_bit_vector(nextCRC16_0,16);\
__declare_static_bit_vector(nextTempData0,1024);\
__declare_static_bit_vector(next_J_0,13);\
__declare_static_bit_vector(crcError0,1);\
__declare_static_bit_vector(stopBitError1,1);\
__declare_static_bit_vector(J_1,13);\
__declare_static_bit_vector(CRC_16_1,16);\
__declare_static_bit_vector(tempData1,1024);\
__declare_static_bit_vector(inv1,1);\
__declare_static_bit_vector(nextCRC16_1,16);\
__declare_static_bit_vector(nextTempData1,1024);\
__declare_static_bit_vector(next_J_1,13);\
__declare_static_bit_vector(crcError1,1);\
__declare_static_bit_vector(stopBitError2,1);\
__declare_static_bit_vector(J_2,13);\
__declare_static_bit_vector(CRC_16_2,16);\
__declare_static_bit_vector(tempData2,1024);\
__declare_static_bit_vector(inv2,1);\
__declare_static_bit_vector(nextCRC16_2,16);\
__declare_static_bit_vector(nextTempData2,1024);\
__declare_static_bit_vector(next_J_2,13);\
__declare_static_bit_vector(crcError2,1);\
__declare_static_bit_vector(stopBitError3,1);\
__declare_static_bit_vector(J_3,13);\
__declare_static_bit_vector(CRC_16_3,16);\
__declare_static_bit_vector(tempData3,1024);\
__declare_static_bit_vector(inv3,1);\
__declare_static_bit_vector(nextCRC16_3,16);\
__declare_static_bit_vector(nextTempData3,1024);\
__declare_static_bit_vector(next_J_3,13);\
__declare_static_bit_vector(crcError3,1);\
__declare_static_bit_vector(B,10);\
__declare_static_bit_vector(dataForBuffer0,1024);\
__declare_static_bit_vector(dataForBuffer1,1024);\
__declare_static_bit_vector(dataForBuffer2,1024);\
__declare_static_bit_vector(dataForBuffer3,1024);\
__declare_static_bit_vector(nextDataForBuffer0,1024);\
__declare_static_bit_vector(nextDataForBuffer1,1024);\
__declare_static_bit_vector(nextDataForBuffer2,1024);\
__declare_static_bit_vector(nextDataForBuffer3,1024);\
__declare_static_bit_vector(next_B,10);\
__declare_static_bit_vector(stopBitError_Final,1);\
__declare_static_bit_vector(crcError_Final,1);\
__declare_static_bit_vector(dataErrorInterruptStatusVar1_4,8);\
__declare_static_bit_vector(startBit,1);\
__declare_static_bit_vector(K,5);\
__declare_static_bit_vector(currentCRC,16);\
__declare_static_bit_vector(nextCRC,16);\
__declare_static_bit_vector(next_K,5);\
__declare_static_bit_vector(stopBit,1);\
__declare_static_bit_vector(stopBitError,1);\
__declare_static_bit_vector(J,13);\
__declare_static_bit_vector(CRC_16,16);\
__declare_static_bit_vector(tempData,4096);\
__declare_static_bit_vector(inv,1);\
__declare_static_bit_vector(nextCRC16,16);\
__declare_static_bit_vector(nextTempData,4096);\
__declare_static_bit_vector(next_J,13);\
__declare_static_bit_vector(crcError,1);\
__declare_static_bit_vector(dataRxEnrty,1);\
bit_vector_clear(&dataRxEnrty);\
dataRxEnrty.val.byte_array[0] = 1;\
__declare_static_bit_vector(dataErrorInterruptStatusVar1_0,8);\


#define _dataRx_assign_stmt_747_c_macro_ __declare_static_bit_vector(konst_745,32);\
bit_vector_clear(&konst_745);\
konst_745.val.byte_array[0] = 37;\
bit_vector_clear(&konst_745);\
konst_745.val.byte_array[0] = 37;\
bit_vector_cast_to_bit_vector(0, &(presentState1Var), &((sdhcRegisters[bit_vector_to_uint64(0, &konst_745)])));\
;

#define _dataRx_assign_stmt_751_c_macro_ __declare_static_bit_vector(konst_749,32);\
bit_vector_clear(&konst_749);\
konst_749.val.byte_array[0] = 36;\
bit_vector_clear(&konst_749);\
konst_749.val.byte_array[0] = 36;\
bit_vector_cast_to_bit_vector(0, &(presentState0Var), &((sdhcRegisters[bit_vector_to_uint64(0, &konst_749)])));\
;

#define _dataRx_parallel_block_stmt_757_c_export_decl_macro_ __declare_static_bit_vector(dat0__dat0,1024);\
__declare_static_bit_vector(dat1__dat1,1024);\
__declare_static_bit_vector(dat2__dat2,1024);\
__declare_static_bit_vector(dat3__dat3,1024);\
__declare_static_bit_vector(nextCRC_0__nextCRC_0,16);\
__declare_static_bit_vector(nextCRC_1__nextCRC_1,16);\
__declare_static_bit_vector(nextCRC_2__nextCRC_2,16);\
__declare_static_bit_vector(nextCRC_3__nextCRC_3,16);\
__declare_static_bit_vector(stopBit0__stopBit0,1);\
__declare_static_bit_vector(stopBit1__stopBit1,1);\
__declare_static_bit_vector(stopBit2__stopBit2,1);\
__declare_static_bit_vector(stopBit3__stopBit3,1);\
__declare_static_bit_vector(dat0,1024);\
__declare_static_bit_vector(nextCRC_0,16);\
__declare_static_bit_vector(stopBit0,1);\
__declare_static_bit_vector(dat1,1024);\
__declare_static_bit_vector(nextCRC_1,16);\
__declare_static_bit_vector(stopBit1,1);\
__declare_static_bit_vector(dat2,1024);\
__declare_static_bit_vector(nextCRC_2,16);\
__declare_static_bit_vector(stopBit2,1);\
__declare_static_bit_vector(dat3,1024);\
__declare_static_bit_vector(nextCRC_3,16);\
__declare_static_bit_vector(stopBit3,1);\


#define _dataRx_call_stmt_761_c_macro_ _recvdat0_(&(dat0), &(nextCRC_0), &(stopBit0));\
;

#define _dataRx_call_stmt_765_c_macro_ _recvdat1_(&(dat1), &(nextCRC_1), &(stopBit1));\
;

#define _dataRx_call_stmt_769_c_macro_ _recvdat2_(&(dat2), &(nextCRC_2), &(stopBit2));\
;

#define _dataRx_call_stmt_773_c_macro_ _recvdat3_(&(dat3), &(nextCRC_3), &(stopBit3));\
;
;

#define _dataRx_parallel_block_stmt_757_c_export_apply_macro_ bit_vector_cast_to_bit_vector(0, &(dat0__dat0), &(dat0));\
bit_vector_cast_to_bit_vector(0, &(dat1__dat1), &(dat1));\
bit_vector_cast_to_bit_vector(0, &(dat2__dat2), &(dat2));\
bit_vector_cast_to_bit_vector(0, &(dat3__dat3), &(dat3));\
bit_vector_cast_to_bit_vector(0, &(nextCRC_0__nextCRC_0), &(nextCRC_0));\
bit_vector_cast_to_bit_vector(0, &(nextCRC_1__nextCRC_1), &(nextCRC_1));\
bit_vector_cast_to_bit_vector(0, &(nextCRC_2__nextCRC_2), &(nextCRC_2));\
bit_vector_cast_to_bit_vector(0, &(nextCRC_3__nextCRC_3), &(nextCRC_3));\
bit_vector_cast_to_bit_vector(0, &(stopBit0__stopBit0), &(stopBit0));\
bit_vector_cast_to_bit_vector(0, &(stopBit1__stopBit1), &(stopBit1));\
bit_vector_cast_to_bit_vector(0, &(stopBit2__stopBit2), &(stopBit2));\
bit_vector_cast_to_bit_vector(0, &(stopBit3__stopBit3), &(stopBit3));\
;

#define _dataRx_assign_stmt_779_c_macro_ __declare_static_bit_vector(konst_777,1);\
bit_vector_clear(&konst_777);\
__declare_static_bit_vector(EQ_u1_u1_778,1);\
bit_vector_clear(&konst_777);\
bit_vector_equal(0, &(stopBit0__stopBit0), &(konst_777), &(EQ_u1_u1_778));\
bit_vector_cast_to_bit_vector(0, &(stopBitError0), &(EQ_u1_u1_778));\
;

#define _dataRx_merge_stmt_781_c_preamble_macro_ uint8_t merge_stmt_781_entry_flag;\
merge_stmt_781_entry_flag = do_while_entry_flag;\
goto merge_stmt_781_run;\
merge_stmt_781_run: ;\

#define _dataRx_phi_stmt_782_c_macro_ __declare_static_bit_vector(konst_786,13);\
bit_vector_clear(&konst_786);\
__declare_static_bit_vector(type_cast_787,13);\
bit_vector_clear(&type_cast_787);\
if(do_while_loopback_flag) {\
bit_vector_cast_to_bit_vector(0, &(J_0), &(next_J_0));\
}\
else {\
__declare_static_bit_vector(konst_786,13);\
bit_vector_clear(&konst_786);\
__declare_static_bit_vector(type_cast_787,13);\
bit_vector_clear(&type_cast_787);\
bit_vector_clear(&konst_786);\
bit_vector_bitcast_to_bit_vector( &(type_cast_787), &(konst_786));\
bit_vector_cast_to_bit_vector(0, &(J_0), &(type_cast_787));\
}\
;

#define _dataRx_phi_stmt_788_c_macro_ __declare_static_bit_vector(konst_790,16);\
bit_vector_clear(&konst_790);\
__declare_static_bit_vector(type_cast_791,16);\
bit_vector_clear(&type_cast_791);\
if(do_while_loopback_flag) {\
bit_vector_cast_to_bit_vector(0, &(CRC_16_0), &(nextCRC16_0));\
}\
else {\
__declare_static_bit_vector(konst_790,16);\
bit_vector_clear(&konst_790);\
__declare_static_bit_vector(type_cast_791,16);\
bit_vector_clear(&type_cast_791);\
bit_vector_clear(&konst_790);\
bit_vector_bitcast_to_bit_vector( &(type_cast_791), &(konst_790));\
bit_vector_cast_to_bit_vector(0, &(CRC_16_0), &(type_cast_791));\
}\
;

#define _dataRx_phi_stmt_793_c_macro_ if(do_while_loopback_flag) {\
bit_vector_cast_to_bit_vector(0, &(tempData0), &(nextTempData0));\
}\
else {\
bit_vector_cast_to_bit_vector(0, &(tempData0), &(dat0__dat0));\
}\
;
;

#define _dataRx_merge_stmt_781_c_postamble_macro_ merge_stmt_781_entry_flag = 0;

#define _dataRx_assign_stmt_806_c_macro_ __declare_static_bit_vector(konst_800,1024);\
bit_vector_clear(&konst_800);\
konst_800.val.byte_array[0] = 255;\
konst_800.val.byte_array[1] = 3;\
__declare_static_bit_vector(BITSEL_u1024_u1_801,1);\
__declare_static_bit_vector(konst_803,16);\
bit_vector_clear(&konst_803);\
konst_803.val.byte_array[0] = 15;\
__declare_static_bit_vector(BITSEL_u16_u1_804,1);\
__declare_static_bit_vector(XOR_u1_u1_805,1);\
bit_vector_clear(&konst_800);\
konst_800.val.byte_array[0] = 255;\
konst_800.val.byte_array[1] = 3;\
bit_vector_bitsel( &(tempData0), &(konst_800), &(BITSEL_u1024_u1_801));\
bit_vector_clear(&konst_803);\
konst_803.val.byte_array[0] = 15;\
bit_vector_bitsel( &(CRC_16_0), &(konst_803), &(BITSEL_u16_u1_804));\
bit_vector_xor(&(BITSEL_u1024_u1_801), &(BITSEL_u16_u1_804), &(XOR_u1_u1_805));\
bit_vector_cast_to_bit_vector(0, &(inv0), &(XOR_u1_u1_805));\
;

#define _dataRx_assign_stmt_832_c_macro_ __declare_static_bit_vector(slice_810,3);\
__declare_static_bit_vector(konst_812,16);\
bit_vector_clear(&konst_812);\
konst_812.val.byte_array[0] = 11;\
__declare_static_bit_vector(BITSEL_u16_u1_813,1);\
__declare_static_bit_vector(XOR_u1_u1_815,1);\
__declare_static_bit_vector(CONCAT_u3_u4_816,4);\
__declare_static_bit_vector(slice_818,6);\
__declare_static_bit_vector(CONCAT_u4_u10_819,10);\
__declare_static_bit_vector(konst_821,16);\
bit_vector_clear(&konst_821);\
konst_821.val.byte_array[0] = 4;\
__declare_static_bit_vector(BITSEL_u16_u1_822,1);\
__declare_static_bit_vector(XOR_u1_u1_824,1);\
__declare_static_bit_vector(slice_827,4);\
__declare_static_bit_vector(CONCAT_u1_u5_828,5);\
__declare_static_bit_vector(CONCAT_u5_u6_830,6);\
__declare_static_bit_vector(CONCAT_u10_u16_831,16);\
bit_vector_slice(&(CRC_16_0), &(slice_810), 12);\
bit_vector_clear(&konst_812);\
konst_812.val.byte_array[0] = 11;\
bit_vector_bitsel( &(CRC_16_0), &(konst_812), &(BITSEL_u16_u1_813));\
bit_vector_xor(&(BITSEL_u16_u1_813), &(inv0), &(XOR_u1_u1_815));\
bit_vector_concatenate( &(slice_810), &(XOR_u1_u1_815), &(CONCAT_u3_u4_816));\
bit_vector_slice(&(CRC_16_0), &(slice_818), 5);\
bit_vector_concatenate( &(CONCAT_u3_u4_816), &(slice_818), &(CONCAT_u4_u10_819));\
bit_vector_clear(&konst_821);\
konst_821.val.byte_array[0] = 4;\
bit_vector_bitsel( &(CRC_16_0), &(konst_821), &(BITSEL_u16_u1_822));\
bit_vector_xor(&(BITSEL_u16_u1_822), &(inv0), &(XOR_u1_u1_824));\
bit_vector_slice(&(CRC_16_0), &(slice_827), 0);\
bit_vector_concatenate( &(XOR_u1_u1_824), &(slice_827), &(CONCAT_u1_u5_828));\
bit_vector_concatenate( &(CONCAT_u1_u5_828), &(inv0), &(CONCAT_u5_u6_830));\
bit_vector_concatenate( &(CONCAT_u4_u10_819), &(CONCAT_u5_u6_830), &(CONCAT_u10_u16_831));\
bit_vector_cast_to_bit_vector(0, &(nextCRC16_0), &(CONCAT_u10_u16_831));\
;

#define _dataRx_assign_stmt_837_c_macro_ __declare_static_bit_vector(konst_835,1024);\
bit_vector_clear(&konst_835);\
konst_835.val.byte_array[0] = 1;\
__declare_static_bit_vector(SHL_u1024_u1024_836,1024);\
bit_vector_clear(&konst_835);\
konst_835.val.byte_array[0] = 1;\
bit_vector_shift_left(&(tempData0), &(konst_835), &(SHL_u1024_u1024_836));\
bit_vector_cast_to_bit_vector(0, &(nextTempData0), &(SHL_u1024_u1024_836));\
;

#define _dataRx_assign_stmt_842_c_macro_ __declare_static_bit_vector(konst_840,13);\
bit_vector_clear(&konst_840);\
konst_840.val.byte_array[0] = 1;\
__declare_static_bit_vector(ADD_u13_u13_841,13);\
bit_vector_clear(&konst_840);\
konst_840.val.byte_array[0] = 1;\
bit_vector_plus( &(J_0), &(konst_840), &(ADD_u13_u13_841));\
bit_vector_cast_to_bit_vector(0, &(next_J_0), &(ADD_u13_u13_841));\
;

#define _dataRx_assign_stmt_851_c_macro_ __declare_static_bit_vector(NEQ_u16_u1_850,1);\
bit_vector_not_equal(0, &(nextCRC_0__nextCRC_0), &(nextCRC16_0), &NEQ_u16_u1_850);\
bit_vector_cast_to_bit_vector(0, &(crcError0), &(NEQ_u16_u1_850));\
;

#define _dataRx_assign_stmt_856_c_macro_ __declare_static_bit_vector(konst_854,1);\
bit_vector_clear(&konst_854);\
__declare_static_bit_vector(EQ_u1_u1_855,1);\
bit_vector_clear(&konst_854);\
bit_vector_equal(0, &(stopBit1__stopBit1), &(konst_854), &(EQ_u1_u1_855));\
bit_vector_cast_to_bit_vector(0, &(stopBitError1), &(EQ_u1_u1_855));\
;

#define _dataRx_merge_stmt_858_c_preamble_macro_ uint8_t merge_stmt_858_entry_flag;\
merge_stmt_858_entry_flag = do_while_entry_flag;\
goto merge_stmt_858_run;\
merge_stmt_858_run: ;\

#define _dataRx_phi_stmt_859_c_macro_ __declare_static_bit_vector(konst_861,13);\
bit_vector_clear(&konst_861);\
__declare_static_bit_vector(type_cast_862,13);\
bit_vector_clear(&type_cast_862);\
if(do_while_loopback_flag) {\
bit_vector_cast_to_bit_vector(0, &(J_1), &(next_J_1));\
}\
else {\
__declare_static_bit_vector(konst_861,13);\
bit_vector_clear(&konst_861);\
__declare_static_bit_vector(type_cast_862,13);\
bit_vector_clear(&type_cast_862);\
bit_vector_clear(&konst_861);\
bit_vector_bitcast_to_bit_vector( &(type_cast_862), &(konst_861));\
bit_vector_cast_to_bit_vector(0, &(J_1), &(type_cast_862));\
}\
;

#define _dataRx_phi_stmt_864_c_macro_ __declare_static_bit_vector(konst_866,16);\
bit_vector_clear(&konst_866);\
__declare_static_bit_vector(type_cast_867,16);\
bit_vector_clear(&type_cast_867);\
if(do_while_loopback_flag) {\
bit_vector_cast_to_bit_vector(0, &(CRC_16_1), &(nextCRC16_1));\
}\
else {\
__declare_static_bit_vector(konst_866,16);\
bit_vector_clear(&konst_866);\
__declare_static_bit_vector(type_cast_867,16);\
bit_vector_clear(&type_cast_867);\
bit_vector_clear(&konst_866);\
bit_vector_bitcast_to_bit_vector( &(type_cast_867), &(konst_866));\
bit_vector_cast_to_bit_vector(0, &(CRC_16_1), &(type_cast_867));\
}\
;

#define _dataRx_phi_stmt_869_c_macro_ if(do_while_loopback_flag) {\
bit_vector_cast_to_bit_vector(0, &(tempData1), &(nextTempData1));\
}\
else {\
bit_vector_cast_to_bit_vector(0, &(tempData1), &(dat1__dat1));\
}\
;
;

#define _dataRx_merge_stmt_858_c_postamble_macro_ merge_stmt_858_entry_flag = 0;

#define _dataRx_assign_stmt_882_c_macro_ __declare_static_bit_vector(konst_876,1024);\
bit_vector_clear(&konst_876);\
konst_876.val.byte_array[0] = 255;\
konst_876.val.byte_array[1] = 3;\
__declare_static_bit_vector(BITSEL_u1024_u1_877,1);\
__declare_static_bit_vector(konst_879,16);\
bit_vector_clear(&konst_879);\
konst_879.val.byte_array[0] = 15;\
__declare_static_bit_vector(BITSEL_u16_u1_880,1);\
__declare_static_bit_vector(XOR_u1_u1_881,1);\
bit_vector_clear(&konst_876);\
konst_876.val.byte_array[0] = 255;\
konst_876.val.byte_array[1] = 3;\
bit_vector_bitsel( &(tempData1), &(konst_876), &(BITSEL_u1024_u1_877));\
bit_vector_clear(&konst_879);\
konst_879.val.byte_array[0] = 15;\
bit_vector_bitsel( &(CRC_16_1), &(konst_879), &(BITSEL_u16_u1_880));\
bit_vector_xor(&(BITSEL_u1024_u1_877), &(BITSEL_u16_u1_880), &(XOR_u1_u1_881));\
bit_vector_cast_to_bit_vector(0, &(inv1), &(XOR_u1_u1_881));\
;

#define _dataRx_assign_stmt_906_c_macro_ __declare_static_bit_vector(slice_885,3);\
__declare_static_bit_vector(konst_887,16);\
bit_vector_clear(&konst_887);\
konst_887.val.byte_array[0] = 11;\
__declare_static_bit_vector(BITSEL_u16_u1_888,1);\
__declare_static_bit_vector(XOR_u1_u1_890,1);\
__declare_static_bit_vector(CONCAT_u3_u4_891,4);\
__declare_static_bit_vector(slice_893,6);\
__declare_static_bit_vector(CONCAT_u4_u10_894,10);\
__declare_static_bit_vector(konst_896,16);\
bit_vector_clear(&konst_896);\
konst_896.val.byte_array[0] = 4;\
__declare_static_bit_vector(BITSEL_u16_u1_897,1);\
__declare_static_bit_vector(XOR_u1_u1_899,1);\
__declare_static_bit_vector(slice_901,4);\
__declare_static_bit_vector(CONCAT_u1_u5_902,5);\
__declare_static_bit_vector(CONCAT_u5_u6_904,6);\
__declare_static_bit_vector(CONCAT_u10_u16_905,16);\
bit_vector_slice(&(CRC_16_1), &(slice_885), 12);\
bit_vector_clear(&konst_887);\
konst_887.val.byte_array[0] = 11;\
bit_vector_bitsel( &(CRC_16_1), &(konst_887), &(BITSEL_u16_u1_888));\
bit_vector_xor(&(BITSEL_u16_u1_888), &(inv1), &(XOR_u1_u1_890));\
bit_vector_concatenate( &(slice_885), &(XOR_u1_u1_890), &(CONCAT_u3_u4_891));\
bit_vector_slice(&(CRC_16_1), &(slice_893), 5);\
bit_vector_concatenate( &(CONCAT_u3_u4_891), &(slice_893), &(CONCAT_u4_u10_894));\
bit_vector_clear(&konst_896);\
konst_896.val.byte_array[0] = 4;\
bit_vector_bitsel( &(CRC_16_1), &(konst_896), &(BITSEL_u16_u1_897));\
bit_vector_xor(&(BITSEL_u16_u1_897), &(inv1), &(XOR_u1_u1_899));\
bit_vector_slice(&(CRC_16_1), &(slice_901), 0);\
bit_vector_concatenate( &(XOR_u1_u1_899), &(slice_901), &(CONCAT_u1_u5_902));\
bit_vector_concatenate( &(CONCAT_u1_u5_902), &(inv1), &(CONCAT_u5_u6_904));\
bit_vector_concatenate( &(CONCAT_u4_u10_894), &(CONCAT_u5_u6_904), &(CONCAT_u10_u16_905));\
bit_vector_cast_to_bit_vector(0, &(nextCRC16_1), &(CONCAT_u10_u16_905));\
;

#define _dataRx_assign_stmt_911_c_macro_ __declare_static_bit_vector(konst_909,1024);\
bit_vector_clear(&konst_909);\
konst_909.val.byte_array[0] = 1;\
__declare_static_bit_vector(SHL_u1024_u1024_910,1024);\
bit_vector_clear(&konst_909);\
konst_909.val.byte_array[0] = 1;\
bit_vector_shift_left(&(tempData1), &(konst_909), &(SHL_u1024_u1024_910));\
bit_vector_cast_to_bit_vector(0, &(nextTempData1), &(SHL_u1024_u1024_910));\
;

#define _dataRx_assign_stmt_916_c_macro_ __declare_static_bit_vector(konst_914,13);\
bit_vector_clear(&konst_914);\
konst_914.val.byte_array[0] = 1;\
__declare_static_bit_vector(ADD_u13_u13_915,13);\
bit_vector_clear(&konst_914);\
konst_914.val.byte_array[0] = 1;\
bit_vector_plus( &(J_1), &(konst_914), &(ADD_u13_u13_915));\
bit_vector_cast_to_bit_vector(0, &(next_J_1), &(ADD_u13_u13_915));\
;

#define _dataRx_assign_stmt_925_c_macro_ __declare_static_bit_vector(NEQ_u16_u1_924,1);\
bit_vector_not_equal(0, &(nextCRC_1__nextCRC_1), &(nextCRC16_1), &NEQ_u16_u1_924);\
bit_vector_cast_to_bit_vector(0, &(crcError1), &(NEQ_u16_u1_924));\
;

#define _dataRx_assign_stmt_930_c_macro_ __declare_static_bit_vector(konst_928,1);\
bit_vector_clear(&konst_928);\
__declare_static_bit_vector(EQ_u1_u1_929,1);\
bit_vector_clear(&konst_928);\
bit_vector_equal(0, &(stopBit2__stopBit2), &(konst_928), &(EQ_u1_u1_929));\
bit_vector_cast_to_bit_vector(0, &(stopBitError2), &(EQ_u1_u1_929));\
;

#define _dataRx_merge_stmt_932_c_preamble_macro_ uint8_t merge_stmt_932_entry_flag;\
merge_stmt_932_entry_flag = do_while_entry_flag;\
goto merge_stmt_932_run;\
merge_stmt_932_run: ;\

#define _dataRx_phi_stmt_933_c_macro_ __declare_static_bit_vector(konst_935,13);\
bit_vector_clear(&konst_935);\
__declare_static_bit_vector(type_cast_936,13);\
bit_vector_clear(&type_cast_936);\
if(do_while_loopback_flag) {\
bit_vector_cast_to_bit_vector(0, &(J_2), &(next_J_2));\
}\
else {\
__declare_static_bit_vector(konst_935,13);\
bit_vector_clear(&konst_935);\
__declare_static_bit_vector(type_cast_936,13);\
bit_vector_clear(&type_cast_936);\
bit_vector_clear(&konst_935);\
bit_vector_bitcast_to_bit_vector( &(type_cast_936), &(konst_935));\
bit_vector_cast_to_bit_vector(0, &(J_2), &(type_cast_936));\
}\
;

#define _dataRx_phi_stmt_938_c_macro_ __declare_static_bit_vector(konst_940,16);\
bit_vector_clear(&konst_940);\
__declare_static_bit_vector(type_cast_941,16);\
bit_vector_clear(&type_cast_941);\
if(do_while_loopback_flag) {\
bit_vector_cast_to_bit_vector(0, &(CRC_16_2), &(nextCRC16_2));\
}\
else {\
__declare_static_bit_vector(konst_940,16);\
bit_vector_clear(&konst_940);\
__declare_static_bit_vector(type_cast_941,16);\
bit_vector_clear(&type_cast_941);\
bit_vector_clear(&konst_940);\
bit_vector_bitcast_to_bit_vector( &(type_cast_941), &(konst_940));\
bit_vector_cast_to_bit_vector(0, &(CRC_16_2), &(type_cast_941));\
}\
;

#define _dataRx_phi_stmt_943_c_macro_ if(do_while_loopback_flag) {\
bit_vector_cast_to_bit_vector(0, &(tempData2), &(nextTempData2));\
}\
else {\
bit_vector_cast_to_bit_vector(0, &(tempData2), &(dat2__dat2));\
}\
;
;

#define _dataRx_merge_stmt_932_c_postamble_macro_ merge_stmt_932_entry_flag = 0;

#define _dataRx_assign_stmt_956_c_macro_ __declare_static_bit_vector(konst_950,1024);\
bit_vector_clear(&konst_950);\
konst_950.val.byte_array[0] = 255;\
konst_950.val.byte_array[1] = 3;\
__declare_static_bit_vector(BITSEL_u1024_u1_951,1);\
__declare_static_bit_vector(konst_953,16);\
bit_vector_clear(&konst_953);\
konst_953.val.byte_array[0] = 15;\
__declare_static_bit_vector(BITSEL_u16_u1_954,1);\
__declare_static_bit_vector(XOR_u1_u1_955,1);\
bit_vector_clear(&konst_950);\
konst_950.val.byte_array[0] = 255;\
konst_950.val.byte_array[1] = 3;\
bit_vector_bitsel( &(tempData2), &(konst_950), &(BITSEL_u1024_u1_951));\
bit_vector_clear(&konst_953);\
konst_953.val.byte_array[0] = 15;\
bit_vector_bitsel( &(CRC_16_2), &(konst_953), &(BITSEL_u16_u1_954));\
bit_vector_xor(&(BITSEL_u1024_u1_951), &(BITSEL_u16_u1_954), &(XOR_u1_u1_955));\
bit_vector_cast_to_bit_vector(0, &(inv2), &(XOR_u1_u1_955));\
;

#define _dataRx_assign_stmt_980_c_macro_ __declare_static_bit_vector(slice_959,3);\
__declare_static_bit_vector(konst_961,16);\
bit_vector_clear(&konst_961);\
konst_961.val.byte_array[0] = 11;\
__declare_static_bit_vector(BITSEL_u16_u1_962,1);\
__declare_static_bit_vector(XOR_u1_u1_964,1);\
__declare_static_bit_vector(CONCAT_u3_u4_965,4);\
__declare_static_bit_vector(slice_967,6);\
__declare_static_bit_vector(CONCAT_u4_u10_968,10);\
__declare_static_bit_vector(konst_970,16);\
bit_vector_clear(&konst_970);\
konst_970.val.byte_array[0] = 4;\
__declare_static_bit_vector(BITSEL_u16_u1_971,1);\
__declare_static_bit_vector(XOR_u1_u1_973,1);\
__declare_static_bit_vector(slice_975,4);\
__declare_static_bit_vector(CONCAT_u1_u5_976,5);\
__declare_static_bit_vector(CONCAT_u5_u6_978,6);\
__declare_static_bit_vector(CONCAT_u10_u16_979,16);\
bit_vector_slice(&(CRC_16_2), &(slice_959), 12);\
bit_vector_clear(&konst_961);\
konst_961.val.byte_array[0] = 11;\
bit_vector_bitsel( &(CRC_16_2), &(konst_961), &(BITSEL_u16_u1_962));\
bit_vector_xor(&(BITSEL_u16_u1_962), &(inv2), &(XOR_u1_u1_964));\
bit_vector_concatenate( &(slice_959), &(XOR_u1_u1_964), &(CONCAT_u3_u4_965));\
bit_vector_slice(&(CRC_16_2), &(slice_967), 5);\
bit_vector_concatenate( &(CONCAT_u3_u4_965), &(slice_967), &(CONCAT_u4_u10_968));\
bit_vector_clear(&konst_970);\
konst_970.val.byte_array[0] = 4;\
bit_vector_bitsel( &(CRC_16_2), &(konst_970), &(BITSEL_u16_u1_971));\
bit_vector_xor(&(BITSEL_u16_u1_971), &(inv2), &(XOR_u1_u1_973));\
bit_vector_slice(&(CRC_16_2), &(slice_975), 0);\
bit_vector_concatenate( &(XOR_u1_u1_973), &(slice_975), &(CONCAT_u1_u5_976));\
bit_vector_concatenate( &(CONCAT_u1_u5_976), &(inv2), &(CONCAT_u5_u6_978));\
bit_vector_concatenate( &(CONCAT_u4_u10_968), &(CONCAT_u5_u6_978), &(CONCAT_u10_u16_979));\
bit_vector_cast_to_bit_vector(0, &(nextCRC16_2), &(CONCAT_u10_u16_979));\
;

#define _dataRx_assign_stmt_985_c_macro_ __declare_static_bit_vector(konst_983,1024);\
bit_vector_clear(&konst_983);\
konst_983.val.byte_array[0] = 1;\
__declare_static_bit_vector(SHL_u1024_u1024_984,1024);\
bit_vector_clear(&konst_983);\
konst_983.val.byte_array[0] = 1;\
bit_vector_shift_left(&(tempData2), &(konst_983), &(SHL_u1024_u1024_984));\
bit_vector_cast_to_bit_vector(0, &(nextTempData2), &(SHL_u1024_u1024_984));\
;

#define _dataRx_assign_stmt_990_c_macro_ __declare_static_bit_vector(konst_988,13);\
bit_vector_clear(&konst_988);\
konst_988.val.byte_array[0] = 1;\
__declare_static_bit_vector(ADD_u13_u13_989,13);\
bit_vector_clear(&konst_988);\
konst_988.val.byte_array[0] = 1;\
bit_vector_plus( &(J_2), &(konst_988), &(ADD_u13_u13_989));\
bit_vector_cast_to_bit_vector(0, &(next_J_2), &(ADD_u13_u13_989));\
;

#define _dataRx_assign_stmt_999_c_macro_ __declare_static_bit_vector(NEQ_u16_u1_998,1);\
bit_vector_not_equal(0, &(nextCRC_2__nextCRC_2), &(nextCRC16_2), &NEQ_u16_u1_998);\
bit_vector_cast_to_bit_vector(0, &(crcError2), &(NEQ_u16_u1_998));\
;

#define _dataRx_assign_stmt_1004_c_macro_ __declare_static_bit_vector(konst_1002,1);\
bit_vector_clear(&konst_1002);\
__declare_static_bit_vector(EQ_u1_u1_1003,1);\
bit_vector_clear(&konst_1002);\
bit_vector_equal(0, &(stopBit3__stopBit3), &(konst_1002), &(EQ_u1_u1_1003));\
bit_vector_cast_to_bit_vector(0, &(stopBitError3), &(EQ_u1_u1_1003));\
;

#define _dataRx_merge_stmt_1006_c_preamble_macro_ uint8_t merge_stmt_1006_entry_flag;\
merge_stmt_1006_entry_flag = do_while_entry_flag;\
goto merge_stmt_1006_run;\
merge_stmt_1006_run: ;\

#define _dataRx_phi_stmt_1007_c_macro_ __declare_static_bit_vector(konst_1009,13);\
bit_vector_clear(&konst_1009);\
__declare_static_bit_vector(type_cast_1010,13);\
bit_vector_clear(&type_cast_1010);\
if(do_while_loopback_flag) {\
bit_vector_cast_to_bit_vector(0, &(J_3), &(next_J_3));\
}\
else {\
__declare_static_bit_vector(konst_1009,13);\
bit_vector_clear(&konst_1009);\
__declare_static_bit_vector(type_cast_1010,13);\
bit_vector_clear(&type_cast_1010);\
bit_vector_clear(&konst_1009);\
bit_vector_bitcast_to_bit_vector( &(type_cast_1010), &(konst_1009));\
bit_vector_cast_to_bit_vector(0, &(J_3), &(type_cast_1010));\
}\
;

#define _dataRx_phi_stmt_1012_c_macro_ __declare_static_bit_vector(konst_1014,16);\
bit_vector_clear(&konst_1014);\
__declare_static_bit_vector(type_cast_1015,16);\
bit_vector_clear(&type_cast_1015);\
if(do_while_loopback_flag) {\
bit_vector_cast_to_bit_vector(0, &(CRC_16_3), &(nextCRC16_3));\
}\
else {\
__declare_static_bit_vector(konst_1014,16);\
bit_vector_clear(&konst_1014);\
__declare_static_bit_vector(type_cast_1015,16);\
bit_vector_clear(&type_cast_1015);\
bit_vector_clear(&konst_1014);\
bit_vector_bitcast_to_bit_vector( &(type_cast_1015), &(konst_1014));\
bit_vector_cast_to_bit_vector(0, &(CRC_16_3), &(type_cast_1015));\
}\
;

#define _dataRx_phi_stmt_1017_c_macro_ if(do_while_loopback_flag) {\
bit_vector_cast_to_bit_vector(0, &(tempData3), &(nextTempData3));\
}\
else {\
bit_vector_cast_to_bit_vector(0, &(tempData3), &(dat3__dat3));\
}\
;
;

#define _dataRx_merge_stmt_1006_c_postamble_macro_ merge_stmt_1006_entry_flag = 0;

#define _dataRx_assign_stmt_1030_c_macro_ __declare_static_bit_vector(konst_1024,1024);\
bit_vector_clear(&konst_1024);\
konst_1024.val.byte_array[0] = 255;\
konst_1024.val.byte_array[1] = 3;\
__declare_static_bit_vector(BITSEL_u1024_u1_1025,1);\
__declare_static_bit_vector(konst_1027,16);\
bit_vector_clear(&konst_1027);\
konst_1027.val.byte_array[0] = 15;\
__declare_static_bit_vector(BITSEL_u16_u1_1028,1);\
__declare_static_bit_vector(XOR_u1_u1_1029,1);\
bit_vector_clear(&konst_1024);\
konst_1024.val.byte_array[0] = 255;\
konst_1024.val.byte_array[1] = 3;\
bit_vector_bitsel( &(tempData3), &(konst_1024), &(BITSEL_u1024_u1_1025));\
bit_vector_clear(&konst_1027);\
konst_1027.val.byte_array[0] = 15;\
bit_vector_bitsel( &(CRC_16_3), &(konst_1027), &(BITSEL_u16_u1_1028));\
bit_vector_xor(&(BITSEL_u1024_u1_1025), &(BITSEL_u16_u1_1028), &(XOR_u1_u1_1029));\
bit_vector_cast_to_bit_vector(0, &(inv3), &(XOR_u1_u1_1029));\
;

#define _dataRx_assign_stmt_1054_c_macro_ __declare_static_bit_vector(slice_1033,3);\
__declare_static_bit_vector(konst_1035,16);\
bit_vector_clear(&konst_1035);\
konst_1035.val.byte_array[0] = 11;\
__declare_static_bit_vector(BITSEL_u16_u1_1036,1);\
__declare_static_bit_vector(XOR_u1_u1_1038,1);\
__declare_static_bit_vector(CONCAT_u3_u4_1039,4);\
__declare_static_bit_vector(slice_1041,6);\
__declare_static_bit_vector(CONCAT_u4_u10_1042,10);\
__declare_static_bit_vector(konst_1044,16);\
bit_vector_clear(&konst_1044);\
konst_1044.val.byte_array[0] = 4;\
__declare_static_bit_vector(BITSEL_u16_u1_1045,1);\
__declare_static_bit_vector(XOR_u1_u1_1047,1);\
__declare_static_bit_vector(slice_1049,4);\
__declare_static_bit_vector(CONCAT_u1_u5_1050,5);\
__declare_static_bit_vector(CONCAT_u5_u6_1052,6);\
__declare_static_bit_vector(CONCAT_u10_u16_1053,16);\
bit_vector_slice(&(CRC_16_3), &(slice_1033), 12);\
bit_vector_clear(&konst_1035);\
konst_1035.val.byte_array[0] = 11;\
bit_vector_bitsel( &(CRC_16_3), &(konst_1035), &(BITSEL_u16_u1_1036));\
bit_vector_xor(&(BITSEL_u16_u1_1036), &(inv3), &(XOR_u1_u1_1038));\
bit_vector_concatenate( &(slice_1033), &(XOR_u1_u1_1038), &(CONCAT_u3_u4_1039));\
bit_vector_slice(&(CRC_16_3), &(slice_1041), 5);\
bit_vector_concatenate( &(CONCAT_u3_u4_1039), &(slice_1041), &(CONCAT_u4_u10_1042));\
bit_vector_clear(&konst_1044);\
konst_1044.val.byte_array[0] = 4;\
bit_vector_bitsel( &(CRC_16_3), &(konst_1044), &(BITSEL_u16_u1_1045));\
bit_vector_xor(&(BITSEL_u16_u1_1045), &(inv3), &(XOR_u1_u1_1047));\
bit_vector_slice(&(CRC_16_3), &(slice_1049), 0);\
bit_vector_concatenate( &(XOR_u1_u1_1047), &(slice_1049), &(CONCAT_u1_u5_1050));\
bit_vector_concatenate( &(CONCAT_u1_u5_1050), &(inv3), &(CONCAT_u5_u6_1052));\
bit_vector_concatenate( &(CONCAT_u4_u10_1042), &(CONCAT_u5_u6_1052), &(CONCAT_u10_u16_1053));\
bit_vector_cast_to_bit_vector(0, &(nextCRC16_3), &(CONCAT_u10_u16_1053));\
;

#define _dataRx_assign_stmt_1059_c_macro_ __declare_static_bit_vector(konst_1057,1024);\
bit_vector_clear(&konst_1057);\
konst_1057.val.byte_array[0] = 1;\
__declare_static_bit_vector(SHL_u1024_u1024_1058,1024);\
bit_vector_clear(&konst_1057);\
konst_1057.val.byte_array[0] = 1;\
bit_vector_shift_left(&(tempData3), &(konst_1057), &(SHL_u1024_u1024_1058));\
bit_vector_cast_to_bit_vector(0, &(nextTempData3), &(SHL_u1024_u1024_1058));\
;

#define _dataRx_assign_stmt_1064_c_macro_ __declare_static_bit_vector(konst_1062,13);\
bit_vector_clear(&konst_1062);\
konst_1062.val.byte_array[0] = 1;\
__declare_static_bit_vector(ADD_u13_u13_1063,13);\
bit_vector_clear(&konst_1062);\
konst_1062.val.byte_array[0] = 1;\
bit_vector_plus( &(J_3), &(konst_1062), &(ADD_u13_u13_1063));\
bit_vector_cast_to_bit_vector(0, &(next_J_3), &(ADD_u13_u13_1063));\
;

#define _dataRx_assign_stmt_1073_c_macro_ __declare_static_bit_vector(NEQ_u16_u1_1072,1);\
bit_vector_not_equal(0, &(nextCRC_3__nextCRC_3), &(nextCRC16_3), &NEQ_u16_u1_1072);\
bit_vector_cast_to_bit_vector(0, &(crcError3), &(NEQ_u16_u1_1072));\
;

#define _dataRx_assign_stmt_1077_c_macro_ __declare_static_bit_vector(konst_1075,10);\
bit_vector_clear(&konst_1075);\
konst_1075.val.byte_array[1] = 2;\
__declare_static_bit_vector(type_cast_1076,10);\
bit_vector_clear(&type_cast_1076);\
type_cast_1076.val.byte_array[1] = 2;\
bit_vector_clear(&konst_1075);\
konst_1075.val.byte_array[1] = 2;\
bit_vector_bitcast_to_bit_vector( &(type_cast_1076), &(konst_1075));\
bit_vector_cast_to_bit_vector(0, &(rxBufferPointer), &(type_cast_1076));\
;

#define _dataRx_assign_stmt_1087_c_macro_ __declare_static_bit_vector(konst_1085,8);\
bit_vector_clear(&konst_1085);\
konst_1085.val.byte_array[0] = 251;\
__declare_static_bit_vector(AND_u8_u8_1086,8);\
bit_vector_clear(&konst_1085);\
konst_1085.val.byte_array[0] = 251;\
bit_vector_and(&(presentState0Var), &(konst_1085), &(AND_u8_u8_1086));\
__declare_static_bit_vector(konst_1082,32);\
bit_vector_clear(&konst_1082);\
konst_1082.val.byte_array[0] = 36;\
bit_vector_clear(&konst_1082);\
konst_1082.val.byte_array[0] = 36;\
bit_vector_cast_to_bit_vector(0, &((sdhcRegisters[bit_vector_to_uint64(0, &konst_1082)])), &(AND_u8_u8_1086));\
;

#define _dataRx_merge_stmt_1090_c_preamble_macro_ uint8_t merge_stmt_1090_entry_flag;\
merge_stmt_1090_entry_flag = do_while_entry_flag;\
goto merge_stmt_1090_run;\
merge_stmt_1090_run: ;\

#define _dataRx_phi_stmt_1091_c_macro_ __declare_static_bit_vector(konst_1093,10);\
bit_vector_clear(&konst_1093);\
__declare_static_bit_vector(type_cast_1094,10);\
bit_vector_clear(&type_cast_1094);\
if(do_while_loopback_flag) {\
bit_vector_cast_to_bit_vector(0, &(B), &(next_B));\
}\
else {\
__declare_static_bit_vector(konst_1093,10);\
bit_vector_clear(&konst_1093);\
__declare_static_bit_vector(type_cast_1094,10);\
bit_vector_clear(&type_cast_1094);\
bit_vector_clear(&konst_1093);\
bit_vector_bitcast_to_bit_vector( &(type_cast_1094), &(konst_1093));\
bit_vector_cast_to_bit_vector(0, &(B), &(type_cast_1094));\
}\
;

#define _dataRx_phi_stmt_1096_c_macro_ if(do_while_loopback_flag) {\
bit_vector_cast_to_bit_vector(0, &(dataForBuffer0), &(nextDataForBuffer0));\
}\
else {\
bit_vector_cast_to_bit_vector(0, &(dataForBuffer0), &(dat0__dat0));\
}\
;

#define _dataRx_phi_stmt_1100_c_macro_ if(do_while_loopback_flag) {\
bit_vector_cast_to_bit_vector(0, &(dataForBuffer1), &(nextDataForBuffer1));\
}\
else {\
bit_vector_cast_to_bit_vector(0, &(dataForBuffer1), &(dat1__dat1));\
}\
;

#define _dataRx_phi_stmt_1104_c_macro_ if(do_while_loopback_flag) {\
bit_vector_cast_to_bit_vector(0, &(dataForBuffer2), &(nextDataForBuffer2));\
}\
else {\
bit_vector_cast_to_bit_vector(0, &(dataForBuffer2), &(dat2__dat2));\
}\
;

#define _dataRx_phi_stmt_1108_c_macro_ if(do_while_loopback_flag) {\
bit_vector_cast_to_bit_vector(0, &(dataForBuffer3), &(nextDataForBuffer3));\
}\
else {\
bit_vector_cast_to_bit_vector(0, &(dataForBuffer3), &(dat3__dat3));\
}\
;
;

#define _dataRx_merge_stmt_1090_c_postamble_macro_ merge_stmt_1090_entry_flag = 0;

#define _dataRx_assign_stmt_1145_c_macro_ __declare_static_bit_vector(konst_1115,1024);\
bit_vector_clear(&konst_1115);\
konst_1115.val.byte_array[0] = 255;\
konst_1115.val.byte_array[1] = 3;\
__declare_static_bit_vector(BITSEL_u1024_u1_1116,1);\
__declare_static_bit_vector(konst_1118,1024);\
bit_vector_clear(&konst_1118);\
konst_1118.val.byte_array[0] = 255;\
konst_1118.val.byte_array[1] = 3;\
__declare_static_bit_vector(BITSEL_u1024_u1_1119,1);\
__declare_static_bit_vector(CONCAT_u1_u2_1120,2);\
__declare_static_bit_vector(konst_1122,1024);\
bit_vector_clear(&konst_1122);\
konst_1122.val.byte_array[0] = 255;\
konst_1122.val.byte_array[1] = 3;\
__declare_static_bit_vector(BITSEL_u1024_u1_1123,1);\
__declare_static_bit_vector(konst_1125,1024);\
bit_vector_clear(&konst_1125);\
konst_1125.val.byte_array[0] = 255;\
konst_1125.val.byte_array[1] = 3;\
__declare_static_bit_vector(BITSEL_u1024_u1_1126,1);\
__declare_static_bit_vector(CONCAT_u1_u2_1127,2);\
__declare_static_bit_vector(CONCAT_u2_u4_1128,4);\
__declare_static_bit_vector(konst_1130,1024);\
bit_vector_clear(&konst_1130);\
konst_1130.val.byte_array[0] = 254;\
konst_1130.val.byte_array[1] = 3;\
__declare_static_bit_vector(BITSEL_u1024_u1_1131,1);\
__declare_static_bit_vector(konst_1133,1024);\
bit_vector_clear(&konst_1133);\
konst_1133.val.byte_array[0] = 254;\
konst_1133.val.byte_array[1] = 3;\
__declare_static_bit_vector(BITSEL_u1024_u1_1134,1);\
__declare_static_bit_vector(CONCAT_u1_u2_1135,2);\
__declare_static_bit_vector(konst_1137,1024);\
bit_vector_clear(&konst_1137);\
konst_1137.val.byte_array[0] = 254;\
konst_1137.val.byte_array[1] = 3;\
__declare_static_bit_vector(BITSEL_u1024_u1_1138,1);\
__declare_static_bit_vector(konst_1140,1024);\
bit_vector_clear(&konst_1140);\
konst_1140.val.byte_array[0] = 254;\
konst_1140.val.byte_array[1] = 3;\
__declare_static_bit_vector(BITSEL_u1024_u1_1141,1);\
__declare_static_bit_vector(CONCAT_u1_u2_1142,2);\
__declare_static_bit_vector(CONCAT_u2_u4_1143,4);\
__declare_static_bit_vector(CONCAT_u4_u8_1144,8);\
bit_vector_clear(&konst_1115);\
konst_1115.val.byte_array[0] = 255;\
konst_1115.val.byte_array[1] = 3;\
bit_vector_bitsel( &(dataForBuffer3), &(konst_1115), &(BITSEL_u1024_u1_1116));\
bit_vector_clear(&konst_1118);\
konst_1118.val.byte_array[0] = 255;\
konst_1118.val.byte_array[1] = 3;\
bit_vector_bitsel( &(dataForBuffer2), &(konst_1118), &(BITSEL_u1024_u1_1119));\
bit_vector_concatenate( &(BITSEL_u1024_u1_1116), &(BITSEL_u1024_u1_1119), &(CONCAT_u1_u2_1120));\
bit_vector_clear(&konst_1122);\
konst_1122.val.byte_array[0] = 255;\
konst_1122.val.byte_array[1] = 3;\
bit_vector_bitsel( &(dataForBuffer1), &(konst_1122), &(BITSEL_u1024_u1_1123));\
bit_vector_clear(&konst_1125);\
konst_1125.val.byte_array[0] = 255;\
konst_1125.val.byte_array[1] = 3;\
bit_vector_bitsel( &(dataForBuffer0), &(konst_1125), &(BITSEL_u1024_u1_1126));\
bit_vector_concatenate( &(BITSEL_u1024_u1_1123), &(BITSEL_u1024_u1_1126), &(CONCAT_u1_u2_1127));\
bit_vector_concatenate( &(CONCAT_u1_u2_1120), &(CONCAT_u1_u2_1127), &(CONCAT_u2_u4_1128));\
bit_vector_clear(&konst_1130);\
konst_1130.val.byte_array[0] = 254;\
konst_1130.val.byte_array[1] = 3;\
bit_vector_bitsel( &(dataForBuffer3), &(konst_1130), &(BITSEL_u1024_u1_1131));\
bit_vector_clear(&konst_1133);\
konst_1133.val.byte_array[0] = 254;\
konst_1133.val.byte_array[1] = 3;\
bit_vector_bitsel( &(dataForBuffer2), &(konst_1133), &(BITSEL_u1024_u1_1134));\
bit_vector_concatenate( &(BITSEL_u1024_u1_1131), &(BITSEL_u1024_u1_1134), &(CONCAT_u1_u2_1135));\
bit_vector_clear(&konst_1137);\
konst_1137.val.byte_array[0] = 254;\
konst_1137.val.byte_array[1] = 3;\
bit_vector_bitsel( &(dataForBuffer1), &(konst_1137), &(BITSEL_u1024_u1_1138));\
bit_vector_clear(&konst_1140);\
konst_1140.val.byte_array[0] = 254;\
konst_1140.val.byte_array[1] = 3;\
bit_vector_bitsel( &(dataForBuffer0), &(konst_1140), &(BITSEL_u1024_u1_1141));\
bit_vector_concatenate( &(BITSEL_u1024_u1_1138), &(BITSEL_u1024_u1_1141), &(CONCAT_u1_u2_1142));\
bit_vector_concatenate( &(CONCAT_u1_u2_1135), &(CONCAT_u1_u2_1142), &(CONCAT_u2_u4_1143));\
bit_vector_concatenate( &(CONCAT_u2_u4_1128), &(CONCAT_u2_u4_1143), &(CONCAT_u4_u8_1144));\
write_bit_vector_to_pipe("dataBufferRx",&(CONCAT_u4_u8_1144));\
;

#define _dataRx_assign_stmt_1150_c_macro_ __declare_static_bit_vector(konst_1148,1024);\
bit_vector_clear(&konst_1148);\
konst_1148.val.byte_array[0] = 2;\
__declare_static_bit_vector(SHL_u1024_u1024_1149,1024);\
bit_vector_clear(&konst_1148);\
konst_1148.val.byte_array[0] = 2;\
bit_vector_shift_left(&(dataForBuffer0), &(konst_1148), &(SHL_u1024_u1024_1149));\
bit_vector_cast_to_bit_vector(0, &(nextDataForBuffer0), &(SHL_u1024_u1024_1149));\
;

#define _dataRx_assign_stmt_1155_c_macro_ __declare_static_bit_vector(konst_1153,1024);\
bit_vector_clear(&konst_1153);\
konst_1153.val.byte_array[0] = 2;\
__declare_static_bit_vector(SHL_u1024_u1024_1154,1024);\
bit_vector_clear(&konst_1153);\
konst_1153.val.byte_array[0] = 2;\
bit_vector_shift_left(&(dataForBuffer1), &(konst_1153), &(SHL_u1024_u1024_1154));\
bit_vector_cast_to_bit_vector(0, &(nextDataForBuffer1), &(SHL_u1024_u1024_1154));\
;

#define _dataRx_assign_stmt_1160_c_macro_ __declare_static_bit_vector(konst_1158,1024);\
bit_vector_clear(&konst_1158);\
konst_1158.val.byte_array[0] = 2;\
__declare_static_bit_vector(SHL_u1024_u1024_1159,1024);\
bit_vector_clear(&konst_1158);\
konst_1158.val.byte_array[0] = 2;\
bit_vector_shift_left(&(dataForBuffer2), &(konst_1158), &(SHL_u1024_u1024_1159));\
bit_vector_cast_to_bit_vector(0, &(nextDataForBuffer2), &(SHL_u1024_u1024_1159));\
;

#define _dataRx_assign_stmt_1165_c_macro_ __declare_static_bit_vector(konst_1163,1024);\
bit_vector_clear(&konst_1163);\
konst_1163.val.byte_array[0] = 2;\
__declare_static_bit_vector(SHL_u1024_u1024_1164,1024);\
bit_vector_clear(&konst_1163);\
konst_1163.val.byte_array[0] = 2;\
bit_vector_shift_left(&(dataForBuffer3), &(konst_1163), &(SHL_u1024_u1024_1164));\
bit_vector_cast_to_bit_vector(0, &(nextDataForBuffer3), &(SHL_u1024_u1024_1164));\
;

#define _dataRx_assign_stmt_1170_c_macro_ __declare_static_bit_vector(konst_1168,10);\
bit_vector_clear(&konst_1168);\
konst_1168.val.byte_array[0] = 1;\
__declare_static_bit_vector(ADD_u10_u10_1169,10);\
bit_vector_clear(&konst_1168);\
konst_1168.val.byte_array[0] = 1;\
bit_vector_plus( &(B), &(konst_1168), &(ADD_u10_u10_1169));\
bit_vector_cast_to_bit_vector(0, &(next_B), &(ADD_u10_u10_1169));\
;

#define _dataRx_assign_stmt_1183_c_macro_ __declare_static_bit_vector(OR_u1_u1_1178,1);\
__declare_static_bit_vector(OR_u1_u1_1181,1);\
__declare_static_bit_vector(OR_u1_u1_1182,1);\
bit_vector_or(&(stopBitError0), &(stopBitError1), &(OR_u1_u1_1178));\
bit_vector_or(&(stopBitError2), &(stopBitError3), &(OR_u1_u1_1181));\
bit_vector_or(&(OR_u1_u1_1178), &(OR_u1_u1_1181), &(OR_u1_u1_1182));\
bit_vector_cast_to_bit_vector(0, &(stopBitError_Final), &(OR_u1_u1_1182));\
;

#define _dataRx_assign_stmt_1192_c_macro_ __declare_static_bit_vector(OR_u1_u1_1187,1);\
__declare_static_bit_vector(OR_u1_u1_1190,1);\
__declare_static_bit_vector(OR_u1_u1_1191,1);\
bit_vector_or(&(crcError0), &(crcError1), &(OR_u1_u1_1187));\
bit_vector_or(&(crcError2), &(crcError3), &(OR_u1_u1_1190));\
bit_vector_or(&(OR_u1_u1_1187), &(OR_u1_u1_1190), &(OR_u1_u1_1191));\
bit_vector_cast_to_bit_vector(0, &(crcError_Final), &(OR_u1_u1_1191));\
;

#define _dataRx_assign_stmt_1205_c_macro_ __declare_static_bit_vector(CONCAT_u1_u2_1196,2);\
__declare_static_bit_vector(CONCAT_u2_u3_1198,3);\
__declare_static_bit_vector(CONCAT_u1_u3_1201,3);\
bit_vector_clear(&CONCAT_u1_u3_1201);\
__declare_static_bit_vector(CONCAT_u3_u5_1203,5);\
bit_vector_clear(&CONCAT_u3_u5_1203);\
__declare_static_bit_vector(CONCAT_u3_u8_1204,8);\
bit_vector_concatenate( &(ZERO_1), &(stopBitError_Final), &(CONCAT_u1_u2_1196));\
bit_vector_concatenate( &(CONCAT_u1_u2_1196), &(crcError_Final), &(CONCAT_u2_u3_1198));\
bit_vector_concatenate( &(ZERO_1), &(ZERO_2), &(CONCAT_u1_u3_1201));\
bit_vector_concatenate( &(CONCAT_u1_u3_1201), &(ZERO_2), &(CONCAT_u3_u5_1203));\
bit_vector_concatenate( &(CONCAT_u2_u3_1198), &(CONCAT_u3_u5_1203), &(CONCAT_u3_u8_1204));\
bit_vector_cast_to_bit_vector(0, &(dataErrorInterruptStatusVar1_4), &(CONCAT_u3_u8_1204));\
;

#define _dataRx_assign_stmt_1209_c_macro_ __declare_static_bit_vector(RPIPE_DAT0Rx_1208,1);\
read_bit_vector_from_pipe("DAT0Rx",&(RPIPE_DAT0Rx_1208));\
bit_vector_cast_to_bit_vector(0, &(startBit), &(RPIPE_DAT0Rx_1208));\
;

#define _dataRx_branch_block_stmt_1210_c_export_decl_macro_ __declare_static_bit_vector(dat__next_data,4096);\
__declare_static_bit_vector(I,10);\
__declare_static_bit_vector(dat,4096);\
__declare_static_bit_vector(bit7,1);\
__declare_static_bit_vector(bit6,1);\
__declare_static_bit_vector(bit5,1);\
__declare_static_bit_vector(bit4,1);\
__declare_static_bit_vector(bit3,1);\
__declare_static_bit_vector(bit2,1);\
__declare_static_bit_vector(bit1,1);\
__declare_static_bit_vector(bit0,1);\
__declare_static_bit_vector(next_data,4096);\
__declare_static_bit_vector(next_I,10);\


#define _dataRx_merge_stmt_1211_c_preamble_macro_ uint8_t merge_stmt_1211_entry_flag;\
merge_stmt_1211_entry_flag = 1;\
uint8_t loopback1_1210_flag = 0;\
goto merge_stmt_1211_run;\
loopback1_1210: loopback1_1210_flag = 1;\
goto merge_stmt_1211_run;\
merge_stmt_1211_run: ;\

#define _dataRx_phi_stmt_1212_c_macro_ __declare_static_bit_vector(konst_1214,10);\
bit_vector_clear(&konst_1214);\
__declare_static_bit_vector(type_cast_1215,10);\
bit_vector_clear(&type_cast_1215);\
if(loopback1_1210_flag) {\
bit_vector_cast_to_bit_vector(0, &(I), &(next_I));\
}\
else {\
__declare_static_bit_vector(konst_1214,10);\
bit_vector_clear(&konst_1214);\
__declare_static_bit_vector(type_cast_1215,10);\
bit_vector_clear(&type_cast_1215);\
bit_vector_clear(&konst_1214);\
bit_vector_bitcast_to_bit_vector( &(type_cast_1215), &(konst_1214));\
bit_vector_cast_to_bit_vector(0, &(I), &(type_cast_1215));\
}\
;

#define _dataRx_phi_stmt_1217_c_macro_ __declare_static_bit_vector(konst_1220,4096);\
bit_vector_clear(&konst_1220);\
__declare_static_bit_vector(type_cast_1221,4096);\
bit_vector_clear(&type_cast_1221);\
if(loopback1_1210_flag) {\
bit_vector_cast_to_bit_vector(0, &(dat), &(next_data));\
}\
else {\
__declare_static_bit_vector(konst_1220,4096);\
bit_vector_clear(&konst_1220);\
__declare_static_bit_vector(type_cast_1221,4096);\
bit_vector_clear(&type_cast_1221);\
bit_vector_clear(&konst_1220);\
bit_vector_bitcast_to_bit_vector( &(type_cast_1221), &(konst_1220));\
bit_vector_cast_to_bit_vector(0, &(dat), &(type_cast_1221));\
}\
;
;

#define _dataRx_merge_stmt_1211_c_postamble_macro_ loopback1_1210_flag = 0;\
merge_stmt_1211_entry_flag = 0;

#define _dataRx_assign_stmt_1226_c_macro_ __declare_static_bit_vector(RPIPE_DAT0Rx_1225,1);\
read_bit_vector_from_pipe("DAT0Rx",&(RPIPE_DAT0Rx_1225));\
bit_vector_cast_to_bit_vector(0, &(bit7), &(RPIPE_DAT0Rx_1225));\
;

#define _dataRx_assign_stmt_1229_c_macro_ __declare_static_bit_vector(RPIPE_DAT0Rx_1228,1);\
read_bit_vector_from_pipe("DAT0Rx",&(RPIPE_DAT0Rx_1228));\
bit_vector_cast_to_bit_vector(0, &(bit6), &(RPIPE_DAT0Rx_1228));\
;

#define _dataRx_assign_stmt_1232_c_macro_ __declare_static_bit_vector(RPIPE_DAT0Rx_1231,1);\
read_bit_vector_from_pipe("DAT0Rx",&(RPIPE_DAT0Rx_1231));\
bit_vector_cast_to_bit_vector(0, &(bit5), &(RPIPE_DAT0Rx_1231));\
;

#define _dataRx_assign_stmt_1235_c_macro_ __declare_static_bit_vector(RPIPE_DAT0Rx_1234,1);\
read_bit_vector_from_pipe("DAT0Rx",&(RPIPE_DAT0Rx_1234));\
bit_vector_cast_to_bit_vector(0, &(bit4), &(RPIPE_DAT0Rx_1234));\
;

#define _dataRx_assign_stmt_1238_c_macro_ __declare_static_bit_vector(RPIPE_DAT0Rx_1237,1);\
read_bit_vector_from_pipe("DAT0Rx",&(RPIPE_DAT0Rx_1237));\
bit_vector_cast_to_bit_vector(0, &(bit3), &(RPIPE_DAT0Rx_1237));\
;

#define _dataRx_assign_stmt_1241_c_macro_ __declare_static_bit_vector(RPIPE_DAT0Rx_1240,1);\
read_bit_vector_from_pipe("DAT0Rx",&(RPIPE_DAT0Rx_1240));\
bit_vector_cast_to_bit_vector(0, &(bit2), &(RPIPE_DAT0Rx_1240));\
;

#define _dataRx_assign_stmt_1244_c_macro_ __declare_static_bit_vector(RPIPE_DAT0Rx_1243,1);\
read_bit_vector_from_pipe("DAT0Rx",&(RPIPE_DAT0Rx_1243));\
bit_vector_cast_to_bit_vector(0, &(bit1), &(RPIPE_DAT0Rx_1243));\
;

#define _dataRx_assign_stmt_1247_c_macro_ __declare_static_bit_vector(RPIPE_DAT0Rx_1246,1);\
read_bit_vector_from_pipe("DAT0Rx",&(RPIPE_DAT0Rx_1246));\
bit_vector_cast_to_bit_vector(0, &(bit0), &(RPIPE_DAT0Rx_1246));\
;

#define _dataRx_assign_stmt_1264_c_macro_ __declare_static_bit_vector(CONCAT_u1_u2_1251,2);\
__declare_static_bit_vector(CONCAT_u1_u2_1254,2);\
__declare_static_bit_vector(CONCAT_u2_u4_1255,4);\
__declare_static_bit_vector(CONCAT_u1_u2_1258,2);\
__declare_static_bit_vector(CONCAT_u1_u2_1261,2);\
__declare_static_bit_vector(CONCAT_u2_u4_1262,4);\
__declare_static_bit_vector(CONCAT_u4_u8_1263,8);\
bit_vector_concatenate( &(bit7), &(bit6), &(CONCAT_u1_u2_1251));\
bit_vector_concatenate( &(bit5), &(bit4), &(CONCAT_u1_u2_1254));\
bit_vector_concatenate( &(CONCAT_u1_u2_1251), &(CONCAT_u1_u2_1254), &(CONCAT_u2_u4_1255));\
bit_vector_concatenate( &(bit3), &(bit2), &(CONCAT_u1_u2_1258));\
bit_vector_concatenate( &(bit1), &(bit0), &(CONCAT_u1_u2_1261));\
bit_vector_concatenate( &(CONCAT_u1_u2_1258), &(CONCAT_u1_u2_1261), &(CONCAT_u2_u4_1262));\
bit_vector_concatenate( &(CONCAT_u2_u4_1255), &(CONCAT_u2_u4_1262), &(CONCAT_u4_u8_1263));\
write_bit_vector_to_pipe("dataBufferRx",&(CONCAT_u4_u8_1263));\
;

#define _dataRx_assign_stmt_1289_c_macro_ __declare_static_bit_vector(konst_1267,4096);\
bit_vector_clear(&konst_1267);\
konst_1267.val.byte_array[0] = 8;\
__declare_static_bit_vector(SHL_u4096_u4096_1268,4096);\
__declare_static_bit_vector(konst_1270,4088);\
bit_vector_clear(&konst_1270);\
__declare_static_bit_vector(type_cast_1271,4088);\
bit_vector_clear(&type_cast_1271);\
__declare_static_bit_vector(CONCAT_u1_u2_1274,2);\
__declare_static_bit_vector(CONCAT_u1_u2_1277,2);\
__declare_static_bit_vector(CONCAT_u2_u4_1278,4);\
__declare_static_bit_vector(CONCAT_u1_u2_1281,2);\
__declare_static_bit_vector(CONCAT_u1_u2_1284,2);\
__declare_static_bit_vector(CONCAT_u2_u4_1285,4);\
__declare_static_bit_vector(CONCAT_u4_u8_1286,8);\
__declare_static_bit_vector(CONCAT_u4088_u4096_1287,4096);\
__declare_static_bit_vector(OR_u4096_u4096_1288,4096);\
bit_vector_clear(&konst_1267);\
konst_1267.val.byte_array[0] = 8;\
bit_vector_shift_left(&(dat), &(konst_1267), &(SHL_u4096_u4096_1268));\
bit_vector_clear(&konst_1270);\
bit_vector_bitcast_to_bit_vector( &(type_cast_1271), &(konst_1270));\
bit_vector_concatenate( &(bit7), &(bit6), &(CONCAT_u1_u2_1274));\
bit_vector_concatenate( &(bit5), &(bit4), &(CONCAT_u1_u2_1277));\
bit_vector_concatenate( &(CONCAT_u1_u2_1274), &(CONCAT_u1_u2_1277), &(CONCAT_u2_u4_1278));\
bit_vector_concatenate( &(bit3), &(bit2), &(CONCAT_u1_u2_1281));\
bit_vector_concatenate( &(bit1), &(bit0), &(CONCAT_u1_u2_1284));\
bit_vector_concatenate( &(CONCAT_u1_u2_1281), &(CONCAT_u1_u2_1284), &(CONCAT_u2_u4_1285));\
bit_vector_concatenate( &(CONCAT_u2_u4_1278), &(CONCAT_u2_u4_1285), &(CONCAT_u4_u8_1286));\
bit_vector_concatenate( &(type_cast_1271), &(CONCAT_u4_u8_1286), &(CONCAT_u4088_u4096_1287));\
bit_vector_or(&(SHL_u4096_u4096_1268), &(CONCAT_u4088_u4096_1287), &(OR_u4096_u4096_1288));\
bit_vector_cast_to_bit_vector(0, &(next_data), &(OR_u4096_u4096_1288));\
;

#define _dataRx_assign_stmt_1294_c_macro_ __declare_static_bit_vector(konst_1292,10);\
bit_vector_clear(&konst_1292);\
konst_1292.val.byte_array[0] = 1;\
__declare_static_bit_vector(ADD_u10_u10_1293,10);\
bit_vector_clear(&konst_1292);\
konst_1292.val.byte_array[0] = 1;\
bit_vector_plus( &(I), &(konst_1292), &(ADD_u10_u10_1293));\
bit_vector_cast_to_bit_vector(0, &(next_I), &(ADD_u10_u10_1293));\
;
;

#define _dataRx_branch_block_stmt_1210_c_export_apply_macro_ bit_vector_cast_to_bit_vector(0, &(dat__next_data), &(next_data));\
;

#define _dataRx_assign_stmt_1305_c_macro_ __declare_static_bit_vector(konst_1303,10);\
bit_vector_clear(&konst_1303);\
konst_1303.val.byte_array[1] = 2;\
__declare_static_bit_vector(type_cast_1304,10);\
bit_vector_clear(&type_cast_1304);\
type_cast_1304.val.byte_array[1] = 2;\
bit_vector_clear(&konst_1303);\
konst_1303.val.byte_array[1] = 2;\
bit_vector_bitcast_to_bit_vector( &(type_cast_1304), &(konst_1303));\
bit_vector_cast_to_bit_vector(0, &(rxBufferPointer), &(type_cast_1304));\
;

#define _dataRx_merge_stmt_1306_c_preamble_macro_ uint8_t merge_stmt_1306_entry_flag;\
merge_stmt_1306_entry_flag = 1;\
uint8_t crcloopback_743_flag = 0;\
goto merge_stmt_1306_run;\
crcloopback_743: crcloopback_743_flag = 1;\
goto merge_stmt_1306_run;\
merge_stmt_1306_run: ;\

#define _dataRx_phi_stmt_1307_c_macro_ __declare_static_bit_vector(konst_1310,5);\
bit_vector_clear(&konst_1310);\
__declare_static_bit_vector(type_cast_1311,5);\
bit_vector_clear(&type_cast_1311);\
if(crcloopback_743_flag) {\
bit_vector_cast_to_bit_vector(0, &(K), &(next_K));\
}\
else {\
__declare_static_bit_vector(konst_1310,5);\
bit_vector_clear(&konst_1310);\
__declare_static_bit_vector(type_cast_1311,5);\
bit_vector_clear(&type_cast_1311);\
bit_vector_clear(&konst_1310);\
bit_vector_bitcast_to_bit_vector( &(type_cast_1311), &(konst_1310));\
bit_vector_cast_to_bit_vector(0, &(K), &(type_cast_1311));\
}\
;

#define _dataRx_phi_stmt_1313_c_macro_ __declare_static_bit_vector(konst_1315,16);\
bit_vector_clear(&konst_1315);\
__declare_static_bit_vector(type_cast_1316,16);\
bit_vector_clear(&type_cast_1316);\
if(crcloopback_743_flag) {\
bit_vector_cast_to_bit_vector(0, &(currentCRC), &(nextCRC));\
}\
else {\
__declare_static_bit_vector(konst_1315,16);\
bit_vector_clear(&konst_1315);\
__declare_static_bit_vector(type_cast_1316,16);\
bit_vector_clear(&type_cast_1316);\
bit_vector_clear(&konst_1315);\
bit_vector_bitcast_to_bit_vector( &(type_cast_1316), &(konst_1315));\
bit_vector_cast_to_bit_vector(0, &(currentCRC), &(type_cast_1316));\
}\
;
;

#define _dataRx_merge_stmt_1306_c_postamble_macro_ crcloopback_743_flag = 0;\
merge_stmt_1306_entry_flag = 0;

#define _dataRx_assign_stmt_1329_c_macro_ __declare_static_bit_vector(konst_1321,16);\
bit_vector_clear(&konst_1321);\
konst_1321.val.byte_array[0] = 1;\
__declare_static_bit_vector(SHL_u16_u16_1322,16);\
__declare_static_bit_vector(konst_1324,15);\
bit_vector_clear(&konst_1324);\
__declare_static_bit_vector(type_cast_1325,15);\
bit_vector_clear(&type_cast_1325);\
__declare_static_bit_vector(RPIPE_DAT0Rx_1326,1);\
__declare_static_bit_vector(CONCAT_u15_u16_1327,16);\
__declare_static_bit_vector(OR_u16_u16_1328,16);\
bit_vector_clear(&konst_1321);\
konst_1321.val.byte_array[0] = 1;\
bit_vector_shift_left(&(currentCRC), &(konst_1321), &(SHL_u16_u16_1322));\
bit_vector_clear(&konst_1324);\
bit_vector_bitcast_to_bit_vector( &(type_cast_1325), &(konst_1324));\
read_bit_vector_from_pipe("DAT0Rx",&(RPIPE_DAT0Rx_1326));\
bit_vector_concatenate( &(type_cast_1325), &(RPIPE_DAT0Rx_1326), &(CONCAT_u15_u16_1327));\
bit_vector_or(&(SHL_u16_u16_1322), &(CONCAT_u15_u16_1327), &(OR_u16_u16_1328));\
bit_vector_cast_to_bit_vector(0, &(nextCRC), &(OR_u16_u16_1328));\
;

#define _dataRx_assign_stmt_1334_c_macro_ __declare_static_bit_vector(konst_1332,5);\
bit_vector_clear(&konst_1332);\
konst_1332.val.byte_array[0] = 1;\
__declare_static_bit_vector(ADD_u5_u5_1333,5);\
bit_vector_clear(&konst_1332);\
konst_1332.val.byte_array[0] = 1;\
bit_vector_plus( &(K), &(konst_1332), &(ADD_u5_u5_1333));\
bit_vector_cast_to_bit_vector(0, &(next_K), &(ADD_u5_u5_1333));\
;

#define _dataRx_assign_stmt_1343_c_macro_ __declare_static_bit_vector(RPIPE_DAT0Rx_1342,1);\
read_bit_vector_from_pipe("DAT0Rx",&(RPIPE_DAT0Rx_1342));\
bit_vector_cast_to_bit_vector(0, &(stopBit), &(RPIPE_DAT0Rx_1342));\
;

#define _dataRx_assign_stmt_1353_c_macro_ __declare_static_bit_vector(konst_1351,8);\
bit_vector_clear(&konst_1351);\
konst_1351.val.byte_array[0] = 251;\
__declare_static_bit_vector(AND_u8_u8_1352,8);\
bit_vector_clear(&konst_1351);\
konst_1351.val.byte_array[0] = 251;\
bit_vector_and(&(presentState0Var), &(konst_1351), &(AND_u8_u8_1352));\
__declare_static_bit_vector(konst_1348,32);\
bit_vector_clear(&konst_1348);\
konst_1348.val.byte_array[0] = 36;\
bit_vector_clear(&konst_1348);\
konst_1348.val.byte_array[0] = 36;\
bit_vector_cast_to_bit_vector(0, &((sdhcRegisters[bit_vector_to_uint64(0, &konst_1348)])), &(AND_u8_u8_1352));\
;

#define _dataRx_assign_stmt_1359_c_macro_ __declare_static_bit_vector(konst_1357,1);\
bit_vector_clear(&konst_1357);\
__declare_static_bit_vector(EQ_u1_u1_1358,1);\
bit_vector_clear(&konst_1357);\
bit_vector_equal(0, &(stopBit), &(konst_1357), &(EQ_u1_u1_1358));\
bit_vector_cast_to_bit_vector(0, &(stopBitError), &(EQ_u1_u1_1358));\
;

#define _dataRx_merge_stmt_1360_c_preamble_macro_ uint8_t merge_stmt_1360_entry_flag;\
merge_stmt_1360_entry_flag = 1;\
uint8_t loopback_743_flag = 0;\
goto merge_stmt_1360_run;\
loopback_743: loopback_743_flag = 1;\
goto merge_stmt_1360_run;\
merge_stmt_1360_run: ;\

#define _dataRx_phi_stmt_1361_c_macro_ __declare_static_bit_vector(konst_1363,13);\
bit_vector_clear(&konst_1363);\
__declare_static_bit_vector(type_cast_1364,13);\
bit_vector_clear(&type_cast_1364);\
if(loopback_743_flag) {\
bit_vector_cast_to_bit_vector(0, &(J), &(next_J));\
}\
else {\
__declare_static_bit_vector(konst_1363,13);\
bit_vector_clear(&konst_1363);\
__declare_static_bit_vector(type_cast_1364,13);\
bit_vector_clear(&type_cast_1364);\
bit_vector_clear(&konst_1363);\
bit_vector_bitcast_to_bit_vector( &(type_cast_1364), &(konst_1363));\
bit_vector_cast_to_bit_vector(0, &(J), &(type_cast_1364));\
}\
;

#define _dataRx_phi_stmt_1366_c_macro_ __declare_static_bit_vector(konst_1368,16);\
bit_vector_clear(&konst_1368);\
__declare_static_bit_vector(type_cast_1369,16);\
bit_vector_clear(&type_cast_1369);\
if(loopback_743_flag) {\
bit_vector_cast_to_bit_vector(0, &(CRC_16), &(nextCRC16));\
}\
else {\
__declare_static_bit_vector(konst_1368,16);\
bit_vector_clear(&konst_1368);\
__declare_static_bit_vector(type_cast_1369,16);\
bit_vector_clear(&type_cast_1369);\
bit_vector_clear(&konst_1368);\
bit_vector_bitcast_to_bit_vector( &(type_cast_1369), &(konst_1368));\
bit_vector_cast_to_bit_vector(0, &(CRC_16), &(type_cast_1369));\
}\
;

#define _dataRx_phi_stmt_1371_c_macro_ if(loopback_743_flag) {\
bit_vector_cast_to_bit_vector(0, &(tempData), &(nextTempData));\
}\
else {\
bit_vector_cast_to_bit_vector(0, &(tempData), &(dat__next_data));\
}\
;
;

#define _dataRx_merge_stmt_1360_c_postamble_macro_ loopback_743_flag = 0;\
merge_stmt_1360_entry_flag = 0;

#define _dataRx_assign_stmt_1384_c_macro_ __declare_static_bit_vector(konst_1378,4096);\
bit_vector_clear(&konst_1378);\
konst_1378.val.byte_array[0] = 255;\
konst_1378.val.byte_array[1] = 15;\
__declare_static_bit_vector(BITSEL_u4096_u1_1379,1);\
__declare_static_bit_vector(konst_1381,16);\
bit_vector_clear(&konst_1381);\
konst_1381.val.byte_array[0] = 15;\
__declare_static_bit_vector(BITSEL_u16_u1_1382,1);\
__declare_static_bit_vector(XOR_u1_u1_1383,1);\
bit_vector_clear(&konst_1378);\
konst_1378.val.byte_array[0] = 255;\
konst_1378.val.byte_array[1] = 15;\
bit_vector_bitsel( &(tempData), &(konst_1378), &(BITSEL_u4096_u1_1379));\
bit_vector_clear(&konst_1381);\
konst_1381.val.byte_array[0] = 15;\
bit_vector_bitsel( &(CRC_16), &(konst_1381), &(BITSEL_u16_u1_1382));\
bit_vector_xor(&(BITSEL_u4096_u1_1379), &(BITSEL_u16_u1_1382), &(XOR_u1_u1_1383));\
bit_vector_cast_to_bit_vector(0, &(inv), &(XOR_u1_u1_1383));\
;

#define _dataRx_assign_stmt_1408_c_macro_ __declare_static_bit_vector(slice_1387,3);\
__declare_static_bit_vector(konst_1389,16);\
bit_vector_clear(&konst_1389);\
konst_1389.val.byte_array[0] = 11;\
__declare_static_bit_vector(BITSEL_u16_u1_1390,1);\
__declare_static_bit_vector(XOR_u1_u1_1392,1);\
__declare_static_bit_vector(CONCAT_u3_u4_1393,4);\
__declare_static_bit_vector(slice_1395,6);\
__declare_static_bit_vector(CONCAT_u4_u10_1396,10);\
__declare_static_bit_vector(konst_1398,16);\
bit_vector_clear(&konst_1398);\
konst_1398.val.byte_array[0] = 4;\
__declare_static_bit_vector(BITSEL_u16_u1_1399,1);\
__declare_static_bit_vector(XOR_u1_u1_1401,1);\
__declare_static_bit_vector(slice_1403,4);\
__declare_static_bit_vector(CONCAT_u1_u5_1404,5);\
__declare_static_bit_vector(CONCAT_u5_u6_1406,6);\
__declare_static_bit_vector(CONCAT_u10_u16_1407,16);\
bit_vector_slice(&(CRC_16), &(slice_1387), 12);\
bit_vector_clear(&konst_1389);\
konst_1389.val.byte_array[0] = 11;\
bit_vector_bitsel( &(CRC_16), &(konst_1389), &(BITSEL_u16_u1_1390));\
bit_vector_xor(&(BITSEL_u16_u1_1390), &(inv), &(XOR_u1_u1_1392));\
bit_vector_concatenate( &(slice_1387), &(XOR_u1_u1_1392), &(CONCAT_u3_u4_1393));\
bit_vector_slice(&(CRC_16), &(slice_1395), 5);\
bit_vector_concatenate( &(CONCAT_u3_u4_1393), &(slice_1395), &(CONCAT_u4_u10_1396));\
bit_vector_clear(&konst_1398);\
konst_1398.val.byte_array[0] = 4;\
bit_vector_bitsel( &(CRC_16), &(konst_1398), &(BITSEL_u16_u1_1399));\
bit_vector_xor(&(BITSEL_u16_u1_1399), &(inv), &(XOR_u1_u1_1401));\
bit_vector_slice(&(CRC_16), &(slice_1403), 0);\
bit_vector_concatenate( &(XOR_u1_u1_1401), &(slice_1403), &(CONCAT_u1_u5_1404));\
bit_vector_concatenate( &(CONCAT_u1_u5_1404), &(inv), &(CONCAT_u5_u6_1406));\
bit_vector_concatenate( &(CONCAT_u4_u10_1396), &(CONCAT_u5_u6_1406), &(CONCAT_u10_u16_1407));\
bit_vector_cast_to_bit_vector(0, &(nextCRC16), &(CONCAT_u10_u16_1407));\
;

#define _dataRx_assign_stmt_1413_c_macro_ __declare_static_bit_vector(konst_1411,4096);\
bit_vector_clear(&konst_1411);\
konst_1411.val.byte_array[0] = 1;\
__declare_static_bit_vector(SHL_u4096_u4096_1412,4096);\
bit_vector_clear(&konst_1411);\
konst_1411.val.byte_array[0] = 1;\
bit_vector_shift_left(&(tempData), &(konst_1411), &(SHL_u4096_u4096_1412));\
bit_vector_cast_to_bit_vector(0, &(nextTempData), &(SHL_u4096_u4096_1412));\
;

#define _dataRx_assign_stmt_1418_c_macro_ __declare_static_bit_vector(konst_1416,13);\
bit_vector_clear(&konst_1416);\
konst_1416.val.byte_array[0] = 1;\
__declare_static_bit_vector(ADD_u13_u13_1417,13);\
bit_vector_clear(&konst_1416);\
konst_1416.val.byte_array[0] = 1;\
bit_vector_plus( &(J), &(konst_1416), &(ADD_u13_u13_1417));\
bit_vector_cast_to_bit_vector(0, &(next_J), &(ADD_u13_u13_1417));\
;

#define _dataRx_assign_stmt_1429_c_macro_ __declare_static_bit_vector(NEQ_u16_u1_1428,1);\
bit_vector_not_equal(0, &(nextCRC), &(nextCRC16), &NEQ_u16_u1_1428);\
bit_vector_cast_to_bit_vector(0, &(crcError), &(NEQ_u16_u1_1428));\
;

#define _dataRx_assign_stmt_1432_c_macro_ bit_vector_cast_to_bit_vector(0, &(dataRxEnrty), &(ONE_1));\
;

#define _dataRx_assign_stmt_1445_c_macro_ __declare_static_bit_vector(CONCAT_u1_u2_1436,2);\
__declare_static_bit_vector(CONCAT_u2_u3_1438,3);\
__declare_static_bit_vector(CONCAT_u1_u3_1441,3);\
bit_vector_clear(&CONCAT_u1_u3_1441);\
__declare_static_bit_vector(CONCAT_u3_u5_1443,5);\
bit_vector_clear(&CONCAT_u3_u5_1443);\
__declare_static_bit_vector(CONCAT_u3_u8_1444,8);\
bit_vector_concatenate( &(ZERO_1), &(stopBitError), &(CONCAT_u1_u2_1436));\
bit_vector_concatenate( &(CONCAT_u1_u2_1436), &(crcError), &(CONCAT_u2_u3_1438));\
bit_vector_concatenate( &(ZERO_1), &(ZERO_2), &(CONCAT_u1_u3_1441));\
bit_vector_concatenate( &(CONCAT_u1_u3_1441), &(ZERO_2), &(CONCAT_u3_u5_1443));\
bit_vector_concatenate( &(CONCAT_u2_u3_1438), &(CONCAT_u3_u5_1443), &(CONCAT_u3_u8_1444));\
bit_vector_cast_to_bit_vector(0, &(dataErrorInterruptStatusVar1_0), &(CONCAT_u3_u8_1444));\
;

#define _dataRx_assign_stmt_1455_c_macro_ __declare_static_bit_vector(konst_1448,32);\
bit_vector_clear(&konst_1448);\
konst_1448.val.byte_array[0] = 40;\
__declare_static_bit_vector(konst_1450,8);\
bit_vector_clear(&konst_1450);\
konst_1450.val.byte_array[0] = 1;\
__declare_static_bit_vector(BITSEL_u8_u1_1451,1);\
__declare_static_bit_vector(MUX_1454,8);\
bit_vector_clear(&konst_1448);\
konst_1448.val.byte_array[0] = 40;\
bit_vector_clear(&konst_1450);\
konst_1450.val.byte_array[0] = 1;\
bit_vector_bitsel( &((sdhcRegisters[bit_vector_to_uint64(0, &konst_1448)])), &(konst_1450), &(BITSEL_u8_u1_1451));\
if (has_undefined_bit(&BITSEL_u8_u1_1451)) {fprintf(stderr, "Error: variable BITSEL_u8_u1_1451 has undefined value (%s) at test point.\n", to_string(&BITSEL_u8_u1_1451));assert(0);} \
if(bit_vector_to_uint64(0, &BITSEL_u8_u1_1451)){bit_vector_cast_to_bit_vector(0, &(MUX_1454), &(dataErrorInterruptStatusVar1_4));\
}else {bit_vector_cast_to_bit_vector(0, &(MUX_1454), &(dataErrorInterruptStatusVar1_0));\
}bit_vector_cast_to_bit_vector(0, &(dataErrorInterruptStatusVar1), &(MUX_1454));\
;

#define _dataRx_assign_stmt_1465_c_macro_ __declare_static_bit_vector(konst_1463,8);\
bit_vector_clear(&konst_1463);\
konst_1463.val.byte_array[0] = 253;\
__declare_static_bit_vector(AND_u8_u8_1464,8);\
bit_vector_clear(&konst_1463);\
konst_1463.val.byte_array[0] = 253;\
bit_vector_and(&(presentState1Var), &(konst_1463), &(AND_u8_u8_1464));\
__declare_static_bit_vector(konst_1460,32);\
bit_vector_clear(&konst_1460);\
konst_1460.val.byte_array[0] = 37;\
bit_vector_clear(&konst_1460);\
konst_1460.val.byte_array[0] = 37;\
bit_vector_cast_to_bit_vector(0, &((sdhcRegisters[bit_vector_to_uint64(0, &konst_1460)])), &(AND_u8_u8_1464));\
;

#define _dataRx_assign_stmt_1471_c_macro_ __declare_static_bit_vector(konst_1469,8);\
bit_vector_clear(&konst_1469);\
konst_1469.val.byte_array[0] = 253;\
__declare_static_bit_vector(AND_u8_u8_1470,8);\
bit_vector_clear(&konst_1469);\
konst_1469.val.byte_array[0] = 253;\
bit_vector_and(&(presentState0Var), &(konst_1469), &(AND_u8_u8_1470));\
__declare_static_bit_vector(konst_1466,32);\
bit_vector_clear(&konst_1466);\
konst_1466.val.byte_array[0] = 36;\
bit_vector_clear(&konst_1466);\
konst_1466.val.byte_array[0] = 36;\
bit_vector_cast_to_bit_vector(0, &((sdhcRegisters[bit_vector_to_uint64(0, &konst_1466)])), &(AND_u8_u8_1470));\
;

#define _dataRx_stmt_1476_c_macro_ uint32_t _dataRx_stmt_1476_c_macro___print_counter= get_file_print_lock(__report_log_file__);if(__report_log_file__ != NULL) fprintf(__report_log_file__,"[%u]You>\t%s\n",_dataRx_stmt_1476_c_macro___print_counter,"check");if(__report_log_file__ != NULL) {fprintf(__report_log_file__,"[%u]You>\t\t%s\t\t",_dataRx_stmt_1476_c_macro___print_counter,"nextCRC16");fprintf(__report_log_file__, ":= 0x%s\n",to_hex_string(&(nextCRC16)));fflush (__report_log_file__);}if(__report_log_file__ != NULL) {fprintf(__report_log_file__,"[%u]You>\t\t%s\t\t",_dataRx_stmt_1476_c_macro___print_counter,"nextCRC");fprintf(__report_log_file__, ":= 0x%s\n",to_hex_string(&(nextCRC)));fflush (__report_log_file__);}if(__report_log_file__ != NULL) {fprintf(__report_log_file__,"[%u]You>\t\t%s\t\t",_dataRx_stmt_1476_c_macro___print_counter,"rxBufferPointer");fprintf(__report_log_file__, ":= 0x%s\n",to_hex_string(&(rxBufferPointer)));fflush (__report_log_file__);}release_file_print_lock(__report_log_file__);;
;

#define _dataRx_branch_block_stmt_743_c_export_apply_macro_ ;

#define _dataRx_inner_outarg_prep_macro__ bit_vector_cast_to_bit_vector(0, &((*__pdataErrorInterruptStatusVar1)), &(dataErrorInterruptStatusVar1));\
;

#define _dataTx_inner_inarg_prep_macro__ __declare_static_bit_vector(lastBlock,1);\
bit_vector_cast_to_bit_vector(0, &(lastBlock), &((*__plastBlock)));\
__declare_static_bit_vector(blockCountEnable,1);\
bit_vector_cast_to_bit_vector(0, &(blockCountEnable), &((*__pblockCountEnable)));\
__declare_static_bit_vector(blockCount,16);\
bit_vector_cast_to_bit_vector(0, &(blockCount), &((*__pblockCount)));\
__declare_static_bit_vector(blockCountNext,16);\
__declare_static_bit_vector(transferComplete,8);\

#define _dataTx_branch_block_stmt_2373_c_export_decl_macro_ __declare_static_bit_vector(j_0,11);\
__declare_static_bit_vector(CRC_16_DAT0,16);\
__declare_static_bit_vector(tempDataD0,1024);\
__declare_static_bit_vector(invd0,1);\
__declare_static_bit_vector(nextCRC16_DAT0,16);\
__declare_static_bit_vector(nextTempDataD0,1024);\
__declare_static_bit_vector(next_j_0,11);\
__declare_static_bit_vector(j_1,11);\
__declare_static_bit_vector(CRC_16_DAT1,16);\
__declare_static_bit_vector(tempDataD1,1024);\
__declare_static_bit_vector(invd1,1);\
__declare_static_bit_vector(nextCRC16_DAT1,16);\
__declare_static_bit_vector(nextTempDataD1,1024);\
__declare_static_bit_vector(next_j_1,11);\
__declare_static_bit_vector(j_2,11);\
__declare_static_bit_vector(CRC_16_DAT2,16);\
__declare_static_bit_vector(tempDataD2,1024);\
__declare_static_bit_vector(invd2,1);\
__declare_static_bit_vector(nextCRC16_DAT2,16);\
__declare_static_bit_vector(nextTempDataD2,1024);\
__declare_static_bit_vector(next_j_2,11);\
__declare_static_bit_vector(j_3,11);\
__declare_static_bit_vector(CRC_16_DAT3,16);\
__declare_static_bit_vector(tempDataD3,1024);\
__declare_static_bit_vector(invd3,1);\
__declare_static_bit_vector(nextCRC16_DAT3,16);\
__declare_static_bit_vector(nextTempDataD3,1024);\
__declare_static_bit_vector(next_j_3,11);\
__declare_static_bit_vector(J,13);\
__declare_static_bit_vector(CRC_16,16);\
__declare_static_bit_vector(tempData,4096);\
__declare_static_bit_vector(inv,1);\
__declare_static_bit_vector(nextCRC16,16);\
__declare_static_bit_vector(nextTempData,4096);\
__declare_static_bit_vector(next_J,13);\
__declare_static_bit_vector(K,13);\
__declare_static_bit_vector(dat0bit,4096);\
__declare_static_bit_vector(nextbit,4096);\
__declare_static_bit_vector(next_K,13);\
__declare_static_bit_vector(L,5);\
__declare_static_bit_vector(dat0crc,16);\
__declare_static_bit_vector(nextbitcrc,16);\
__declare_static_bit_vector(next_L,5);\
__declare_static_bit_vector(presentState1Var,8);\
__declare_static_bit_vector(presentState0Var,8);\
__declare_static_bit_vector(wait,1);\


#define _dataTx_branch_block_stmt_2379_c_export_decl_macro_ __declare_static_bit_vector(dat0__next_data0,1024);\
__declare_static_bit_vector(dat1__next_data1,1024);\
__declare_static_bit_vector(dat2__next_data2,1024);\
__declare_static_bit_vector(dat3__next_data3,1024);\
__declare_static_bit_vector(i,10);\
__declare_static_bit_vector(dat0,1024);\
__declare_static_bit_vector(dat1,1024);\
__declare_static_bit_vector(dat2,1024);\
__declare_static_bit_vector(dat3,1024);\
__declare_static_bit_vector(tempBuffer,8);\
__declare_static_bit_vector(next_data3,1024);\
__declare_static_bit_vector(next_data2,1024);\
__declare_static_bit_vector(next_data1,1024);\
__declare_static_bit_vector(next_data0,1024);\
__declare_static_bit_vector(next_i,10);\


#define _dataTx_merge_stmt_2381_c_preamble_macro_ uint8_t merge_stmt_2381_entry_flag;\
merge_stmt_2381_entry_flag = do_while_entry_flag;\
goto merge_stmt_2381_run;\
merge_stmt_2381_run: ;\

#define _dataTx_phi_stmt_2382_c_macro_ __declare_static_bit_vector(konst_2385,10);\
bit_vector_clear(&konst_2385);\
__declare_static_bit_vector(type_cast_2386,10);\
bit_vector_clear(&type_cast_2386);\
if(do_while_loopback_flag) {\
bit_vector_cast_to_bit_vector(0, &(i), &(next_i));\
}\
else {\
__declare_static_bit_vector(konst_2385,10);\
bit_vector_clear(&konst_2385);\
__declare_static_bit_vector(type_cast_2386,10);\
bit_vector_clear(&type_cast_2386);\
bit_vector_clear(&konst_2385);\
bit_vector_bitcast_to_bit_vector( &(type_cast_2386), &(konst_2385));\
bit_vector_cast_to_bit_vector(0, &(i), &(type_cast_2386));\
}\
;

#define _dataTx_phi_stmt_2387_c_macro_ __declare_static_bit_vector(konst_2390,1024);\
bit_vector_clear(&konst_2390);\
__declare_static_bit_vector(type_cast_2391,1024);\
bit_vector_clear(&type_cast_2391);\
if(do_while_loopback_flag) {\
bit_vector_cast_to_bit_vector(0, &(dat0), &(next_data0));\
}\
else {\
__declare_static_bit_vector(konst_2390,1024);\
bit_vector_clear(&konst_2390);\
__declare_static_bit_vector(type_cast_2391,1024);\
bit_vector_clear(&type_cast_2391);\
bit_vector_clear(&konst_2390);\
bit_vector_bitcast_to_bit_vector( &(type_cast_2391), &(konst_2390));\
bit_vector_cast_to_bit_vector(0, &(dat0), &(type_cast_2391));\
}\
;

#define _dataTx_phi_stmt_2392_c_macro_ __declare_static_bit_vector(konst_2394,1024);\
bit_vector_clear(&konst_2394);\
__declare_static_bit_vector(type_cast_2395,1024);\
bit_vector_clear(&type_cast_2395);\
if(do_while_loopback_flag) {\
bit_vector_cast_to_bit_vector(0, &(dat1), &(next_data1));\
}\
else {\
__declare_static_bit_vector(konst_2394,1024);\
bit_vector_clear(&konst_2394);\
__declare_static_bit_vector(type_cast_2395,1024);\
bit_vector_clear(&type_cast_2395);\
bit_vector_clear(&konst_2394);\
bit_vector_bitcast_to_bit_vector( &(type_cast_2395), &(konst_2394));\
bit_vector_cast_to_bit_vector(0, &(dat1), &(type_cast_2395));\
}\
;

#define _dataTx_phi_stmt_2397_c_macro_ __declare_static_bit_vector(konst_2399,1024);\
bit_vector_clear(&konst_2399);\
__declare_static_bit_vector(type_cast_2400,1024);\
bit_vector_clear(&type_cast_2400);\
if(do_while_loopback_flag) {\
bit_vector_cast_to_bit_vector(0, &(dat2), &(next_data2));\
}\
else {\
__declare_static_bit_vector(konst_2399,1024);\
bit_vector_clear(&konst_2399);\
__declare_static_bit_vector(type_cast_2400,1024);\
bit_vector_clear(&type_cast_2400);\
bit_vector_clear(&konst_2399);\
bit_vector_bitcast_to_bit_vector( &(type_cast_2400), &(konst_2399));\
bit_vector_cast_to_bit_vector(0, &(dat2), &(type_cast_2400));\
}\
;

#define _dataTx_phi_stmt_2402_c_macro_ __declare_static_bit_vector(konst_2404,1024);\
bit_vector_clear(&konst_2404);\
__declare_static_bit_vector(type_cast_2405,1024);\
bit_vector_clear(&type_cast_2405);\
if(do_while_loopback_flag) {\
bit_vector_cast_to_bit_vector(0, &(dat3), &(next_data3));\
}\
else {\
__declare_static_bit_vector(konst_2404,1024);\
bit_vector_clear(&konst_2404);\
__declare_static_bit_vector(type_cast_2405,1024);\
bit_vector_clear(&type_cast_2405);\
bit_vector_clear(&konst_2404);\
bit_vector_bitcast_to_bit_vector( &(type_cast_2405), &(konst_2404));\
bit_vector_cast_to_bit_vector(0, &(dat3), &(type_cast_2405));\
}\
;
;

#define _dataTx_merge_stmt_2381_c_postamble_macro_ merge_stmt_2381_entry_flag = 0;

#define _dataTx_assign_stmt_2410_c_macro_ __declare_static_bit_vector(RPIPE_dataBufferTx_2409,8);\
read_bit_vector_from_pipe("dataBufferTx",&(RPIPE_dataBufferTx_2409));\
bit_vector_cast_to_bit_vector(0, &(tempBuffer), &(RPIPE_dataBufferTx_2409));\
;

#define _dataTx_assign_stmt_2428_c_macro_ __declare_static_bit_vector(konst_2413,1024);\
bit_vector_clear(&konst_2413);\
konst_2413.val.byte_array[0] = 2;\
__declare_static_bit_vector(SHL_u1024_u1024_2414,1024);\
__declare_static_bit_vector(konst_2416,1022);\
bit_vector_clear(&konst_2416);\
__declare_static_bit_vector(type_cast_2417,1022);\
bit_vector_clear(&type_cast_2417);\
__declare_static_bit_vector(konst_2419,8);\
bit_vector_clear(&konst_2419);\
konst_2419.val.byte_array[0] = 7;\
__declare_static_bit_vector(BITSEL_u8_u1_2420,1);\
__declare_static_bit_vector(CONCAT_u1022_u1023_2421,1023);\
__declare_static_bit_vector(konst_2424,8);\
bit_vector_clear(&konst_2424);\
konst_2424.val.byte_array[0] = 3;\
__declare_static_bit_vector(BITSEL_u8_u1_2425,1);\
__declare_static_bit_vector(CONCAT_u1023_u1024_2426,1024);\
__declare_static_bit_vector(OR_u1024_u1024_2427,1024);\
bit_vector_clear(&konst_2413);\
konst_2413.val.byte_array[0] = 2;\
bit_vector_shift_left(&(dat3), &(konst_2413), &(SHL_u1024_u1024_2414));\
bit_vector_clear(&konst_2416);\
bit_vector_bitcast_to_bit_vector( &(type_cast_2417), &(konst_2416));\
bit_vector_clear(&konst_2419);\
konst_2419.val.byte_array[0] = 7;\
bit_vector_bitsel( &(tempBuffer), &(konst_2419), &(BITSEL_u8_u1_2420));\
bit_vector_concatenate( &(type_cast_2417), &(BITSEL_u8_u1_2420), &(CONCAT_u1022_u1023_2421));\
bit_vector_clear(&konst_2424);\
konst_2424.val.byte_array[0] = 3;\
bit_vector_bitsel( &(tempBuffer), &(konst_2424), &(BITSEL_u8_u1_2425));\
bit_vector_concatenate( &(CONCAT_u1022_u1023_2421), &(BITSEL_u8_u1_2425), &(CONCAT_u1023_u1024_2426));\
bit_vector_or(&(SHL_u1024_u1024_2414), &(CONCAT_u1023_u1024_2426), &(OR_u1024_u1024_2427));\
bit_vector_cast_to_bit_vector(0, &(next_data3), &(OR_u1024_u1024_2427));\
;

#define _dataTx_assign_stmt_2444_c_macro_ __declare_static_bit_vector(konst_2431,1024);\
bit_vector_clear(&konst_2431);\
konst_2431.val.byte_array[0] = 2;\
__declare_static_bit_vector(SHL_u1024_u1024_2432,1024);\
__declare_static_bit_vector(konst_2433,1022);\
bit_vector_clear(&konst_2433);\
__declare_static_bit_vector(type_cast_2434,1022);\
bit_vector_clear(&type_cast_2434);\
__declare_static_bit_vector(konst_2436,8);\
bit_vector_clear(&konst_2436);\
konst_2436.val.byte_array[0] = 6;\
__declare_static_bit_vector(BITSEL_u8_u1_2437,1);\
__declare_static_bit_vector(CONCAT_u1022_u1023_2438,1023);\
__declare_static_bit_vector(konst_2440,8);\
bit_vector_clear(&konst_2440);\
konst_2440.val.byte_array[0] = 2;\
__declare_static_bit_vector(BITSEL_u8_u1_2441,1);\
__declare_static_bit_vector(CONCAT_u1023_u1024_2442,1024);\
__declare_static_bit_vector(OR_u1024_u1024_2443,1024);\
bit_vector_clear(&konst_2431);\
konst_2431.val.byte_array[0] = 2;\
bit_vector_shift_left(&(dat2), &(konst_2431), &(SHL_u1024_u1024_2432));\
bit_vector_clear(&konst_2433);\
bit_vector_bitcast_to_bit_vector( &(type_cast_2434), &(konst_2433));\
bit_vector_clear(&konst_2436);\
konst_2436.val.byte_array[0] = 6;\
bit_vector_bitsel( &(tempBuffer), &(konst_2436), &(BITSEL_u8_u1_2437));\
bit_vector_concatenate( &(type_cast_2434), &(BITSEL_u8_u1_2437), &(CONCAT_u1022_u1023_2438));\
bit_vector_clear(&konst_2440);\
konst_2440.val.byte_array[0] = 2;\
bit_vector_bitsel( &(tempBuffer), &(konst_2440), &(BITSEL_u8_u1_2441));\
bit_vector_concatenate( &(CONCAT_u1022_u1023_2438), &(BITSEL_u8_u1_2441), &(CONCAT_u1023_u1024_2442));\
bit_vector_or(&(SHL_u1024_u1024_2432), &(CONCAT_u1023_u1024_2442), &(OR_u1024_u1024_2443));\
bit_vector_cast_to_bit_vector(0, &(next_data2), &(OR_u1024_u1024_2443));\
;

#define _dataTx_assign_stmt_2460_c_macro_ __declare_static_bit_vector(konst_2447,1024);\
bit_vector_clear(&konst_2447);\
konst_2447.val.byte_array[0] = 2;\
__declare_static_bit_vector(SHL_u1024_u1024_2448,1024);\
__declare_static_bit_vector(konst_2449,1022);\
bit_vector_clear(&konst_2449);\
__declare_static_bit_vector(type_cast_2450,1022);\
bit_vector_clear(&type_cast_2450);\
__declare_static_bit_vector(konst_2452,8);\
bit_vector_clear(&konst_2452);\
konst_2452.val.byte_array[0] = 5;\
__declare_static_bit_vector(BITSEL_u8_u1_2453,1);\
__declare_static_bit_vector(CONCAT_u1022_u1023_2454,1023);\
__declare_static_bit_vector(konst_2456,8);\
bit_vector_clear(&konst_2456);\
konst_2456.val.byte_array[0] = 1;\
__declare_static_bit_vector(BITSEL_u8_u1_2457,1);\
__declare_static_bit_vector(CONCAT_u1023_u1024_2458,1024);\
__declare_static_bit_vector(OR_u1024_u1024_2459,1024);\
bit_vector_clear(&konst_2447);\
konst_2447.val.byte_array[0] = 2;\
bit_vector_shift_left(&(dat1), &(konst_2447), &(SHL_u1024_u1024_2448));\
bit_vector_clear(&konst_2449);\
bit_vector_bitcast_to_bit_vector( &(type_cast_2450), &(konst_2449));\
bit_vector_clear(&konst_2452);\
konst_2452.val.byte_array[0] = 5;\
bit_vector_bitsel( &(tempBuffer), &(konst_2452), &(BITSEL_u8_u1_2453));\
bit_vector_concatenate( &(type_cast_2450), &(BITSEL_u8_u1_2453), &(CONCAT_u1022_u1023_2454));\
bit_vector_clear(&konst_2456);\
konst_2456.val.byte_array[0] = 1;\
bit_vector_bitsel( &(tempBuffer), &(konst_2456), &(BITSEL_u8_u1_2457));\
bit_vector_concatenate( &(CONCAT_u1022_u1023_2454), &(BITSEL_u8_u1_2457), &(CONCAT_u1023_u1024_2458));\
bit_vector_or(&(SHL_u1024_u1024_2448), &(CONCAT_u1023_u1024_2458), &(OR_u1024_u1024_2459));\
bit_vector_cast_to_bit_vector(0, &(next_data1), &(OR_u1024_u1024_2459));\
;

#define _dataTx_assign_stmt_2476_c_macro_ __declare_static_bit_vector(konst_2463,1024);\
bit_vector_clear(&konst_2463);\
konst_2463.val.byte_array[0] = 2;\
__declare_static_bit_vector(SHL_u1024_u1024_2464,1024);\
__declare_static_bit_vector(konst_2465,1022);\
bit_vector_clear(&konst_2465);\
__declare_static_bit_vector(type_cast_2466,1022);\
bit_vector_clear(&type_cast_2466);\
__declare_static_bit_vector(konst_2468,8);\
bit_vector_clear(&konst_2468);\
konst_2468.val.byte_array[0] = 4;\
__declare_static_bit_vector(BITSEL_u8_u1_2469,1);\
__declare_static_bit_vector(CONCAT_u1022_u1023_2470,1023);\
__declare_static_bit_vector(konst_2472,8);\
bit_vector_clear(&konst_2472);\
__declare_static_bit_vector(BITSEL_u8_u1_2473,1);\
__declare_static_bit_vector(CONCAT_u1023_u1024_2474,1024);\
__declare_static_bit_vector(OR_u1024_u1024_2475,1024);\
bit_vector_clear(&konst_2463);\
konst_2463.val.byte_array[0] = 2;\
bit_vector_shift_left(&(dat0), &(konst_2463), &(SHL_u1024_u1024_2464));\
bit_vector_clear(&konst_2465);\
bit_vector_bitcast_to_bit_vector( &(type_cast_2466), &(konst_2465));\
bit_vector_clear(&konst_2468);\
konst_2468.val.byte_array[0] = 4;\
bit_vector_bitsel( &(tempBuffer), &(konst_2468), &(BITSEL_u8_u1_2469));\
bit_vector_concatenate( &(type_cast_2466), &(BITSEL_u8_u1_2469), &(CONCAT_u1022_u1023_2470));\
bit_vector_clear(&konst_2472);\
bit_vector_bitsel( &(tempBuffer), &(konst_2472), &(BITSEL_u8_u1_2473));\
bit_vector_concatenate( &(CONCAT_u1022_u1023_2470), &(BITSEL_u8_u1_2473), &(CONCAT_u1023_u1024_2474));\
bit_vector_or(&(SHL_u1024_u1024_2464), &(CONCAT_u1023_u1024_2474), &(OR_u1024_u1024_2475));\
bit_vector_cast_to_bit_vector(0, &(next_data0), &(OR_u1024_u1024_2475));\
;

#define _dataTx_assign_stmt_2481_c_macro_ __declare_static_bit_vector(konst_2479,10);\
bit_vector_clear(&konst_2479);\
konst_2479.val.byte_array[0] = 1;\
__declare_static_bit_vector(ADD_u10_u10_2480,10);\
bit_vector_clear(&konst_2479);\
konst_2479.val.byte_array[0] = 1;\
bit_vector_plus( &(i), &(konst_2479), &(ADD_u10_u10_2480));\
bit_vector_cast_to_bit_vector(0, &(next_i), &(ADD_u10_u10_2480));\
;
;

#define _dataTx_branch_block_stmt_2379_c_export_apply_macro_ bit_vector_cast_to_bit_vector(0, &(dat0__next_data0), &(next_data0));\
bit_vector_cast_to_bit_vector(0, &(dat1__next_data1), &(next_data1));\
bit_vector_cast_to_bit_vector(0, &(dat2__next_data2), &(next_data2));\
bit_vector_cast_to_bit_vector(0, &(dat3__next_data3), &(next_data3));\
;

#define _dataTx_assign_stmt_2490_c_macro_ __declare_static_bit_vector(konst_2488,10);\
bit_vector_clear(&konst_2488);\
__declare_static_bit_vector(type_cast_2489,10);\
bit_vector_clear(&type_cast_2489);\
bit_vector_clear(&konst_2488);\
bit_vector_bitcast_to_bit_vector( &(type_cast_2489), &(konst_2488));\
bit_vector_cast_to_bit_vector(0, &(txBufferPointer), &(type_cast_2489));\
;

#define _dataTx_merge_stmt_2492_c_preamble_macro_ uint8_t merge_stmt_2492_entry_flag;\
merge_stmt_2492_entry_flag = do_while_entry_flag;\
goto merge_stmt_2492_run;\
merge_stmt_2492_run: ;\

#define _dataTx_phi_stmt_2493_c_macro_ __declare_static_bit_vector(konst_2495,11);\
bit_vector_clear(&konst_2495);\
__declare_static_bit_vector(type_cast_2496,11);\
bit_vector_clear(&type_cast_2496);\
if(do_while_loopback_flag) {\
bit_vector_cast_to_bit_vector(0, &(j_0), &(next_j_0));\
}\
else {\
__declare_static_bit_vector(konst_2495,11);\
bit_vector_clear(&konst_2495);\
__declare_static_bit_vector(type_cast_2496,11);\
bit_vector_clear(&type_cast_2496);\
bit_vector_clear(&konst_2495);\
bit_vector_bitcast_to_bit_vector( &(type_cast_2496), &(konst_2495));\
bit_vector_cast_to_bit_vector(0, &(j_0), &(type_cast_2496));\
}\
;

#define _dataTx_phi_stmt_2498_c_macro_ __declare_static_bit_vector(konst_2500,16);\
bit_vector_clear(&konst_2500);\
__declare_static_bit_vector(type_cast_2501,16);\
bit_vector_clear(&type_cast_2501);\
if(do_while_loopback_flag) {\
bit_vector_cast_to_bit_vector(0, &(CRC_16_DAT0), &(nextCRC16_DAT0));\
}\
else {\
__declare_static_bit_vector(konst_2500,16);\
bit_vector_clear(&konst_2500);\
__declare_static_bit_vector(type_cast_2501,16);\
bit_vector_clear(&type_cast_2501);\
bit_vector_clear(&konst_2500);\
bit_vector_bitcast_to_bit_vector( &(type_cast_2501), &(konst_2500));\
bit_vector_cast_to_bit_vector(0, &(CRC_16_DAT0), &(type_cast_2501));\
}\
;

#define _dataTx_phi_stmt_2503_c_macro_ if(do_while_loopback_flag) {\
bit_vector_cast_to_bit_vector(0, &(tempDataD0), &(nextTempDataD0));\
}\
else {\
bit_vector_cast_to_bit_vector(0, &(tempDataD0), &(dat0__next_data0));\
}\
;
;

#define _dataTx_merge_stmt_2492_c_postamble_macro_ merge_stmt_2492_entry_flag = 0;

#define _dataTx_assign_stmt_2516_c_macro_ __declare_static_bit_vector(konst_2510,1024);\
bit_vector_clear(&konst_2510);\
konst_2510.val.byte_array[0] = 255;\
konst_2510.val.byte_array[1] = 3;\
__declare_static_bit_vector(BITSEL_u1024_u1_2511,1);\
__declare_static_bit_vector(konst_2513,16);\
bit_vector_clear(&konst_2513);\
konst_2513.val.byte_array[0] = 15;\
__declare_static_bit_vector(BITSEL_u16_u1_2514,1);\
__declare_static_bit_vector(XOR_u1_u1_2515,1);\
bit_vector_clear(&konst_2510);\
konst_2510.val.byte_array[0] = 255;\
konst_2510.val.byte_array[1] = 3;\
bit_vector_bitsel( &(tempDataD0), &(konst_2510), &(BITSEL_u1024_u1_2511));\
bit_vector_clear(&konst_2513);\
konst_2513.val.byte_array[0] = 15;\
bit_vector_bitsel( &(CRC_16_DAT0), &(konst_2513), &(BITSEL_u16_u1_2514));\
bit_vector_xor(&(BITSEL_u1024_u1_2511), &(BITSEL_u16_u1_2514), &(XOR_u1_u1_2515));\
bit_vector_cast_to_bit_vector(0, &(invd0), &(XOR_u1_u1_2515));\
;

#define _dataTx_assign_stmt_2540_c_macro_ __declare_static_bit_vector(slice_2519,3);\
__declare_static_bit_vector(konst_2521,16);\
bit_vector_clear(&konst_2521);\
konst_2521.val.byte_array[0] = 11;\
__declare_static_bit_vector(BITSEL_u16_u1_2522,1);\
__declare_static_bit_vector(XOR_u1_u1_2524,1);\
__declare_static_bit_vector(CONCAT_u3_u4_2525,4);\
__declare_static_bit_vector(slice_2527,6);\
__declare_static_bit_vector(CONCAT_u4_u10_2528,10);\
__declare_static_bit_vector(konst_2530,16);\
bit_vector_clear(&konst_2530);\
konst_2530.val.byte_array[0] = 4;\
__declare_static_bit_vector(BITSEL_u16_u1_2531,1);\
__declare_static_bit_vector(XOR_u1_u1_2533,1);\
__declare_static_bit_vector(slice_2535,4);\
__declare_static_bit_vector(CONCAT_u1_u5_2536,5);\
__declare_static_bit_vector(CONCAT_u5_u6_2538,6);\
__declare_static_bit_vector(CONCAT_u10_u16_2539,16);\
bit_vector_slice(&(CRC_16_DAT0), &(slice_2519), 12);\
bit_vector_clear(&konst_2521);\
konst_2521.val.byte_array[0] = 11;\
bit_vector_bitsel( &(CRC_16_DAT0), &(konst_2521), &(BITSEL_u16_u1_2522));\
bit_vector_xor(&(BITSEL_u16_u1_2522), &(invd0), &(XOR_u1_u1_2524));\
bit_vector_concatenate( &(slice_2519), &(XOR_u1_u1_2524), &(CONCAT_u3_u4_2525));\
bit_vector_slice(&(CRC_16_DAT0), &(slice_2527), 5);\
bit_vector_concatenate( &(CONCAT_u3_u4_2525), &(slice_2527), &(CONCAT_u4_u10_2528));\
bit_vector_clear(&konst_2530);\
konst_2530.val.byte_array[0] = 4;\
bit_vector_bitsel( &(CRC_16_DAT0), &(konst_2530), &(BITSEL_u16_u1_2531));\
bit_vector_xor(&(BITSEL_u16_u1_2531), &(invd0), &(XOR_u1_u1_2533));\
bit_vector_slice(&(CRC_16_DAT0), &(slice_2535), 0);\
bit_vector_concatenate( &(XOR_u1_u1_2533), &(slice_2535), &(CONCAT_u1_u5_2536));\
bit_vector_concatenate( &(CONCAT_u1_u5_2536), &(invd0), &(CONCAT_u5_u6_2538));\
bit_vector_concatenate( &(CONCAT_u4_u10_2528), &(CONCAT_u5_u6_2538), &(CONCAT_u10_u16_2539));\
bit_vector_cast_to_bit_vector(0, &(nextCRC16_DAT0), &(CONCAT_u10_u16_2539));\
;

#define _dataTx_assign_stmt_2545_c_macro_ __declare_static_bit_vector(konst_2543,1024);\
bit_vector_clear(&konst_2543);\
konst_2543.val.byte_array[0] = 1;\
__declare_static_bit_vector(SHL_u1024_u1024_2544,1024);\
bit_vector_clear(&konst_2543);\
konst_2543.val.byte_array[0] = 1;\
bit_vector_shift_left(&(tempDataD0), &(konst_2543), &(SHL_u1024_u1024_2544));\
bit_vector_cast_to_bit_vector(0, &(nextTempDataD0), &(SHL_u1024_u1024_2544));\
;

#define _dataTx_assign_stmt_2550_c_macro_ __declare_static_bit_vector(konst_2548,11);\
bit_vector_clear(&konst_2548);\
konst_2548.val.byte_array[0] = 1;\
__declare_static_bit_vector(ADD_u11_u11_2549,11);\
bit_vector_clear(&konst_2548);\
konst_2548.val.byte_array[0] = 1;\
bit_vector_plus( &(j_0), &(konst_2548), &(ADD_u11_u11_2549));\
bit_vector_cast_to_bit_vector(0, &(next_j_0), &(ADD_u11_u11_2549));\
;

#define _dataTx_merge_stmt_2556_c_preamble_macro_ uint8_t merge_stmt_2556_entry_flag;\
merge_stmt_2556_entry_flag = do_while_entry_flag;\
goto merge_stmt_2556_run;\
merge_stmt_2556_run: ;\

#define _dataTx_phi_stmt_2557_c_macro_ __declare_static_bit_vector(konst_2559,11);\
bit_vector_clear(&konst_2559);\
__declare_static_bit_vector(type_cast_2560,11);\
bit_vector_clear(&type_cast_2560);\
if(do_while_loopback_flag) {\
bit_vector_cast_to_bit_vector(0, &(j_1), &(next_j_1));\
}\
else {\
__declare_static_bit_vector(konst_2559,11);\
bit_vector_clear(&konst_2559);\
__declare_static_bit_vector(type_cast_2560,11);\
bit_vector_clear(&type_cast_2560);\
bit_vector_clear(&konst_2559);\
bit_vector_bitcast_to_bit_vector( &(type_cast_2560), &(konst_2559));\
bit_vector_cast_to_bit_vector(0, &(j_1), &(type_cast_2560));\
}\
;

#define _dataTx_phi_stmt_2562_c_macro_ __declare_static_bit_vector(konst_2565,16);\
bit_vector_clear(&konst_2565);\
__declare_static_bit_vector(type_cast_2566,16);\
bit_vector_clear(&type_cast_2566);\
if(do_while_loopback_flag) {\
bit_vector_cast_to_bit_vector(0, &(CRC_16_DAT1), &(nextCRC16_DAT1));\
}\
else {\
__declare_static_bit_vector(konst_2565,16);\
bit_vector_clear(&konst_2565);\
__declare_static_bit_vector(type_cast_2566,16);\
bit_vector_clear(&type_cast_2566);\
bit_vector_clear(&konst_2565);\
bit_vector_bitcast_to_bit_vector( &(type_cast_2566), &(konst_2565));\
bit_vector_cast_to_bit_vector(0, &(CRC_16_DAT1), &(type_cast_2566));\
}\
;

#define _dataTx_phi_stmt_2567_c_macro_ if(do_while_loopback_flag) {\
bit_vector_cast_to_bit_vector(0, &(tempDataD1), &(nextTempDataD1));\
}\
else {\
bit_vector_cast_to_bit_vector(0, &(tempDataD1), &(dat1__next_data1));\
}\
;
;

#define _dataTx_merge_stmt_2556_c_postamble_macro_ merge_stmt_2556_entry_flag = 0;

#define _dataTx_assign_stmt_2580_c_macro_ __declare_static_bit_vector(konst_2574,1024);\
bit_vector_clear(&konst_2574);\
konst_2574.val.byte_array[0] = 255;\
konst_2574.val.byte_array[1] = 3;\
__declare_static_bit_vector(BITSEL_u1024_u1_2575,1);\
__declare_static_bit_vector(konst_2577,16);\
bit_vector_clear(&konst_2577);\
konst_2577.val.byte_array[0] = 15;\
__declare_static_bit_vector(BITSEL_u16_u1_2578,1);\
__declare_static_bit_vector(XOR_u1_u1_2579,1);\
bit_vector_clear(&konst_2574);\
konst_2574.val.byte_array[0] = 255;\
konst_2574.val.byte_array[1] = 3;\
bit_vector_bitsel( &(tempDataD1), &(konst_2574), &(BITSEL_u1024_u1_2575));\
bit_vector_clear(&konst_2577);\
konst_2577.val.byte_array[0] = 15;\
bit_vector_bitsel( &(CRC_16_DAT1), &(konst_2577), &(BITSEL_u16_u1_2578));\
bit_vector_xor(&(BITSEL_u1024_u1_2575), &(BITSEL_u16_u1_2578), &(XOR_u1_u1_2579));\
bit_vector_cast_to_bit_vector(0, &(invd1), &(XOR_u1_u1_2579));\
;

#define _dataTx_assign_stmt_2604_c_macro_ __declare_static_bit_vector(slice_2583,3);\
__declare_static_bit_vector(konst_2585,16);\
bit_vector_clear(&konst_2585);\
konst_2585.val.byte_array[0] = 11;\
__declare_static_bit_vector(BITSEL_u16_u1_2586,1);\
__declare_static_bit_vector(XOR_u1_u1_2588,1);\
__declare_static_bit_vector(CONCAT_u3_u4_2589,4);\
__declare_static_bit_vector(slice_2591,6);\
__declare_static_bit_vector(CONCAT_u4_u10_2592,10);\
__declare_static_bit_vector(konst_2594,16);\
bit_vector_clear(&konst_2594);\
konst_2594.val.byte_array[0] = 4;\
__declare_static_bit_vector(BITSEL_u16_u1_2595,1);\
__declare_static_bit_vector(XOR_u1_u1_2597,1);\
__declare_static_bit_vector(slice_2599,4);\
__declare_static_bit_vector(CONCAT_u1_u5_2600,5);\
__declare_static_bit_vector(CONCAT_u5_u6_2602,6);\
__declare_static_bit_vector(CONCAT_u10_u16_2603,16);\
bit_vector_slice(&(CRC_16_DAT1), &(slice_2583), 12);\
bit_vector_clear(&konst_2585);\
konst_2585.val.byte_array[0] = 11;\
bit_vector_bitsel( &(CRC_16_DAT1), &(konst_2585), &(BITSEL_u16_u1_2586));\
bit_vector_xor(&(BITSEL_u16_u1_2586), &(invd1), &(XOR_u1_u1_2588));\
bit_vector_concatenate( &(slice_2583), &(XOR_u1_u1_2588), &(CONCAT_u3_u4_2589));\
bit_vector_slice(&(CRC_16_DAT1), &(slice_2591), 5);\
bit_vector_concatenate( &(CONCAT_u3_u4_2589), &(slice_2591), &(CONCAT_u4_u10_2592));\
bit_vector_clear(&konst_2594);\
konst_2594.val.byte_array[0] = 4;\
bit_vector_bitsel( &(CRC_16_DAT1), &(konst_2594), &(BITSEL_u16_u1_2595));\
bit_vector_xor(&(BITSEL_u16_u1_2595), &(invd1), &(XOR_u1_u1_2597));\
bit_vector_slice(&(CRC_16_DAT1), &(slice_2599), 0);\
bit_vector_concatenate( &(XOR_u1_u1_2597), &(slice_2599), &(CONCAT_u1_u5_2600));\
bit_vector_concatenate( &(CONCAT_u1_u5_2600), &(invd1), &(CONCAT_u5_u6_2602));\
bit_vector_concatenate( &(CONCAT_u4_u10_2592), &(CONCAT_u5_u6_2602), &(CONCAT_u10_u16_2603));\
bit_vector_cast_to_bit_vector(0, &(nextCRC16_DAT1), &(CONCAT_u10_u16_2603));\
;

#define _dataTx_assign_stmt_2609_c_macro_ __declare_static_bit_vector(konst_2607,1024);\
bit_vector_clear(&konst_2607);\
konst_2607.val.byte_array[0] = 1;\
__declare_static_bit_vector(SHL_u1024_u1024_2608,1024);\
bit_vector_clear(&konst_2607);\
konst_2607.val.byte_array[0] = 1;\
bit_vector_shift_left(&(tempDataD1), &(konst_2607), &(SHL_u1024_u1024_2608));\
bit_vector_cast_to_bit_vector(0, &(nextTempDataD1), &(SHL_u1024_u1024_2608));\
;

#define _dataTx_assign_stmt_2614_c_macro_ __declare_static_bit_vector(konst_2612,11);\
bit_vector_clear(&konst_2612);\
konst_2612.val.byte_array[0] = 1;\
__declare_static_bit_vector(ADD_u11_u11_2613,11);\
bit_vector_clear(&konst_2612);\
konst_2612.val.byte_array[0] = 1;\
bit_vector_plus( &(j_1), &(konst_2612), &(ADD_u11_u11_2613));\
bit_vector_cast_to_bit_vector(0, &(next_j_1), &(ADD_u11_u11_2613));\
;

#define _dataTx_merge_stmt_2620_c_preamble_macro_ uint8_t merge_stmt_2620_entry_flag;\
merge_stmt_2620_entry_flag = do_while_entry_flag;\
goto merge_stmt_2620_run;\
merge_stmt_2620_run: ;\

#define _dataTx_phi_stmt_2621_c_macro_ __declare_static_bit_vector(konst_2623,11);\
bit_vector_clear(&konst_2623);\
__declare_static_bit_vector(type_cast_2624,11);\
bit_vector_clear(&type_cast_2624);\
if(do_while_loopback_flag) {\
bit_vector_cast_to_bit_vector(0, &(j_2), &(next_j_2));\
}\
else {\
__declare_static_bit_vector(konst_2623,11);\
bit_vector_clear(&konst_2623);\
__declare_static_bit_vector(type_cast_2624,11);\
bit_vector_clear(&type_cast_2624);\
bit_vector_clear(&konst_2623);\
bit_vector_bitcast_to_bit_vector( &(type_cast_2624), &(konst_2623));\
bit_vector_cast_to_bit_vector(0, &(j_2), &(type_cast_2624));\
}\
;

#define _dataTx_phi_stmt_2626_c_macro_ __declare_static_bit_vector(konst_2628,16);\
bit_vector_clear(&konst_2628);\
__declare_static_bit_vector(type_cast_2629,16);\
bit_vector_clear(&type_cast_2629);\
if(do_while_loopback_flag) {\
bit_vector_cast_to_bit_vector(0, &(CRC_16_DAT2), &(nextCRC16_DAT2));\
}\
else {\
__declare_static_bit_vector(konst_2628,16);\
bit_vector_clear(&konst_2628);\
__declare_static_bit_vector(type_cast_2629,16);\
bit_vector_clear(&type_cast_2629);\
bit_vector_clear(&konst_2628);\
bit_vector_bitcast_to_bit_vector( &(type_cast_2629), &(konst_2628));\
bit_vector_cast_to_bit_vector(0, &(CRC_16_DAT2), &(type_cast_2629));\
}\
;

#define _dataTx_phi_stmt_2631_c_macro_ if(do_while_loopback_flag) {\
bit_vector_cast_to_bit_vector(0, &(tempDataD2), &(nextTempDataD2));\
}\
else {\
bit_vector_cast_to_bit_vector(0, &(tempDataD2), &(dat2__next_data2));\
}\
;
;

#define _dataTx_merge_stmt_2620_c_postamble_macro_ merge_stmt_2620_entry_flag = 0;

#define _dataTx_assign_stmt_2644_c_macro_ __declare_static_bit_vector(konst_2638,1024);\
bit_vector_clear(&konst_2638);\
konst_2638.val.byte_array[0] = 255;\
konst_2638.val.byte_array[1] = 3;\
__declare_static_bit_vector(BITSEL_u1024_u1_2639,1);\
__declare_static_bit_vector(konst_2641,16);\
bit_vector_clear(&konst_2641);\
konst_2641.val.byte_array[0] = 15;\
__declare_static_bit_vector(BITSEL_u16_u1_2642,1);\
__declare_static_bit_vector(XOR_u1_u1_2643,1);\
bit_vector_clear(&konst_2638);\
konst_2638.val.byte_array[0] = 255;\
konst_2638.val.byte_array[1] = 3;\
bit_vector_bitsel( &(tempDataD2), &(konst_2638), &(BITSEL_u1024_u1_2639));\
bit_vector_clear(&konst_2641);\
konst_2641.val.byte_array[0] = 15;\
bit_vector_bitsel( &(CRC_16_DAT2), &(konst_2641), &(BITSEL_u16_u1_2642));\
bit_vector_xor(&(BITSEL_u1024_u1_2639), &(BITSEL_u16_u1_2642), &(XOR_u1_u1_2643));\
bit_vector_cast_to_bit_vector(0, &(invd2), &(XOR_u1_u1_2643));\
;

#define _dataTx_assign_stmt_2668_c_macro_ __declare_static_bit_vector(slice_2647,3);\
__declare_static_bit_vector(konst_2649,16);\
bit_vector_clear(&konst_2649);\
konst_2649.val.byte_array[0] = 11;\
__declare_static_bit_vector(BITSEL_u16_u1_2650,1);\
__declare_static_bit_vector(XOR_u1_u1_2652,1);\
__declare_static_bit_vector(CONCAT_u3_u4_2653,4);\
__declare_static_bit_vector(slice_2655,6);\
__declare_static_bit_vector(CONCAT_u4_u10_2656,10);\
__declare_static_bit_vector(konst_2658,16);\
bit_vector_clear(&konst_2658);\
konst_2658.val.byte_array[0] = 4;\
__declare_static_bit_vector(BITSEL_u16_u1_2659,1);\
__declare_static_bit_vector(XOR_u1_u1_2661,1);\
__declare_static_bit_vector(slice_2663,4);\
__declare_static_bit_vector(CONCAT_u1_u5_2664,5);\
__declare_static_bit_vector(CONCAT_u5_u6_2666,6);\
__declare_static_bit_vector(CONCAT_u10_u16_2667,16);\
bit_vector_slice(&(CRC_16_DAT2), &(slice_2647), 12);\
bit_vector_clear(&konst_2649);\
konst_2649.val.byte_array[0] = 11;\
bit_vector_bitsel( &(CRC_16_DAT2), &(konst_2649), &(BITSEL_u16_u1_2650));\
bit_vector_xor(&(BITSEL_u16_u1_2650), &(invd2), &(XOR_u1_u1_2652));\
bit_vector_concatenate( &(slice_2647), &(XOR_u1_u1_2652), &(CONCAT_u3_u4_2653));\
bit_vector_slice(&(CRC_16_DAT2), &(slice_2655), 5);\
bit_vector_concatenate( &(CONCAT_u3_u4_2653), &(slice_2655), &(CONCAT_u4_u10_2656));\
bit_vector_clear(&konst_2658);\
konst_2658.val.byte_array[0] = 4;\
bit_vector_bitsel( &(CRC_16_DAT2), &(konst_2658), &(BITSEL_u16_u1_2659));\
bit_vector_xor(&(BITSEL_u16_u1_2659), &(invd2), &(XOR_u1_u1_2661));\
bit_vector_slice(&(CRC_16_DAT2), &(slice_2663), 0);\
bit_vector_concatenate( &(XOR_u1_u1_2661), &(slice_2663), &(CONCAT_u1_u5_2664));\
bit_vector_concatenate( &(CONCAT_u1_u5_2664), &(invd2), &(CONCAT_u5_u6_2666));\
bit_vector_concatenate( &(CONCAT_u4_u10_2656), &(CONCAT_u5_u6_2666), &(CONCAT_u10_u16_2667));\
bit_vector_cast_to_bit_vector(0, &(nextCRC16_DAT2), &(CONCAT_u10_u16_2667));\
;

#define _dataTx_assign_stmt_2673_c_macro_ __declare_static_bit_vector(konst_2671,1024);\
bit_vector_clear(&konst_2671);\
konst_2671.val.byte_array[0] = 1;\
__declare_static_bit_vector(SHL_u1024_u1024_2672,1024);\
bit_vector_clear(&konst_2671);\
konst_2671.val.byte_array[0] = 1;\
bit_vector_shift_left(&(tempDataD2), &(konst_2671), &(SHL_u1024_u1024_2672));\
bit_vector_cast_to_bit_vector(0, &(nextTempDataD2), &(SHL_u1024_u1024_2672));\
;

#define _dataTx_assign_stmt_2678_c_macro_ __declare_static_bit_vector(konst_2676,11);\
bit_vector_clear(&konst_2676);\
konst_2676.val.byte_array[0] = 1;\
__declare_static_bit_vector(ADD_u11_u11_2677,11);\
bit_vector_clear(&konst_2676);\
konst_2676.val.byte_array[0] = 1;\
bit_vector_plus( &(j_2), &(konst_2676), &(ADD_u11_u11_2677));\
bit_vector_cast_to_bit_vector(0, &(next_j_2), &(ADD_u11_u11_2677));\
;

#define _dataTx_merge_stmt_2684_c_preamble_macro_ uint8_t merge_stmt_2684_entry_flag;\
merge_stmt_2684_entry_flag = do_while_entry_flag;\
goto merge_stmt_2684_run;\
merge_stmt_2684_run: ;\

#define _dataTx_phi_stmt_2685_c_macro_ __declare_static_bit_vector(konst_2687,11);\
bit_vector_clear(&konst_2687);\
__declare_static_bit_vector(type_cast_2688,11);\
bit_vector_clear(&type_cast_2688);\
if(do_while_loopback_flag) {\
bit_vector_cast_to_bit_vector(0, &(j_3), &(next_j_3));\
}\
else {\
__declare_static_bit_vector(konst_2687,11);\
bit_vector_clear(&konst_2687);\
__declare_static_bit_vector(type_cast_2688,11);\
bit_vector_clear(&type_cast_2688);\
bit_vector_clear(&konst_2687);\
bit_vector_bitcast_to_bit_vector( &(type_cast_2688), &(konst_2687));\
bit_vector_cast_to_bit_vector(0, &(j_3), &(type_cast_2688));\
}\
;

#define _dataTx_phi_stmt_2690_c_macro_ __declare_static_bit_vector(konst_2692,16);\
bit_vector_clear(&konst_2692);\
__declare_static_bit_vector(type_cast_2693,16);\
bit_vector_clear(&type_cast_2693);\
if(do_while_loopback_flag) {\
bit_vector_cast_to_bit_vector(0, &(CRC_16_DAT3), &(nextCRC16_DAT3));\
}\
else {\
__declare_static_bit_vector(konst_2692,16);\
bit_vector_clear(&konst_2692);\
__declare_static_bit_vector(type_cast_2693,16);\
bit_vector_clear(&type_cast_2693);\
bit_vector_clear(&konst_2692);\
bit_vector_bitcast_to_bit_vector( &(type_cast_2693), &(konst_2692));\
bit_vector_cast_to_bit_vector(0, &(CRC_16_DAT3), &(type_cast_2693));\
}\
;

#define _dataTx_phi_stmt_2695_c_macro_ if(do_while_loopback_flag) {\
bit_vector_cast_to_bit_vector(0, &(tempDataD3), &(nextTempDataD3));\
}\
else {\
bit_vector_cast_to_bit_vector(0, &(tempDataD3), &(dat3__next_data3));\
}\
;
;

#define _dataTx_merge_stmt_2684_c_postamble_macro_ merge_stmt_2684_entry_flag = 0;

#define _dataTx_assign_stmt_2708_c_macro_ __declare_static_bit_vector(konst_2702,1024);\
bit_vector_clear(&konst_2702);\
konst_2702.val.byte_array[0] = 255;\
konst_2702.val.byte_array[1] = 3;\
__declare_static_bit_vector(BITSEL_u1024_u1_2703,1);\
__declare_static_bit_vector(konst_2705,16);\
bit_vector_clear(&konst_2705);\
konst_2705.val.byte_array[0] = 15;\
__declare_static_bit_vector(BITSEL_u16_u1_2706,1);\
__declare_static_bit_vector(XOR_u1_u1_2707,1);\
bit_vector_clear(&konst_2702);\
konst_2702.val.byte_array[0] = 255;\
konst_2702.val.byte_array[1] = 3;\
bit_vector_bitsel( &(tempDataD3), &(konst_2702), &(BITSEL_u1024_u1_2703));\
bit_vector_clear(&konst_2705);\
konst_2705.val.byte_array[0] = 15;\
bit_vector_bitsel( &(CRC_16_DAT3), &(konst_2705), &(BITSEL_u16_u1_2706));\
bit_vector_xor(&(BITSEL_u1024_u1_2703), &(BITSEL_u16_u1_2706), &(XOR_u1_u1_2707));\
bit_vector_cast_to_bit_vector(0, &(invd3), &(XOR_u1_u1_2707));\
;

#define _dataTx_assign_stmt_2732_c_macro_ __declare_static_bit_vector(slice_2711,3);\
__declare_static_bit_vector(konst_2713,16);\
bit_vector_clear(&konst_2713);\
konst_2713.val.byte_array[0] = 11;\
__declare_static_bit_vector(BITSEL_u16_u1_2714,1);\
__declare_static_bit_vector(XOR_u1_u1_2716,1);\
__declare_static_bit_vector(CONCAT_u3_u4_2717,4);\
__declare_static_bit_vector(slice_2719,6);\
__declare_static_bit_vector(CONCAT_u4_u10_2720,10);\
__declare_static_bit_vector(konst_2722,16);\
bit_vector_clear(&konst_2722);\
konst_2722.val.byte_array[0] = 4;\
__declare_static_bit_vector(BITSEL_u16_u1_2723,1);\
__declare_static_bit_vector(XOR_u1_u1_2725,1);\
__declare_static_bit_vector(slice_2727,4);\
__declare_static_bit_vector(CONCAT_u1_u5_2728,5);\
__declare_static_bit_vector(CONCAT_u5_u6_2730,6);\
__declare_static_bit_vector(CONCAT_u10_u16_2731,16);\
bit_vector_slice(&(CRC_16_DAT3), &(slice_2711), 12);\
bit_vector_clear(&konst_2713);\
konst_2713.val.byte_array[0] = 11;\
bit_vector_bitsel( &(CRC_16_DAT3), &(konst_2713), &(BITSEL_u16_u1_2714));\
bit_vector_xor(&(BITSEL_u16_u1_2714), &(invd3), &(XOR_u1_u1_2716));\
bit_vector_concatenate( &(slice_2711), &(XOR_u1_u1_2716), &(CONCAT_u3_u4_2717));\
bit_vector_slice(&(CRC_16_DAT3), &(slice_2719), 5);\
bit_vector_concatenate( &(CONCAT_u3_u4_2717), &(slice_2719), &(CONCAT_u4_u10_2720));\
bit_vector_clear(&konst_2722);\
konst_2722.val.byte_array[0] = 4;\
bit_vector_bitsel( &(CRC_16_DAT3), &(konst_2722), &(BITSEL_u16_u1_2723));\
bit_vector_xor(&(BITSEL_u16_u1_2723), &(invd3), &(XOR_u1_u1_2725));\
bit_vector_slice(&(CRC_16_DAT3), &(slice_2727), 0);\
bit_vector_concatenate( &(XOR_u1_u1_2725), &(slice_2727), &(CONCAT_u1_u5_2728));\
bit_vector_concatenate( &(CONCAT_u1_u5_2728), &(invd3), &(CONCAT_u5_u6_2730));\
bit_vector_concatenate( &(CONCAT_u4_u10_2720), &(CONCAT_u5_u6_2730), &(CONCAT_u10_u16_2731));\
bit_vector_cast_to_bit_vector(0, &(nextCRC16_DAT3), &(CONCAT_u10_u16_2731));\
;

#define _dataTx_assign_stmt_2737_c_macro_ __declare_static_bit_vector(konst_2735,1024);\
bit_vector_clear(&konst_2735);\
konst_2735.val.byte_array[0] = 1;\
__declare_static_bit_vector(SHL_u1024_u1024_2736,1024);\
bit_vector_clear(&konst_2735);\
konst_2735.val.byte_array[0] = 1;\
bit_vector_shift_left(&(tempDataD3), &(konst_2735), &(SHL_u1024_u1024_2736));\
bit_vector_cast_to_bit_vector(0, &(nextTempDataD3), &(SHL_u1024_u1024_2736));\
;

#define _dataTx_assign_stmt_2742_c_macro_ __declare_static_bit_vector(konst_2740,11);\
bit_vector_clear(&konst_2740);\
konst_2740.val.byte_array[0] = 1;\
__declare_static_bit_vector(ADD_u11_u11_2741,11);\
bit_vector_clear(&konst_2740);\
konst_2740.val.byte_array[0] = 1;\
bit_vector_plus( &(j_3), &(konst_2740), &(ADD_u11_u11_2741));\
bit_vector_cast_to_bit_vector(0, &(next_j_3), &(ADD_u11_u11_2741));\
;

#define _dataTx_assign_stmt_2749_c_macro_ write_bit_vector_to_pipe("oe",&(ONE_1));\
;

#define _dataTx_parallel_block_stmt_2750_c_export_decl_macro_ 

#define _dataTx_call_stmt_2753_c_macro_ _sendDAT0_( &(next_data0),  &(nextCRC16_DAT0));\
;

#define _dataTx_call_stmt_2756_c_macro_ _sendDAT1_( &(next_data1),  &(nextCRC16_DAT1));\
;

#define _dataTx_call_stmt_2759_c_macro_ _sendDAT2_( &(next_data2),  &(nextCRC16_DAT2));\
;

#define _dataTx_call_stmt_2762_c_macro_ _sendDAT3_( &(next_data3),  &(nextCRC16_DAT3));\
;
;

#define _dataTx_parallel_block_stmt_2750_c_export_apply_macro_ ;

#define _dataTx_assign_stmt_2766_c_macro_ write_bit_vector_to_pipe("oe",&(ZERO_1));\
;

#define _dataTx_branch_block_stmt_2768_c_export_decl_macro_ __declare_static_bit_vector(dat__next_data,4096);\
__declare_static_bit_vector(I,10);\
__declare_static_bit_vector(dat,4096);\
__declare_static_bit_vector(next_data,4096);\
__declare_static_bit_vector(next_I,10);\


#define _dataTx_merge_stmt_2769_c_preamble_macro_ uint8_t merge_stmt_2769_entry_flag;\
merge_stmt_2769_entry_flag = 1;\
uint8_t loopback1_2768_flag = 0;\
goto merge_stmt_2769_run;\
loopback1_2768: loopback1_2768_flag = 1;\
goto merge_stmt_2769_run;\
merge_stmt_2769_run: ;\

#define _dataTx_phi_stmt_2770_c_macro_ __declare_static_bit_vector(konst_2772,10);\
bit_vector_clear(&konst_2772);\
__declare_static_bit_vector(type_cast_2773,10);\
bit_vector_clear(&type_cast_2773);\
if(loopback1_2768_flag) {\
bit_vector_cast_to_bit_vector(0, &(I), &(next_I));\
}\
else {\
__declare_static_bit_vector(konst_2772,10);\
bit_vector_clear(&konst_2772);\
__declare_static_bit_vector(type_cast_2773,10);\
bit_vector_clear(&type_cast_2773);\
bit_vector_clear(&konst_2772);\
bit_vector_bitcast_to_bit_vector( &(type_cast_2773), &(konst_2772));\
bit_vector_cast_to_bit_vector(0, &(I), &(type_cast_2773));\
}\
;

#define _dataTx_phi_stmt_2775_c_macro_ __declare_static_bit_vector(konst_2777,4096);\
bit_vector_clear(&konst_2777);\
__declare_static_bit_vector(type_cast_2778,4096);\
bit_vector_clear(&type_cast_2778);\
if(loopback1_2768_flag) {\
bit_vector_cast_to_bit_vector(0, &(dat), &(next_data));\
}\
else {\
__declare_static_bit_vector(konst_2777,4096);\
bit_vector_clear(&konst_2777);\
__declare_static_bit_vector(type_cast_2778,4096);\
bit_vector_clear(&type_cast_2778);\
bit_vector_clear(&konst_2777);\
bit_vector_bitcast_to_bit_vector( &(type_cast_2778), &(konst_2777));\
bit_vector_cast_to_bit_vector(0, &(dat), &(type_cast_2778));\
}\
;
;

#define _dataTx_merge_stmt_2769_c_postamble_macro_ loopback1_2768_flag = 0;\
merge_stmt_2769_entry_flag = 0;

#define _dataTx_assign_stmt_2790_c_macro_ __declare_static_bit_vector(konst_2783,4096);\
bit_vector_clear(&konst_2783);\
konst_2783.val.byte_array[0] = 8;\
__declare_static_bit_vector(SHL_u4096_u4096_2784,4096);\
__declare_static_bit_vector(konst_2785,4088);\
bit_vector_clear(&konst_2785);\
__declare_static_bit_vector(type_cast_2786,4088);\
bit_vector_clear(&type_cast_2786);\
__declare_static_bit_vector(RPIPE_dataBufferTx_2787,8);\
__declare_static_bit_vector(CONCAT_u4088_u4096_2788,4096);\
__declare_static_bit_vector(OR_u4096_u4096_2789,4096);\
bit_vector_clear(&konst_2783);\
konst_2783.val.byte_array[0] = 8;\
bit_vector_shift_left(&(dat), &(konst_2783), &(SHL_u4096_u4096_2784));\
bit_vector_clear(&konst_2785);\
bit_vector_bitcast_to_bit_vector( &(type_cast_2786), &(konst_2785));\
read_bit_vector_from_pipe("dataBufferTx",&(RPIPE_dataBufferTx_2787));\
bit_vector_concatenate( &(type_cast_2786), &(RPIPE_dataBufferTx_2787), &(CONCAT_u4088_u4096_2788));\
bit_vector_or(&(SHL_u4096_u4096_2784), &(CONCAT_u4088_u4096_2788), &(OR_u4096_u4096_2789));\
bit_vector_cast_to_bit_vector(0, &(next_data), &(OR_u4096_u4096_2789));\
;

#define _dataTx_assign_stmt_2795_c_macro_ __declare_static_bit_vector(konst_2793,10);\
bit_vector_clear(&konst_2793);\
konst_2793.val.byte_array[0] = 1;\
__declare_static_bit_vector(ADD_u10_u10_2794,10);\
bit_vector_clear(&konst_2793);\
konst_2793.val.byte_array[0] = 1;\
bit_vector_plus( &(I), &(konst_2793), &(ADD_u10_u10_2794));\
bit_vector_cast_to_bit_vector(0, &(next_I), &(ADD_u10_u10_2794));\
;
;

#define _dataTx_branch_block_stmt_2768_c_export_apply_macro_ bit_vector_cast_to_bit_vector(0, &(dat__next_data), &(next_data));\
;

#define _dataTx_assign_stmt_2806_c_macro_ __declare_static_bit_vector(konst_2804,10);\
bit_vector_clear(&konst_2804);\
__declare_static_bit_vector(type_cast_2805,10);\
bit_vector_clear(&type_cast_2805);\
bit_vector_clear(&konst_2804);\
bit_vector_bitcast_to_bit_vector( &(type_cast_2805), &(konst_2804));\
bit_vector_cast_to_bit_vector(0, &(txBufferPointer), &(type_cast_2805));\
;

#define _dataTx_merge_stmt_2807_c_preamble_macro_ uint8_t merge_stmt_2807_entry_flag;\
merge_stmt_2807_entry_flag = 1;\
uint8_t loopback_2373_flag = 0;\
goto merge_stmt_2807_run;\
loopback_2373: loopback_2373_flag = 1;\
goto merge_stmt_2807_run;\
merge_stmt_2807_run: ;\

#define _dataTx_phi_stmt_2808_c_macro_ __declare_static_bit_vector(konst_2810,13);\
bit_vector_clear(&konst_2810);\
__declare_static_bit_vector(type_cast_2811,13);\
bit_vector_clear(&type_cast_2811);\
if(loopback_2373_flag) {\
bit_vector_cast_to_bit_vector(0, &(J), &(next_J));\
}\
else {\
__declare_static_bit_vector(konst_2810,13);\
bit_vector_clear(&konst_2810);\
__declare_static_bit_vector(type_cast_2811,13);\
bit_vector_clear(&type_cast_2811);\
bit_vector_clear(&konst_2810);\
bit_vector_bitcast_to_bit_vector( &(type_cast_2811), &(konst_2810));\
bit_vector_cast_to_bit_vector(0, &(J), &(type_cast_2811));\
}\
;

#define _dataTx_phi_stmt_2813_c_macro_ __declare_static_bit_vector(konst_2815,16);\
bit_vector_clear(&konst_2815);\
__declare_static_bit_vector(type_cast_2816,16);\
bit_vector_clear(&type_cast_2816);\
if(loopback_2373_flag) {\
bit_vector_cast_to_bit_vector(0, &(CRC_16), &(nextCRC16));\
}\
else {\
__declare_static_bit_vector(konst_2815,16);\
bit_vector_clear(&konst_2815);\
__declare_static_bit_vector(type_cast_2816,16);\
bit_vector_clear(&type_cast_2816);\
bit_vector_clear(&konst_2815);\
bit_vector_bitcast_to_bit_vector( &(type_cast_2816), &(konst_2815));\
bit_vector_cast_to_bit_vector(0, &(CRC_16), &(type_cast_2816));\
}\
;

#define _dataTx_phi_stmt_2818_c_macro_ if(loopback_2373_flag) {\
bit_vector_cast_to_bit_vector(0, &(tempData), &(nextTempData));\
}\
else {\
bit_vector_cast_to_bit_vector(0, &(tempData), &(dat__next_data));\
}\
;
;

#define _dataTx_merge_stmt_2807_c_postamble_macro_ loopback_2373_flag = 0;\
merge_stmt_2807_entry_flag = 0;

#define _dataTx_assign_stmt_2831_c_macro_ __declare_static_bit_vector(konst_2825,4096);\
bit_vector_clear(&konst_2825);\
konst_2825.val.byte_array[0] = 255;\
konst_2825.val.byte_array[1] = 15;\
__declare_static_bit_vector(BITSEL_u4096_u1_2826,1);\
__declare_static_bit_vector(konst_2828,16);\
bit_vector_clear(&konst_2828);\
konst_2828.val.byte_array[0] = 15;\
__declare_static_bit_vector(BITSEL_u16_u1_2829,1);\
__declare_static_bit_vector(XOR_u1_u1_2830,1);\
bit_vector_clear(&konst_2825);\
konst_2825.val.byte_array[0] = 255;\
konst_2825.val.byte_array[1] = 15;\
bit_vector_bitsel( &(tempData), &(konst_2825), &(BITSEL_u4096_u1_2826));\
bit_vector_clear(&konst_2828);\
konst_2828.val.byte_array[0] = 15;\
bit_vector_bitsel( &(CRC_16), &(konst_2828), &(BITSEL_u16_u1_2829));\
bit_vector_xor(&(BITSEL_u4096_u1_2826), &(BITSEL_u16_u1_2829), &(XOR_u1_u1_2830));\
bit_vector_cast_to_bit_vector(0, &(inv), &(XOR_u1_u1_2830));\
;

#define _dataTx_assign_stmt_2855_c_macro_ __declare_static_bit_vector(slice_2834,3);\
__declare_static_bit_vector(konst_2836,16);\
bit_vector_clear(&konst_2836);\
konst_2836.val.byte_array[0] = 11;\
__declare_static_bit_vector(BITSEL_u16_u1_2837,1);\
__declare_static_bit_vector(XOR_u1_u1_2839,1);\
__declare_static_bit_vector(CONCAT_u3_u4_2840,4);\
__declare_static_bit_vector(slice_2842,6);\
__declare_static_bit_vector(CONCAT_u4_u10_2843,10);\
__declare_static_bit_vector(konst_2845,16);\
bit_vector_clear(&konst_2845);\
konst_2845.val.byte_array[0] = 4;\
__declare_static_bit_vector(BITSEL_u16_u1_2846,1);\
__declare_static_bit_vector(XOR_u1_u1_2848,1);\
__declare_static_bit_vector(slice_2850,4);\
__declare_static_bit_vector(CONCAT_u1_u5_2851,5);\
__declare_static_bit_vector(CONCAT_u5_u6_2853,6);\
__declare_static_bit_vector(CONCAT_u10_u16_2854,16);\
bit_vector_slice(&(CRC_16), &(slice_2834), 12);\
bit_vector_clear(&konst_2836);\
konst_2836.val.byte_array[0] = 11;\
bit_vector_bitsel( &(CRC_16), &(konst_2836), &(BITSEL_u16_u1_2837));\
bit_vector_xor(&(BITSEL_u16_u1_2837), &(inv), &(XOR_u1_u1_2839));\
bit_vector_concatenate( &(slice_2834), &(XOR_u1_u1_2839), &(CONCAT_u3_u4_2840));\
bit_vector_slice(&(CRC_16), &(slice_2842), 5);\
bit_vector_concatenate( &(CONCAT_u3_u4_2840), &(slice_2842), &(CONCAT_u4_u10_2843));\
bit_vector_clear(&konst_2845);\
konst_2845.val.byte_array[0] = 4;\
bit_vector_bitsel( &(CRC_16), &(konst_2845), &(BITSEL_u16_u1_2846));\
bit_vector_xor(&(BITSEL_u16_u1_2846), &(inv), &(XOR_u1_u1_2848));\
bit_vector_slice(&(CRC_16), &(slice_2850), 0);\
bit_vector_concatenate( &(XOR_u1_u1_2848), &(slice_2850), &(CONCAT_u1_u5_2851));\
bit_vector_concatenate( &(CONCAT_u1_u5_2851), &(inv), &(CONCAT_u5_u6_2853));\
bit_vector_concatenate( &(CONCAT_u4_u10_2843), &(CONCAT_u5_u6_2853), &(CONCAT_u10_u16_2854));\
bit_vector_cast_to_bit_vector(0, &(nextCRC16), &(CONCAT_u10_u16_2854));\
;

#define _dataTx_assign_stmt_2860_c_macro_ __declare_static_bit_vector(konst_2858,4096);\
bit_vector_clear(&konst_2858);\
konst_2858.val.byte_array[0] = 1;\
__declare_static_bit_vector(SHL_u4096_u4096_2859,4096);\
bit_vector_clear(&konst_2858);\
konst_2858.val.byte_array[0] = 1;\
bit_vector_shift_left(&(tempData), &(konst_2858), &(SHL_u4096_u4096_2859));\
bit_vector_cast_to_bit_vector(0, &(nextTempData), &(SHL_u4096_u4096_2859));\
;

#define _dataTx_assign_stmt_2865_c_macro_ __declare_static_bit_vector(konst_2863,13);\
bit_vector_clear(&konst_2863);\
konst_2863.val.byte_array[0] = 1;\
__declare_static_bit_vector(ADD_u13_u13_2864,13);\
bit_vector_clear(&konst_2863);\
konst_2863.val.byte_array[0] = 1;\
bit_vector_plus( &(J), &(konst_2863), &(ADD_u13_u13_2864));\
bit_vector_cast_to_bit_vector(0, &(next_J), &(ADD_u13_u13_2864));\
;

#define _dataTx_stmt_2875_c_macro_ uint32_t _dataTx_stmt_2875_c_macro___print_counter= get_file_print_lock(__report_log_file__);if(__report_log_file__ != NULL) fprintf(__report_log_file__,"[%u]OUTDATA>\t%s\n",_dataTx_stmt_2875_c_macro___print_counter,"data");if(__report_log_file__ != NULL) {fprintf(__report_log_file__,"[%u]OUTDATA>\t\t%s\t\t",_dataTx_stmt_2875_c_macro___print_counter,"dat");fprintf(__report_log_file__, ":= 0x%s\n",to_hex_string(&(dat__next_data)));fflush (__report_log_file__);}if(__report_log_file__ != NULL) {fprintf(__report_log_file__,"[%u]OUTDATA>\t\t%s\t\t",_dataTx_stmt_2875_c_macro___print_counter,"nextCRC16");fprintf(__report_log_file__, ":= 0x%s\n",to_hex_string(&(nextCRC16)));fflush (__report_log_file__);}if(__report_log_file__ != NULL) {fprintf(__report_log_file__,"[%u]OUTDATA>\t\t%s\t\t",_dataTx_stmt_2875_c_macro___print_counter,"lastBlock");fprintf(__report_log_file__, ":= 0x%s\n",to_hex_string(&(lastBlock)));fflush (__report_log_file__);}release_file_print_lock(__report_log_file__);;

#define _dataTx_assign_stmt_2878_c_macro_ write_bit_vector_to_pipe("oe",&(ONE_1));\
;

#define _dataTx_assign_stmt_2881_c_macro_ write_bit_vector_to_pipe("DAT0Tx",&(ZERO_1));\
;

#define _dataTx_merge_stmt_2882_c_preamble_macro_ uint8_t merge_stmt_2882_entry_flag;\
merge_stmt_2882_entry_flag = 1;\
uint8_t dataloop_2373_flag = 0;\
goto merge_stmt_2882_run;\
dataloop_2373: dataloop_2373_flag = 1;\
goto merge_stmt_2882_run;\
merge_stmt_2882_run: ;\

#define _dataTx_phi_stmt_2883_c_macro_ __declare_static_bit_vector(konst_2885,13);\
bit_vector_clear(&konst_2885);\
__declare_static_bit_vector(type_cast_2886,13);\
bit_vector_clear(&type_cast_2886);\
if(dataloop_2373_flag) {\
bit_vector_cast_to_bit_vector(0, &(K), &(next_K));\
}\
else {\
__declare_static_bit_vector(konst_2885,13);\
bit_vector_clear(&konst_2885);\
__declare_static_bit_vector(type_cast_2886,13);\
bit_vector_clear(&type_cast_2886);\
bit_vector_clear(&konst_2885);\
bit_vector_bitcast_to_bit_vector( &(type_cast_2886), &(konst_2885));\
bit_vector_cast_to_bit_vector(0, &(K), &(type_cast_2886));\
}\
;

#define _dataTx_phi_stmt_2888_c_macro_ if(dataloop_2373_flag) {\
bit_vector_cast_to_bit_vector(0, &(dat0bit), &(nextbit));\
}\
else {\
bit_vector_cast_to_bit_vector(0, &(dat0bit), &(dat__next_data));\
}\
;
;

#define _dataTx_merge_stmt_2882_c_postamble_macro_ dataloop_2373_flag = 0;\
merge_stmt_2882_entry_flag = 0;

#define _dataTx_assign_stmt_2897_c_macro_ __declare_static_bit_vector(konst_2895,4096);\
bit_vector_clear(&konst_2895);\
konst_2895.val.byte_array[0] = 255;\
konst_2895.val.byte_array[1] = 15;\
__declare_static_bit_vector(BITSEL_u4096_u1_2896,1);\
bit_vector_clear(&konst_2895);\
konst_2895.val.byte_array[0] = 255;\
konst_2895.val.byte_array[1] = 15;\
bit_vector_bitsel( &(dat0bit), &(konst_2895), &(BITSEL_u4096_u1_2896));\
write_bit_vector_to_pipe("DAT0Tx",&(BITSEL_u4096_u1_2896));\
;

#define _dataTx_assign_stmt_2902_c_macro_ __declare_static_bit_vector(konst_2900,4096);\
bit_vector_clear(&konst_2900);\
konst_2900.val.byte_array[0] = 1;\
__declare_static_bit_vector(SHL_u4096_u4096_2901,4096);\
bit_vector_clear(&konst_2900);\
konst_2900.val.byte_array[0] = 1;\
bit_vector_shift_left(&(dat0bit), &(konst_2900), &(SHL_u4096_u4096_2901));\
bit_vector_cast_to_bit_vector(0, &(nextbit), &(SHL_u4096_u4096_2901));\
;

#define _dataTx_assign_stmt_2907_c_macro_ __declare_static_bit_vector(konst_2905,13);\
bit_vector_clear(&konst_2905);\
konst_2905.val.byte_array[0] = 1;\
__declare_static_bit_vector(ADD_u13_u13_2906,13);\
bit_vector_clear(&konst_2905);\
konst_2905.val.byte_array[0] = 1;\
bit_vector_plus( &(K), &(konst_2905), &(ADD_u13_u13_2906));\
bit_vector_cast_to_bit_vector(0, &(next_K), &(ADD_u13_u13_2906));\
;

#define _dataTx_merge_stmt_2914_c_preamble_macro_ uint8_t merge_stmt_2914_entry_flag;\
merge_stmt_2914_entry_flag = 1;\
uint8_t crcloop_2373_flag = 0;\
goto merge_stmt_2914_run;\
crcloop_2373: crcloop_2373_flag = 1;\
goto merge_stmt_2914_run;\
merge_stmt_2914_run: ;\

#define _dataTx_phi_stmt_2915_c_macro_ __declare_static_bit_vector(konst_2917,5);\
bit_vector_clear(&konst_2917);\
__declare_static_bit_vector(type_cast_2918,5);\
bit_vector_clear(&type_cast_2918);\
if(crcloop_2373_flag) {\
bit_vector_cast_to_bit_vector(0, &(L), &(next_L));\
}\
else {\
__declare_static_bit_vector(konst_2917,5);\
bit_vector_clear(&konst_2917);\
__declare_static_bit_vector(type_cast_2918,5);\
bit_vector_clear(&type_cast_2918);\
bit_vector_clear(&konst_2917);\
bit_vector_bitcast_to_bit_vector( &(type_cast_2918), &(konst_2917));\
bit_vector_cast_to_bit_vector(0, &(L), &(type_cast_2918));\
}\
;

#define _dataTx_phi_stmt_2920_c_macro_ if(crcloop_2373_flag) {\
bit_vector_cast_to_bit_vector(0, &(dat0crc), &(nextbitcrc));\
}\
else {\
bit_vector_cast_to_bit_vector(0, &(dat0crc), &(nextCRC16));\
}\
;
;

#define _dataTx_merge_stmt_2914_c_postamble_macro_ crcloop_2373_flag = 0;\
merge_stmt_2914_entry_flag = 0;

#define _dataTx_assign_stmt_2929_c_macro_ __declare_static_bit_vector(konst_2927,16);\
bit_vector_clear(&konst_2927);\
konst_2927.val.byte_array[0] = 15;\
__declare_static_bit_vector(BITSEL_u16_u1_2928,1);\
bit_vector_clear(&konst_2927);\
konst_2927.val.byte_array[0] = 15;\
bit_vector_bitsel( &(dat0crc), &(konst_2927), &(BITSEL_u16_u1_2928));\
write_bit_vector_to_pipe("DAT0Tx",&(BITSEL_u16_u1_2928));\
;

#define _dataTx_assign_stmt_2934_c_macro_ __declare_static_bit_vector(konst_2932,16);\
bit_vector_clear(&konst_2932);\
konst_2932.val.byte_array[0] = 1;\
__declare_static_bit_vector(SHL_u16_u16_2933,16);\
bit_vector_clear(&konst_2932);\
konst_2932.val.byte_array[0] = 1;\
bit_vector_shift_left(&(dat0crc), &(konst_2932), &(SHL_u16_u16_2933));\
bit_vector_cast_to_bit_vector(0, &(nextbitcrc), &(SHL_u16_u16_2933));\
;

#define _dataTx_assign_stmt_2939_c_macro_ __declare_static_bit_vector(konst_2937,5);\
bit_vector_clear(&konst_2937);\
konst_2937.val.byte_array[0] = 1;\
__declare_static_bit_vector(ADD_u5_u5_2938,5);\
bit_vector_clear(&konst_2937);\
konst_2937.val.byte_array[0] = 1;\
bit_vector_plus( &(L), &(konst_2937), &(ADD_u5_u5_2938));\
bit_vector_cast_to_bit_vector(0, &(next_L), &(ADD_u5_u5_2938));\
;

#define _dataTx_assign_stmt_2948_c_macro_ write_bit_vector_to_pipe("DAT0Tx",&(ONE_1));\
;

#define _dataTx_assign_stmt_2951_c_macro_ write_bit_vector_to_pipe("oe",&(ZERO_1));\
;

#define _dataTx_assign_stmt_2955_c_macro_ write_bit_vector_to_pipe("busy",&(ONE_1));\
;

#define _dataTx_assign_stmt_2961_c_macro_ if (has_undefined_bit(&blockCountEnable)) {fprintf(stderr, "Error: variable blockCountEnable has undefined value (%s) at test point.\n", to_string(&blockCountEnable));assert(0);} \
__declare_static_bit_vector(konst_2959,16);\
bit_vector_clear(&konst_2959);\
konst_2959.val.byte_array[0] = 1;\
__declare_static_bit_vector(SUB_u16_u16_2960,16);\
if (bit_vector_to_uint64(0, &blockCountEnable)) {\
bit_vector_clear(&konst_2959);\
konst_2959.val.byte_array[0] = 1;\
bit_vector_minus( &(blockCount), &(konst_2959), &(SUB_u16_u16_2960));\
bit_vector_cast_to_bit_vector(0, &(blockCountNext), &(SUB_u16_u16_2960));\
}
;

#define _dataTx_assign_stmt_2969_c_macro_ __declare_static_bit_vector(konst_2967,32);\
bit_vector_clear(&konst_2967);\
konst_2967.val.byte_array[0] = 37;\
bit_vector_clear(&konst_2967);\
konst_2967.val.byte_array[0] = 37;\
bit_vector_cast_to_bit_vector(0, &(presentState1Var), &((sdhcRegisters[bit_vector_to_uint64(0, &konst_2967)])));\
;

#define _dataTx_assign_stmt_2973_c_macro_ __declare_static_bit_vector(konst_2971,32);\
bit_vector_clear(&konst_2971);\
konst_2971.val.byte_array[0] = 36;\
bit_vector_clear(&konst_2971);\
konst_2971.val.byte_array[0] = 36;\
bit_vector_cast_to_bit_vector(0, &(presentState0Var), &((sdhcRegisters[bit_vector_to_uint64(0, &konst_2971)])));\
;

#define _dataTx_assign_stmt_2979_c_macro_ __declare_static_bit_vector(konst_2977,8);\
bit_vector_clear(&konst_2977);\
konst_2977.val.byte_array[0] = 254;\
__declare_static_bit_vector(AND_u8_u8_2978,8);\
bit_vector_clear(&konst_2977);\
konst_2977.val.byte_array[0] = 254;\
bit_vector_and(&(presentState1Var), &(konst_2977), &(AND_u8_u8_2978));\
__declare_static_bit_vector(konst_2974,32);\
bit_vector_clear(&konst_2974);\
konst_2974.val.byte_array[0] = 37;\
bit_vector_clear(&konst_2974);\
konst_2974.val.byte_array[0] = 37;\
bit_vector_cast_to_bit_vector(0, &((sdhcRegisters[bit_vector_to_uint64(0, &konst_2974)])), &(AND_u8_u8_2978));\
;

#define _dataTx_merge_stmt_2981_c_preamble_macro_ uint8_t merge_stmt_2981_entry_flag;\
merge_stmt_2981_entry_flag = 1;\
uint8_t waitloop_2373_flag = 0;\
goto merge_stmt_2981_run;\
waitloop_2373: waitloop_2373_flag = 1;\
goto merge_stmt_2981_run;\
merge_stmt_2981_run: ;\
;

#define _dataTx_merge_stmt_2981_c_postamble_macro_ waitloop_2373_flag = 0;\
merge_stmt_2981_entry_flag = 0;

#define _dataTx_assign_stmt_2984_c_macro_ __declare_static_bit_vector(RPIPE_DAT0Rx_2983,1);\
read_bit_vector_from_pipe("DAT0Rx",&(RPIPE_DAT0Rx_2983));\
bit_vector_cast_to_bit_vector(0, &(wait), &(RPIPE_DAT0Rx_2983));\
;

#define _dataTx_assign_stmt_2993_c_macro_ write_bit_vector_to_pipe("busy",&(ZERO_1));\
;

#define _dataTx_assign_stmt_3003_c_macro_ __declare_static_bit_vector(konst_3001,8);\
bit_vector_clear(&konst_3001);\
konst_3001.val.byte_array[0] = 249;\
__declare_static_bit_vector(AND_u8_u8_3002,8);\
bit_vector_clear(&konst_3001);\
konst_3001.val.byte_array[0] = 249;\
bit_vector_and(&(presentState0Var), &(konst_3001), &(AND_u8_u8_3002));\
__declare_static_bit_vector(konst_2998,32);\
bit_vector_clear(&konst_2998);\
konst_2998.val.byte_array[0] = 36;\
bit_vector_clear(&konst_2998);\
konst_2998.val.byte_array[0] = 36;\
bit_vector_cast_to_bit_vector(0, &((sdhcRegisters[bit_vector_to_uint64(0, &konst_2998)])), &(AND_u8_u8_3002));\
;

#define _dataTx_assign_stmt_3008_c_macro_ __declare_static_bit_vector(konst_3006,8);\
bit_vector_clear(&konst_3006);\
konst_3006.val.byte_array[0] = 2;\
__declare_static_bit_vector(OR_u8_u8_3007,8);\
bit_vector_clear(&OR_u8_u8_3007);\
OR_u8_u8_3007.val.byte_array[0] = 2;\
bit_vector_clear(&konst_3006);\
konst_3006.val.byte_array[0] = 2;\
bit_vector_or(&(ZERO_8), &(konst_3006), &(OR_u8_u8_3007));\
bit_vector_cast_to_bit_vector(0, &(transferComplete), &(OR_u8_u8_3007));\
;

#define _dataTx_stmt_3013_c_macro_ uint32_t _dataTx_stmt_3013_c_macro___print_counter= get_file_print_lock(__report_log_file__);if(__report_log_file__ != NULL) fprintf(__report_log_file__,"[%u]OUTDATA>\t%s\n",_dataTx_stmt_3013_c_macro___print_counter,"data");if(__report_log_file__ != NULL) {fprintf(__report_log_file__,"[%u]OUTDATA>\t\t%s\t\t",_dataTx_stmt_3013_c_macro___print_counter,"lastBlock");fprintf(__report_log_file__, ":= 0x%s\n",to_hex_string(&(lastBlock)));fflush (__report_log_file__);}if(__report_log_file__ != NULL) {fprintf(__report_log_file__,"[%u]OUTDATA>\t\t%s\t\t",_dataTx_stmt_3013_c_macro___print_counter,"blockCount");fprintf(__report_log_file__, ":= 0x%s\n",to_hex_string(&(blockCount)));fflush (__report_log_file__);}if(__report_log_file__ != NULL) {fprintf(__report_log_file__,"[%u]OUTDATA>\t\t%s\t\t",_dataTx_stmt_3013_c_macro___print_counter,"blockCountEnable");fprintf(__report_log_file__, ":= 0x%s\n",to_hex_string(&(blockCountEnable)));fflush (__report_log_file__);}release_file_print_lock(__report_log_file__);;
;

#define _dataTx_branch_block_stmt_2373_c_export_apply_macro_ ;

#define _dataTx_inner_outarg_prep_macro__ bit_vector_cast_to_bit_vector(0, &((*__pblockCountNext)), &(blockCountNext));\
bit_vector_cast_to_bit_vector(0, &((*__ptransferComplete)), &(transferComplete));\
;

#define _generate_crc_7_inner_inarg_prep_macro__ __declare_static_bit_vector(message_signal,40);\
bit_vector_cast_to_bit_vector(0, &(message_signal), &((*__pmessage_signal)));\
__declare_static_bit_vector(generated_crc,7);\

#define _generate_crc_7_branch_block_stmt_275_c_export_decl_macro_ __declare_static_bit_vector(crc_out__crc_out,7);\
__declare_static_bit_vector(I,6);\
__declare_static_bit_vector(crc_out,7);\
__declare_static_bit_vector(temp,33);\
__declare_static_bit_vector(a,1);\
__declare_static_bit_vector(b,1);\
__declare_static_bit_vector(c,1);\
__declare_static_bit_vector(d,1);\
__declare_static_bit_vector(e,1);\
__declare_static_bit_vector(f,1);\
__declare_static_bit_vector(g,1);\
__declare_static_bit_vector(crc_out_true,7);\
__declare_static_bit_vector(crc_out_false,7);\
__declare_static_bit_vector(final_crc_out,7);\
__declare_static_bit_vector(next_I,6);\
__declare_static_bit_vector(next_temp,33);\


#define _generate_crc_7_merge_stmt_276_c_preamble_macro_ uint8_t merge_stmt_276_entry_flag;\
merge_stmt_276_entry_flag = 1;\
uint8_t loopback_275_flag = 0;\
goto merge_stmt_276_run;\
loopback_275: loopback_275_flag = 1;\
goto merge_stmt_276_run;\
merge_stmt_276_run: ;\

#define _generate_crc_7_phi_stmt_277_c_macro_ __declare_static_bit_vector(konst_281,6);\
bit_vector_clear(&konst_281);\
konst_281.val.byte_array[0] = 41;\
__declare_static_bit_vector(type_cast_282,6);\
bit_vector_clear(&type_cast_282);\
type_cast_282.val.byte_array[0] = 41;\
if(loopback_275_flag) {\
bit_vector_cast_to_bit_vector(0, &(I), &(next_I));\
}\
else {\
__declare_static_bit_vector(konst_281,6);\
bit_vector_clear(&konst_281);\
konst_281.val.byte_array[0] = 41;\
__declare_static_bit_vector(type_cast_282,6);\
bit_vector_clear(&type_cast_282);\
type_cast_282.val.byte_array[0] = 41;\
bit_vector_clear(&konst_281);\
konst_281.val.byte_array[0] = 41;\
bit_vector_bitcast_to_bit_vector( &(type_cast_282), &(konst_281));\
bit_vector_cast_to_bit_vector(0, &(I), &(type_cast_282));\
}\
;

#define _generate_crc_7_phi_stmt_283_c_macro_ __declare_static_bit_vector(slice_287,7);\
if(loopback_275_flag) {\
bit_vector_cast_to_bit_vector(0, &(crc_out), &(final_crc_out));\
}\
else {\
__declare_static_bit_vector(slice_287,7);\
bit_vector_slice(&(message_signal), &(slice_287), 33);\
bit_vector_cast_to_bit_vector(0, &(crc_out), &(slice_287));\
}\
;

#define _generate_crc_7_phi_stmt_288_c_macro_ __declare_static_bit_vector(slice_293,33);\
if(loopback_275_flag) {\
bit_vector_cast_to_bit_vector(0, &(temp), &(next_temp));\
}\
else {\
__declare_static_bit_vector(slice_293,33);\
bit_vector_slice(&(message_signal), &(slice_293), 0);\
bit_vector_cast_to_bit_vector(0, &(temp), &(slice_293));\
}\
;
;

#define _generate_crc_7_merge_stmt_276_c_postamble_macro_ loopback_275_flag = 0;\
merge_stmt_276_entry_flag = 0;

#define _generate_crc_7_assign_stmt_305_c_macro_ __declare_static_bit_vector(konst_303,7);\
bit_vector_clear(&konst_303);\
konst_303.val.byte_array[0] = 5;\
__declare_static_bit_vector(BITSEL_u7_u1_304,1);\
bit_vector_clear(&konst_303);\
konst_303.val.byte_array[0] = 5;\
bit_vector_bitsel( &(crc_out), &(konst_303), &(BITSEL_u7_u1_304));\
bit_vector_cast_to_bit_vector(0, &(a), &(BITSEL_u7_u1_304));\
;

#define _generate_crc_7_assign_stmt_310_c_macro_ __declare_static_bit_vector(konst_308,7);\
bit_vector_clear(&konst_308);\
konst_308.val.byte_array[0] = 4;\
__declare_static_bit_vector(BITSEL_u7_u1_309,1);\
bit_vector_clear(&konst_308);\
konst_308.val.byte_array[0] = 4;\
bit_vector_bitsel( &(crc_out), &(konst_308), &(BITSEL_u7_u1_309));\
bit_vector_cast_to_bit_vector(0, &(b), &(BITSEL_u7_u1_309));\
;

#define _generate_crc_7_assign_stmt_315_c_macro_ __declare_static_bit_vector(konst_313,7);\
bit_vector_clear(&konst_313);\
konst_313.val.byte_array[0] = 3;\
__declare_static_bit_vector(BITSEL_u7_u1_314,1);\
bit_vector_clear(&konst_313);\
konst_313.val.byte_array[0] = 3;\
bit_vector_bitsel( &(crc_out), &(konst_313), &(BITSEL_u7_u1_314));\
bit_vector_cast_to_bit_vector(0, &(c), &(BITSEL_u7_u1_314));\
;

#define _generate_crc_7_assign_stmt_322_c_macro_ __declare_static_bit_vector(konst_318,7);\
bit_vector_clear(&konst_318);\
konst_318.val.byte_array[0] = 2;\
__declare_static_bit_vector(BITSEL_u7_u1_319,1);\
__declare_static_bit_vector(konst_320,1);\
bit_vector_clear(&konst_320);\
konst_320.val.byte_array[0] = 1;\
__declare_static_bit_vector(XOR_u1_u1_321,1);\
bit_vector_clear(&konst_318);\
konst_318.val.byte_array[0] = 2;\
bit_vector_bitsel( &(crc_out), &(konst_318), &(BITSEL_u7_u1_319));\
bit_vector_clear(&konst_320);\
konst_320.val.byte_array[0] = 1;\
bit_vector_xor(&(BITSEL_u7_u1_319), &(konst_320), &(XOR_u1_u1_321));\
bit_vector_cast_to_bit_vector(0, &(d), &(XOR_u1_u1_321));\
;

#define _generate_crc_7_assign_stmt_327_c_macro_ __declare_static_bit_vector(konst_325,7);\
bit_vector_clear(&konst_325);\
konst_325.val.byte_array[0] = 1;\
__declare_static_bit_vector(BITSEL_u7_u1_326,1);\
bit_vector_clear(&konst_325);\
konst_325.val.byte_array[0] = 1;\
bit_vector_bitsel( &(crc_out), &(konst_325), &(BITSEL_u7_u1_326));\
bit_vector_cast_to_bit_vector(0, &(e), &(BITSEL_u7_u1_326));\
;

#define _generate_crc_7_assign_stmt_332_c_macro_ __declare_static_bit_vector(konst_330,7);\
bit_vector_clear(&konst_330);\
__declare_static_bit_vector(BITSEL_u7_u1_331,1);\
bit_vector_clear(&konst_330);\
bit_vector_bitsel( &(crc_out), &(konst_330), &(BITSEL_u7_u1_331));\
bit_vector_cast_to_bit_vector(0, &(f), &(BITSEL_u7_u1_331));\
;

#define _generate_crc_7_assign_stmt_339_c_macro_ __declare_static_bit_vector(konst_335,33);\
bit_vector_clear(&konst_335);\
konst_335.val.byte_array[0] = 32;\
__declare_static_bit_vector(BITSEL_u33_u1_336,1);\
__declare_static_bit_vector(konst_337,1);\
bit_vector_clear(&konst_337);\
konst_337.val.byte_array[0] = 1;\
__declare_static_bit_vector(XOR_u1_u1_338,1);\
bit_vector_clear(&konst_335);\
konst_335.val.byte_array[0] = 32;\
bit_vector_bitsel( &(temp), &(konst_335), &(BITSEL_u33_u1_336));\
bit_vector_clear(&konst_337);\
konst_337.val.byte_array[0] = 1;\
bit_vector_xor(&(BITSEL_u33_u1_336), &(konst_337), &(XOR_u1_u1_338));\
bit_vector_cast_to_bit_vector(0, &(g), &(XOR_u1_u1_338));\
;

#define _generate_crc_7_assign_stmt_354_c_macro_ __declare_static_bit_vector(CONCAT_u1_u2_343,2);\
__declare_static_bit_vector(CONCAT_u1_u2_346,2);\
__declare_static_bit_vector(CONCAT_u2_u4_347,4);\
__declare_static_bit_vector(CONCAT_u1_u2_350,2);\
__declare_static_bit_vector(CONCAT_u2_u3_352,3);\
__declare_static_bit_vector(CONCAT_u4_u7_353,7);\
bit_vector_concatenate( &(a), &(b), &(CONCAT_u1_u2_343));\
bit_vector_concatenate( &(c), &(d), &(CONCAT_u1_u2_346));\
bit_vector_concatenate( &(CONCAT_u1_u2_343), &(CONCAT_u1_u2_346), &(CONCAT_u2_u4_347));\
bit_vector_concatenate( &(e), &(f), &(CONCAT_u1_u2_350));\
bit_vector_concatenate( &(CONCAT_u1_u2_350), &(g), &(CONCAT_u2_u3_352));\
bit_vector_concatenate( &(CONCAT_u2_u4_347), &(CONCAT_u2_u3_352), &(CONCAT_u4_u7_353));\
bit_vector_cast_to_bit_vector(0, &(crc_out_true), &(CONCAT_u4_u7_353));\
;

#define _generate_crc_7_assign_stmt_364_c_macro_ __declare_static_bit_vector(slice_359,6);\
__declare_static_bit_vector(konst_361,33);\
bit_vector_clear(&konst_361);\
konst_361.val.byte_array[0] = 32;\
__declare_static_bit_vector(BITSEL_u33_u1_362,1);\
__declare_static_bit_vector(CONCAT_u6_u7_363,7);\
bit_vector_slice(&(crc_out), &(slice_359), 0);\
bit_vector_clear(&konst_361);\
konst_361.val.byte_array[0] = 32;\
bit_vector_bitsel( &(temp), &(konst_361), &(BITSEL_u33_u1_362));\
bit_vector_concatenate( &(slice_359), &(BITSEL_u33_u1_362), &(CONCAT_u6_u7_363));\
bit_vector_cast_to_bit_vector(0, &(crc_out_false), &(CONCAT_u6_u7_363));\
;

#define _generate_crc_7_merge_stmt_367_c_preamble_macro_ uint8_t merge_stmt_367_entry_flag;\
merge_stmt_367_entry_flag = 1;\
uint8_t MSB_true_275_flag = 0;\
uint8_t MSB_false_275_flag = 0;\
goto merge_stmt_367_run;\
MSB_true_275: MSB_true_275_flag = 1;\
MSB_false_275_flag = 0;\
goto merge_stmt_367_run;\
MSB_false_275: MSB_false_275_flag = 1;\
MSB_true_275_flag = 0;\
goto merge_stmt_367_run;\
merge_stmt_367_run: ;\

#define _generate_crc_7_phi_stmt_368_c_macro_ if(MSB_true_275_flag) {\
bit_vector_cast_to_bit_vector(0, &(final_crc_out), &(crc_out_true));\
}\
 else if(MSB_false_275_flag) {\
bit_vector_cast_to_bit_vector(0, &(final_crc_out), &(crc_out_false));\
}\
;
;

#define _generate_crc_7_merge_stmt_367_c_postamble_macro_ MSB_true_275_flag = 0;\
MSB_false_275_flag = 0;\
merge_stmt_367_entry_flag = 0;

#define _generate_crc_7_assign_stmt_377_c_macro_ __declare_static_bit_vector(konst_375,6);\
bit_vector_clear(&konst_375);\
konst_375.val.byte_array[0] = 1;\
__declare_static_bit_vector(SUB_u6_u6_376,6);\
bit_vector_clear(&konst_375);\
konst_375.val.byte_array[0] = 1;\
bit_vector_minus( &(I), &(konst_375), &(SUB_u6_u6_376));\
bit_vector_cast_to_bit_vector(0, &(next_I), &(SUB_u6_u6_376));\
;

#define _generate_crc_7_assign_stmt_382_c_macro_ __declare_static_bit_vector(konst_380,33);\
bit_vector_clear(&konst_380);\
konst_380.val.byte_array[0] = 1;\
__declare_static_bit_vector(SHL_u33_u33_381,33);\
bit_vector_clear(&konst_380);\
konst_380.val.byte_array[0] = 1;\
bit_vector_shift_left(&(temp), &(konst_380), &(SHL_u33_u33_381));\
bit_vector_cast_to_bit_vector(0, &(next_temp), &(SHL_u33_u33_381));\
;
;

#define _generate_crc_7_branch_block_stmt_275_c_export_apply_macro_ bit_vector_cast_to_bit_vector(0, &(crc_out__crc_out), &(crc_out));\
;

#define _generate_crc_7_assign_stmt_392_c_macro_ bit_vector_cast_to_bit_vector(0, &(generated_crc), &(crc_out__crc_out));\
;

#define _generate_crc_7_inner_outarg_prep_macro__ bit_vector_cast_to_bit_vector(0, &((*__pgenerated_crc)), &(generated_crc));\
;

#define _generate_crc_7_120_inner_inarg_prep_macro__ __declare_static_bit_vector(message_signal,120);\
bit_vector_cast_to_bit_vector(0, &(message_signal), &((*__pmessage_signal)));\
__declare_static_bit_vector(generated_crc,7);\

#define _generate_crc_7_120_branch_block_stmt_398_c_export_decl_macro_ __declare_static_bit_vector(crc_out__crc_out,7);\
__declare_static_bit_vector(I,8);\
__declare_static_bit_vector(crc_out,7);\
__declare_static_bit_vector(temp,113);\
__declare_static_bit_vector(a,1);\
__declare_static_bit_vector(b,1);\
__declare_static_bit_vector(c,1);\
__declare_static_bit_vector(d,1);\
__declare_static_bit_vector(e,1);\
__declare_static_bit_vector(f,1);\
__declare_static_bit_vector(g,1);\
__declare_static_bit_vector(crc_out_true,7);\
__declare_static_bit_vector(crc_out_false,7);\
__declare_static_bit_vector(final_crc_out,7);\
__declare_static_bit_vector(next_I,8);\
__declare_static_bit_vector(next_temp,113);\


#define _generate_crc_7_120_merge_stmt_399_c_preamble_macro_ uint8_t merge_stmt_399_entry_flag;\
merge_stmt_399_entry_flag = 1;\
uint8_t loopback_398_flag = 0;\
goto merge_stmt_399_run;\
loopback_398: loopback_398_flag = 1;\
goto merge_stmt_399_run;\
merge_stmt_399_run: ;\

#define _generate_crc_7_120_phi_stmt_400_c_macro_ __declare_static_bit_vector(konst_402,8);\
bit_vector_clear(&konst_402);\
konst_402.val.byte_array[0] = 121;\
__declare_static_bit_vector(type_cast_403,8);\
bit_vector_clear(&type_cast_403);\
type_cast_403.val.byte_array[0] = 121;\
if(loopback_398_flag) {\
bit_vector_cast_to_bit_vector(0, &(I), &(next_I));\
}\
else {\
__declare_static_bit_vector(konst_402,8);\
bit_vector_clear(&konst_402);\
konst_402.val.byte_array[0] = 121;\
__declare_static_bit_vector(type_cast_403,8);\
bit_vector_clear(&type_cast_403);\
type_cast_403.val.byte_array[0] = 121;\
bit_vector_clear(&konst_402);\
konst_402.val.byte_array[0] = 121;\
bit_vector_bitcast_to_bit_vector( &(type_cast_403), &(konst_402));\
bit_vector_cast_to_bit_vector(0, &(I), &(type_cast_403));\
}\
;

#define _generate_crc_7_120_phi_stmt_405_c_macro_ __declare_static_bit_vector(slice_408,7);\
if(loopback_398_flag) {\
bit_vector_cast_to_bit_vector(0, &(crc_out), &(final_crc_out));\
}\
else {\
__declare_static_bit_vector(slice_408,7);\
bit_vector_slice(&(message_signal), &(slice_408), 113);\
bit_vector_cast_to_bit_vector(0, &(crc_out), &(slice_408));\
}\
;

#define _generate_crc_7_120_phi_stmt_410_c_macro_ __declare_static_bit_vector(slice_414,113);\
if(loopback_398_flag) {\
bit_vector_cast_to_bit_vector(0, &(temp), &(next_temp));\
}\
else {\
__declare_static_bit_vector(slice_414,113);\
bit_vector_slice(&(message_signal), &(slice_414), 0);\
bit_vector_cast_to_bit_vector(0, &(temp), &(slice_414));\
}\
;
;

#define _generate_crc_7_120_merge_stmt_399_c_postamble_macro_ loopback_398_flag = 0;\
merge_stmt_399_entry_flag = 0;

#define _generate_crc_7_120_assign_stmt_427_c_macro_ __declare_static_bit_vector(konst_425,7);\
bit_vector_clear(&konst_425);\
konst_425.val.byte_array[0] = 5;\
__declare_static_bit_vector(BITSEL_u7_u1_426,1);\
bit_vector_clear(&konst_425);\
konst_425.val.byte_array[0] = 5;\
bit_vector_bitsel( &(crc_out), &(konst_425), &(BITSEL_u7_u1_426));\
bit_vector_cast_to_bit_vector(0, &(a), &(BITSEL_u7_u1_426));\
;

#define _generate_crc_7_120_assign_stmt_432_c_macro_ __declare_static_bit_vector(konst_430,7);\
bit_vector_clear(&konst_430);\
konst_430.val.byte_array[0] = 4;\
__declare_static_bit_vector(BITSEL_u7_u1_431,1);\
bit_vector_clear(&konst_430);\
konst_430.val.byte_array[0] = 4;\
bit_vector_bitsel( &(crc_out), &(konst_430), &(BITSEL_u7_u1_431));\
bit_vector_cast_to_bit_vector(0, &(b), &(BITSEL_u7_u1_431));\
;

#define _generate_crc_7_120_assign_stmt_437_c_macro_ __declare_static_bit_vector(konst_435,7);\
bit_vector_clear(&konst_435);\
konst_435.val.byte_array[0] = 3;\
__declare_static_bit_vector(BITSEL_u7_u1_436,1);\
bit_vector_clear(&konst_435);\
konst_435.val.byte_array[0] = 3;\
bit_vector_bitsel( &(crc_out), &(konst_435), &(BITSEL_u7_u1_436));\
bit_vector_cast_to_bit_vector(0, &(c), &(BITSEL_u7_u1_436));\
;

#define _generate_crc_7_120_assign_stmt_444_c_macro_ __declare_static_bit_vector(konst_440,7);\
bit_vector_clear(&konst_440);\
konst_440.val.byte_array[0] = 2;\
__declare_static_bit_vector(BITSEL_u7_u1_441,1);\
__declare_static_bit_vector(konst_442,1);\
bit_vector_clear(&konst_442);\
konst_442.val.byte_array[0] = 1;\
__declare_static_bit_vector(XOR_u1_u1_443,1);\
bit_vector_clear(&konst_440);\
konst_440.val.byte_array[0] = 2;\
bit_vector_bitsel( &(crc_out), &(konst_440), &(BITSEL_u7_u1_441));\
bit_vector_clear(&konst_442);\
konst_442.val.byte_array[0] = 1;\
bit_vector_xor(&(BITSEL_u7_u1_441), &(konst_442), &(XOR_u1_u1_443));\
bit_vector_cast_to_bit_vector(0, &(d), &(XOR_u1_u1_443));\
;

#define _generate_crc_7_120_assign_stmt_449_c_macro_ __declare_static_bit_vector(konst_447,7);\
bit_vector_clear(&konst_447);\
konst_447.val.byte_array[0] = 1;\
__declare_static_bit_vector(BITSEL_u7_u1_448,1);\
bit_vector_clear(&konst_447);\
konst_447.val.byte_array[0] = 1;\
bit_vector_bitsel( &(crc_out), &(konst_447), &(BITSEL_u7_u1_448));\
bit_vector_cast_to_bit_vector(0, &(e), &(BITSEL_u7_u1_448));\
;

#define _generate_crc_7_120_assign_stmt_454_c_macro_ __declare_static_bit_vector(konst_452,7);\
bit_vector_clear(&konst_452);\
__declare_static_bit_vector(BITSEL_u7_u1_453,1);\
bit_vector_clear(&konst_452);\
bit_vector_bitsel( &(crc_out), &(konst_452), &(BITSEL_u7_u1_453));\
bit_vector_cast_to_bit_vector(0, &(f), &(BITSEL_u7_u1_453));\
;

#define _generate_crc_7_120_assign_stmt_461_c_macro_ __declare_static_bit_vector(konst_457,113);\
bit_vector_clear(&konst_457);\
konst_457.val.byte_array[0] = 112;\
__declare_static_bit_vector(BITSEL_u113_u1_458,1);\
__declare_static_bit_vector(konst_459,1);\
bit_vector_clear(&konst_459);\
konst_459.val.byte_array[0] = 1;\
__declare_static_bit_vector(XOR_u1_u1_460,1);\
bit_vector_clear(&konst_457);\
konst_457.val.byte_array[0] = 112;\
bit_vector_bitsel( &(temp), &(konst_457), &(BITSEL_u113_u1_458));\
bit_vector_clear(&konst_459);\
konst_459.val.byte_array[0] = 1;\
bit_vector_xor(&(BITSEL_u113_u1_458), &(konst_459), &(XOR_u1_u1_460));\
bit_vector_cast_to_bit_vector(0, &(g), &(XOR_u1_u1_460));\
;

#define _generate_crc_7_120_assign_stmt_476_c_macro_ __declare_static_bit_vector(CONCAT_u1_u2_465,2);\
__declare_static_bit_vector(CONCAT_u1_u2_468,2);\
__declare_static_bit_vector(CONCAT_u2_u4_469,4);\
__declare_static_bit_vector(CONCAT_u1_u2_472,2);\
__declare_static_bit_vector(CONCAT_u2_u3_474,3);\
__declare_static_bit_vector(CONCAT_u4_u7_475,7);\
bit_vector_concatenate( &(a), &(b), &(CONCAT_u1_u2_465));\
bit_vector_concatenate( &(c), &(d), &(CONCAT_u1_u2_468));\
bit_vector_concatenate( &(CONCAT_u1_u2_465), &(CONCAT_u1_u2_468), &(CONCAT_u2_u4_469));\
bit_vector_concatenate( &(e), &(f), &(CONCAT_u1_u2_472));\
bit_vector_concatenate( &(CONCAT_u1_u2_472), &(g), &(CONCAT_u2_u3_474));\
bit_vector_concatenate( &(CONCAT_u2_u4_469), &(CONCAT_u2_u3_474), &(CONCAT_u4_u7_475));\
bit_vector_cast_to_bit_vector(0, &(crc_out_true), &(CONCAT_u4_u7_475));\
;

#define _generate_crc_7_120_assign_stmt_486_c_macro_ __declare_static_bit_vector(slice_481,6);\
__declare_static_bit_vector(konst_483,113);\
bit_vector_clear(&konst_483);\
konst_483.val.byte_array[0] = 112;\
__declare_static_bit_vector(BITSEL_u113_u1_484,1);\
__declare_static_bit_vector(CONCAT_u6_u7_485,7);\
bit_vector_slice(&(crc_out), &(slice_481), 0);\
bit_vector_clear(&konst_483);\
konst_483.val.byte_array[0] = 112;\
bit_vector_bitsel( &(temp), &(konst_483), &(BITSEL_u113_u1_484));\
bit_vector_concatenate( &(slice_481), &(BITSEL_u113_u1_484), &(CONCAT_u6_u7_485));\
bit_vector_cast_to_bit_vector(0, &(crc_out_false), &(CONCAT_u6_u7_485));\
;

#define _generate_crc_7_120_merge_stmt_489_c_preamble_macro_ uint8_t merge_stmt_489_entry_flag;\
merge_stmt_489_entry_flag = 1;\
uint8_t MSB_true_398_flag = 0;\
uint8_t MSB_false_398_flag = 0;\
goto merge_stmt_489_run;\
MSB_true_398: MSB_true_398_flag = 1;\
MSB_false_398_flag = 0;\
goto merge_stmt_489_run;\
MSB_false_398: MSB_false_398_flag = 1;\
MSB_true_398_flag = 0;\
goto merge_stmt_489_run;\
merge_stmt_489_run: ;\

#define _generate_crc_7_120_phi_stmt_490_c_macro_ if(MSB_true_398_flag) {\
bit_vector_cast_to_bit_vector(0, &(final_crc_out), &(crc_out_true));\
}\
 else if(MSB_false_398_flag) {\
bit_vector_cast_to_bit_vector(0, &(final_crc_out), &(crc_out_false));\
}\
;
;

#define _generate_crc_7_120_merge_stmt_489_c_postamble_macro_ MSB_true_398_flag = 0;\
MSB_false_398_flag = 0;\
merge_stmt_489_entry_flag = 0;

#define _generate_crc_7_120_assign_stmt_499_c_macro_ __declare_static_bit_vector(konst_497,8);\
bit_vector_clear(&konst_497);\
konst_497.val.byte_array[0] = 1;\
__declare_static_bit_vector(SUB_u8_u8_498,8);\
bit_vector_clear(&konst_497);\
konst_497.val.byte_array[0] = 1;\
bit_vector_minus( &(I), &(konst_497), &(SUB_u8_u8_498));\
bit_vector_cast_to_bit_vector(0, &(next_I), &(SUB_u8_u8_498));\
;

#define _generate_crc_7_120_assign_stmt_504_c_macro_ __declare_static_bit_vector(konst_502,113);\
bit_vector_clear(&konst_502);\
konst_502.val.byte_array[0] = 1;\
__declare_static_bit_vector(SHL_u113_u113_503,113);\
bit_vector_clear(&konst_502);\
konst_502.val.byte_array[0] = 1;\
bit_vector_shift_left(&(temp), &(konst_502), &(SHL_u113_u113_503));\
bit_vector_cast_to_bit_vector(0, &(next_temp), &(SHL_u113_u113_503));\
;
;

#define _generate_crc_7_120_branch_block_stmt_398_c_export_apply_macro_ bit_vector_cast_to_bit_vector(0, &(crc_out__crc_out), &(crc_out));\
;

#define _generate_crc_7_120_assign_stmt_514_c_macro_ bit_vector_cast_to_bit_vector(0, &(generated_crc), &(crc_out__crc_out));\
;

#define _generate_crc_7_120_inner_outarg_prep_macro__ bit_vector_cast_to_bit_vector(0, &((*__pgenerated_crc)), &(generated_crc));\
;

#define _global_storage_initializer__inner_inarg_prep_macro__ 
#define _global_storage_initializer__inner_outarg_prep_macro__ ;

#define _global_storage_initializer__outer_arg_decl_macro__ ;

#define _global_storage_initializer__outer_op_xfer_macro__ ;

#define _readSDHCRegisters_inner_inarg_prep_macro__ __declare_static_bit_vector(address,8);\
bit_vector_cast_to_bit_vector(0, &(address), &((*__paddress)));\
__declare_static_bit_vector(data,8);\

#define _readSDHCRegisters_assign_stmt_78_c_macro_ bit_vector_cast_to_bit_vector(0, &(data), &((sdhcRegisters[bit_vector_to_uint64(0, &address)])));\
;

#define _readSDHCRegisters_inner_outarg_prep_macro__ bit_vector_cast_to_bit_vector(0, &((*__pdata)), &(data));\
;

#define _readSDHCRegisters_outer_arg_decl_macro__ __declare_static_bit_vector(__address, 8);\
bit_vector_assign_uint64(0, &__address, address);\
__declare_static_bit_vector(__data, 8);\
;

#define _readSDHCRegisters_outer_op_xfer_macro__  *data =  bit_vector_to_uint64(0, &__data);\
;

#define _recvdat0_inner_inarg_prep_macro__ __declare_static_bit_vector(dat0,1024);\
__declare_static_bit_vector(nextCRC_0,16);\
__declare_static_bit_vector(stopBit0,1);\

#define _recvdat0_branch_block_stmt_521_c_export_decl_macro_ __declare_static_bit_vector(I_0,11);\
__declare_static_bit_vector(dat0_t,1042);\
__declare_static_bit_vector(next_data0,1042);\
__declare_static_bit_vector(next_I_0,11);\
__declare_static_bit_vector(startBit0,1);\


#define _recvdat0_merge_stmt_523_c_preamble_macro_ uint8_t merge_stmt_523_entry_flag;\
merge_stmt_523_entry_flag = do_while_entry_flag;\
goto merge_stmt_523_run;\
merge_stmt_523_run: ;\

#define _recvdat0_phi_stmt_524_c_macro_ __declare_static_bit_vector(konst_527,11);\
bit_vector_clear(&konst_527);\
__declare_static_bit_vector(type_cast_528,11);\
bit_vector_clear(&type_cast_528);\
if(do_while_loopback_flag) {\
bit_vector_cast_to_bit_vector(0, &(I_0), &(next_I_0));\
}\
else {\
__declare_static_bit_vector(konst_527,11);\
bit_vector_clear(&konst_527);\
__declare_static_bit_vector(type_cast_528,11);\
bit_vector_clear(&type_cast_528);\
bit_vector_clear(&konst_527);\
bit_vector_bitcast_to_bit_vector( &(type_cast_528), &(konst_527));\
bit_vector_cast_to_bit_vector(0, &(I_0), &(type_cast_528));\
}\
;

#define _recvdat0_phi_stmt_530_c_macro_ __declare_static_bit_vector(konst_533,1042);\
bit_vector_clear(&konst_533);\
__declare_static_bit_vector(type_cast_534,1042);\
bit_vector_clear(&type_cast_534);\
if(do_while_loopback_flag) {\
bit_vector_cast_to_bit_vector(0, &(dat0_t), &(next_data0));\
}\
else {\
__declare_static_bit_vector(konst_533,1042);\
bit_vector_clear(&konst_533);\
__declare_static_bit_vector(type_cast_534,1042);\
bit_vector_clear(&type_cast_534);\
bit_vector_clear(&konst_533);\
bit_vector_bitcast_to_bit_vector( &(type_cast_534), &(konst_533));\
bit_vector_cast_to_bit_vector(0, &(dat0_t), &(type_cast_534));\
}\
;
;

#define _recvdat0_merge_stmt_523_c_postamble_macro_ merge_stmt_523_entry_flag = 0;

#define _recvdat0_assign_stmt_547_c_macro_ __declare_static_bit_vector(konst_539,1042);\
bit_vector_clear(&konst_539);\
konst_539.val.byte_array[0] = 1;\
__declare_static_bit_vector(SHL_u1042_u1042_540,1042);\
__declare_static_bit_vector(konst_542,1041);\
bit_vector_clear(&konst_542);\
__declare_static_bit_vector(type_cast_543,1041);\
bit_vector_clear(&type_cast_543);\
__declare_static_bit_vector(RPIPE_DAT0Rx_544,1);\
__declare_static_bit_vector(CONCAT_u1041_u1042_545,1042);\
__declare_static_bit_vector(OR_u1042_u1042_546,1042);\
bit_vector_clear(&konst_539);\
konst_539.val.byte_array[0] = 1;\
bit_vector_shift_left(&(dat0_t), &(konst_539), &(SHL_u1042_u1042_540));\
bit_vector_clear(&konst_542);\
bit_vector_bitcast_to_bit_vector( &(type_cast_543), &(konst_542));\
read_bit_vector_from_pipe("DAT0Rx",&(RPIPE_DAT0Rx_544));\
bit_vector_concatenate( &(type_cast_543), &(RPIPE_DAT0Rx_544), &(CONCAT_u1041_u1042_545));\
bit_vector_or(&(SHL_u1042_u1042_540), &(CONCAT_u1041_u1042_545), &(OR_u1042_u1042_546));\
bit_vector_cast_to_bit_vector(0, &(next_data0), &(OR_u1042_u1042_546));\
;

#define _recvdat0_assign_stmt_552_c_macro_ __declare_static_bit_vector(konst_550,11);\
bit_vector_clear(&konst_550);\
konst_550.val.byte_array[0] = 1;\
__declare_static_bit_vector(ADD_u11_u11_551,11);\
bit_vector_clear(&konst_550);\
konst_550.val.byte_array[0] = 1;\
bit_vector_plus( &(I_0), &(konst_550), &(ADD_u11_u11_551));\
bit_vector_cast_to_bit_vector(0, &(next_I_0), &(ADD_u11_u11_551));\
;

#define _recvdat0_assign_stmt_560_c_macro_ __declare_static_bit_vector(slice_559,1);\
bit_vector_slice(&(next_data0), &(slice_559), 1041);\
bit_vector_cast_to_bit_vector(0, &(startBit0), &(slice_559));\
;

#define _recvdat0_assign_stmt_564_c_macro_ __declare_static_bit_vector(slice_563,1024);\
bit_vector_slice(&(next_data0), &(slice_563), 17);\
bit_vector_cast_to_bit_vector(0, &(dat0), &(slice_563));\
;

#define _recvdat0_assign_stmt_568_c_macro_ __declare_static_bit_vector(slice_567,16);\
bit_vector_slice(&(next_data0), &(slice_567), 1);\
bit_vector_cast_to_bit_vector(0, &(nextCRC_0), &(slice_567));\
;

#define _recvdat0_assign_stmt_572_c_macro_ __declare_static_bit_vector(slice_571,1);\
bit_vector_slice(&(next_data0), &(slice_571), 0);\
bit_vector_cast_to_bit_vector(0, &(stopBit0), &(slice_571));\
;
;

#define _recvdat0_branch_block_stmt_521_c_export_apply_macro_ ;

#define _recvdat0_inner_outarg_prep_macro__ bit_vector_cast_to_bit_vector(0, &((*__pdat0)), &(dat0));\
bit_vector_cast_to_bit_vector(0, &((*__pnextCRC_0)), &(nextCRC_0));\
bit_vector_cast_to_bit_vector(0, &((*__pstopBit0)), &(stopBit0));\
;

#define _recvdat1_inner_inarg_prep_macro__ __declare_static_bit_vector(dat1,1024);\
__declare_static_bit_vector(nextCRC_1,16);\
__declare_static_bit_vector(stopBit1,1);\

#define _recvdat1_branch_block_stmt_579_c_export_decl_macro_ __declare_static_bit_vector(I_1,11);\
__declare_static_bit_vector(dat1_t,1042);\
__declare_static_bit_vector(next_data1,1042);\
__declare_static_bit_vector(next_I_1,11);\
__declare_static_bit_vector(startBit1,1);\


#define _recvdat1_merge_stmt_581_c_preamble_macro_ uint8_t merge_stmt_581_entry_flag;\
merge_stmt_581_entry_flag = do_while_entry_flag;\
goto merge_stmt_581_run;\
merge_stmt_581_run: ;\

#define _recvdat1_phi_stmt_582_c_macro_ __declare_static_bit_vector(konst_584,11);\
bit_vector_clear(&konst_584);\
__declare_static_bit_vector(type_cast_585,11);\
bit_vector_clear(&type_cast_585);\
if(do_while_loopback_flag) {\
bit_vector_cast_to_bit_vector(0, &(I_1), &(next_I_1));\
}\
else {\
__declare_static_bit_vector(konst_584,11);\
bit_vector_clear(&konst_584);\
__declare_static_bit_vector(type_cast_585,11);\
bit_vector_clear(&type_cast_585);\
bit_vector_clear(&konst_584);\
bit_vector_bitcast_to_bit_vector( &(type_cast_585), &(konst_584));\
bit_vector_cast_to_bit_vector(0, &(I_1), &(type_cast_585));\
}\
;

#define _recvdat1_phi_stmt_587_c_macro_ __declare_static_bit_vector(konst_589,1042);\
bit_vector_clear(&konst_589);\
__declare_static_bit_vector(type_cast_590,1042);\
bit_vector_clear(&type_cast_590);\
if(do_while_loopback_flag) {\
bit_vector_cast_to_bit_vector(0, &(dat1_t), &(next_data1));\
}\
else {\
__declare_static_bit_vector(konst_589,1042);\
bit_vector_clear(&konst_589);\
__declare_static_bit_vector(type_cast_590,1042);\
bit_vector_clear(&type_cast_590);\
bit_vector_clear(&konst_589);\
bit_vector_bitcast_to_bit_vector( &(type_cast_590), &(konst_589));\
bit_vector_cast_to_bit_vector(0, &(dat1_t), &(type_cast_590));\
}\
;
;

#define _recvdat1_merge_stmt_581_c_postamble_macro_ merge_stmt_581_entry_flag = 0;

#define _recvdat1_assign_stmt_602_c_macro_ __declare_static_bit_vector(konst_595,1042);\
bit_vector_clear(&konst_595);\
konst_595.val.byte_array[0] = 1;\
__declare_static_bit_vector(SHL_u1042_u1042_596,1042);\
__declare_static_bit_vector(konst_597,1041);\
bit_vector_clear(&konst_597);\
__declare_static_bit_vector(type_cast_598,1041);\
bit_vector_clear(&type_cast_598);\
__declare_static_bit_vector(RPIPE_DAT1Rx_599,1);\
__declare_static_bit_vector(CONCAT_u1041_u1042_600,1042);\
__declare_static_bit_vector(OR_u1042_u1042_601,1042);\
bit_vector_clear(&konst_595);\
konst_595.val.byte_array[0] = 1;\
bit_vector_shift_left(&(dat1_t), &(konst_595), &(SHL_u1042_u1042_596));\
bit_vector_clear(&konst_597);\
bit_vector_bitcast_to_bit_vector( &(type_cast_598), &(konst_597));\
read_bit_vector_from_pipe("DAT1Rx",&(RPIPE_DAT1Rx_599));\
bit_vector_concatenate( &(type_cast_598), &(RPIPE_DAT1Rx_599), &(CONCAT_u1041_u1042_600));\
bit_vector_or(&(SHL_u1042_u1042_596), &(CONCAT_u1041_u1042_600), &(OR_u1042_u1042_601));\
bit_vector_cast_to_bit_vector(0, &(next_data1), &(OR_u1042_u1042_601));\
;

#define _recvdat1_assign_stmt_607_c_macro_ __declare_static_bit_vector(konst_605,11);\
bit_vector_clear(&konst_605);\
konst_605.val.byte_array[0] = 1;\
__declare_static_bit_vector(ADD_u11_u11_606,11);\
bit_vector_clear(&konst_605);\
konst_605.val.byte_array[0] = 1;\
bit_vector_plus( &(I_1), &(konst_605), &(ADD_u11_u11_606));\
bit_vector_cast_to_bit_vector(0, &(next_I_1), &(ADD_u11_u11_606));\
;

#define _recvdat1_assign_stmt_615_c_macro_ __declare_static_bit_vector(slice_614,1);\
bit_vector_slice(&(next_data1), &(slice_614), 1041);\
bit_vector_cast_to_bit_vector(0, &(startBit1), &(slice_614));\
;

#define _recvdat1_assign_stmt_619_c_macro_ __declare_static_bit_vector(slice_618,1024);\
bit_vector_slice(&(next_data1), &(slice_618), 17);\
bit_vector_cast_to_bit_vector(0, &(dat1), &(slice_618));\
;

#define _recvdat1_assign_stmt_623_c_macro_ __declare_static_bit_vector(slice_622,16);\
bit_vector_slice(&(next_data1), &(slice_622), 1);\
bit_vector_cast_to_bit_vector(0, &(nextCRC_1), &(slice_622));\
;

#define _recvdat1_assign_stmt_627_c_macro_ __declare_static_bit_vector(slice_626,1);\
bit_vector_slice(&(next_data1), &(slice_626), 0);\
bit_vector_cast_to_bit_vector(0, &(stopBit1), &(slice_626));\
;
;

#define _recvdat1_branch_block_stmt_579_c_export_apply_macro_ ;

#define _recvdat1_inner_outarg_prep_macro__ bit_vector_cast_to_bit_vector(0, &((*__pdat1)), &(dat1));\
bit_vector_cast_to_bit_vector(0, &((*__pnextCRC_1)), &(nextCRC_1));\
bit_vector_cast_to_bit_vector(0, &((*__pstopBit1)), &(stopBit1));\
;

#define _recvdat2_inner_inarg_prep_macro__ __declare_static_bit_vector(dat2,1024);\
__declare_static_bit_vector(nextCRC_2,16);\
__declare_static_bit_vector(stopBit2,1);\

#define _recvdat2_branch_block_stmt_634_c_export_decl_macro_ __declare_static_bit_vector(I_2,11);\
__declare_static_bit_vector(dat2_t,1042);\
__declare_static_bit_vector(next_data2,1042);\
__declare_static_bit_vector(next_I_2,11);\
__declare_static_bit_vector(startBit2,1);\


#define _recvdat2_merge_stmt_636_c_preamble_macro_ uint8_t merge_stmt_636_entry_flag;\
merge_stmt_636_entry_flag = do_while_entry_flag;\
goto merge_stmt_636_run;\
merge_stmt_636_run: ;\

#define _recvdat2_phi_stmt_637_c_macro_ __declare_static_bit_vector(konst_639,11);\
bit_vector_clear(&konst_639);\
__declare_static_bit_vector(type_cast_640,11);\
bit_vector_clear(&type_cast_640);\
if(do_while_loopback_flag) {\
bit_vector_cast_to_bit_vector(0, &(I_2), &(next_I_2));\
}\
else {\
__declare_static_bit_vector(konst_639,11);\
bit_vector_clear(&konst_639);\
__declare_static_bit_vector(type_cast_640,11);\
bit_vector_clear(&type_cast_640);\
bit_vector_clear(&konst_639);\
bit_vector_bitcast_to_bit_vector( &(type_cast_640), &(konst_639));\
bit_vector_cast_to_bit_vector(0, &(I_2), &(type_cast_640));\
}\
;

#define _recvdat2_phi_stmt_642_c_macro_ __declare_static_bit_vector(konst_644,1042);\
bit_vector_clear(&konst_644);\
__declare_static_bit_vector(type_cast_645,1042);\
bit_vector_clear(&type_cast_645);\
if(do_while_loopback_flag) {\
bit_vector_cast_to_bit_vector(0, &(dat2_t), &(next_data2));\
}\
else {\
__declare_static_bit_vector(konst_644,1042);\
bit_vector_clear(&konst_644);\
__declare_static_bit_vector(type_cast_645,1042);\
bit_vector_clear(&type_cast_645);\
bit_vector_clear(&konst_644);\
bit_vector_bitcast_to_bit_vector( &(type_cast_645), &(konst_644));\
bit_vector_cast_to_bit_vector(0, &(dat2_t), &(type_cast_645));\
}\
;
;

#define _recvdat2_merge_stmt_636_c_postamble_macro_ merge_stmt_636_entry_flag = 0;

#define _recvdat2_assign_stmt_657_c_macro_ __declare_static_bit_vector(konst_650,1042);\
bit_vector_clear(&konst_650);\
konst_650.val.byte_array[0] = 1;\
__declare_static_bit_vector(SHL_u1042_u1042_651,1042);\
__declare_static_bit_vector(konst_652,1041);\
bit_vector_clear(&konst_652);\
__declare_static_bit_vector(type_cast_653,1041);\
bit_vector_clear(&type_cast_653);\
__declare_static_bit_vector(RPIPE_DAT2Rx_654,1);\
__declare_static_bit_vector(CONCAT_u1041_u1042_655,1042);\
__declare_static_bit_vector(OR_u1042_u1042_656,1042);\
bit_vector_clear(&konst_650);\
konst_650.val.byte_array[0] = 1;\
bit_vector_shift_left(&(dat2_t), &(konst_650), &(SHL_u1042_u1042_651));\
bit_vector_clear(&konst_652);\
bit_vector_bitcast_to_bit_vector( &(type_cast_653), &(konst_652));\
read_bit_vector_from_pipe("DAT2Rx",&(RPIPE_DAT2Rx_654));\
bit_vector_concatenate( &(type_cast_653), &(RPIPE_DAT2Rx_654), &(CONCAT_u1041_u1042_655));\
bit_vector_or(&(SHL_u1042_u1042_651), &(CONCAT_u1041_u1042_655), &(OR_u1042_u1042_656));\
bit_vector_cast_to_bit_vector(0, &(next_data2), &(OR_u1042_u1042_656));\
;

#define _recvdat2_assign_stmt_662_c_macro_ __declare_static_bit_vector(konst_660,11);\
bit_vector_clear(&konst_660);\
konst_660.val.byte_array[0] = 1;\
__declare_static_bit_vector(ADD_u11_u11_661,11);\
bit_vector_clear(&konst_660);\
konst_660.val.byte_array[0] = 1;\
bit_vector_plus( &(I_2), &(konst_660), &(ADD_u11_u11_661));\
bit_vector_cast_to_bit_vector(0, &(next_I_2), &(ADD_u11_u11_661));\
;

#define _recvdat2_assign_stmt_670_c_macro_ __declare_static_bit_vector(slice_669,1);\
bit_vector_slice(&(next_data2), &(slice_669), 1041);\
bit_vector_cast_to_bit_vector(0, &(startBit2), &(slice_669));\
;

#define _recvdat2_assign_stmt_674_c_macro_ __declare_static_bit_vector(slice_673,1024);\
bit_vector_slice(&(next_data2), &(slice_673), 17);\
bit_vector_cast_to_bit_vector(0, &(dat2), &(slice_673));\
;

#define _recvdat2_assign_stmt_678_c_macro_ __declare_static_bit_vector(slice_677,16);\
bit_vector_slice(&(next_data2), &(slice_677), 1);\
bit_vector_cast_to_bit_vector(0, &(nextCRC_2), &(slice_677));\
;

#define _recvdat2_assign_stmt_682_c_macro_ __declare_static_bit_vector(slice_681,1);\
bit_vector_slice(&(next_data2), &(slice_681), 0);\
bit_vector_cast_to_bit_vector(0, &(stopBit2), &(slice_681));\
;
;

#define _recvdat2_branch_block_stmt_634_c_export_apply_macro_ ;

#define _recvdat2_inner_outarg_prep_macro__ bit_vector_cast_to_bit_vector(0, &((*__pdat2)), &(dat2));\
bit_vector_cast_to_bit_vector(0, &((*__pnextCRC_2)), &(nextCRC_2));\
bit_vector_cast_to_bit_vector(0, &((*__pstopBit2)), &(stopBit2));\
;

#define _recvdat3_inner_inarg_prep_macro__ __declare_static_bit_vector(dat3,1024);\
__declare_static_bit_vector(nextCRC_3,16);\
__declare_static_bit_vector(stopBit3,1);\

#define _recvdat3_branch_block_stmt_689_c_export_decl_macro_ __declare_static_bit_vector(I_3,11);\
__declare_static_bit_vector(dat3_t,1042);\
__declare_static_bit_vector(next_data3,1042);\
__declare_static_bit_vector(next_I_3,11);\
__declare_static_bit_vector(startBit3,1);\


#define _recvdat3_merge_stmt_691_c_preamble_macro_ uint8_t merge_stmt_691_entry_flag;\
merge_stmt_691_entry_flag = do_while_entry_flag;\
goto merge_stmt_691_run;\
merge_stmt_691_run: ;\

#define _recvdat3_phi_stmt_692_c_macro_ __declare_static_bit_vector(konst_694,11);\
bit_vector_clear(&konst_694);\
__declare_static_bit_vector(type_cast_695,11);\
bit_vector_clear(&type_cast_695);\
if(do_while_loopback_flag) {\
bit_vector_cast_to_bit_vector(0, &(I_3), &(next_I_3));\
}\
else {\
__declare_static_bit_vector(konst_694,11);\
bit_vector_clear(&konst_694);\
__declare_static_bit_vector(type_cast_695,11);\
bit_vector_clear(&type_cast_695);\
bit_vector_clear(&konst_694);\
bit_vector_bitcast_to_bit_vector( &(type_cast_695), &(konst_694));\
bit_vector_cast_to_bit_vector(0, &(I_3), &(type_cast_695));\
}\
;

#define _recvdat3_phi_stmt_697_c_macro_ __declare_static_bit_vector(konst_699,1042);\
bit_vector_clear(&konst_699);\
__declare_static_bit_vector(type_cast_700,1042);\
bit_vector_clear(&type_cast_700);\
if(do_while_loopback_flag) {\
bit_vector_cast_to_bit_vector(0, &(dat3_t), &(next_data3));\
}\
else {\
__declare_static_bit_vector(konst_699,1042);\
bit_vector_clear(&konst_699);\
__declare_static_bit_vector(type_cast_700,1042);\
bit_vector_clear(&type_cast_700);\
bit_vector_clear(&konst_699);\
bit_vector_bitcast_to_bit_vector( &(type_cast_700), &(konst_699));\
bit_vector_cast_to_bit_vector(0, &(dat3_t), &(type_cast_700));\
}\
;
;

#define _recvdat3_merge_stmt_691_c_postamble_macro_ merge_stmt_691_entry_flag = 0;

#define _recvdat3_assign_stmt_712_c_macro_ __declare_static_bit_vector(konst_705,1042);\
bit_vector_clear(&konst_705);\
konst_705.val.byte_array[0] = 1;\
__declare_static_bit_vector(SHL_u1042_u1042_706,1042);\
__declare_static_bit_vector(konst_707,1041);\
bit_vector_clear(&konst_707);\
__declare_static_bit_vector(type_cast_708,1041);\
bit_vector_clear(&type_cast_708);\
__declare_static_bit_vector(RPIPE_DAT3Rx_709,1);\
__declare_static_bit_vector(CONCAT_u1041_u1042_710,1042);\
__declare_static_bit_vector(OR_u1042_u1042_711,1042);\
bit_vector_clear(&konst_705);\
konst_705.val.byte_array[0] = 1;\
bit_vector_shift_left(&(dat3_t), &(konst_705), &(SHL_u1042_u1042_706));\
bit_vector_clear(&konst_707);\
bit_vector_bitcast_to_bit_vector( &(type_cast_708), &(konst_707));\
read_bit_vector_from_pipe("DAT3Rx",&(RPIPE_DAT3Rx_709));\
bit_vector_concatenate( &(type_cast_708), &(RPIPE_DAT3Rx_709), &(CONCAT_u1041_u1042_710));\
bit_vector_or(&(SHL_u1042_u1042_706), &(CONCAT_u1041_u1042_710), &(OR_u1042_u1042_711));\
bit_vector_cast_to_bit_vector(0, &(next_data3), &(OR_u1042_u1042_711));\
;

#define _recvdat3_assign_stmt_717_c_macro_ __declare_static_bit_vector(konst_715,11);\
bit_vector_clear(&konst_715);\
konst_715.val.byte_array[0] = 1;\
__declare_static_bit_vector(ADD_u11_u11_716,11);\
bit_vector_clear(&konst_715);\
konst_715.val.byte_array[0] = 1;\
bit_vector_plus( &(I_3), &(konst_715), &(ADD_u11_u11_716));\
bit_vector_cast_to_bit_vector(0, &(next_I_3), &(ADD_u11_u11_716));\
;

#define _recvdat3_assign_stmt_725_c_macro_ __declare_static_bit_vector(slice_724,1);\
bit_vector_slice(&(next_data3), &(slice_724), 1041);\
bit_vector_cast_to_bit_vector(0, &(startBit3), &(slice_724));\
;

#define _recvdat3_assign_stmt_729_c_macro_ __declare_static_bit_vector(slice_728,1024);\
bit_vector_slice(&(next_data3), &(slice_728), 17);\
bit_vector_cast_to_bit_vector(0, &(dat3), &(slice_728));\
;

#define _recvdat3_assign_stmt_733_c_macro_ __declare_static_bit_vector(slice_732,16);\
bit_vector_slice(&(next_data3), &(slice_732), 1);\
bit_vector_cast_to_bit_vector(0, &(nextCRC_3), &(slice_732));\
;

#define _recvdat3_assign_stmt_737_c_macro_ __declare_static_bit_vector(slice_736,1);\
bit_vector_slice(&(next_data3), &(slice_736), 0);\
bit_vector_cast_to_bit_vector(0, &(stopBit3), &(slice_736));\
;
;

#define _recvdat3_branch_block_stmt_689_c_export_apply_macro_ ;

#define _recvdat3_inner_outarg_prep_macro__ bit_vector_cast_to_bit_vector(0, &((*__pdat3)), &(dat3));\
bit_vector_cast_to_bit_vector(0, &((*__pnextCRC_3)), &(nextCRC_3));\
bit_vector_cast_to_bit_vector(0, &((*__pstopBit3)), &(stopBit3));\
;

#define _resetRegisters_inner_inarg_prep_macro__ __declare_static_bit_vector(resetCondition,2);\
bit_vector_cast_to_bit_vector(0, &(resetCondition), &((*__presetCondition)));\

#define _resetRegisters_call_stmt_3023_c_macro_ __declare_static_bit_vector(konst_3021,8);\
bit_vector_clear(&konst_3021);\
konst_3021.val.byte_array[0] = 64;\
__declare_static_bit_vector(konst_3022,8);\
bit_vector_clear(&konst_3022);\
konst_3022.val.byte_array[0] = 138;\
bit_vector_clear(&konst_3021);\
konst_3021.val.byte_array[0] = 64;\
bit_vector_clear(&konst_3022);\
konst_3022.val.byte_array[0] = 138;\
_writeSDHCRegisters_( &(konst_3021),  &(konst_3022));\
;

#define _resetRegisters_call_stmt_3026_c_macro_ __declare_static_bit_vector(konst_3024,8);\
bit_vector_clear(&konst_3024);\
konst_3024.val.byte_array[0] = 65;\
__declare_static_bit_vector(konst_3025,8);\
bit_vector_clear(&konst_3025);\
konst_3025.val.byte_array[0] = 100;\
bit_vector_clear(&konst_3024);\
konst_3024.val.byte_array[0] = 65;\
bit_vector_clear(&konst_3025);\
konst_3025.val.byte_array[0] = 100;\
_writeSDHCRegisters_( &(konst_3024),  &(konst_3025));\
;

#define _resetRegisters_call_stmt_3029_c_macro_ __declare_static_bit_vector(konst_3027,8);\
bit_vector_clear(&konst_3027);\
konst_3027.val.byte_array[0] = 66;\
__declare_static_bit_vector(konst_3028,8);\
bit_vector_clear(&konst_3028);\
konst_3028.val.byte_array[0] = 32;\
bit_vector_clear(&konst_3027);\
konst_3027.val.byte_array[0] = 66;\
bit_vector_clear(&konst_3028);\
konst_3028.val.byte_array[0] = 32;\
_writeSDHCRegisters_( &(konst_3027),  &(konst_3028));\
;

#define _resetRegisters_call_stmt_3032_c_macro_ __declare_static_bit_vector(konst_3030,8);\
bit_vector_clear(&konst_3030);\
konst_3030.val.byte_array[0] = 67;\
__declare_static_bit_vector(konst_3031,8);\
bit_vector_clear(&konst_3031);\
konst_3031.val.byte_array[0] = 5;\
bit_vector_clear(&konst_3030);\
konst_3030.val.byte_array[0] = 67;\
bit_vector_clear(&konst_3031);\
konst_3031.val.byte_array[0] = 5;\
_writeSDHCRegisters_( &(konst_3030),  &(konst_3031));\
;

#define _resetRegisters_call_stmt_3035_c_macro_ __declare_static_bit_vector(konst_3033,8);\
bit_vector_clear(&konst_3033);\
konst_3033.val.byte_array[0] = 68;\
__declare_static_bit_vector(konst_3034,8);\
bit_vector_clear(&konst_3034);\
konst_3034.val.byte_array[0] = 49;\
bit_vector_clear(&konst_3033);\
konst_3033.val.byte_array[0] = 68;\
bit_vector_clear(&konst_3034);\
konst_3034.val.byte_array[0] = 49;\
_writeSDHCRegisters_( &(konst_3033),  &(konst_3034));\
;

#define _resetRegisters_call_stmt_3038_c_macro_ __declare_static_bit_vector(konst_3036,8);\
bit_vector_clear(&konst_3036);\
konst_3036.val.byte_array[0] = 69;\
bit_vector_clear(&konst_3036);\
konst_3036.val.byte_array[0] = 69;\
_writeSDHCRegisters_( &(konst_3036),  &(ZERO_8));\
;

#define _resetRegisters_call_stmt_3041_c_macro_ __declare_static_bit_vector(konst_3039,8);\
bit_vector_clear(&konst_3039);\
konst_3039.val.byte_array[0] = 70;\
bit_vector_clear(&konst_3039);\
konst_3039.val.byte_array[0] = 70;\
_writeSDHCRegisters_( &(konst_3039),  &(ZERO_8));\
;

#define _resetRegisters_call_stmt_3044_c_macro_ __declare_static_bit_vector(konst_3042,8);\
bit_vector_clear(&konst_3042);\
konst_3042.val.byte_array[0] = 71;\
bit_vector_clear(&konst_3042);\
konst_3042.val.byte_array[0] = 71;\
_writeSDHCRegisters_( &(konst_3042),  &(ZERO_8));\
;

#define _resetRegisters_call_stmt_3047_c_macro_ __declare_static_bit_vector(konst_3045,8);\
bit_vector_clear(&konst_3045);\
konst_3045.val.byte_array[0] = 45;\
__declare_static_bit_vector(konst_3046,8);\
bit_vector_clear(&konst_3046);\
konst_3046.val.byte_array[0] = 125;\
bit_vector_clear(&konst_3045);\
konst_3045.val.byte_array[0] = 45;\
bit_vector_clear(&konst_3046);\
konst_3046.val.byte_array[0] = 125;\
_writeSDHCRegisters_( &(konst_3045),  &(konst_3046));\
;

#define _resetRegisters_branch_block_stmt_3048_c_export_decl_macro_ __declare_static_bit_vector(I,8);\
__declare_static_bit_vector(current_register_value,8);\
__declare_static_bit_vector(current_softwarereset_register_value,8);\
__declare_static_bit_vector(condition,1);\
__declare_static_bit_vector(condition5,1);\
__declare_static_bit_vector(next_I,8);\


#define _resetRegisters_merge_stmt_3049_c_preamble_macro_ uint8_t merge_stmt_3049_entry_flag;\
merge_stmt_3049_entry_flag = 1;\
uint8_t loopback_3048_flag = 0;\
goto merge_stmt_3049_run;\
loopback_3048: loopback_3048_flag = 1;\
goto merge_stmt_3049_run;\
merge_stmt_3049_run: ;\

#define _resetRegisters_phi_stmt_3050_c_macro_ __declare_static_bit_vector(konst_3052,8);\
bit_vector_clear(&konst_3052);\
__declare_static_bit_vector(type_cast_3053,8);\
bit_vector_clear(&type_cast_3053);\
if(loopback_3048_flag) {\
bit_vector_cast_to_bit_vector(0, &(I), &(next_I));\
}\
else {\
__declare_static_bit_vector(konst_3052,8);\
bit_vector_clear(&konst_3052);\
__declare_static_bit_vector(type_cast_3053,8);\
bit_vector_clear(&type_cast_3053);\
bit_vector_clear(&konst_3052);\
bit_vector_bitcast_to_bit_vector( &(type_cast_3053), &(konst_3052));\
bit_vector_cast_to_bit_vector(0, &(I), &(type_cast_3053));\
}\
;
;

#define _resetRegisters_merge_stmt_3049_c_postamble_macro_ loopback_3048_flag = 0;\
merge_stmt_3049_entry_flag = 0;

#define _resetRegisters_call_stmt_3058_c_macro_ _readSDHCRegisters_( &(I), &(current_register_value));\
;

#define _resetRegisters_call_stmt_3061_c_macro_ __declare_static_bit_vector(konst_3059,8);\
bit_vector_clear(&konst_3059);\
konst_3059.val.byte_array[0] = 47;\
bit_vector_clear(&konst_3059);\
konst_3059.val.byte_array[0] = 47;\
_readSDHCRegisters_( &(konst_3059), &(current_softwarereset_register_value));\
;

#define _resetRegisters_assign_stmt_3070_c_macro_ __declare_static_bit_vector(konst_3064,8);\
bit_vector_clear(&konst_3064);\
konst_3064.val.byte_array[0] = 64;\
__declare_static_bit_vector(UGE_u8_u1_3065,1);\
__declare_static_bit_vector(konst_3067,8);\
bit_vector_clear(&konst_3067);\
konst_3067.val.byte_array[0] = 72;\
__declare_static_bit_vector(ULT_u8_u1_3068,1);\
__declare_static_bit_vector(AND_u1_u1_3069,1);\
bit_vector_clear(&konst_3064);\
konst_3064.val.byte_array[0] = 64;\
bit_vector_greater_equal(0, &(I), &(konst_3064), &(UGE_u8_u1_3065));\
bit_vector_clear(&konst_3067);\
konst_3067.val.byte_array[0] = 72;\
bit_vector_less(0, &(I), &(konst_3067), &(ULT_u8_u1_3068));\
bit_vector_and(&(UGE_u8_u1_3065), &(ULT_u8_u1_3068), &(AND_u1_u1_3069));\
bit_vector_cast_to_bit_vector(0, &(condition), &(AND_u1_u1_3069));\
;

#define _resetRegisters_assign_stmt_3075_c_macro_ __declare_static_bit_vector(konst_3073,8);\
bit_vector_clear(&konst_3073);\
konst_3073.val.byte_array[0] = 45;\
__declare_static_bit_vector(EQ_u8_u1_3074,1);\
bit_vector_clear(&konst_3073);\
konst_3073.val.byte_array[0] = 45;\
bit_vector_equal(0, &(I), &(konst_3073), &(EQ_u8_u1_3074));\
bit_vector_cast_to_bit_vector(0, &(condition5), &(EQ_u8_u1_3074));\
;

#define _resetRegisters_call_stmt_3088_c_macro_ _writeSDHCRegisters_( &(I),  &(ZERO_8));\
;

#define _resetRegisters_call_stmt_3106_c_macro_ __declare_static_bit_vector(konst_3104,8);\
bit_vector_clear(&konst_3104);\
konst_3104.val.byte_array[0] = 254;\
__declare_static_bit_vector(AND_u8_u8_3105,8);\
bit_vector_clear(&konst_3104);\
konst_3104.val.byte_array[0] = 254;\
bit_vector_and(&(current_register_value), &(konst_3104), &(AND_u8_u8_3105));\
_writeSDHCRegisters_( &(I),  &(AND_u8_u8_3105));\
;

#define _resetRegisters_call_stmt_3123_c_macro_ _writeSDHCRegisters_( &(I),  &(ZERO_8));\
;

#define _resetRegisters_call_stmt_3133_c_macro_ __declare_static_bit_vector(konst_3131,8);\
bit_vector_clear(&konst_3131);\
konst_3131.val.byte_array[0] = 9;\
__declare_static_bit_vector(AND_u8_u8_3132,8);\
bit_vector_clear(&konst_3131);\
konst_3131.val.byte_array[0] = 9;\
bit_vector_and(&(current_register_value), &(konst_3131), &(AND_u8_u8_3132));\
_writeSDHCRegisters_( &(I),  &(AND_u8_u8_3132));\
;

#define _resetRegisters_call_stmt_3141_c_macro_ _writeSDHCRegisters_( &(I),  &(ZERO_8));\
;

#define _resetRegisters_call_stmt_3151_c_macro_ __declare_static_bit_vector(konst_3149,8);\
bit_vector_clear(&konst_3149);\
konst_3149.val.byte_array[0] = 193;\
__declare_static_bit_vector(AND_u8_u8_3150,8);\
bit_vector_clear(&konst_3149);\
konst_3149.val.byte_array[0] = 193;\
bit_vector_and(&(current_register_value), &(konst_3149), &(AND_u8_u8_3150));\
_writeSDHCRegisters_( &(I),  &(AND_u8_u8_3150));\
;

#define _resetRegisters_assign_stmt_3161_c_macro_ __declare_static_bit_vector(konst_3159,8);\
bit_vector_clear(&konst_3159);\
konst_3159.val.byte_array[0] = 1;\
__declare_static_bit_vector(ADD_u8_u8_3160,8);\
bit_vector_clear(&konst_3159);\
konst_3159.val.byte_array[0] = 1;\
bit_vector_plus( &(I), &(konst_3159), &(ADD_u8_u8_3160));\
bit_vector_cast_to_bit_vector(0, &(next_I), &(ADD_u8_u8_3160));\
;

#define _resetRegisters_call_stmt_3176_c_macro_ __declare_static_bit_vector(konst_3172,8);\
bit_vector_clear(&konst_3172);\
konst_3172.val.byte_array[0] = 47;\
__declare_static_bit_vector(konst_3174,8);\
bit_vector_clear(&konst_3174);\
konst_3174.val.byte_array[0] = 253;\
__declare_static_bit_vector(AND_u8_u8_3175,8);\
bit_vector_clear(&konst_3172);\
konst_3172.val.byte_array[0] = 47;\
bit_vector_clear(&konst_3174);\
konst_3174.val.byte_array[0] = 253;\
bit_vector_and(&(current_softwarereset_register_value), &(konst_3174), &(AND_u8_u8_3175));\
_writeSDHCRegisters_( &(konst_3172),  &(AND_u8_u8_3175));\
;

#define _resetRegisters_call_stmt_3187_c_macro_ __declare_static_bit_vector(konst_3183,8);\
bit_vector_clear(&konst_3183);\
konst_3183.val.byte_array[0] = 47;\
__declare_static_bit_vector(konst_3185,8);\
bit_vector_clear(&konst_3185);\
konst_3185.val.byte_array[0] = 251;\
__declare_static_bit_vector(AND_u8_u8_3186,8);\
bit_vector_clear(&konst_3183);\
konst_3183.val.byte_array[0] = 47;\
bit_vector_clear(&konst_3185);\
konst_3185.val.byte_array[0] = 251;\
bit_vector_and(&(current_softwarereset_register_value), &(konst_3185), &(AND_u8_u8_3186));\
_writeSDHCRegisters_( &(konst_3183),  &(AND_u8_u8_3186));\
;
;

#define _resetRegisters_branch_block_stmt_3048_c_export_apply_macro_ ;

#define _resetRegisters_inner_outarg_prep_macro__ ;

#define _sdhc_daemon_inner_inarg_prep_macro__ 
#define _sdhc_daemon_assign_stmt_3392_c_macro_ write_bit_vector_to_pipe("SDHC_to_IRC_INT",&(ZERO_1));\
;

#define _sdhc_daemon_assign_stmt_3395_c_macro_ write_bit_vector_to_pipe("oe",&(ZERO_1));\
;

#define _sdhc_daemon_assign_stmt_3398_c_macro_ write_bit_vector_to_pipe("busy",&(ZERO_1));\
;

#define _sdhc_daemon_assign_stmt_3401_c_macro_ write_bit_vector_to_pipe("readyClockCountEnable",&(ONE_1));\
;

#define _sdhc_daemon_assign_stmt_3404_c_macro_ __declare_static_bit_vector(konst_3403,8);\
bit_vector_clear(&konst_3403);\
konst_3403.val.byte_array[0] = 255;\
bit_vector_clear(&konst_3403);\
konst_3403.val.byte_array[0] = 255;\
bit_vector_cast_to_bit_vector(0, &(normalInterruptFlag1), &(konst_3403));\
;

#define _sdhc_daemon_assign_stmt_3407_c_macro_ __declare_static_bit_vector(konst_3406,8);\
bit_vector_clear(&konst_3406);\
konst_3406.val.byte_array[0] = 255;\
bit_vector_clear(&konst_3406);\
konst_3406.val.byte_array[0] = 255;\
bit_vector_cast_to_bit_vector(0, &(normalInterruptFlag2), &(konst_3406));\
;

#define _sdhc_daemon_assign_stmt_3410_c_macro_ __declare_static_bit_vector(konst_3409,8);\
bit_vector_clear(&konst_3409);\
konst_3409.val.byte_array[0] = 255;\
bit_vector_clear(&konst_3409);\
konst_3409.val.byte_array[0] = 255;\
bit_vector_cast_to_bit_vector(0, &(errorInterruptFlag1), &(konst_3409));\
;

#define _sdhc_daemon_assign_stmt_3413_c_macro_ __declare_static_bit_vector(konst_3412,8);\
bit_vector_clear(&konst_3412);\
konst_3412.val.byte_array[0] = 255;\
bit_vector_clear(&konst_3412);\
konst_3412.val.byte_array[0] = 255;\
bit_vector_cast_to_bit_vector(0, &(errorInterruptFlag2), &(konst_3412));\
;

#define _sdhc_daemon_assign_stmt_3417_c_macro_ __declare_static_bit_vector(konst_3415,10);\
bit_vector_clear(&konst_3415);\
__declare_static_bit_vector(type_cast_3416,10);\
bit_vector_clear(&type_cast_3416);\
bit_vector_clear(&konst_3415);\
bit_vector_bitcast_to_bit_vector( &(type_cast_3416), &(konst_3415));\
bit_vector_cast_to_bit_vector(0, &(txBufferPointer), &(type_cast_3416));\
;

#define _sdhc_daemon_assign_stmt_3421_c_macro_ __declare_static_bit_vector(konst_3419,10);\
bit_vector_clear(&konst_3419);\
__declare_static_bit_vector(type_cast_3420,10);\
bit_vector_clear(&type_cast_3420);\
bit_vector_clear(&konst_3419);\
bit_vector_bitcast_to_bit_vector( &(type_cast_3420), &(konst_3419));\
bit_vector_cast_to_bit_vector(0, &(rxBufferPointer), &(type_cast_3420));\
;

#define _sdhc_daemon_assign_stmt_3424_c_macro_ bit_vector_cast_to_bit_vector(0, &(dataRxEnrty1), &(ZERO_1));\
;

#define _sdhc_daemon_assign_stmt_3427_c_macro_ bit_vector_cast_to_bit_vector(0, &(dataRxEnrty2), &(ZERO_1));\
;

#define _sdhc_daemon_assign_stmt_3430_c_macro_ bit_vector_cast_to_bit_vector(0, &(dataErrorInterruptStatus), &(ZERO_8));\
;

#define _sdhc_daemon_call_stmt_3432_c_macro_ _resetRegisters_( &(ZERO_2));\
;

#define _sdhc_daemon_branch_block_stmt_3433_c_export_decl_macro_ __declare_static_bit_vector(request,64);\
__declare_static_bit_vector(rwbar,1);\
__declare_static_bit_vector(bytemask,4);\
__declare_static_bit_vector(unused,3);\
__declare_static_bit_vector(addressunused,16);\
__declare_static_bit_vector(address,8);\
__declare_static_bit_vector(data3,8);\
__declare_static_bit_vector(data2,8);\
__declare_static_bit_vector(data1,8);\
__declare_static_bit_vector(data0,8);\
__declare_static_bit_vector(b3,1);\
__declare_static_bit_vector(b2,1);\
__declare_static_bit_vector(b1,1);\
__declare_static_bit_vector(b0,1);\
__declare_static_bit_vector(softwareResetVal,8);\
__declare_static_bit_vector(presentStateVal,8);\
__declare_static_bit_vector(commandInhibit_CMD,1);\
__declare_static_bit_vector(addresscheck,1);\
__declare_static_bit_vector(presentState,8);\
__declare_static_bit_vector(tempPresentStateHere,8);\
__declare_static_bit_vector(normalInterruptStatusVar1,8);\
__declare_static_bit_vector(normalInterruptStatusVar2,8);\
__declare_static_bit_vector(errorInterruptStatusVar1,8);\
__declare_static_bit_vector(errorInterruptStatusVar2,8);\
__declare_static_bit_vector(dataErrorInterruptStatusVar1,8);\
__declare_static_bit_vector(dataTransferComplete,8);\
__declare_static_bit_vector(tempPresentState_1_1,8);\
__declare_static_bit_vector(bufferReadReady,8);\
bit_vector_clear(&bufferReadReady);\
bufferReadReady.val.byte_array[0] = 32;\
__declare_static_bit_vector(tempPresentState_1_2,8);\
__declare_static_bit_vector(bufferWriteReady,8);\
bit_vector_clear(&bufferWriteReady);\
bufferWriteReady.val.byte_array[0] = 16;\
__declare_static_bit_vector(bufferDataPortCheck,1);\
__declare_static_bit_vector(B,8);\
__declare_static_bit_vector(tempBuf,8);\
__declare_static_bit_vector(next_B,8);\
__declare_static_bit_vector(tempPresentState_1_3,8);\
__declare_static_bit_vector(transferRegVal,8);\
__declare_static_bit_vector(singleMultipleBlock,1);\
__declare_static_bit_vector(blockCountEnable,1);\
__declare_static_bit_vector(C,8);\
__declare_static_bit_vector(newBlockCount,16);\
__declare_static_bit_vector(newBlockCountTemp,8);\
__declare_static_bit_vector(blockCount,16);\
__declare_static_bit_vector(next_C,8);\
__declare_static_bit_vector(blockCountTrue,1);\
__declare_static_bit_vector(lastBlock,1);\
__declare_static_bit_vector(blockCountNext,16);\
__declare_static_bit_vector(transferComplete,8);\
__declare_static_bit_vector(readBufferDataPortCheck,1);\
__declare_static_bit_vector(D,8);\
__declare_static_bit_vector(tempBuf2,8);\
__declare_static_bit_vector(next_D,8);\
__declare_static_bit_vector(transferRegVal2,8);\
__declare_static_bit_vector(singleMultipleReadBlock,1);\
__declare_static_bit_vector(tempPresentState_1_4,8);\
__declare_static_bit_vector(readBlockCountEnable,1);\
__declare_static_bit_vector(E,8);\
__declare_static_bit_vector(readNewBlockCount,16);\
__declare_static_bit_vector(readnewBlockCountTemp,8);\
__declare_static_bit_vector(readBlockCount,16);\
__declare_static_bit_vector(next_E,8);\
__declare_static_bit_vector(readBlockCountTrue,1);\
__declare_static_bit_vector(readLastBlock,1);\
__declare_static_bit_vector(newReadBlockCount,16);\
__declare_static_bit_vector(dataErrorInterruptStatusVar,8);\
__declare_static_bit_vector(readDataTransferComplete,8);\
__declare_static_bit_vector(readTemp3,8);\
__declare_static_bit_vector(readTemp2,8);\
__declare_static_bit_vector(readTemp1,8);\
__declare_static_bit_vector(readTemp0,8);\
__declare_static_bit_vector(readdata3,8);\
__declare_static_bit_vector(readdata2,8);\
__declare_static_bit_vector(readdata1,8);\
__declare_static_bit_vector(readdata0,8);\
__declare_static_bit_vector(S,8);\
__declare_static_bit_vector(readErrorInterruptReg,16);\
__declare_static_bit_vector(readErrorInterruptEnableReg,16);\
__declare_static_bit_vector(readErrorInterruptSignalEnableReg,16);\
__declare_static_bit_vector(readNormalInterruptEnableReg,16);\
__declare_static_bit_vector(errorInterruptRegTemp,8);\
__declare_static_bit_vector(errorInterruptReg,16);\
__declare_static_bit_vector(errorInterruptEnableRegTemp,8);\
__declare_static_bit_vector(errorInterruptEnableReg,16);\
__declare_static_bit_vector(errorInterruptSignalEnableRegTemp,8);\
__declare_static_bit_vector(errorInterruptSignalEnableReg,16);\
__declare_static_bit_vector(normalInterruptEnableRegTemp,8);\
__declare_static_bit_vector(normalInterruptEnableReg,16);\
__declare_static_bit_vector(clockControlRegTemp,8);\
__declare_static_bit_vector(next_S,8);\
__declare_static_bit_vector(errorInterruptRegVal0,8);\
__declare_static_bit_vector(errorInterruptRegVal1,8);\
__declare_static_bit_vector(errorInterruptEnableVal0,8);\
__declare_static_bit_vector(errorInterruptEnableVal1,8);\
__declare_static_bit_vector(errorInterruptSignalEnableVal0,8);\
__declare_static_bit_vector(errorInterruptSignalEnableVal1,8);\
__declare_static_bit_vector(normalInterruptEnableVal0,8);\
__declare_static_bit_vector(normalInterruptEnableVal1,8);\
__declare_static_bit_vector(tempErrorReg0,8);\
__declare_static_bit_vector(tempErrorReg1,8);\
__declare_static_bit_vector(errorInterruptBit,8);\
__declare_static_bit_vector(checkInterruptEnable,1);\
__declare_static_bit_vector(interrupt,8);\
__declare_static_bit_vector(tempNormalSignal,8);\
__declare_static_bit_vector(interruptLine,8);\
__declare_static_bit_vector(errorInterruptLine,8);\


#define _sdhc_daemon_merge_stmt_3434_c_preamble_macro_ uint8_t merge_stmt_3434_entry_flag;\
merge_stmt_3434_entry_flag = 1;\
uint8_t loopback_3433_flag = 0;\
goto merge_stmt_3434_run;\
loopback_3433: loopback_3433_flag = 1;\
goto merge_stmt_3434_run;\
merge_stmt_3434_run: ;\
;

#define _sdhc_daemon_merge_stmt_3434_c_postamble_macro_ loopback_3433_flag = 0;\
merge_stmt_3434_entry_flag = 0;

#define _sdhc_daemon_assign_stmt_3437_c_macro_ __declare_static_bit_vector(RPIPE_peripheral_bridge_to_sdhc_request_3436,64);\
read_bit_vector_from_pipe("peripheral_bridge_to_sdhc_request",&(RPIPE_peripheral_bridge_to_sdhc_request_3436));\
bit_vector_cast_to_bit_vector(0, &(request), &(RPIPE_peripheral_bridge_to_sdhc_request_3436));\
;

#define _sdhc_daemon_assign_stmt_3441_c_macro_ __declare_static_bit_vector(slice_3440,1);\
bit_vector_slice(&(request), &(slice_3440), 63);\
bit_vector_cast_to_bit_vector(0, &(rwbar), &(slice_3440));\
;

#define _sdhc_daemon_assign_stmt_3445_c_macro_ __declare_static_bit_vector(slice_3444,4);\
bit_vector_slice(&(request), &(slice_3444), 59);\
bit_vector_cast_to_bit_vector(0, &(bytemask), &(slice_3444));\
;

#define _sdhc_daemon_assign_stmt_3449_c_macro_ __declare_static_bit_vector(slice_3448,3);\
bit_vector_slice(&(request), &(slice_3448), 56);\
bit_vector_cast_to_bit_vector(0, &(unused), &(slice_3448));\
;

#define _sdhc_daemon_assign_stmt_3453_c_macro_ __declare_static_bit_vector(slice_3452,16);\
bit_vector_slice(&(request), &(slice_3452), 40);\
bit_vector_cast_to_bit_vector(0, &(addressunused), &(slice_3452));\
;

#define _sdhc_daemon_assign_stmt_3457_c_macro_ __declare_static_bit_vector(slice_3456,8);\
bit_vector_slice(&(request), &(slice_3456), 32);\
bit_vector_cast_to_bit_vector(0, &(address), &(slice_3456));\
;

#define _sdhc_daemon_assign_stmt_3461_c_macro_ __declare_static_bit_vector(slice_3460,8);\
bit_vector_slice(&(request), &(slice_3460), 24);\
bit_vector_cast_to_bit_vector(0, &(data3), &(slice_3460));\
;

#define _sdhc_daemon_assign_stmt_3465_c_macro_ __declare_static_bit_vector(slice_3464,8);\
bit_vector_slice(&(request), &(slice_3464), 16);\
bit_vector_cast_to_bit_vector(0, &(data2), &(slice_3464));\
;

#define _sdhc_daemon_assign_stmt_3469_c_macro_ __declare_static_bit_vector(slice_3468,8);\
bit_vector_slice(&(request), &(slice_3468), 8);\
bit_vector_cast_to_bit_vector(0, &(data1), &(slice_3468));\
;

#define _sdhc_daemon_assign_stmt_3473_c_macro_ __declare_static_bit_vector(slice_3472,8);\
bit_vector_slice(&(request), &(slice_3472), 0);\
bit_vector_cast_to_bit_vector(0, &(data0), &(slice_3472));\
;

#define _sdhc_daemon_assign_stmt_3477_c_macro_ __declare_static_bit_vector(slice_3476,1);\
bit_vector_slice(&(bytemask), &(slice_3476), 3);\
bit_vector_cast_to_bit_vector(0, &(b3), &(slice_3476));\
;

#define _sdhc_daemon_assign_stmt_3481_c_macro_ __declare_static_bit_vector(slice_3480,1);\
bit_vector_slice(&(bytemask), &(slice_3480), 2);\
bit_vector_cast_to_bit_vector(0, &(b2), &(slice_3480));\
;

#define _sdhc_daemon_assign_stmt_3485_c_macro_ __declare_static_bit_vector(slice_3484,1);\
bit_vector_slice(&(bytemask), &(slice_3484), 1);\
bit_vector_cast_to_bit_vector(0, &(b1), &(slice_3484));\
;

#define _sdhc_daemon_assign_stmt_3489_c_macro_ __declare_static_bit_vector(slice_3488,1);\
bit_vector_slice(&(bytemask), &(slice_3488), 0);\
bit_vector_cast_to_bit_vector(0, &(b0), &(slice_3488));\
;

#define _sdhc_daemon_call_stmt_3497_c_macro_ if (has_undefined_bit(&b3)) {fprintf(stderr, "Error: variable b3 has undefined value (%s) at test point.\n", to_string(&b3));assert(0);} \
if (bit_vector_to_uint64(0, &b3)) {\
_sdhc_register_write_( &(address),  &(data3));\
}\
;

#define _sdhc_daemon_call_stmt_3503_c_macro_ if (has_undefined_bit(&b2)) {fprintf(stderr, "Error: variable b2 has undefined value (%s) at test point.\n", to_string(&b2));assert(0);} \
__declare_static_bit_vector(konst_3500,8);\
bit_vector_clear(&konst_3500);\
konst_3500.val.byte_array[0] = 1;\
__declare_static_bit_vector(ADD_u8_u8_3501,8);\
if (bit_vector_to_uint64(0, &b2)) {\
bit_vector_clear(&konst_3500);\
konst_3500.val.byte_array[0] = 1;\
bit_vector_plus( &(address), &(konst_3500), &(ADD_u8_u8_3501));\
_sdhc_register_write_( &(ADD_u8_u8_3501),  &(data2));\
}\
;

#define _sdhc_daemon_call_stmt_3509_c_macro_ if (has_undefined_bit(&b1)) {fprintf(stderr, "Error: variable b1 has undefined value (%s) at test point.\n", to_string(&b1));assert(0);} \
__declare_static_bit_vector(konst_3506,8);\
bit_vector_clear(&konst_3506);\
konst_3506.val.byte_array[0] = 2;\
__declare_static_bit_vector(ADD_u8_u8_3507,8);\
if (bit_vector_to_uint64(0, &b1)) {\
bit_vector_clear(&konst_3506);\
konst_3506.val.byte_array[0] = 2;\
bit_vector_plus( &(address), &(konst_3506), &(ADD_u8_u8_3507));\
_sdhc_register_write_( &(ADD_u8_u8_3507),  &(data1));\
}\
;

#define _sdhc_daemon_call_stmt_3515_c_macro_ if (has_undefined_bit(&b0)) {fprintf(stderr, "Error: variable b0 has undefined value (%s) at test point.\n", to_string(&b0));assert(0);} \
__declare_static_bit_vector(konst_3512,8);\
bit_vector_clear(&konst_3512);\
konst_3512.val.byte_array[0] = 3;\
__declare_static_bit_vector(ADD_u8_u8_3513,8);\
if (bit_vector_to_uint64(0, &b0)) {\
bit_vector_clear(&konst_3512);\
konst_3512.val.byte_array[0] = 3;\
bit_vector_plus( &(address), &(konst_3512), &(ADD_u8_u8_3513));\
_sdhc_register_write_( &(ADD_u8_u8_3513),  &(data0));\
}\
;

#define _sdhc_daemon_assign_stmt_3518_c_macro_ write_bit_vector_to_pipe("sdhc_to_peripheral_bridge_response",&(ZERO_32));\
;

#define _sdhc_daemon_call_stmt_3527_c_macro_ __declare_static_bit_vector(konst_3525,8);\
bit_vector_clear(&konst_3525);\
konst_3525.val.byte_array[0] = 47;\
bit_vector_clear(&konst_3525);\
konst_3525.val.byte_array[0] = 47;\
_readSDHCRegisters_( &(konst_3525), &(softwareResetVal));\
;

#define _sdhc_daemon_call_stmt_3533_c_macro_ _resetRegisters_( &(ZERO_2));\
;

#define _sdhc_daemon_call_stmt_3540_c_macro_ _resetRegisters_( &(ONE_2));\
;

#define _sdhc_daemon_call_stmt_3548_c_macro_ __declare_static_bit_vector(konst_3546,2);\
bit_vector_clear(&konst_3546);\
konst_3546.val.byte_array[0] = 2;\
__declare_static_bit_vector(type_cast_3547,2);\
bit_vector_clear(&type_cast_3547);\
type_cast_3547.val.byte_array[0] = 2;\
bit_vector_clear(&konst_3546);\
konst_3546.val.byte_array[0] = 2;\
bit_vector_bitcast_to_bit_vector( &(type_cast_3547), &(konst_3546));\
_resetRegisters_( &(type_cast_3547));\
;

#define _sdhc_daemon_call_stmt_3553_c_macro_ __declare_static_bit_vector(konst_3551,8);\
bit_vector_clear(&konst_3551);\
konst_3551.val.byte_array[0] = 36;\
bit_vector_clear(&konst_3551);\
konst_3551.val.byte_array[0] = 36;\
_readSDHCRegisters_( &(konst_3551), &(presentStateVal));\
;

#define _sdhc_daemon_assign_stmt_3560_c_macro_ __declare_static_bit_vector(konst_3556,8);\
bit_vector_clear(&konst_3556);\
__declare_static_bit_vector(BITSEL_u8_u1_3557,1);\
__declare_static_bit_vector(konst_3558,1);\
bit_vector_clear(&konst_3558);\
__declare_static_bit_vector(EQ_u1_u1_3559,1);\
bit_vector_clear(&konst_3556);\
bit_vector_bitsel( &(presentStateVal), &(konst_3556), &(BITSEL_u8_u1_3557));\
bit_vector_clear(&konst_3558);\
bit_vector_equal(0, &(BITSEL_u8_u1_3557), &(konst_3558), &(EQ_u1_u1_3559));\
bit_vector_cast_to_bit_vector(0, &(commandInhibit_CMD), &(EQ_u1_u1_3559));\
;

#define _sdhc_daemon_assign_stmt_3569_c_macro_ __declare_static_bit_vector(konst_3563,8);\
bit_vector_clear(&konst_3563);\
konst_3563.val.byte_array[0] = 3;\
__declare_static_bit_vector(ADD_u8_u8_3564,8);\
__declare_static_bit_vector(konst_3565,8);\
bit_vector_clear(&konst_3565);\
konst_3565.val.byte_array[0] = 15;\
__declare_static_bit_vector(EQ_u8_u1_3566,1);\
__declare_static_bit_vector(AND_u1_u1_3568,1);\
bit_vector_clear(&konst_3563);\
konst_3563.val.byte_array[0] = 3;\
bit_vector_plus( &(address), &(konst_3563), &(ADD_u8_u8_3564));\
bit_vector_clear(&konst_3565);\
konst_3565.val.byte_array[0] = 15;\
bit_vector_equal(0, &(ADD_u8_u8_3564), &(konst_3565), &(EQ_u8_u1_3566));\
bit_vector_and(&(EQ_u8_u1_3566), &(b0), &(AND_u1_u1_3568));\
bit_vector_cast_to_bit_vector(0, &(addresscheck), &(AND_u1_u1_3568));\
;

#define _sdhc_daemon_assign_stmt_3576_c_macro_ __declare_static_bit_vector(konst_3572,8);\
bit_vector_clear(&konst_3572);\
konst_3572.val.byte_array[0] = 1;\
__declare_static_bit_vector(LSHR_u8_u8_3573,8);\
__declare_static_bit_vector(konst_3574,8);\
bit_vector_clear(&konst_3574);\
konst_3574.val.byte_array[0] = 1;\
__declare_static_bit_vector(SHL_u8_u8_3575,8);\
bit_vector_clear(&konst_3572);\
konst_3572.val.byte_array[0] = 1;\
bit_vector_shift_right(0, &(presentStateVal), &(konst_3572), &(LSHR_u8_u8_3573));\
bit_vector_clear(&konst_3574);\
konst_3574.val.byte_array[0] = 1;\
bit_vector_shift_left(&(LSHR_u8_u8_3573), &(konst_3574), &(SHL_u8_u8_3575));\
bit_vector_cast_to_bit_vector(0, &(presentState), &(SHL_u8_u8_3575));\
;

#define _sdhc_daemon_assign_stmt_3585_c_macro_ __declare_static_bit_vector(konst_3583,8);\
bit_vector_clear(&konst_3583);\
konst_3583.val.byte_array[0] = 1;\
__declare_static_bit_vector(OR_u8_u8_3584,8);\
bit_vector_clear(&konst_3583);\
konst_3583.val.byte_array[0] = 1;\
bit_vector_or(&(presentState), &(konst_3583), &(OR_u8_u8_3584));\
bit_vector_cast_to_bit_vector(0, &(tempPresentStateHere), &(OR_u8_u8_3584));\
;

#define _sdhc_daemon_call_stmt_3588_c_macro_ __declare_static_bit_vector(konst_3586,8);\
bit_vector_clear(&konst_3586);\
konst_3586.val.byte_array[0] = 36;\
bit_vector_clear(&konst_3586);\
konst_3586.val.byte_array[0] = 36;\
_writeSDHCRegisters_( &(konst_3586),  &(tempPresentStateHere));\
;

#define _sdhc_daemon_assign_stmt_3591_c_macro_ bit_vector_cast_to_bit_vector(0, &(dataRxEnrty1), &(ZERO_1));\
;

#define _sdhc_daemon_assign_stmt_3594_c_macro_ bit_vector_cast_to_bit_vector(0, &(dataRxEnrty2), &(ZERO_1));\
;

#define _sdhc_daemon_call_stmt_3601_c_macro_ _command_generator_(&(normalInterruptStatusVar1), &(normalInterruptStatusVar2), &(errorInterruptStatusVar1), &(errorInterruptStatusVar2), &(dataErrorInterruptStatusVar1), &(dataTransferComplete));\
;

#define _sdhc_daemon_assign_stmt_3604_c_macro_ __declare_static_bit_vector(konst_3603,8);\
bit_vector_clear(&konst_3603);\
konst_3603.val.byte_array[0] = 255;\
bit_vector_clear(&konst_3603);\
konst_3603.val.byte_array[0] = 255;\
bit_vector_cast_to_bit_vector(0, &(normalInterruptFlag1), &(konst_3603));\
;

#define _sdhc_daemon_assign_stmt_3607_c_macro_ __declare_static_bit_vector(konst_3606,8);\
bit_vector_clear(&konst_3606);\
konst_3606.val.byte_array[0] = 255;\
bit_vector_clear(&konst_3606);\
konst_3606.val.byte_array[0] = 255;\
bit_vector_cast_to_bit_vector(0, &(normalInterruptFlag2), &(konst_3606));\
;

#define _sdhc_daemon_assign_stmt_3610_c_macro_ __declare_static_bit_vector(konst_3609,8);\
bit_vector_clear(&konst_3609);\
konst_3609.val.byte_array[0] = 255;\
bit_vector_clear(&konst_3609);\
konst_3609.val.byte_array[0] = 255;\
bit_vector_cast_to_bit_vector(0, &(errorInterruptFlag1), &(konst_3609));\
;

#define _sdhc_daemon_assign_stmt_3613_c_macro_ __declare_static_bit_vector(konst_3612,8);\
bit_vector_clear(&konst_3612);\
konst_3612.val.byte_array[0] = 255;\
bit_vector_clear(&konst_3612);\
konst_3612.val.byte_array[0] = 255;\
bit_vector_cast_to_bit_vector(0, &(errorInterruptFlag2), &(konst_3612));\
;

#define _sdhc_daemon_call_stmt_3621_c_macro_ __declare_static_bit_vector(konst_3619,8);\
bit_vector_clear(&konst_3619);\
konst_3619.val.byte_array[0] = 37;\
bit_vector_clear(&konst_3619);\
konst_3619.val.byte_array[0] = 37;\
_readSDHCRegisters_( &(konst_3619), &(tempPresentState_1_1));\
;

#define _sdhc_daemon_call_stmt_3626_c_macro_ __declare_static_bit_vector(konst_3622,8);\
bit_vector_clear(&konst_3622);\
konst_3622.val.byte_array[0] = 37;\
__declare_static_bit_vector(konst_3624,8);\
bit_vector_clear(&konst_3624);\
konst_3624.val.byte_array[0] = 8;\
__declare_static_bit_vector(OR_u8_u8_3625,8);\
bit_vector_clear(&konst_3622);\
konst_3622.val.byte_array[0] = 37;\
bit_vector_clear(&konst_3624);\
konst_3624.val.byte_array[0] = 8;\
bit_vector_or(&(tempPresentState_1_1), &(konst_3624), &(OR_u8_u8_3625));\
_writeSDHCRegisters_( &(konst_3622),  &(OR_u8_u8_3625));\
;

#define _sdhc_daemon_assign_stmt_3631_c_macro_ __declare_static_bit_vector(konst_3629,8);\
bit_vector_clear(&konst_3629);\
konst_3629.val.byte_array[0] = 32;\
__declare_static_bit_vector(OR_u8_u8_3630,8);\
bit_vector_clear(&OR_u8_u8_3630);\
OR_u8_u8_3630.val.byte_array[0] = 32;\
bit_vector_clear(&konst_3629);\
konst_3629.val.byte_array[0] = 32;\
bit_vector_or(&(ZERO_8), &(konst_3629), &(OR_u8_u8_3630));\
bit_vector_cast_to_bit_vector(0, &(bufferReadReady), &(OR_u8_u8_3630));\
;

#define _sdhc_daemon_assign_stmt_3636_c_macro_ __declare_static_bit_vector(konst_3634,8);\
bit_vector_clear(&konst_3634);\
konst_3634.val.byte_array[0] = 32;\
__declare_static_bit_vector(OR_u8_u8_3635,8);\
bit_vector_clear(&konst_3634);\
konst_3634.val.byte_array[0] = 32;\
bit_vector_or(&(normalInterruptFlag1), &(konst_3634), &(OR_u8_u8_3635));\
bit_vector_cast_to_bit_vector(0, &(normalInterruptFlag1), &(OR_u8_u8_3635));\
;

#define _sdhc_daemon_call_stmt_3644_c_macro_ __declare_static_bit_vector(konst_3642,8);\
bit_vector_clear(&konst_3642);\
konst_3642.val.byte_array[0] = 37;\
bit_vector_clear(&konst_3642);\
konst_3642.val.byte_array[0] = 37;\
_readSDHCRegisters_( &(konst_3642), &(tempPresentState_1_2));\
;

#define _sdhc_daemon_call_stmt_3649_c_macro_ __declare_static_bit_vector(konst_3645,8);\
bit_vector_clear(&konst_3645);\
konst_3645.val.byte_array[0] = 37;\
__declare_static_bit_vector(konst_3647,8);\
bit_vector_clear(&konst_3647);\
konst_3647.val.byte_array[0] = 4;\
__declare_static_bit_vector(OR_u8_u8_3648,8);\
bit_vector_clear(&konst_3645);\
konst_3645.val.byte_array[0] = 37;\
bit_vector_clear(&konst_3647);\
konst_3647.val.byte_array[0] = 4;\
bit_vector_or(&(tempPresentState_1_2), &(konst_3647), &(OR_u8_u8_3648));\
_writeSDHCRegisters_( &(konst_3645),  &(OR_u8_u8_3648));\
;

#define _sdhc_daemon_assign_stmt_3654_c_macro_ __declare_static_bit_vector(konst_3652,8);\
bit_vector_clear(&konst_3652);\
konst_3652.val.byte_array[0] = 16;\
__declare_static_bit_vector(OR_u8_u8_3653,8);\
bit_vector_clear(&OR_u8_u8_3653);\
OR_u8_u8_3653.val.byte_array[0] = 16;\
bit_vector_clear(&konst_3652);\
konst_3652.val.byte_array[0] = 16;\
bit_vector_or(&(ZERO_8), &(konst_3652), &(OR_u8_u8_3653));\
bit_vector_cast_to_bit_vector(0, &(bufferWriteReady), &(OR_u8_u8_3653));\
;

#define _sdhc_daemon_assign_stmt_3659_c_macro_ __declare_static_bit_vector(konst_3657,8);\
bit_vector_clear(&konst_3657);\
konst_3657.val.byte_array[0] = 16;\
__declare_static_bit_vector(OR_u8_u8_3658,8);\
bit_vector_clear(&konst_3657);\
konst_3657.val.byte_array[0] = 16;\
bit_vector_or(&(normalInterruptFlag1), &(konst_3657), &(OR_u8_u8_3658));\
bit_vector_cast_to_bit_vector(0, &(normalInterruptFlag1), &(OR_u8_u8_3658));\
;

#define _sdhc_daemon_assign_stmt_3665_c_macro_ __declare_static_bit_vector(konst_3663,8);\
bit_vector_clear(&konst_3663);\
konst_3663.val.byte_array[0] = 32;\
__declare_static_bit_vector(EQ_u8_u1_3664,1);\
bit_vector_clear(&konst_3663);\
konst_3663.val.byte_array[0] = 32;\
bit_vector_equal(0, &(address), &(konst_3663), &(EQ_u8_u1_3664));\
bit_vector_cast_to_bit_vector(0, &(bufferDataPortCheck), &(EQ_u8_u1_3664));\
;

#define _sdhc_daemon_merge_stmt_3674_c_preamble_macro_ uint8_t merge_stmt_3674_entry_flag;\
merge_stmt_3674_entry_flag = 1;\
uint8_t loopBuffer_3433_flag = 0;\
goto merge_stmt_3674_run;\
loopBuffer_3433: loopBuffer_3433_flag = 1;\
goto merge_stmt_3674_run;\
merge_stmt_3674_run: ;\

#define _sdhc_daemon_phi_stmt_3675_c_macro_ __declare_static_bit_vector(konst_3678,8);\
bit_vector_clear(&konst_3678);\
__declare_static_bit_vector(type_cast_3679,8);\
bit_vector_clear(&type_cast_3679);\
if(loopBuffer_3433_flag) {\
bit_vector_cast_to_bit_vector(0, &(B), &(next_B));\
}\
else {\
__declare_static_bit_vector(konst_3678,8);\
bit_vector_clear(&konst_3678);\
__declare_static_bit_vector(type_cast_3679,8);\
bit_vector_clear(&type_cast_3679);\
bit_vector_clear(&konst_3678);\
bit_vector_bitcast_to_bit_vector( &(type_cast_3679), &(konst_3678));\
bit_vector_cast_to_bit_vector(0, &(B), &(type_cast_3679));\
}\
;
;

#define _sdhc_daemon_merge_stmt_3674_c_postamble_macro_ loopBuffer_3433_flag = 0;\
merge_stmt_3674_entry_flag = 0;

#define _sdhc_daemon_call_stmt_3685_c_macro_ __declare_static_bit_vector(konst_3681,8);\
bit_vector_clear(&konst_3681);\
konst_3681.val.byte_array[0] = 32;\
__declare_static_bit_vector(ADD_u8_u8_3683,8);\
bit_vector_clear(&konst_3681);\
konst_3681.val.byte_array[0] = 32;\
bit_vector_plus( &(konst_3681), &(B), &(ADD_u8_u8_3683));\
_readSDHCRegisters_( &(ADD_u8_u8_3683), &(tempBuf));\
;

#define _sdhc_daemon_assign_stmt_3688_c_macro_ write_bit_vector_to_pipe("dataBufferTx",&(tempBuf));\
;

#define _sdhc_daemon_assign_stmt_3693_c_macro_ __declare_static_bit_vector(konst_3691,8);\
bit_vector_clear(&konst_3691);\
konst_3691.val.byte_array[0] = 1;\
__declare_static_bit_vector(ADD_u8_u8_3692,8);\
bit_vector_clear(&konst_3691);\
konst_3691.val.byte_array[0] = 1;\
bit_vector_plus( &(B), &(konst_3691), &(ADD_u8_u8_3692));\
bit_vector_cast_to_bit_vector(0, &(next_B), &(ADD_u8_u8_3692));\
;

#define _sdhc_daemon_assign_stmt_3704_c_macro_ __declare_static_bit_vector(konst_3702,10);\
bit_vector_clear(&konst_3702);\
konst_3702.val.byte_array[0] = 4;\
__declare_static_bit_vector(ADD_u10_u10_3703,10);\
bit_vector_clear(&konst_3702);\
konst_3702.val.byte_array[0] = 4;\
bit_vector_plus( &(txBufferPointer), &(konst_3702), &(ADD_u10_u10_3703));\
bit_vector_cast_to_bit_vector(0, &(txBufferPointer), &(ADD_u10_u10_3703));\
;

#define _sdhc_daemon_call_stmt_3711_c_macro_ __declare_static_bit_vector(konst_3709,8);\
bit_vector_clear(&konst_3709);\
konst_3709.val.byte_array[0] = 37;\
bit_vector_clear(&konst_3709);\
konst_3709.val.byte_array[0] = 37;\
_readSDHCRegisters_( &(konst_3709), &(tempPresentState_1_3));\
;

#define _sdhc_daemon_call_stmt_3716_c_macro_ __declare_static_bit_vector(konst_3712,8);\
bit_vector_clear(&konst_3712);\
konst_3712.val.byte_array[0] = 37;\
__declare_static_bit_vector(konst_3714,8);\
bit_vector_clear(&konst_3714);\
konst_3714.val.byte_array[0] = 251;\
__declare_static_bit_vector(OR_u8_u8_3715,8);\
bit_vector_clear(&konst_3712);\
konst_3712.val.byte_array[0] = 37;\
bit_vector_clear(&konst_3714);\
konst_3714.val.byte_array[0] = 251;\
bit_vector_or(&(tempPresentState_1_3), &(konst_3714), &(OR_u8_u8_3715));\
_writeSDHCRegisters_( &(konst_3712),  &(OR_u8_u8_3715));\
;

#define _sdhc_daemon_call_stmt_3719_c_macro_ __declare_static_bit_vector(konst_3717,8);\
bit_vector_clear(&konst_3717);\
konst_3717.val.byte_array[0] = 12;\
bit_vector_clear(&konst_3717);\
konst_3717.val.byte_array[0] = 12;\
_readSDHCRegisters_( &(konst_3717), &(transferRegVal));\
;

#define _sdhc_daemon_assign_stmt_3725_c_macro_ __declare_static_bit_vector(konst_3722,8);\
bit_vector_clear(&konst_3722);\
konst_3722.val.byte_array[0] = 32;\
__declare_static_bit_vector(AND_u8_u8_3723,8);\
__declare_static_bit_vector(BITREDUCEOR_u8_u1_3724,1);\
bit_vector_clear(&konst_3722);\
konst_3722.val.byte_array[0] = 32;\
bit_vector_and(&(transferRegVal), &(konst_3722), &(AND_u8_u8_3723));\
bit_vector_reduce_or( &(AND_u8_u8_3723), &(BITREDUCEOR_u8_u1_3724));\
bit_vector_cast_to_bit_vector(0, &(singleMultipleBlock), &(BITREDUCEOR_u8_u1_3724));\
;

#define _sdhc_daemon_assign_stmt_3733_c_macro_ __declare_static_bit_vector(konst_3728,8);\
bit_vector_clear(&konst_3728);\
konst_3728.val.byte_array[0] = 2;\
__declare_static_bit_vector(AND_u8_u8_3729,8);\
__declare_static_bit_vector(BITREDUCEOR_u8_u1_3730,1);\
__declare_static_bit_vector(AND_u1_u1_3732,1);\
bit_vector_clear(&konst_3728);\
konst_3728.val.byte_array[0] = 2;\
bit_vector_and(&(transferRegVal), &(konst_3728), &(AND_u8_u8_3729));\
bit_vector_reduce_or( &(AND_u8_u8_3729), &(BITREDUCEOR_u8_u1_3730));\
bit_vector_and(&(BITREDUCEOR_u8_u1_3730), &(singleMultipleBlock), &(AND_u1_u1_3732));\
bit_vector_cast_to_bit_vector(0, &(blockCountEnable), &(AND_u1_u1_3732));\
;

#define _sdhc_daemon_merge_stmt_3734_c_preamble_macro_ uint8_t merge_stmt_3734_entry_flag;\
merge_stmt_3734_entry_flag = 1;\
uint8_t loopBlock_3433_flag = 0;\
goto merge_stmt_3734_run;\
loopBlock_3433: loopBlock_3433_flag = 1;\
goto merge_stmt_3734_run;\
merge_stmt_3734_run: ;\

#define _sdhc_daemon_phi_stmt_3735_c_macro_ if(loopBlock_3433_flag) {\
bit_vector_cast_to_bit_vector(0, &(C), &(next_C));\
}\
else {\
bit_vector_cast_to_bit_vector(0, &(C), &(ONE_8));\
}\
;

#define _sdhc_daemon_phi_stmt_3739_c_macro_ __declare_static_bit_vector(konst_3741,16);\
bit_vector_clear(&konst_3741);\
__declare_static_bit_vector(type_cast_3742,16);\
bit_vector_clear(&type_cast_3742);\
if(loopBlock_3433_flag) {\
bit_vector_cast_to_bit_vector(0, &(newBlockCount), &(blockCount));\
}\
else {\
__declare_static_bit_vector(konst_3741,16);\
bit_vector_clear(&konst_3741);\
__declare_static_bit_vector(type_cast_3742,16);\
bit_vector_clear(&type_cast_3742);\
bit_vector_clear(&konst_3741);\
bit_vector_bitcast_to_bit_vector( &(type_cast_3742), &(konst_3741));\
bit_vector_cast_to_bit_vector(0, &(newBlockCount), &(type_cast_3742));\
}\
;
;

#define _sdhc_daemon_merge_stmt_3734_c_postamble_macro_ loopBlock_3433_flag = 0;\
merge_stmt_3734_entry_flag = 0;

#define _sdhc_daemon_call_stmt_3749_c_macro_ __declare_static_bit_vector(konst_3745,8);\
bit_vector_clear(&konst_3745);\
konst_3745.val.byte_array[0] = 6;\
__declare_static_bit_vector(ADD_u8_u8_3747,8);\
bit_vector_clear(&konst_3745);\
konst_3745.val.byte_array[0] = 6;\
bit_vector_plus( &(konst_3745), &(C), &(ADD_u8_u8_3747));\
_readSDHCRegisters_( &(ADD_u8_u8_3747), &(newBlockCountTemp));\
;

#define _sdhc_daemon_assign_stmt_3755_c_macro_ __declare_static_bit_vector(slice_3752,8);\
__declare_static_bit_vector(CONCAT_u8_u16_3754,16);\
bit_vector_slice(&(newBlockCount), &(slice_3752), 0);\
bit_vector_concatenate( &(slice_3752), &(newBlockCountTemp), &(CONCAT_u8_u16_3754));\
bit_vector_cast_to_bit_vector(0, &(blockCount), &(CONCAT_u8_u16_3754));\
;

#define _sdhc_daemon_assign_stmt_3760_c_macro_ __declare_static_bit_vector(konst_3758,8);\
bit_vector_clear(&konst_3758);\
konst_3758.val.byte_array[0] = 1;\
__declare_static_bit_vector(SUB_u8_u8_3759,8);\
bit_vector_clear(&konst_3758);\
konst_3758.val.byte_array[0] = 1;\
bit_vector_minus( &(C), &(konst_3758), &(SUB_u8_u8_3759));\
bit_vector_cast_to_bit_vector(0, &(next_C), &(SUB_u8_u8_3759));\
;

#define _sdhc_daemon_assign_stmt_3771_c_macro_ __declare_static_bit_vector(konst_3769,16);\
bit_vector_clear(&konst_3769);\
konst_3769.val.byte_array[0] = 1;\
__declare_static_bit_vector(EQ_u16_u1_3770,1);\
bit_vector_clear(&konst_3769);\
konst_3769.val.byte_array[0] = 1;\
bit_vector_equal(0, &(blockCount), &(konst_3769), &(EQ_u16_u1_3770));\
bit_vector_cast_to_bit_vector(0, &(blockCountTrue), &(EQ_u16_u1_3770));\
;

#define _sdhc_daemon_assign_stmt_3779_c_macro_ __declare_static_bit_vector(NOT_u1_u1_3774,1);\
__declare_static_bit_vector(AND_u1_u1_3777,1);\
__declare_static_bit_vector(OR_u1_u1_3778,1);\
bit_vector_not( &(singleMultipleBlock), &(NOT_u1_u1_3774));\
bit_vector_and(&(blockCountEnable), &(blockCountTrue), &(AND_u1_u1_3777));\
bit_vector_or(&(NOT_u1_u1_3774), &(AND_u1_u1_3777), &(OR_u1_u1_3778));\
bit_vector_cast_to_bit_vector(0, &(lastBlock), &(OR_u1_u1_3778));\
;

#define _sdhc_daemon_call_stmt_3785_c_macro_ _dataTx_( &(lastBlock),  &(blockCountEnable),  &(blockCount), &(blockCountNext), &(transferComplete));\
;

#define _sdhc_daemon_call_stmt_3789_c_macro_ __declare_static_bit_vector(konst_3786,8);\
bit_vector_clear(&konst_3786);\
konst_3786.val.byte_array[0] = 7;\
__declare_static_bit_vector(slice_3788,8);\
bit_vector_clear(&konst_3786);\
konst_3786.val.byte_array[0] = 7;\
bit_vector_slice(&(blockCountNext), &(slice_3788), 8);\
_writeSDHCRegisters_( &(konst_3786),  &(slice_3788));\
;

#define _sdhc_daemon_call_stmt_3793_c_macro_ __declare_static_bit_vector(konst_3790,8);\
bit_vector_clear(&konst_3790);\
konst_3790.val.byte_array[0] = 6;\
__declare_static_bit_vector(slice_3792,8);\
bit_vector_clear(&konst_3790);\
konst_3790.val.byte_array[0] = 6;\
bit_vector_slice(&(blockCountNext), &(slice_3792), 0);\
_writeSDHCRegisters_( &(konst_3790),  &(slice_3792));\
;

#define _sdhc_daemon_assign_stmt_3798_c_macro_ __declare_static_bit_vector(konst_3796,8);\
bit_vector_clear(&konst_3796);\
konst_3796.val.byte_array[0] = 2;\
__declare_static_bit_vector(OR_u8_u8_3797,8);\
bit_vector_clear(&konst_3796);\
konst_3796.val.byte_array[0] = 2;\
bit_vector_or(&(normalInterruptFlag1), &(konst_3796), &(OR_u8_u8_3797));\
bit_vector_cast_to_bit_vector(0, &(normalInterruptFlag1), &(OR_u8_u8_3797));\
;

#define _sdhc_daemon_assign_stmt_3803_c_macro_ __declare_static_bit_vector(konst_3801,8);\
bit_vector_clear(&konst_3801);\
konst_3801.val.byte_array[0] = 96;\
__declare_static_bit_vector(OR_u8_u8_3802,8);\
bit_vector_clear(&konst_3801);\
konst_3801.val.byte_array[0] = 96;\
bit_vector_or(&(errorInterruptFlag1), &(konst_3801), &(OR_u8_u8_3802));\
bit_vector_cast_to_bit_vector(0, &(errorInterruptFlag1), &(OR_u8_u8_3802));\
;

#define _sdhc_daemon_assign_stmt_3811_c_macro_ __declare_static_bit_vector(konst_3809,8);\
bit_vector_clear(&konst_3809);\
konst_3809.val.byte_array[0] = 32;\
__declare_static_bit_vector(EQ_u8_u1_3810,1);\
bit_vector_clear(&konst_3809);\
konst_3809.val.byte_array[0] = 32;\
bit_vector_equal(0, &(address), &(konst_3809), &(EQ_u8_u1_3810));\
bit_vector_cast_to_bit_vector(0, &(readBufferDataPortCheck), &(EQ_u8_u1_3810));\
;

#define _sdhc_daemon_merge_stmt_3820_c_preamble_macro_ uint8_t merge_stmt_3820_entry_flag;\
merge_stmt_3820_entry_flag = 1;\
uint8_t loopBufferWrite_3433_flag = 0;\
goto merge_stmt_3820_run;\
loopBufferWrite_3433: loopBufferWrite_3433_flag = 1;\
goto merge_stmt_3820_run;\
merge_stmt_3820_run: ;\

#define _sdhc_daemon_phi_stmt_3821_c_macro_ __declare_static_bit_vector(konst_3823,8);\
bit_vector_clear(&konst_3823);\
__declare_static_bit_vector(type_cast_3824,8);\
bit_vector_clear(&type_cast_3824);\
if(loopBufferWrite_3433_flag) {\
bit_vector_cast_to_bit_vector(0, &(D), &(next_D));\
}\
else {\
__declare_static_bit_vector(konst_3823,8);\
bit_vector_clear(&konst_3823);\
__declare_static_bit_vector(type_cast_3824,8);\
bit_vector_clear(&type_cast_3824);\
bit_vector_clear(&konst_3823);\
bit_vector_bitcast_to_bit_vector( &(type_cast_3824), &(konst_3823));\
bit_vector_cast_to_bit_vector(0, &(D), &(type_cast_3824));\
}\
;
;

#define _sdhc_daemon_merge_stmt_3820_c_postamble_macro_ loopBufferWrite_3433_flag = 0;\
merge_stmt_3820_entry_flag = 0;

#define _sdhc_daemon_assign_stmt_3829_c_macro_ __declare_static_bit_vector(RPIPE_dataBufferRx_3828,8);\
read_bit_vector_from_pipe("dataBufferRx",&(RPIPE_dataBufferRx_3828));\
bit_vector_cast_to_bit_vector(0, &(tempBuf2), &(RPIPE_dataBufferRx_3828));\
;

#define _sdhc_daemon_call_stmt_3834_c_macro_ __declare_static_bit_vector(konst_3830,8);\
bit_vector_clear(&konst_3830);\
konst_3830.val.byte_array[0] = 32;\
__declare_static_bit_vector(ADD_u8_u8_3832,8);\
bit_vector_clear(&konst_3830);\
konst_3830.val.byte_array[0] = 32;\
bit_vector_plus( &(konst_3830), &(D), &(ADD_u8_u8_3832));\
_writeSDHCRegisters_( &(ADD_u8_u8_3832),  &(tempBuf2));\
;

#define _sdhc_daemon_assign_stmt_3839_c_macro_ __declare_static_bit_vector(konst_3837,8);\
bit_vector_clear(&konst_3837);\
konst_3837.val.byte_array[0] = 1;\
__declare_static_bit_vector(ADD_u8_u8_3838,8);\
bit_vector_clear(&konst_3837);\
konst_3837.val.byte_array[0] = 1;\
bit_vector_plus( &(D), &(konst_3837), &(ADD_u8_u8_3838));\
bit_vector_cast_to_bit_vector(0, &(next_D), &(ADD_u8_u8_3838));\
;

#define _sdhc_daemon_assign_stmt_3850_c_macro_ __declare_static_bit_vector(konst_3848,10);\
bit_vector_clear(&konst_3848);\
konst_3848.val.byte_array[0] = 4;\
__declare_static_bit_vector(SUB_u10_u10_3849,10);\
bit_vector_clear(&konst_3848);\
konst_3848.val.byte_array[0] = 4;\
bit_vector_minus( &(rxBufferPointer), &(konst_3848), &(SUB_u10_u10_3849));\
bit_vector_cast_to_bit_vector(0, &(rxBufferPointer), &(SUB_u10_u10_3849));\
;

#define _sdhc_daemon_call_stmt_3853_c_macro_ __declare_static_bit_vector(konst_3851,8);\
bit_vector_clear(&konst_3851);\
konst_3851.val.byte_array[0] = 12;\
bit_vector_clear(&konst_3851);\
konst_3851.val.byte_array[0] = 12;\
_readSDHCRegisters_( &(konst_3851), &(transferRegVal2));\
;

#define _sdhc_daemon_assign_stmt_3859_c_macro_ __declare_static_bit_vector(konst_3856,8);\
bit_vector_clear(&konst_3856);\
konst_3856.val.byte_array[0] = 32;\
__declare_static_bit_vector(AND_u8_u8_3857,8);\
__declare_static_bit_vector(BITREDUCEOR_u8_u1_3858,1);\
bit_vector_clear(&konst_3856);\
konst_3856.val.byte_array[0] = 32;\
bit_vector_and(&(transferRegVal2), &(konst_3856), &(AND_u8_u8_3857));\
bit_vector_reduce_or( &(AND_u8_u8_3857), &(BITREDUCEOR_u8_u1_3858));\
bit_vector_cast_to_bit_vector(0, &(singleMultipleReadBlock), &(BITREDUCEOR_u8_u1_3858));\
;

#define _sdhc_daemon_call_stmt_3866_c_macro_ __declare_static_bit_vector(konst_3864,8);\
bit_vector_clear(&konst_3864);\
konst_3864.val.byte_array[0] = 37;\
bit_vector_clear(&konst_3864);\
konst_3864.val.byte_array[0] = 37;\
_readSDHCRegisters_( &(konst_3864), &(tempPresentState_1_4));\
;

#define _sdhc_daemon_call_stmt_3871_c_macro_ __declare_static_bit_vector(konst_3867,8);\
bit_vector_clear(&konst_3867);\
konst_3867.val.byte_array[0] = 37;\
__declare_static_bit_vector(konst_3869,8);\
bit_vector_clear(&konst_3869);\
konst_3869.val.byte_array[0] = 247;\
__declare_static_bit_vector(AND_u8_u8_3870,8);\
bit_vector_clear(&konst_3867);\
konst_3867.val.byte_array[0] = 37;\
bit_vector_clear(&konst_3869);\
konst_3869.val.byte_array[0] = 247;\
bit_vector_and(&(tempPresentState_1_4), &(konst_3869), &(AND_u8_u8_3870));\
_writeSDHCRegisters_( &(konst_3867),  &(AND_u8_u8_3870));\
;

#define _sdhc_daemon_assign_stmt_3883_c_macro_ __declare_static_bit_vector(konst_3878,8);\
bit_vector_clear(&konst_3878);\
konst_3878.val.byte_array[0] = 2;\
__declare_static_bit_vector(AND_u8_u8_3879,8);\
__declare_static_bit_vector(BITREDUCEOR_u8_u1_3880,1);\
__declare_static_bit_vector(AND_u1_u1_3882,1);\
bit_vector_clear(&konst_3878);\
konst_3878.val.byte_array[0] = 2;\
bit_vector_and(&(transferRegVal2), &(konst_3878), &(AND_u8_u8_3879));\
bit_vector_reduce_or( &(AND_u8_u8_3879), &(BITREDUCEOR_u8_u1_3880));\
bit_vector_and(&(BITREDUCEOR_u8_u1_3880), &(singleMultipleBlock), &(AND_u1_u1_3882));\
bit_vector_cast_to_bit_vector(0, &(readBlockCountEnable), &(AND_u1_u1_3882));\
;

#define _sdhc_daemon_merge_stmt_3884_c_preamble_macro_ uint8_t merge_stmt_3884_entry_flag;\
merge_stmt_3884_entry_flag = 1;\
uint8_t loopBlock2_3433_flag = 0;\
goto merge_stmt_3884_run;\
loopBlock2_3433: loopBlock2_3433_flag = 1;\
goto merge_stmt_3884_run;\
merge_stmt_3884_run: ;\

#define _sdhc_daemon_phi_stmt_3885_c_macro_ if(loopBlock2_3433_flag) {\
bit_vector_cast_to_bit_vector(0, &(E), &(next_E));\
}\
else {\
bit_vector_cast_to_bit_vector(0, &(E), &(ONE_8));\
}\
;

#define _sdhc_daemon_phi_stmt_3889_c_macro_ __declare_static_bit_vector(konst_3891,16);\
bit_vector_clear(&konst_3891);\
__declare_static_bit_vector(type_cast_3892,16);\
bit_vector_clear(&type_cast_3892);\
if(loopBlock2_3433_flag) {\
bit_vector_cast_to_bit_vector(0, &(readNewBlockCount), &(readBlockCount));\
}\
else {\
__declare_static_bit_vector(konst_3891,16);\
bit_vector_clear(&konst_3891);\
__declare_static_bit_vector(type_cast_3892,16);\
bit_vector_clear(&type_cast_3892);\
bit_vector_clear(&konst_3891);\
bit_vector_bitcast_to_bit_vector( &(type_cast_3892), &(konst_3891));\
bit_vector_cast_to_bit_vector(0, &(readNewBlockCount), &(type_cast_3892));\
}\
;
;

#define _sdhc_daemon_merge_stmt_3884_c_postamble_macro_ loopBlock2_3433_flag = 0;\
merge_stmt_3884_entry_flag = 0;

#define _sdhc_daemon_call_stmt_3899_c_macro_ __declare_static_bit_vector(konst_3895,8);\
bit_vector_clear(&konst_3895);\
konst_3895.val.byte_array[0] = 6;\
__declare_static_bit_vector(ADD_u8_u8_3897,8);\
bit_vector_clear(&konst_3895);\
konst_3895.val.byte_array[0] = 6;\
bit_vector_plus( &(konst_3895), &(E), &(ADD_u8_u8_3897));\
_readSDHCRegisters_( &(ADD_u8_u8_3897), &(readnewBlockCountTemp));\
;

#define _sdhc_daemon_assign_stmt_3905_c_macro_ __declare_static_bit_vector(slice_3902,8);\
__declare_static_bit_vector(CONCAT_u8_u16_3904,16);\
bit_vector_slice(&(readNewBlockCount), &(slice_3902), 0);\
bit_vector_concatenate( &(slice_3902), &(readnewBlockCountTemp), &(CONCAT_u8_u16_3904));\
bit_vector_cast_to_bit_vector(0, &(readBlockCount), &(CONCAT_u8_u16_3904));\
;

#define _sdhc_daemon_assign_stmt_3910_c_macro_ __declare_static_bit_vector(konst_3908,8);\
bit_vector_clear(&konst_3908);\
konst_3908.val.byte_array[0] = 1;\
__declare_static_bit_vector(SUB_u8_u8_3909,8);\
bit_vector_clear(&konst_3908);\
konst_3908.val.byte_array[0] = 1;\
bit_vector_minus( &(E), &(konst_3908), &(SUB_u8_u8_3909));\
bit_vector_cast_to_bit_vector(0, &(next_E), &(SUB_u8_u8_3909));\
;

#define _sdhc_daemon_assign_stmt_3921_c_macro_ __declare_static_bit_vector(konst_3919,16);\
bit_vector_clear(&konst_3919);\
konst_3919.val.byte_array[0] = 1;\
__declare_static_bit_vector(EQ_u16_u1_3920,1);\
bit_vector_clear(&konst_3919);\
konst_3919.val.byte_array[0] = 1;\
bit_vector_equal(0, &(readBlockCount), &(konst_3919), &(EQ_u16_u1_3920));\
bit_vector_cast_to_bit_vector(0, &(readBlockCountTrue), &(EQ_u16_u1_3920));\
;

#define _sdhc_daemon_assign_stmt_3926_c_macro_ __declare_static_bit_vector(AND_u1_u1_3925,1);\
bit_vector_and(&(readBlockCountEnable), &(readBlockCountTrue), &(AND_u1_u1_3925));\
bit_vector_cast_to_bit_vector(0, &(readLastBlock), &(AND_u1_u1_3925));\
;

#define _sdhc_daemon_assign_stmt_3935_c_macro_ __declare_static_bit_vector(konst_3933,16);\
bit_vector_clear(&konst_3933);\
konst_3933.val.byte_array[0] = 1;\
__declare_static_bit_vector(SUB_u16_u16_3934,16);\
bit_vector_clear(&konst_3933);\
konst_3933.val.byte_array[0] = 1;\
bit_vector_minus( &(readBlockCount), &(konst_3933), &(SUB_u16_u16_3934));\
bit_vector_cast_to_bit_vector(0, &(newReadBlockCount), &(SUB_u16_u16_3934));\
;

#define _sdhc_daemon_call_stmt_3938_c_macro_ _dataRx_( &(readLastBlock), &(dataErrorInterruptStatusVar));\
;

#define _sdhc_daemon_assign_stmt_3941_c_macro_ bit_vector_cast_to_bit_vector(0, &(dataRxEnrty1), &(ZERO_1));\
;

#define _sdhc_daemon_assign_stmt_3944_c_macro_ bit_vector_cast_to_bit_vector(0, &(dataRxEnrty2), &(ONE_1));\
;

#define _sdhc_daemon_call_stmt_3948_c_macro_ __declare_static_bit_vector(konst_3945,8);\
bit_vector_clear(&konst_3945);\
konst_3945.val.byte_array[0] = 7;\
__declare_static_bit_vector(slice_3947,8);\
bit_vector_clear(&konst_3945);\
konst_3945.val.byte_array[0] = 7;\
bit_vector_slice(&(newReadBlockCount), &(slice_3947), 8);\
_writeSDHCRegisters_( &(konst_3945),  &(slice_3947));\
;

#define _sdhc_daemon_call_stmt_3952_c_macro_ __declare_static_bit_vector(konst_3949,8);\
bit_vector_clear(&konst_3949);\
konst_3949.val.byte_array[0] = 6;\
__declare_static_bit_vector(slice_3951,8);\
bit_vector_clear(&konst_3949);\
konst_3949.val.byte_array[0] = 6;\
bit_vector_slice(&(newReadBlockCount), &(slice_3951), 0);\
_writeSDHCRegisters_( &(konst_3949),  &(slice_3951));\
;

#define _sdhc_daemon_assign_stmt_3959_c_macro_ __declare_static_bit_vector(konst_3955,8);\
bit_vector_clear(&konst_3955);\
konst_3955.val.byte_array[0] = 2;\
__declare_static_bit_vector(type_cast_3956,8);\
bit_vector_clear(&type_cast_3956);\
type_cast_3956.val.byte_array[0] = 2;\
__declare_static_bit_vector(MUX_3958,8);\
if (has_undefined_bit(&readLastBlock)) {fprintf(stderr, "Error: variable readLastBlock has undefined value (%s) at test point.\n", to_string(&readLastBlock));assert(0);} \
if(bit_vector_to_uint64(0, &readLastBlock)){bit_vector_clear(&konst_3955);\
konst_3955.val.byte_array[0] = 2;\
bit_vector_bitcast_to_bit_vector( &(type_cast_3956), &(konst_3955));\
bit_vector_cast_to_bit_vector(0, &(MUX_3958), &(type_cast_3956));\
}else {bit_vector_cast_to_bit_vector(0, &(MUX_3958), &(ZERO_8));\
}bit_vector_cast_to_bit_vector(0, &(readDataTransferComplete), &(MUX_3958));\
;

#define _sdhc_daemon_assign_stmt_3964_c_macro_ __declare_static_bit_vector(konst_3962,8);\
bit_vector_clear(&konst_3962);\
konst_3962.val.byte_array[0] = 2;\
__declare_static_bit_vector(OR_u8_u8_3963,8);\
bit_vector_clear(&konst_3962);\
konst_3962.val.byte_array[0] = 2;\
bit_vector_or(&(normalInterruptFlag1), &(konst_3962), &(OR_u8_u8_3963));\
bit_vector_cast_to_bit_vector(0, &(normalInterruptFlag1), &(OR_u8_u8_3963));\
;

#define _sdhc_daemon_assign_stmt_3969_c_macro_ __declare_static_bit_vector(konst_3967,8);\
bit_vector_clear(&konst_3967);\
konst_3967.val.byte_array[0] = 96;\
__declare_static_bit_vector(OR_u8_u8_3968,8);\
bit_vector_clear(&konst_3967);\
konst_3967.val.byte_array[0] = 96;\
bit_vector_or(&(errorInterruptFlag1), &(konst_3967), &(OR_u8_u8_3968));\
bit_vector_cast_to_bit_vector(0, &(errorInterruptFlag1), &(OR_u8_u8_3968));\
;

#define _sdhc_daemon_call_stmt_3978_c_macro_ __declare_static_bit_vector(konst_3975,8);\
bit_vector_clear(&konst_3975);\
__declare_static_bit_vector(ADD_u8_u8_3976,8);\
bit_vector_clear(&konst_3975);\
bit_vector_plus( &(address), &(konst_3975), &(ADD_u8_u8_3976));\
_readSDHCRegisters_( &(ADD_u8_u8_3976), &(readTemp3));\
;

#define _sdhc_daemon_call_stmt_3983_c_macro_ __declare_static_bit_vector(konst_3980,8);\
bit_vector_clear(&konst_3980);\
konst_3980.val.byte_array[0] = 1;\
__declare_static_bit_vector(ADD_u8_u8_3981,8);\
bit_vector_clear(&konst_3980);\
konst_3980.val.byte_array[0] = 1;\
bit_vector_plus( &(address), &(konst_3980), &(ADD_u8_u8_3981));\
_readSDHCRegisters_( &(ADD_u8_u8_3981), &(readTemp2));\
;

#define _sdhc_daemon_call_stmt_3988_c_macro_ __declare_static_bit_vector(konst_3985,8);\
bit_vector_clear(&konst_3985);\
konst_3985.val.byte_array[0] = 2;\
__declare_static_bit_vector(ADD_u8_u8_3986,8);\
bit_vector_clear(&konst_3985);\
konst_3985.val.byte_array[0] = 2;\
bit_vector_plus( &(address), &(konst_3985), &(ADD_u8_u8_3986));\
_readSDHCRegisters_( &(ADD_u8_u8_3986), &(readTemp1));\
;

#define _sdhc_daemon_call_stmt_3993_c_macro_ __declare_static_bit_vector(konst_3990,8);\
bit_vector_clear(&konst_3990);\
konst_3990.val.byte_array[0] = 3;\
__declare_static_bit_vector(ADD_u8_u8_3991,8);\
bit_vector_clear(&konst_3990);\
konst_3990.val.byte_array[0] = 3;\
bit_vector_plus( &(address), &(konst_3990), &(ADD_u8_u8_3991));\
_readSDHCRegisters_( &(ADD_u8_u8_3991), &(readTemp0));\
;

#define _sdhc_daemon_assign_stmt_3999_c_macro_ __declare_static_bit_vector(MUX_3998,8);\
if (has_undefined_bit(&b3)) {fprintf(stderr, "Error: variable b3 has undefined value (%s) at test point.\n", to_string(&b3));assert(0);} \
if(bit_vector_to_uint64(0, &b3)){bit_vector_cast_to_bit_vector(0, &(MUX_3998), &(readTemp3));\
}else {bit_vector_cast_to_bit_vector(0, &(MUX_3998), &(ZERO_8));\
}bit_vector_cast_to_bit_vector(0, &(readdata3), &(MUX_3998));\
;

#define _sdhc_daemon_assign_stmt_4005_c_macro_ __declare_static_bit_vector(MUX_4004,8);\
if (has_undefined_bit(&b2)) {fprintf(stderr, "Error: variable b2 has undefined value (%s) at test point.\n", to_string(&b2));assert(0);} \
if(bit_vector_to_uint64(0, &b2)){bit_vector_cast_to_bit_vector(0, &(MUX_4004), &(readTemp2));\
}else {bit_vector_cast_to_bit_vector(0, &(MUX_4004), &(ZERO_8));\
}bit_vector_cast_to_bit_vector(0, &(readdata2), &(MUX_4004));\
;

#define _sdhc_daemon_assign_stmt_4011_c_macro_ __declare_static_bit_vector(MUX_4010,8);\
if (has_undefined_bit(&b1)) {fprintf(stderr, "Error: variable b1 has undefined value (%s) at test point.\n", to_string(&b1));assert(0);} \
if(bit_vector_to_uint64(0, &b1)){bit_vector_cast_to_bit_vector(0, &(MUX_4010), &(readTemp1));\
}else {bit_vector_cast_to_bit_vector(0, &(MUX_4010), &(ZERO_8));\
}bit_vector_cast_to_bit_vector(0, &(readdata1), &(MUX_4010));\
;

#define _sdhc_daemon_assign_stmt_4017_c_macro_ __declare_static_bit_vector(MUX_4016,8);\
if (has_undefined_bit(&b0)) {fprintf(stderr, "Error: variable b0 has undefined value (%s) at test point.\n", to_string(&b0));assert(0);} \
if(bit_vector_to_uint64(0, &b0)){bit_vector_cast_to_bit_vector(0, &(MUX_4016), &(readTemp0));\
}else {bit_vector_cast_to_bit_vector(0, &(MUX_4016), &(ZERO_8));\
}bit_vector_cast_to_bit_vector(0, &(readdata0), &(MUX_4016));\
;

#define _sdhc_daemon_assign_stmt_4026_c_macro_ __declare_static_bit_vector(CONCAT_u8_u16_4021,16);\
__declare_static_bit_vector(CONCAT_u8_u16_4024,16);\
__declare_static_bit_vector(CONCAT_u16_u32_4025,32);\
bit_vector_concatenate( &(readdata3), &(readdata2), &(CONCAT_u8_u16_4021));\
bit_vector_concatenate( &(readdata1), &(readdata0), &(CONCAT_u8_u16_4024));\
bit_vector_concatenate( &(CONCAT_u8_u16_4021), &(CONCAT_u8_u16_4024), &(CONCAT_u16_u32_4025));\
write_bit_vector_to_pipe("sdhc_to_peripheral_bridge_response",&(CONCAT_u16_u32_4025));\
;

#define _sdhc_daemon_assign_stmt_4047_c_macro_ __declare_static_bit_vector(konst_4031,8);\
bit_vector_clear(&konst_4031);\
__declare_static_bit_vector(MUX_4032,8);\
__declare_static_bit_vector(konst_4035,8);\
bit_vector_clear(&konst_4035);\
__declare_static_bit_vector(MUX_4036,8);\
__declare_static_bit_vector(OR_u8_u8_4037,8);\
__declare_static_bit_vector(NOT_u1_u1_4039,1);\
__declare_static_bit_vector(NOT_u1_u1_4041,1);\
__declare_static_bit_vector(AND_u1_u1_4042,1);\
__declare_static_bit_vector(konst_4044,8);\
bit_vector_clear(&konst_4044);\
__declare_static_bit_vector(MUX_4045,8);\
__declare_static_bit_vector(OR_u8_u8_4046,8);\
if (has_undefined_bit(&dataRxEnrty1)) {fprintf(stderr, "Error: variable dataRxEnrty1 has undefined value (%s) at test point.\n", to_string(&dataRxEnrty1));assert(0);} \
if(bit_vector_to_uint64(0, &dataRxEnrty1)){bit_vector_cast_to_bit_vector(0, &(MUX_4032), &(dataErrorInterruptStatusVar1));\
}else {bit_vector_clear(&konst_4031);\
bit_vector_cast_to_bit_vector(0, &(MUX_4032), &(konst_4031));\
}if (has_undefined_bit(&dataRxEnrty2)) {fprintf(stderr, "Error: variable dataRxEnrty2 has undefined value (%s) at test point.\n", to_string(&dataRxEnrty2));assert(0);} \
if(bit_vector_to_uint64(0, &dataRxEnrty2)){bit_vector_cast_to_bit_vector(0, &(MUX_4036), &(dataErrorInterruptStatusVar));\
}else {bit_vector_clear(&konst_4035);\
bit_vector_cast_to_bit_vector(0, &(MUX_4036), &(konst_4035));\
}bit_vector_or(&(MUX_4032), &(MUX_4036), &(OR_u8_u8_4037));\
bit_vector_not( &(dataRxEnrty1), &(NOT_u1_u1_4039));\
bit_vector_not( &(dataRxEnrty2), &(NOT_u1_u1_4041));\
bit_vector_and(&(NOT_u1_u1_4039), &(NOT_u1_u1_4041), &(AND_u1_u1_4042));\
if (has_undefined_bit(&AND_u1_u1_4042)) {fprintf(stderr, "Error: variable AND_u1_u1_4042 has undefined value (%s) at test point.\n", to_string(&AND_u1_u1_4042));assert(0);} \
if(bit_vector_to_uint64(0, &AND_u1_u1_4042)){bit_vector_cast_to_bit_vector(0, &(MUX_4045), &(ZERO_8));\
}else {bit_vector_clear(&konst_4044);\
bit_vector_cast_to_bit_vector(0, &(MUX_4045), &(konst_4044));\
}bit_vector_or(&(OR_u8_u8_4037), &(MUX_4045), &(OR_u8_u8_4046));\
bit_vector_cast_to_bit_vector(0, &(dataErrorInterruptStatus), &(OR_u8_u8_4046));\
;

#define _sdhc_daemon_assign_stmt_4061_c_macro_ __declare_static_bit_vector(konst_4050,32);\
bit_vector_clear(&konst_4050);\
konst_4050.val.byte_array[0] = 50;\
__declare_static_bit_vector(OR_u8_u8_4054,8);\
__declare_static_bit_vector(OR_u8_u8_4055,8);\
__declare_static_bit_vector(AND_u8_u8_4057,8);\
__declare_static_bit_vector(konst_4058,32);\
bit_vector_clear(&konst_4058);\
konst_4058.val.byte_array[0] = 54;\
__declare_static_bit_vector(AND_u8_u8_4060,8);\
bit_vector_clear(&konst_4050);\
konst_4050.val.byte_array[0] = 50;\
bit_vector_or(&(dataErrorInterruptStatus), &(errorInterruptStatusVar1), &(OR_u8_u8_4054));\
bit_vector_or(&((sdhcRegisters[bit_vector_to_uint64(0, &konst_4050)])), &(OR_u8_u8_4054), &(OR_u8_u8_4055));\
bit_vector_and(&(OR_u8_u8_4055), &(errorInterruptFlag1), &(AND_u8_u8_4057));\
bit_vector_clear(&konst_4058);\
konst_4058.val.byte_array[0] = 54;\
bit_vector_and(&(AND_u8_u8_4057), &((sdhcRegisters[bit_vector_to_uint64(0, &konst_4058)])), &(AND_u8_u8_4060));\
__declare_static_bit_vector(konst_4048,32);\
bit_vector_clear(&konst_4048);\
konst_4048.val.byte_array[0] = 50;\
bit_vector_clear(&konst_4048);\
konst_4048.val.byte_array[0] = 50;\
bit_vector_cast_to_bit_vector(0, &((sdhcRegisters[bit_vector_to_uint64(0, &konst_4048)])), &(AND_u8_u8_4060));\
;

#define _sdhc_daemon_merge_stmt_4062_c_preamble_macro_ uint8_t merge_stmt_4062_entry_flag;\
merge_stmt_4062_entry_flag = 1;\
uint8_t loopError_3433_flag = 0;\
goto merge_stmt_4062_run;\
loopError_3433: loopError_3433_flag = 1;\
goto merge_stmt_4062_run;\
merge_stmt_4062_run: ;\

#define _sdhc_daemon_phi_stmt_4063_c_macro_ if(loopError_3433_flag) {\
bit_vector_cast_to_bit_vector(0, &(S), &(next_S));\
}\
else {\
bit_vector_cast_to_bit_vector(0, &(S), &(ONE_8));\
}\
;

#define _sdhc_daemon_phi_stmt_4067_c_macro_ __declare_static_bit_vector(konst_4069,16);\
bit_vector_clear(&konst_4069);\
__declare_static_bit_vector(type_cast_4070,16);\
bit_vector_clear(&type_cast_4070);\
if(loopError_3433_flag) {\
bit_vector_cast_to_bit_vector(0, &(readErrorInterruptReg), &(errorInterruptReg));\
}\
else {\
__declare_static_bit_vector(konst_4069,16);\
bit_vector_clear(&konst_4069);\
__declare_static_bit_vector(type_cast_4070,16);\
bit_vector_clear(&type_cast_4070);\
bit_vector_clear(&konst_4069);\
bit_vector_bitcast_to_bit_vector( &(type_cast_4070), &(konst_4069));\
bit_vector_cast_to_bit_vector(0, &(readErrorInterruptReg), &(type_cast_4070));\
}\
;

#define _sdhc_daemon_phi_stmt_4072_c_macro_ __declare_static_bit_vector(konst_4074,16);\
bit_vector_clear(&konst_4074);\
__declare_static_bit_vector(type_cast_4075,16);\
bit_vector_clear(&type_cast_4075);\
if(loopError_3433_flag) {\
bit_vector_cast_to_bit_vector(0, &(readErrorInterruptEnableReg), &(errorInterruptEnableReg));\
}\
else {\
__declare_static_bit_vector(konst_4074,16);\
bit_vector_clear(&konst_4074);\
__declare_static_bit_vector(type_cast_4075,16);\
bit_vector_clear(&type_cast_4075);\
bit_vector_clear(&konst_4074);\
bit_vector_bitcast_to_bit_vector( &(type_cast_4075), &(konst_4074));\
bit_vector_cast_to_bit_vector(0, &(readErrorInterruptEnableReg), &(type_cast_4075));\
}\
;

#define _sdhc_daemon_phi_stmt_4077_c_macro_ __declare_static_bit_vector(konst_4079,16);\
bit_vector_clear(&konst_4079);\
__declare_static_bit_vector(type_cast_4080,16);\
bit_vector_clear(&type_cast_4080);\
if(loopError_3433_flag) {\
bit_vector_cast_to_bit_vector(0, &(readErrorInterruptSignalEnableReg), &(errorInterruptSignalEnableReg));\
}\
else {\
__declare_static_bit_vector(konst_4079,16);\
bit_vector_clear(&konst_4079);\
__declare_static_bit_vector(type_cast_4080,16);\
bit_vector_clear(&type_cast_4080);\
bit_vector_clear(&konst_4079);\
bit_vector_bitcast_to_bit_vector( &(type_cast_4080), &(konst_4079));\
bit_vector_cast_to_bit_vector(0, &(readErrorInterruptSignalEnableReg), &(type_cast_4080));\
}\
;

#define _sdhc_daemon_phi_stmt_4082_c_macro_ __declare_static_bit_vector(konst_4084,16);\
bit_vector_clear(&konst_4084);\
__declare_static_bit_vector(type_cast_4085,16);\
bit_vector_clear(&type_cast_4085);\
if(loopError_3433_flag) {\
bit_vector_cast_to_bit_vector(0, &(readNormalInterruptEnableReg), &(normalInterruptEnableReg));\
}\
else {\
__declare_static_bit_vector(konst_4084,16);\
bit_vector_clear(&konst_4084);\
__declare_static_bit_vector(type_cast_4085,16);\
bit_vector_clear(&type_cast_4085);\
bit_vector_clear(&konst_4084);\
bit_vector_bitcast_to_bit_vector( &(type_cast_4085), &(konst_4084));\
bit_vector_cast_to_bit_vector(0, &(readNormalInterruptEnableReg), &(type_cast_4085));\
}\
;
;

#define _sdhc_daemon_merge_stmt_4062_c_postamble_macro_ loopError_3433_flag = 0;\
merge_stmt_4062_entry_flag = 0;

#define _sdhc_daemon_call_stmt_4092_c_macro_ __declare_static_bit_vector(konst_4088,8);\
bit_vector_clear(&konst_4088);\
konst_4088.val.byte_array[0] = 50;\
__declare_static_bit_vector(ADD_u8_u8_4090,8);\
bit_vector_clear(&konst_4088);\
konst_4088.val.byte_array[0] = 50;\
bit_vector_plus( &(konst_4088), &(S), &(ADD_u8_u8_4090));\
_readSDHCRegisters_( &(ADD_u8_u8_4090), &(errorInterruptRegTemp));\
;

#define _sdhc_daemon_assign_stmt_4098_c_macro_ __declare_static_bit_vector(slice_4095,8);\
__declare_static_bit_vector(CONCAT_u8_u16_4097,16);\
bit_vector_slice(&(readErrorInterruptReg), &(slice_4095), 0);\
bit_vector_concatenate( &(slice_4095), &(errorInterruptRegTemp), &(CONCAT_u8_u16_4097));\
bit_vector_cast_to_bit_vector(0, &(errorInterruptReg), &(CONCAT_u8_u16_4097));\
;

#define _sdhc_daemon_call_stmt_4103_c_macro_ __declare_static_bit_vector(konst_4099,8);\
bit_vector_clear(&konst_4099);\
konst_4099.val.byte_array[0] = 54;\
__declare_static_bit_vector(ADD_u8_u8_4101,8);\
bit_vector_clear(&konst_4099);\
konst_4099.val.byte_array[0] = 54;\
bit_vector_plus( &(konst_4099), &(S), &(ADD_u8_u8_4101));\
_readSDHCRegisters_( &(ADD_u8_u8_4101), &(errorInterruptEnableRegTemp));\
;

#define _sdhc_daemon_assign_stmt_4109_c_macro_ __declare_static_bit_vector(slice_4106,8);\
__declare_static_bit_vector(CONCAT_u8_u16_4108,16);\
bit_vector_slice(&(readErrorInterruptEnableReg), &(slice_4106), 0);\
bit_vector_concatenate( &(slice_4106), &(errorInterruptEnableRegTemp), &(CONCAT_u8_u16_4108));\
bit_vector_cast_to_bit_vector(0, &(errorInterruptEnableReg), &(CONCAT_u8_u16_4108));\
;

#define _sdhc_daemon_call_stmt_4114_c_macro_ __declare_static_bit_vector(konst_4110,8);\
bit_vector_clear(&konst_4110);\
konst_4110.val.byte_array[0] = 58;\
__declare_static_bit_vector(ADD_u8_u8_4112,8);\
bit_vector_clear(&konst_4110);\
konst_4110.val.byte_array[0] = 58;\
bit_vector_plus( &(konst_4110), &(S), &(ADD_u8_u8_4112));\
_readSDHCRegisters_( &(ADD_u8_u8_4112), &(errorInterruptSignalEnableRegTemp));\
;

#define _sdhc_daemon_assign_stmt_4120_c_macro_ __declare_static_bit_vector(slice_4117,8);\
__declare_static_bit_vector(CONCAT_u8_u16_4119,16);\
bit_vector_slice(&(readErrorInterruptSignalEnableReg), &(slice_4117), 0);\
bit_vector_concatenate( &(slice_4117), &(errorInterruptSignalEnableRegTemp), &(CONCAT_u8_u16_4119));\
bit_vector_cast_to_bit_vector(0, &(errorInterruptSignalEnableReg), &(CONCAT_u8_u16_4119));\
;

#define _sdhc_daemon_call_stmt_4125_c_macro_ __declare_static_bit_vector(konst_4121,8);\
bit_vector_clear(&konst_4121);\
konst_4121.val.byte_array[0] = 52;\
__declare_static_bit_vector(ADD_u8_u8_4123,8);\
bit_vector_clear(&konst_4121);\
konst_4121.val.byte_array[0] = 52;\
bit_vector_plus( &(konst_4121), &(S), &(ADD_u8_u8_4123));\
_readSDHCRegisters_( &(ADD_u8_u8_4123), &(normalInterruptEnableRegTemp));\
;

#define _sdhc_daemon_assign_stmt_4131_c_macro_ __declare_static_bit_vector(slice_4128,8);\
__declare_static_bit_vector(CONCAT_u8_u16_4130,16);\
bit_vector_slice(&(readNormalInterruptEnableReg), &(slice_4128), 0);\
bit_vector_concatenate( &(slice_4128), &(normalInterruptEnableRegTemp), &(CONCAT_u8_u16_4130));\
bit_vector_cast_to_bit_vector(0, &(normalInterruptEnableReg), &(CONCAT_u8_u16_4130));\
;

#define _sdhc_daemon_call_stmt_4136_c_macro_ __declare_static_bit_vector(konst_4132,8);\
bit_vector_clear(&konst_4132);\
konst_4132.val.byte_array[0] = 44;\
__declare_static_bit_vector(ADD_u8_u8_4134,8);\
bit_vector_clear(&konst_4132);\
konst_4132.val.byte_array[0] = 44;\
bit_vector_plus( &(konst_4132), &(S), &(ADD_u8_u8_4134));\
_readSDHCRegisters_( &(ADD_u8_u8_4134), &(clockControlRegTemp));\
;

#define _sdhc_daemon_assign_stmt_4141_c_macro_ __declare_static_bit_vector(konst_4139,8);\
bit_vector_clear(&konst_4139);\
konst_4139.val.byte_array[0] = 1;\
__declare_static_bit_vector(SUB_u8_u8_4140,8);\
bit_vector_clear(&konst_4139);\
konst_4139.val.byte_array[0] = 1;\
bit_vector_minus( &(S), &(konst_4139), &(SUB_u8_u8_4140));\
bit_vector_cast_to_bit_vector(0, &(next_S), &(SUB_u8_u8_4140));\
;

#define _sdhc_daemon_assign_stmt_4151_c_macro_ __declare_static_bit_vector(slice_4150,8);\
bit_vector_slice(&(errorInterruptReg), &(slice_4150), 0);\
bit_vector_cast_to_bit_vector(0, &(errorInterruptRegVal0), &(slice_4150));\
;

#define _sdhc_daemon_assign_stmt_4155_c_macro_ __declare_static_bit_vector(slice_4154,8);\
bit_vector_slice(&(errorInterruptReg), &(slice_4154), 8);\
bit_vector_cast_to_bit_vector(0, &(errorInterruptRegVal1), &(slice_4154));\
;

#define _sdhc_daemon_assign_stmt_4159_c_macro_ __declare_static_bit_vector(slice_4158,8);\
bit_vector_slice(&(errorInterruptEnableReg), &(slice_4158), 0);\
bit_vector_cast_to_bit_vector(0, &(errorInterruptEnableVal0), &(slice_4158));\
;

#define _sdhc_daemon_assign_stmt_4163_c_macro_ __declare_static_bit_vector(slice_4162,8);\
bit_vector_slice(&(errorInterruptEnableReg), &(slice_4162), 8);\
bit_vector_cast_to_bit_vector(0, &(errorInterruptEnableVal1), &(slice_4162));\
;

#define _sdhc_daemon_assign_stmt_4167_c_macro_ __declare_static_bit_vector(slice_4166,8);\
bit_vector_slice(&(errorInterruptSignalEnableReg), &(slice_4166), 0);\
bit_vector_cast_to_bit_vector(0, &(errorInterruptSignalEnableVal0), &(slice_4166));\
;

#define _sdhc_daemon_assign_stmt_4171_c_macro_ __declare_static_bit_vector(slice_4170,8);\
bit_vector_slice(&(errorInterruptSignalEnableReg), &(slice_4170), 8);\
bit_vector_cast_to_bit_vector(0, &(errorInterruptSignalEnableVal1), &(slice_4170));\
;

#define _sdhc_daemon_assign_stmt_4175_c_macro_ __declare_static_bit_vector(slice_4174,8);\
bit_vector_slice(&(normalInterruptEnableReg), &(slice_4174), 0);\
bit_vector_cast_to_bit_vector(0, &(normalInterruptEnableVal0), &(slice_4174));\
;

#define _sdhc_daemon_assign_stmt_4179_c_macro_ __declare_static_bit_vector(slice_4178,8);\
bit_vector_slice(&(normalInterruptEnableReg), &(slice_4178), 8);\
bit_vector_cast_to_bit_vector(0, &(normalInterruptEnableVal1), &(slice_4178));\
;

#define _sdhc_daemon_assign_stmt_4190_c_macro_ __declare_static_bit_vector(OR_u8_u8_4184,8);\
__declare_static_bit_vector(OR_u8_u8_4185,8);\
__declare_static_bit_vector(AND_u8_u8_4187,8);\
__declare_static_bit_vector(AND_u8_u8_4189,8);\
bit_vector_or(&(dataErrorInterruptStatus), &(errorInterruptStatusVar1), &(OR_u8_u8_4184));\
bit_vector_or(&(errorInterruptRegVal0), &(OR_u8_u8_4184), &(OR_u8_u8_4185));\
bit_vector_and(&(OR_u8_u8_4185), &(errorInterruptFlag1), &(AND_u8_u8_4187));\
bit_vector_and(&(AND_u8_u8_4187), &(errorInterruptEnableVal0), &(AND_u8_u8_4189));\
bit_vector_cast_to_bit_vector(0, &(tempErrorReg0), &(AND_u8_u8_4189));\
;

#define _sdhc_daemon_assign_stmt_4199_c_macro_ __declare_static_bit_vector(OR_u8_u8_4194,8);\
__declare_static_bit_vector(AND_u8_u8_4196,8);\
__declare_static_bit_vector(AND_u8_u8_4198,8);\
bit_vector_or(&(errorInterruptRegVal1), &(errorInterruptStatusVar2), &(OR_u8_u8_4194));\
bit_vector_and(&(OR_u8_u8_4194), &(errorInterruptFlag2), &(AND_u8_u8_4196));\
bit_vector_and(&(AND_u8_u8_4196), &(errorInterruptEnableVal1), &(AND_u8_u8_4198));\
bit_vector_cast_to_bit_vector(0, &(tempErrorReg1), &(AND_u8_u8_4198));\
;

#define _sdhc_daemon_call_stmt_4202_c_macro_ __declare_static_bit_vector(konst_4200,8);\
bit_vector_clear(&konst_4200);\
konst_4200.val.byte_array[0] = 51;\
bit_vector_clear(&konst_4200);\
konst_4200.val.byte_array[0] = 51;\
_writeSDHCRegisters_( &(konst_4200),  &(tempErrorReg1));\
;

#define _sdhc_daemon_assign_stmt_4212_c_macro_ __declare_static_bit_vector(BITREDUCEOR_u8_u1_4205,1);\
__declare_static_bit_vector(BITREDUCEOR_u8_u1_4207,1);\
__declare_static_bit_vector(OR_u1_u1_4208,1);\
__declare_static_bit_vector(konst_4209,7);\
bit_vector_clear(&konst_4209);\
__declare_static_bit_vector(type_cast_4210,7);\
bit_vector_clear(&type_cast_4210);\
__declare_static_bit_vector(CONCAT_u1_u8_4211,8);\
bit_vector_reduce_or( &(tempErrorReg0), &(BITREDUCEOR_u8_u1_4205));\
bit_vector_reduce_or( &(tempErrorReg1), &(BITREDUCEOR_u8_u1_4207));\
bit_vector_or(&(BITREDUCEOR_u8_u1_4205), &(BITREDUCEOR_u8_u1_4207), &(OR_u1_u1_4208));\
bit_vector_clear(&konst_4209);\
bit_vector_bitcast_to_bit_vector( &(type_cast_4210), &(konst_4209));\
bit_vector_concatenate( &(OR_u1_u1_4208), &(type_cast_4210), &(CONCAT_u1_u8_4211));\
bit_vector_cast_to_bit_vector(0, &(errorInterruptBit), &(CONCAT_u1_u8_4211));\
;

#define _sdhc_daemon_assign_stmt_4219_c_macro_ __declare_static_bit_vector(BITREDUCEOR_u8_u1_4215,1);\
__declare_static_bit_vector(BITREDUCEOR_u8_u1_4217,1);\
__declare_static_bit_vector(OR_u1_u1_4218,1);\
bit_vector_reduce_or( &(normalInterruptEnableVal0), &(BITREDUCEOR_u8_u1_4215));\
bit_vector_reduce_or( &(normalInterruptEnableVal1), &(BITREDUCEOR_u8_u1_4217));\
bit_vector_or(&(BITREDUCEOR_u8_u1_4215), &(BITREDUCEOR_u8_u1_4217), &(OR_u1_u1_4218));\
bit_vector_cast_to_bit_vector(0, &(checkInterruptEnable), &(OR_u1_u1_4218));\
;

#define _sdhc_daemon_assign_stmt_4240_c_macro_ __declare_static_bit_vector(OR_u8_u8_4227,8);\
__declare_static_bit_vector(OR_u8_u8_4229,8);\
__declare_static_bit_vector(OR_u8_u8_4232,8);\
bit_vector_clear(&OR_u8_u8_4232);\
OR_u8_u8_4232.val.byte_array[0] = 48;\
__declare_static_bit_vector(OR_u8_u8_4234,8);\
__declare_static_bit_vector(OR_u8_u8_4235,8);\
__declare_static_bit_vector(AND_u8_u8_4237,8);\
__declare_static_bit_vector(AND_u8_u8_4239,8);\
bit_vector_or(&(readDataTransferComplete), &(dataTransferComplete), &(OR_u8_u8_4227));\
bit_vector_or(&(OR_u8_u8_4227), &(transferComplete), &(OR_u8_u8_4229));\
bit_vector_or(&(bufferReadReady), &(bufferWriteReady), &(OR_u8_u8_4232));\
bit_vector_or(&(OR_u8_u8_4232), &(normalInterruptStatusVar1), &(OR_u8_u8_4234));\
bit_vector_or(&(OR_u8_u8_4229), &(OR_u8_u8_4234), &(OR_u8_u8_4235));\
bit_vector_and(&(OR_u8_u8_4235), &(normalInterruptEnableVal0), &(AND_u8_u8_4237));\
bit_vector_and(&(AND_u8_u8_4237), &(normalInterruptFlag1), &(AND_u8_u8_4239));\
bit_vector_cast_to_bit_vector(0, &(interrupt), &(AND_u8_u8_4239));\
;

#define _sdhc_daemon_call_stmt_4243_c_macro_ __declare_static_bit_vector(konst_4241,8);\
bit_vector_clear(&konst_4241);\
konst_4241.val.byte_array[0] = 48;\
bit_vector_clear(&konst_4241);\
konst_4241.val.byte_array[0] = 48;\
_writeSDHCRegisters_( &(konst_4241),  &(interrupt));\
;

#define _sdhc_daemon_call_stmt_4246_c_macro_ __declare_static_bit_vector(konst_4244,8);\
bit_vector_clear(&konst_4244);\
konst_4244.val.byte_array[0] = 49;\
bit_vector_clear(&konst_4244);\
konst_4244.val.byte_array[0] = 49;\
_writeSDHCRegisters_( &(konst_4244),  &(errorInterruptBit));\
;

#define _sdhc_daemon_call_stmt_4249_c_macro_ __declare_static_bit_vector(konst_4247,8);\
bit_vector_clear(&konst_4247);\
konst_4247.val.byte_array[0] = 56;\
bit_vector_clear(&konst_4247);\
konst_4247.val.byte_array[0] = 56;\
_readSDHCRegisters_( &(konst_4247), &(tempNormalSignal));\
;

#define _sdhc_daemon_assign_stmt_4254_c_macro_ __declare_static_bit_vector(AND_u8_u8_4253,8);\
bit_vector_and(&(tempNormalSignal), &(interrupt), &(AND_u8_u8_4253));\
bit_vector_cast_to_bit_vector(0, &(interruptLine), &(AND_u8_u8_4253));\
;

#define _sdhc_daemon_assign_stmt_4263_c_macro_ __declare_static_bit_vector(AND_u8_u8_4258,8);\
__declare_static_bit_vector(AND_u8_u8_4261,8);\
__declare_static_bit_vector(OR_u8_u8_4262,8);\
bit_vector_and(&(tempErrorReg0), &(errorInterruptSignalEnableVal0), &(AND_u8_u8_4258));\
bit_vector_and(&(tempErrorReg1), &(errorInterruptSignalEnableVal1), &(AND_u8_u8_4261));\
bit_vector_or(&(AND_u8_u8_4258), &(AND_u8_u8_4261), &(OR_u8_u8_4262));\
bit_vector_cast_to_bit_vector(0, &(errorInterruptLine), &(OR_u8_u8_4262));\
;

#define _sdhc_daemon_assign_stmt_4270_c_macro_ __declare_static_bit_vector(BITREDUCEOR_u8_u1_4266,1);\
__declare_static_bit_vector(BITREDUCEOR_u8_u1_4268,1);\
__declare_static_bit_vector(OR_u1_u1_4269,1);\
bit_vector_reduce_or( &(interruptLine), &(BITREDUCEOR_u8_u1_4266));\
bit_vector_reduce_or( &(errorInterruptLine), &(BITREDUCEOR_u8_u1_4268));\
bit_vector_or(&(BITREDUCEOR_u8_u1_4266), &(BITREDUCEOR_u8_u1_4268), &(OR_u1_u1_4269));\
write_bit_vector_to_pipe("SDHC_to_IRC_INT",&(OR_u1_u1_4269));\
;

#define _sdhc_daemon_call_stmt_4274_c_macro_ __declare_static_bit_vector(konst_4272,8);\
bit_vector_clear(&konst_4272);\
konst_4272.val.byte_array[0] = 48;\
bit_vector_clear(&konst_4272);\
konst_4272.val.byte_array[0] = 48;\
_writeSDHCRegisters_( &(konst_4272),  &(ZERO_8));\
;

#define _sdhc_daemon_assign_stmt_4277_c_macro_ write_bit_vector_to_pipe("SDHC_to_IRC_INT",&(ZERO_1));\
;

#define _sdhc_daemon_stmt_4282_c_macro_ uint32_t _sdhc_daemon_stmt_4282_c_macro___print_counter= get_file_print_lock(__report_log_file__);if(__report_log_file__ != NULL) fprintf(__report_log_file__,"[%u]int>\t%s\n",_sdhc_daemon_stmt_4282_c_macro___print_counter,"check");if(__report_log_file__ != NULL) {fprintf(__report_log_file__,"[%u]int>\t\t%s\t\t",_sdhc_daemon_stmt_4282_c_macro___print_counter,"dataErrorInterruptStatus");fprintf(__report_log_file__, ":= 0x%s\n",to_hex_string(&(dataErrorInterruptStatus)));fflush (__report_log_file__);}if(__report_log_file__ != NULL) {fprintf(__report_log_file__,"[%u]int>\t\t%s\t\t",_sdhc_daemon_stmt_4282_c_macro___print_counter,"errorInterruptStatusVar1");fprintf(__report_log_file__, ":= 0x%s\n",to_hex_string(&(errorInterruptStatusVar1)));fflush (__report_log_file__);}if(__report_log_file__ != NULL) {fprintf(__report_log_file__,"[%u]int>\t\t%s\t\t",_sdhc_daemon_stmt_4282_c_macro___print_counter,"errorInterruptFlag1");fprintf(__report_log_file__, ":= 0x%s\n",to_hex_string(&(errorInterruptFlag1)));fflush (__report_log_file__);}release_file_print_lock(__report_log_file__);;
;

#define _sdhc_daemon_branch_block_stmt_3433_c_export_apply_macro_ ;

#define _sdhc_daemon_inner_outarg_prep_macro__ ;

#define _sdhc_daemon_outer_arg_decl_macro__ ;

#define _sdhc_daemon_outer_op_xfer_macro__ ;

#define _sdhc_register_write_inner_inarg_prep_macro__ __declare_static_bit_vector(address,8);\
bit_vector_cast_to_bit_vector(0, &(address), &((*__paddress)));\
__declare_static_bit_vector(data,8);\
bit_vector_cast_to_bit_vector(0, &(data), &((*__pdata)));\

#define _sdhc_register_write_branch_block_stmt_3194_c_export_decl_macro_ 

#define _sdhc_register_write_call_stmt_3202_c_macro_ __declare_static_bit_vector(konst_3200,8);\
bit_vector_clear(&konst_3200);\
konst_3200.val.byte_array[0] = 127;\
__declare_static_bit_vector(AND_u8_u8_3201,8);\
bit_vector_clear(&konst_3200);\
konst_3200.val.byte_array[0] = 127;\
bit_vector_and(&(data), &(konst_3200), &(AND_u8_u8_3201));\
_writeSDHCRegisters_( &(address),  &(AND_u8_u8_3201));\
;

#define _sdhc_register_write_call_stmt_3209_c_macro_ __declare_static_bit_vector(konst_3207,8);\
bit_vector_clear(&konst_3207);\
konst_3207.val.byte_array[0] = 63;\
__declare_static_bit_vector(AND_u8_u8_3208,8);\
bit_vector_clear(&konst_3207);\
konst_3207.val.byte_array[0] = 63;\
bit_vector_and(&(data), &(konst_3207), &(AND_u8_u8_3208));\
_writeSDHCRegisters_( &(address),  &(AND_u8_u8_3208));\
;

#define _sdhc_register_write_call_stmt_3214_c_macro_ _writeSDHCRegisters_( &(address),  &(ZERO_8));\
;

#define _sdhc_register_write_call_stmt_3221_c_macro_ __declare_static_bit_vector(konst_3219,8);\
bit_vector_clear(&konst_3219);\
konst_3219.val.byte_array[0] = 251;\
__declare_static_bit_vector(AND_u8_u8_3220,8);\
bit_vector_clear(&konst_3219);\
konst_3219.val.byte_array[0] = 251;\
bit_vector_and(&(data), &(konst_3219), &(AND_u8_u8_3220));\
_writeSDHCRegisters_( &(address),  &(AND_u8_u8_3220));\
;

#define _sdhc_register_write_call_stmt_3228_c_macro_ __declare_static_bit_vector(konst_3226,8);\
bit_vector_clear(&konst_3226);\
konst_3226.val.byte_array[0] = 63;\
__declare_static_bit_vector(AND_u8_u8_3227,8);\
bit_vector_clear(&konst_3226);\
konst_3226.val.byte_array[0] = 63;\
bit_vector_and(&(data), &(konst_3226), &(AND_u8_u8_3227));\
_writeSDHCRegisters_( &(address),  &(AND_u8_u8_3227));\
;

#define _sdhc_register_write_call_stmt_3295_c_macro_ __declare_static_bit_vector(konst_3293,8);\
bit_vector_clear(&konst_3293);\
konst_3293.val.byte_array[0] = 5;\
__declare_static_bit_vector(AND_u8_u8_3294,8);\
bit_vector_clear(&konst_3293);\
konst_3293.val.byte_array[0] = 5;\
bit_vector_and(&(data), &(konst_3293), &(AND_u8_u8_3294));\
_writeSDHCRegisters_( &(address),  &(AND_u8_u8_3294));\
;

#define _sdhc_register_write_call_stmt_3302_c_macro_ __declare_static_bit_vector(konst_3300,8);\
bit_vector_clear(&konst_3300);\
konst_3300.val.byte_array[0] = 7;\
__declare_static_bit_vector(AND_u8_u8_3301,8);\
bit_vector_clear(&konst_3300);\
konst_3300.val.byte_array[0] = 7;\
bit_vector_and(&(data), &(konst_3300), &(AND_u8_u8_3301));\
_writeSDHCRegisters_( &(address),  &(AND_u8_u8_3301));\
;

#define _sdhc_register_write_call_stmt_3307_c_macro_ _RW1C_( &(data),  &(address));\
;

#define _sdhc_register_write_call_stmt_3315_c_macro_ _RW1C_( &(data),  &(address));\
;

#define _sdhc_register_write_call_stmt_3320_c_macro_ _RW1C_( &(data),  &(address));\
;

#define _sdhc_register_write_call_stmt_3327_c_macro_ __declare_static_bit_vector(konst_3325,8);\
bit_vector_clear(&konst_3325);\
konst_3325.val.byte_array[0] = 31;\
__declare_static_bit_vector(AND_u8_u8_3326,8);\
bit_vector_clear(&konst_3325);\
konst_3325.val.byte_array[0] = 31;\
bit_vector_and(&(data), &(konst_3325), &(AND_u8_u8_3326));\
_writeSDHCRegisters_( &(address),  &(AND_u8_u8_3326));\
;

#define _sdhc_register_write_call_stmt_3334_c_macro_ __declare_static_bit_vector(konst_3332,8);\
bit_vector_clear(&konst_3332);\
konst_3332.val.byte_array[0] = 247;\
__declare_static_bit_vector(AND_u8_u8_3333,8);\
bit_vector_clear(&konst_3332);\
konst_3332.val.byte_array[0] = 247;\
bit_vector_and(&(data), &(konst_3332), &(AND_u8_u8_3333));\
_writeSDHCRegisters_( &(address),  &(AND_u8_u8_3333));\
;

#define _sdhc_register_write_call_stmt_3341_c_macro_ __declare_static_bit_vector(konst_3339,8);\
bit_vector_clear(&konst_3339);\
konst_3339.val.byte_array[0] = 31;\
__declare_static_bit_vector(AND_u8_u8_3340,8);\
bit_vector_clear(&konst_3339);\
konst_3339.val.byte_array[0] = 31;\
bit_vector_and(&(data), &(konst_3339), &(AND_u8_u8_3340));\
_writeSDHCRegisters_( &(address),  &(AND_u8_u8_3340));\
;

#define _sdhc_register_write_call_stmt_3348_c_macro_ __declare_static_bit_vector(konst_3346,8);\
bit_vector_clear(&konst_3346);\
konst_3346.val.byte_array[0] = 247;\
__declare_static_bit_vector(AND_u8_u8_3347,8);\
bit_vector_clear(&konst_3346);\
konst_3346.val.byte_array[0] = 247;\
bit_vector_and(&(data), &(konst_3346), &(AND_u8_u8_3347));\
_writeSDHCRegisters_( &(address),  &(AND_u8_u8_3347));\
;

#define _sdhc_register_write_call_stmt_3355_c_macro_ __declare_static_bit_vector(konst_3353,8);\
bit_vector_clear(&konst_3353);\
konst_3353.val.byte_array[0] = 192;\
__declare_static_bit_vector(AND_u8_u8_3354,8);\
bit_vector_clear(&konst_3353);\
konst_3353.val.byte_array[0] = 192;\
bit_vector_and(&(data), &(konst_3353), &(AND_u8_u8_3354));\
_writeSDHCRegisters_( &(address),  &(AND_u8_u8_3354));\
;

#define _sdhc_register_write_call_stmt_3381_c_macro_ _writeSDHCRegisters_( &(address),  &(ZERO_8));\
;

#define _sdhc_register_write_call_stmt_3385_c_macro_ _writeSDHCRegisters_( &(address),  &(data));\
;
;

#define _sdhc_register_write_branch_block_stmt_3194_c_export_apply_macro_ ;

#define _sdhc_register_write_inner_outarg_prep_macro__ ;

#define _sdhc_register_write_outer_arg_decl_macro__ __declare_static_bit_vector(__address, 8);\
bit_vector_assign_uint64(0, &__address, address);\
__declare_static_bit_vector(__data, 8);\
bit_vector_assign_uint64(0, &__data, data);\
;

#define _sdhc_register_write_outer_op_xfer_macro__ ;

#define _sendDAT0_inner_inarg_prep_macro__ __declare_static_bit_vector(dat0,1024);\
bit_vector_cast_to_bit_vector(0, &(dat0), &((*__pdat0)));\
__declare_static_bit_vector(nextCRC16_DAT0,16);\
bit_vector_cast_to_bit_vector(0, &(nextCRC16_DAT0), &((*__pnextCRC16_DAT0)));\

#define _sendDAT0_branch_block_stmt_2186_c_export_decl_macro_ __declare_static_bit_vector(newDat0,1042);\
__declare_static_bit_vector(k_0,11);\
__declare_static_bit_vector(dat0bit4_0,1042);\
__declare_static_bit_vector(nextbit4_0,1042);\
__declare_static_bit_vector(next_k_0,11);\


#define _sendDAT0_assign_stmt_2195_c_macro_ __declare_static_bit_vector(CONCAT_u1_u1025_2190,1025);\
__declare_static_bit_vector(CONCAT_u16_u17_2193,17);\
__declare_static_bit_vector(CONCAT_u1025_u1042_2194,1042);\
bit_vector_concatenate( &(ZERO_1), &(dat0), &(CONCAT_u1_u1025_2190));\
bit_vector_concatenate( &(nextCRC16_DAT0), &(ONE_1), &(CONCAT_u16_u17_2193));\
bit_vector_concatenate( &(CONCAT_u1_u1025_2190), &(CONCAT_u16_u17_2193), &(CONCAT_u1025_u1042_2194));\
bit_vector_cast_to_bit_vector(0, &(newDat0), &(CONCAT_u1025_u1042_2194));\
;

#define _sendDAT0_merge_stmt_2197_c_preamble_macro_ uint8_t merge_stmt_2197_entry_flag;\
merge_stmt_2197_entry_flag = do_while_entry_flag;\
goto merge_stmt_2197_run;\
merge_stmt_2197_run: ;\

#define _sendDAT0_phi_stmt_2198_c_macro_ __declare_static_bit_vector(konst_2200,11);\
bit_vector_clear(&konst_2200);\
__declare_static_bit_vector(type_cast_2201,11);\
bit_vector_clear(&type_cast_2201);\
if(do_while_loopback_flag) {\
bit_vector_cast_to_bit_vector(0, &(k_0), &(next_k_0));\
}\
else {\
__declare_static_bit_vector(konst_2200,11);\
bit_vector_clear(&konst_2200);\
__declare_static_bit_vector(type_cast_2201,11);\
bit_vector_clear(&type_cast_2201);\
bit_vector_clear(&konst_2200);\
bit_vector_bitcast_to_bit_vector( &(type_cast_2201), &(konst_2200));\
bit_vector_cast_to_bit_vector(0, &(k_0), &(type_cast_2201));\
}\
;

#define _sendDAT0_phi_stmt_2203_c_macro_ if(do_while_loopback_flag) {\
bit_vector_cast_to_bit_vector(0, &(dat0bit4_0), &(nextbit4_0));\
}\
else {\
bit_vector_cast_to_bit_vector(0, &(dat0bit4_0), &(newDat0));\
}\
;
;

#define _sendDAT0_merge_stmt_2197_c_postamble_macro_ merge_stmt_2197_entry_flag = 0;

#define _sendDAT0_assign_stmt_2212_c_macro_ __declare_static_bit_vector(konst_2210,1042);\
bit_vector_clear(&konst_2210);\
konst_2210.val.byte_array[0] = 17;\
konst_2210.val.byte_array[1] = 4;\
__declare_static_bit_vector(BITSEL_u1042_u1_2211,1);\
bit_vector_clear(&konst_2210);\
konst_2210.val.byte_array[0] = 17;\
konst_2210.val.byte_array[1] = 4;\
bit_vector_bitsel( &(dat0bit4_0), &(konst_2210), &(BITSEL_u1042_u1_2211));\
write_bit_vector_to_pipe("DAT0Tx",&(BITSEL_u1042_u1_2211));\
;

#define _sendDAT0_assign_stmt_2217_c_macro_ __declare_static_bit_vector(konst_2215,1042);\
bit_vector_clear(&konst_2215);\
konst_2215.val.byte_array[0] = 1;\
__declare_static_bit_vector(SHL_u1042_u1042_2216,1042);\
bit_vector_clear(&konst_2215);\
konst_2215.val.byte_array[0] = 1;\
bit_vector_shift_left(&(dat0bit4_0), &(konst_2215), &(SHL_u1042_u1042_2216));\
bit_vector_cast_to_bit_vector(0, &(nextbit4_0), &(SHL_u1042_u1042_2216));\
;

#define _sendDAT0_assign_stmt_2222_c_macro_ __declare_static_bit_vector(konst_2220,11);\
bit_vector_clear(&konst_2220);\
konst_2220.val.byte_array[0] = 1;\
__declare_static_bit_vector(ADD_u11_u11_2221,11);\
bit_vector_clear(&konst_2220);\
konst_2220.val.byte_array[0] = 1;\
bit_vector_plus( &(k_0), &(konst_2220), &(ADD_u11_u11_2221));\
bit_vector_cast_to_bit_vector(0, &(next_k_0), &(ADD_u11_u11_2221));\
;
;

#define _sendDAT0_branch_block_stmt_2186_c_export_apply_macro_ ;

#define _sendDAT0_inner_outarg_prep_macro__ ;

#define _sendDAT1_inner_inarg_prep_macro__ __declare_static_bit_vector(dat1,1024);\
bit_vector_cast_to_bit_vector(0, &(dat1), &((*__pdat1)));\
__declare_static_bit_vector(nextCRC16_DAT1,16);\
bit_vector_cast_to_bit_vector(0, &(nextCRC16_DAT1), &((*__pnextCRC16_DAT1)));\

#define _sendDAT1_branch_block_stmt_2232_c_export_decl_macro_ __declare_static_bit_vector(newDat1,1042);\
__declare_static_bit_vector(k_1,11);\
__declare_static_bit_vector(dat0bit4_1,1042);\
__declare_static_bit_vector(nextbit4_1,1042);\
__declare_static_bit_vector(next_k_1,11);\


#define _sendDAT1_assign_stmt_2241_c_macro_ __declare_static_bit_vector(CONCAT_u1_u1025_2236,1025);\
__declare_static_bit_vector(CONCAT_u16_u17_2239,17);\
__declare_static_bit_vector(CONCAT_u1025_u1042_2240,1042);\
bit_vector_concatenate( &(ZERO_1), &(dat1), &(CONCAT_u1_u1025_2236));\
bit_vector_concatenate( &(nextCRC16_DAT1), &(ONE_1), &(CONCAT_u16_u17_2239));\
bit_vector_concatenate( &(CONCAT_u1_u1025_2236), &(CONCAT_u16_u17_2239), &(CONCAT_u1025_u1042_2240));\
bit_vector_cast_to_bit_vector(0, &(newDat1), &(CONCAT_u1025_u1042_2240));\
;

#define _sendDAT1_merge_stmt_2243_c_preamble_macro_ uint8_t merge_stmt_2243_entry_flag;\
merge_stmt_2243_entry_flag = do_while_entry_flag;\
goto merge_stmt_2243_run;\
merge_stmt_2243_run: ;\

#define _sendDAT1_phi_stmt_2244_c_macro_ __declare_static_bit_vector(konst_2246,11);\
bit_vector_clear(&konst_2246);\
__declare_static_bit_vector(type_cast_2247,11);\
bit_vector_clear(&type_cast_2247);\
if(do_while_loopback_flag) {\
bit_vector_cast_to_bit_vector(0, &(k_1), &(next_k_1));\
}\
else {\
__declare_static_bit_vector(konst_2246,11);\
bit_vector_clear(&konst_2246);\
__declare_static_bit_vector(type_cast_2247,11);\
bit_vector_clear(&type_cast_2247);\
bit_vector_clear(&konst_2246);\
bit_vector_bitcast_to_bit_vector( &(type_cast_2247), &(konst_2246));\
bit_vector_cast_to_bit_vector(0, &(k_1), &(type_cast_2247));\
}\
;

#define _sendDAT1_phi_stmt_2249_c_macro_ if(do_while_loopback_flag) {\
bit_vector_cast_to_bit_vector(0, &(dat0bit4_1), &(nextbit4_1));\
}\
else {\
bit_vector_cast_to_bit_vector(0, &(dat0bit4_1), &(newDat1));\
}\
;
;

#define _sendDAT1_merge_stmt_2243_c_postamble_macro_ merge_stmt_2243_entry_flag = 0;

#define _sendDAT1_assign_stmt_2258_c_macro_ __declare_static_bit_vector(konst_2256,1042);\
bit_vector_clear(&konst_2256);\
konst_2256.val.byte_array[0] = 17;\
konst_2256.val.byte_array[1] = 4;\
__declare_static_bit_vector(BITSEL_u1042_u1_2257,1);\
bit_vector_clear(&konst_2256);\
konst_2256.val.byte_array[0] = 17;\
konst_2256.val.byte_array[1] = 4;\
bit_vector_bitsel( &(dat0bit4_1), &(konst_2256), &(BITSEL_u1042_u1_2257));\
write_bit_vector_to_pipe("DAT1Tx",&(BITSEL_u1042_u1_2257));\
;

#define _sendDAT1_assign_stmt_2263_c_macro_ __declare_static_bit_vector(konst_2261,1042);\
bit_vector_clear(&konst_2261);\
konst_2261.val.byte_array[0] = 1;\
__declare_static_bit_vector(SHL_u1042_u1042_2262,1042);\
bit_vector_clear(&konst_2261);\
konst_2261.val.byte_array[0] = 1;\
bit_vector_shift_left(&(dat0bit4_1), &(konst_2261), &(SHL_u1042_u1042_2262));\
bit_vector_cast_to_bit_vector(0, &(nextbit4_1), &(SHL_u1042_u1042_2262));\
;

#define _sendDAT1_assign_stmt_2268_c_macro_ __declare_static_bit_vector(konst_2266,11);\
bit_vector_clear(&konst_2266);\
konst_2266.val.byte_array[0] = 1;\
__declare_static_bit_vector(ADD_u11_u11_2267,11);\
bit_vector_clear(&konst_2266);\
konst_2266.val.byte_array[0] = 1;\
bit_vector_plus( &(k_1), &(konst_2266), &(ADD_u11_u11_2267));\
bit_vector_cast_to_bit_vector(0, &(next_k_1), &(ADD_u11_u11_2267));\
;
;

#define _sendDAT1_branch_block_stmt_2232_c_export_apply_macro_ ;

#define _sendDAT1_inner_outarg_prep_macro__ ;

#define _sendDAT2_inner_inarg_prep_macro__ __declare_static_bit_vector(dat2,1024);\
bit_vector_cast_to_bit_vector(0, &(dat2), &((*__pdat2)));\
__declare_static_bit_vector(nextCRC16_DAT2,16);\
bit_vector_cast_to_bit_vector(0, &(nextCRC16_DAT2), &((*__pnextCRC16_DAT2)));\

#define _sendDAT2_branch_block_stmt_2278_c_export_decl_macro_ __declare_static_bit_vector(newDat2,1042);\
__declare_static_bit_vector(k_2,11);\
__declare_static_bit_vector(dat0bit4_2,1042);\
__declare_static_bit_vector(nextbit4_2,1042);\
__declare_static_bit_vector(next_k_2,11);\


#define _sendDAT2_assign_stmt_2287_c_macro_ __declare_static_bit_vector(CONCAT_u1_u1025_2282,1025);\
__declare_static_bit_vector(CONCAT_u16_u17_2285,17);\
__declare_static_bit_vector(CONCAT_u1025_u1042_2286,1042);\
bit_vector_concatenate( &(ZERO_1), &(dat2), &(CONCAT_u1_u1025_2282));\
bit_vector_concatenate( &(nextCRC16_DAT2), &(ONE_1), &(CONCAT_u16_u17_2285));\
bit_vector_concatenate( &(CONCAT_u1_u1025_2282), &(CONCAT_u16_u17_2285), &(CONCAT_u1025_u1042_2286));\
bit_vector_cast_to_bit_vector(0, &(newDat2), &(CONCAT_u1025_u1042_2286));\
;

#define _sendDAT2_merge_stmt_2289_c_preamble_macro_ uint8_t merge_stmt_2289_entry_flag;\
merge_stmt_2289_entry_flag = do_while_entry_flag;\
goto merge_stmt_2289_run;\
merge_stmt_2289_run: ;\

#define _sendDAT2_phi_stmt_2290_c_macro_ __declare_static_bit_vector(konst_2292,11);\
bit_vector_clear(&konst_2292);\
__declare_static_bit_vector(type_cast_2293,11);\
bit_vector_clear(&type_cast_2293);\
if(do_while_loopback_flag) {\
bit_vector_cast_to_bit_vector(0, &(k_2), &(next_k_2));\
}\
else {\
__declare_static_bit_vector(konst_2292,11);\
bit_vector_clear(&konst_2292);\
__declare_static_bit_vector(type_cast_2293,11);\
bit_vector_clear(&type_cast_2293);\
bit_vector_clear(&konst_2292);\
bit_vector_bitcast_to_bit_vector( &(type_cast_2293), &(konst_2292));\
bit_vector_cast_to_bit_vector(0, &(k_2), &(type_cast_2293));\
}\
;

#define _sendDAT2_phi_stmt_2295_c_macro_ if(do_while_loopback_flag) {\
bit_vector_cast_to_bit_vector(0, &(dat0bit4_2), &(nextbit4_2));\
}\
else {\
bit_vector_cast_to_bit_vector(0, &(dat0bit4_2), &(newDat2));\
}\
;
;

#define _sendDAT2_merge_stmt_2289_c_postamble_macro_ merge_stmt_2289_entry_flag = 0;

#define _sendDAT2_assign_stmt_2304_c_macro_ __declare_static_bit_vector(konst_2302,1042);\
bit_vector_clear(&konst_2302);\
konst_2302.val.byte_array[0] = 17;\
konst_2302.val.byte_array[1] = 4;\
__declare_static_bit_vector(BITSEL_u1042_u1_2303,1);\
bit_vector_clear(&konst_2302);\
konst_2302.val.byte_array[0] = 17;\
konst_2302.val.byte_array[1] = 4;\
bit_vector_bitsel( &(dat0bit4_2), &(konst_2302), &(BITSEL_u1042_u1_2303));\
write_bit_vector_to_pipe("DAT2Tx",&(BITSEL_u1042_u1_2303));\
;

#define _sendDAT2_assign_stmt_2309_c_macro_ __declare_static_bit_vector(konst_2307,1042);\
bit_vector_clear(&konst_2307);\
konst_2307.val.byte_array[0] = 1;\
__declare_static_bit_vector(SHL_u1042_u1042_2308,1042);\
bit_vector_clear(&konst_2307);\
konst_2307.val.byte_array[0] = 1;\
bit_vector_shift_left(&(dat0bit4_2), &(konst_2307), &(SHL_u1042_u1042_2308));\
bit_vector_cast_to_bit_vector(0, &(nextbit4_2), &(SHL_u1042_u1042_2308));\
;

#define _sendDAT2_assign_stmt_2314_c_macro_ __declare_static_bit_vector(konst_2312,11);\
bit_vector_clear(&konst_2312);\
konst_2312.val.byte_array[0] = 1;\
__declare_static_bit_vector(ADD_u11_u11_2313,11);\
bit_vector_clear(&konst_2312);\
konst_2312.val.byte_array[0] = 1;\
bit_vector_plus( &(k_2), &(konst_2312), &(ADD_u11_u11_2313));\
bit_vector_cast_to_bit_vector(0, &(next_k_2), &(ADD_u11_u11_2313));\
;
;

#define _sendDAT2_branch_block_stmt_2278_c_export_apply_macro_ ;

#define _sendDAT2_inner_outarg_prep_macro__ ;

#define _sendDAT3_inner_inarg_prep_macro__ __declare_static_bit_vector(dat3,1024);\
bit_vector_cast_to_bit_vector(0, &(dat3), &((*__pdat3)));\
__declare_static_bit_vector(nextCRC16_DAT3,16);\
bit_vector_cast_to_bit_vector(0, &(nextCRC16_DAT3), &((*__pnextCRC16_DAT3)));\

#define _sendDAT3_branch_block_stmt_2324_c_export_decl_macro_ __declare_static_bit_vector(newDat3,1042);\
__declare_static_bit_vector(k_3,11);\
__declare_static_bit_vector(dat0bit4_3,1042);\
__declare_static_bit_vector(nextbit4_3,1042);\
__declare_static_bit_vector(next_k_3,11);\


#define _sendDAT3_assign_stmt_2333_c_macro_ __declare_static_bit_vector(CONCAT_u1_u1025_2328,1025);\
__declare_static_bit_vector(CONCAT_u16_u17_2331,17);\
__declare_static_bit_vector(CONCAT_u1025_u1042_2332,1042);\
bit_vector_concatenate( &(ZERO_1), &(dat3), &(CONCAT_u1_u1025_2328));\
bit_vector_concatenate( &(nextCRC16_DAT3), &(ONE_1), &(CONCAT_u16_u17_2331));\
bit_vector_concatenate( &(CONCAT_u1_u1025_2328), &(CONCAT_u16_u17_2331), &(CONCAT_u1025_u1042_2332));\
bit_vector_cast_to_bit_vector(0, &(newDat3), &(CONCAT_u1025_u1042_2332));\
;

#define _sendDAT3_merge_stmt_2335_c_preamble_macro_ uint8_t merge_stmt_2335_entry_flag;\
merge_stmt_2335_entry_flag = do_while_entry_flag;\
goto merge_stmt_2335_run;\
merge_stmt_2335_run: ;\

#define _sendDAT3_phi_stmt_2336_c_macro_ __declare_static_bit_vector(konst_2338,11);\
bit_vector_clear(&konst_2338);\
__declare_static_bit_vector(type_cast_2339,11);\
bit_vector_clear(&type_cast_2339);\
if(do_while_loopback_flag) {\
bit_vector_cast_to_bit_vector(0, &(k_3), &(next_k_3));\
}\
else {\
__declare_static_bit_vector(konst_2338,11);\
bit_vector_clear(&konst_2338);\
__declare_static_bit_vector(type_cast_2339,11);\
bit_vector_clear(&type_cast_2339);\
bit_vector_clear(&konst_2338);\
bit_vector_bitcast_to_bit_vector( &(type_cast_2339), &(konst_2338));\
bit_vector_cast_to_bit_vector(0, &(k_3), &(type_cast_2339));\
}\
;

#define _sendDAT3_phi_stmt_2341_c_macro_ if(do_while_loopback_flag) {\
bit_vector_cast_to_bit_vector(0, &(dat0bit4_3), &(nextbit4_3));\
}\
else {\
bit_vector_cast_to_bit_vector(0, &(dat0bit4_3), &(newDat3));\
}\
;
;

#define _sendDAT3_merge_stmt_2335_c_postamble_macro_ merge_stmt_2335_entry_flag = 0;

#define _sendDAT3_assign_stmt_2350_c_macro_ __declare_static_bit_vector(konst_2348,1042);\
bit_vector_clear(&konst_2348);\
konst_2348.val.byte_array[0] = 17;\
konst_2348.val.byte_array[1] = 4;\
__declare_static_bit_vector(BITSEL_u1042_u1_2349,1);\
bit_vector_clear(&konst_2348);\
konst_2348.val.byte_array[0] = 17;\
konst_2348.val.byte_array[1] = 4;\
bit_vector_bitsel( &(dat0bit4_3), &(konst_2348), &(BITSEL_u1042_u1_2349));\
write_bit_vector_to_pipe("DAT3Tx",&(BITSEL_u1042_u1_2349));\
;

#define _sendDAT3_assign_stmt_2355_c_macro_ __declare_static_bit_vector(konst_2353,1042);\
bit_vector_clear(&konst_2353);\
konst_2353.val.byte_array[0] = 1;\
__declare_static_bit_vector(SHL_u1042_u1042_2354,1042);\
bit_vector_clear(&konst_2353);\
konst_2353.val.byte_array[0] = 1;\
bit_vector_shift_left(&(dat0bit4_3), &(konst_2353), &(SHL_u1042_u1042_2354));\
bit_vector_cast_to_bit_vector(0, &(nextbit4_3), &(SHL_u1042_u1042_2354));\
;

#define _sendDAT3_assign_stmt_2360_c_macro_ __declare_static_bit_vector(konst_2358,11);\
bit_vector_clear(&konst_2358);\
konst_2358.val.byte_array[0] = 1;\
__declare_static_bit_vector(ADD_u11_u11_2359,11);\
bit_vector_clear(&konst_2358);\
konst_2358.val.byte_array[0] = 1;\
bit_vector_plus( &(k_3), &(konst_2358), &(ADD_u11_u11_2359));\
bit_vector_cast_to_bit_vector(0, &(next_k_3), &(ADD_u11_u11_2359));\
;
;

#define _sendDAT3_branch_block_stmt_2324_c_export_apply_macro_ ;

#define _sendDAT3_inner_outarg_prep_macro__ ;

#define _writeSDHCRegisters_inner_inarg_prep_macro__ __declare_static_bit_vector(address,8);\
bit_vector_cast_to_bit_vector(0, &(address), &((*__paddress)));\
__declare_static_bit_vector(data,8);\
bit_vector_cast_to_bit_vector(0, &(data), &((*__pdata)));\

#define _writeSDHCRegisters_assign_stmt_86_c_macro_ bit_vector_cast_to_bit_vector(0, &((sdhcRegisters[bit_vector_to_uint64(0, &address)])), &(data));\
;

#define _writeSDHCRegisters_inner_outarg_prep_macro__ ;

#define _writeSDHCRegisters_outer_arg_decl_macro__ __declare_static_bit_vector(__address, 8);\
bit_vector_assign_uint64(0, &__address, address);\
__declare_static_bit_vector(__data, 8);\
bit_vector_assign_uint64(0, &__data, data);\
;

#define _writeSDHCRegisters_outer_op_xfer_macro__ ;
