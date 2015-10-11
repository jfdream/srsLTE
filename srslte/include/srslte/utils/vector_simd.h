/**
 *
 * \section COPYRIGHT
 *
 * Copyright 2013-2015 The srsLTE Developers. See the
 * COPYRIGHT file at the top-level directory of this distribution.
 *
 * \section LICENSE
 *
 * This file is part of the srsLTE library.
 *
 * srsLTE is free software: you can redistribute it and/or modify
 * it under the terms of the GNU Affero General Public License as
 * published by the Free Software Foundation, either version 3 of
 * the License, or (at your option) any later version.
 *
 * srsLTE is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU Affero General Public License for more details.
 *
 * A copy of the GNU Affero General Public License can be found in
 * the LICENSE file in the top-level directory of this distribution
 * and at http://www.gnu.org/licenses/.
 *
 */

#ifndef VECTORSIMD_
#define VECTORSIMD_

#ifdef __cplusplus
extern "C" {
#endif

#include <stdio.h>
#include <stdint.h>
#include "srslte/config.h"


SRSLTE_API void srslte_vec_sum_sss_simd(short *x, short *y, short *z, uint32_t len);

SRSLTE_API void srslte_vec_sub_sss_simd(short *x, short *y, short *z, uint32_t len); 

SRSLTE_API void srslte_vec_sc_div2_sss_simd(short *x, int n_rightshift, short *z, uint32_t len); 

#ifdef __cplusplus
}
#endif

#endif