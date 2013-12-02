/* Intel Atom/64 gmp-mparam.h -- Compiler/machine parameter header file.

Copyright 1991, 1993, 1994, 2000-2010, 2012 Free Software Foundation, Inc.

This file is part of the GNU MP Library.

The GNU MP Library is free software; you can redistribute it and/or modify
it under the terms of the GNU Lesser General Public License as published by
the Free Software Foundation; either version 3 of the License, or (at your
option) any later version.

The GNU MP Library is distributed in the hope that it will be useful, but
WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY
or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU Lesser General Public
License for more details.

You should have received a copy of the GNU Lesser General Public License
along with the GNU MP Library.  If not, see https://www.gnu.org/licenses/.  */

#define GMP_LIMB_BITS 64
#define BYTES_PER_MP_LIMB 8

#define SHLD_SLOW 1
#define SHRD_SLOW 1

/* These routines exists for all x86_64 chips, but they are slower on Atom
   than separate add/sub and shift.  Make sure they are not really used.  */
#undef HAVE_NATIVE_mpn_rsh1add_n
#undef HAVE_NATIVE_mpn_rsh1sub_n

#define MOD_1_NORM_THRESHOLD                 0  /* always */
#define MOD_1_UNNORM_THRESHOLD               0  /* always */
#define MOD_1N_TO_MOD_1_1_THRESHOLD          4
#define MOD_1U_TO_MOD_1_1_THRESHOLD          3
#define MOD_1_1_TO_MOD_1_2_THRESHOLD     MP_SIZE_T_MAX
#define MOD_1_2_TO_MOD_1_4_THRESHOLD         0
#define PREINV_MOD_1_TO_MOD_1_THRESHOLD     10
#define USE_PREINV_DIVREM_1                  1  /* native */
#define DIV_QR_2_PI2_THRESHOLD           MP_SIZE_T_MAX  /* never */
#define DIVEXACT_1_THRESHOLD                 0  /* always (native) */
#define BMOD_1_TO_MOD_1_THRESHOLD           15

#define MUL_TOOM22_THRESHOLD                12
#define MUL_TOOM33_THRESHOLD                74
#define MUL_TOOM44_THRESHOLD               118
#define MUL_TOOM6H_THRESHOLD               157
#define MUL_TOOM8H_THRESHOLD               212

#define MUL_TOOM32_TO_TOOM43_THRESHOLD      74
#define MUL_TOOM32_TO_TOOM53_THRESHOLD      91
#define MUL_TOOM42_TO_TOOM53_THRESHOLD      81
#define MUL_TOOM42_TO_TOOM63_THRESHOLD      80
#define MUL_TOOM43_TO_TOOM54_THRESHOLD     106

#define SQR_BASECASE_THRESHOLD               6
#define SQR_TOOM2_THRESHOLD                 24
#define SQR_TOOM3_THRESHOLD                 50
#define SQR_TOOM4_THRESHOLD                196
#define SQR_TOOM6_THRESHOLD                  0
#define SQR_TOOM8_THRESHOLD                242

#define MULMID_TOOM42_THRESHOLD             16

#define MULMOD_BNM1_THRESHOLD                7
#define SQRMOD_BNM1_THRESHOLD               11

#define MUL_FFT_MODF_THRESHOLD             252  /* k = 5 */
#define MUL_FFT_TABLE3                                      \
  { {    252, 5}, {     11, 6}, {      6, 5}, {     13, 6}, \
    {      7, 5}, {     15, 6}, {     13, 7}, {      7, 6}, \
    {     15, 7}, {      8, 6}, {     17, 7}, {      9, 6}, \
    {     19, 7}, {     13, 8}, {      7, 7}, {     17, 8}, \
    {      9, 7}, {     19, 8}, {     11, 7}, {     23, 8}, \
    {     13, 9}, {      7, 8}, {     19, 9}, {     11, 8}, \
    {     23,10}, {      7, 9}, {     15, 8}, {     31, 9}, \
    {     19, 8}, {     39, 9}, {     23,10}, {     15, 9}, \
    {     39,10}, {     23, 9}, {     47,11}, {     15,10}, \
    {     31, 9}, {     67,10}, {     39, 9}, {     79,10}, \
    {     47, 9}, {     95,11}, {     31,10}, {     63, 9}, \
    {    127, 8}, {    255,10}, {     71, 9}, {    143, 8}, \
    {    287,10}, {     79,11}, {     47,10}, {     95, 8}, \
    {    383,12}, {     31,11}, {     63,10}, {    127, 9}, \
    {    255, 8}, {    511,10}, {    143, 9}, {    287,11}, \
    {     79,10}, {    159, 9}, {    319, 8}, {    639, 9}, \
    {    351,11}, {     95,10}, {    191, 9}, {    383,10}, \
    {    207, 9}, {    415,10}, {    223,12}, {     63,11}, \
    {    127,10}, {    255, 9}, {    511,11}, {    143,10}, \
    {    287, 9}, {    575,11}, {    159,10}, {    319, 9}, \
    {    639,11}, {    175,10}, {    351, 9}, {    703,12}, \
    {     95,11}, {    191,10}, {    383,11}, {    207,10}, \
    {    415,11}, {    223,10}, {    447,13}, {   8192,14}, \
    {  16384,15}, {  32768,16}, {  65536,17}, { 131072,18}, \
    { 262144,19}, { 524288,20}, {1048576,21}, {2097152,22}, \
    {4194304,23}, {8388608,24} }
#define MUL_FFT_TABLE3_SIZE 102
#define MUL_FFT_THRESHOLD                 2240

#define SQR_FFT_MODF_THRESHOLD             212  /* k = 5 */
#define SQR_FFT_TABLE3                                      \
  { {    212, 5}, {     11, 6}, {      6, 5}, {     13, 6}, \
    {     13, 7}, {      7, 6}, {     15, 7}, {     13, 8}, \
    {      7, 7}, {     17, 8}, {      9, 7}, {     19, 8}, \
    {     11, 7}, {     23, 8}, {     13, 9}, {      7, 8}, \
    {     19, 9}, {     11, 8}, {     25,10}, {      7, 9}, \
    {     15, 8}, {     31, 9}, {     23,10}, {     15, 9}, \
    {     39,10}, {     23, 9}, {     47,11}, {     15,10}, \
    {     31, 9}, {     63, 8}, {    127,10}, {     39, 8}, \
    {    159,10}, {     47, 8}, {    191,10}, {     55,11}, \
    {     31,10}, {     63, 9}, {    127, 8}, {    255,10}, \
    {     71, 9}, {    143, 8}, {    287, 7}, {    575, 9}, \
    {    159, 8}, {    319,11}, {     47, 9}, {    191, 8}, \
    {    383,12}, {     31,11}, {     63,10}, {    127, 9}, \
    {    255, 8}, {    511,10}, {    143, 9}, {    287, 8}, \
    {    575,10}, {    159, 9}, {    351, 8}, {    703,10}, \
    {    191, 9}, {    383,10}, {    207, 9}, {    415,11}, \
    {    111,10}, {    223, 9}, {    447,12}, {     63,11}, \
    {    127,10}, {    255, 9}, {    511,11}, {    143,10}, \
    {    287, 9}, {    575,11}, {    159,10}, {    319,11}, \
    {    175,10}, {    351, 9}, {    703,11}, {    191,10}, \
    {    383,11}, {    207,10}, {    415,11}, {    223,10}, \
    {    447,13}, {   8192,14}, {  16384,15}, {  32768,16}, \
    {  65536,17}, { 131072,18}, { 262144,19}, { 524288,20}, \
    {1048576,21}, {2097152,22}, {4194304,23}, {8388608,24} }
#define SQR_FFT_TABLE3_SIZE 96
#define SQR_FFT_THRESHOLD                 1600

#define MULLO_BASECASE_THRESHOLD             0  /* always */
#define MULLO_DC_THRESHOLD                  33
#define MULLO_MUL_N_THRESHOLD             4392

#define DC_DIV_QR_THRESHOLD                 34
#define DC_DIVAPPR_Q_THRESHOLD             123
#define DC_BDIV_QR_THRESHOLD                32
#define DC_BDIV_Q_THRESHOLD                 78

#define INV_MULMOD_BNM1_THRESHOLD           22
#define INV_NEWTON_THRESHOLD               163
#define INV_APPR_THRESHOLD                 150

#define BINV_NEWTON_THRESHOLD              197
#define REDC_1_TO_REDC_2_THRESHOLD          24
#define REDC_2_TO_REDC_N_THRESHOLD          43

#define MU_DIV_QR_THRESHOLD                855
#define MU_DIVAPPR_Q_THRESHOLD             855
#define MUPI_DIV_QR_THRESHOLD               83
#define MU_BDIV_QR_THRESHOLD               762
#define MU_BDIV_Q_THRESHOLD                807

#define POWM_SEC_TABLE  2,24,140,453,1487

#define MATRIX22_STRASSEN_THRESHOLD         13
#define HGCD_THRESHOLD                     104
#define HGCD_APPR_THRESHOLD                106
#define HGCD_REDUCE_THRESHOLD             1329
#define GCD_DC_THRESHOLD                   293
#define GCDEXT_DC_THRESHOLD                217
#define JACOBI_BASE_METHOD                   4

#define GET_STR_DC_THRESHOLD                15
#define GET_STR_PRECOMPUTE_THRESHOLD        32
#define SET_STR_DC_THRESHOLD               418
#define SET_STR_PRECOMPUTE_THRESHOLD      1659

#define FAC_DSC_THRESHOLD                 1095
#define FAC_ODD_THRESHOLD                    0  /* always */
