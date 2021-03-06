/* APPLE LOCAL file v7 merge */
/* Test the `vreinterpretQp16_s16' ARM Neon intrinsic.  */
/* This file was autogenerated by neon-testgen.  */

/* { dg-do assemble } */
/* { dg-require-effective-target arm_neon_ok } */
/* { dg-options "-save-temps -O0 -mfpu=neon -mfloat-abi=softfp" } */

#include "arm_neon.h"

void test_vreinterpretQp16_s16 (void)
{
  poly16x8_t out_poly16x8_t;
  int16x8_t arg0_int16x8_t;

  out_poly16x8_t = vreinterpretq_p16_s16 (arg0_int16x8_t);
}

/* { dg-final { cleanup-saved-temps } } */
