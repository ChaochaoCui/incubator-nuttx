/****************************************************************************
 * arch/z80/include/ez80/inttypes.h
 *
 *   Copyright (C) 2016 Omni Hoverboards Inc. All rights reserved.
 *   Author: Paul Alexander Patience <paul-a.patience@polymtl.ca>
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 *
 * 1. Redistributions of source code must retain the above copyright
 *    notice, this list of conditions and the following disclaimer.
 * 2. Redistributions in binary form must reproduce the above copyright
 *    notice, this list of conditions and the following disclaimer in
 *    the documentation and/or other materials provided with the
 *    distribution.
 * 3. Neither the name NuttX nor the names of its contributors may be
 *    used to endorse or promote products derived from this software
 *    without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
 * "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
 * LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS
 * FOR A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE
 * COPYRIGHT OWNER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT,
 * INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING,
 * BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS
 * OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED
 * AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT
 * LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN
 * ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
 * POSSIBILITY OF SUCH DAMAGE.
 *
 ****************************************************************************/

#ifndef __ARCH_Z80_INCLUDE_EZ80_INTTYPES_H
#define __ARCH_Z80_INCLUDE_EZ80_INTTYPES_H

/****************************************************************************
 * Included Files
 ****************************************************************************/

/****************************************************************************
 * Pre-processor Definitions
 ****************************************************************************/

#ifdef CONFIG_EZ80_Z80MODE

#  define PRId8       "d"
#  define PRId16      "d"
#  define PRId32      "ld"

#  define PRIdPTR     "d"

#  define PRIi8       "i"
#  define PRIi16      "i"
#  define PRIi32      "li"

#  define PRIiPTR     "i"

#  define PRIo8       "o"
#  define PRIo16      "o"
#  define PRIo32      "lo"

#  define PRIoPTR     "o"

#  define PRIu8       "u"
#  define PRIu16      "u"
#  define PRIu32      "lu"

#  define PRIuPTR     "u"

#  define PRIx8       "x"
#  define PRIx16      "x"
#  define PRIx32      "lx"

#  define PRIxPTR     "x"

#  define PRIX8       "X"
#  define PRIX16      "X"
#  define PRIX32      "lX"

#  define PRIXPTR     "X"

#  define SCNd8       "hhd"
#  define SCNd16      "hd"
#  define SCNd32      "ld"

#  define SCNdPTR     "hd"

#  define SCNi8       "hhi"
#  define SCNi16      "hi"
#  define SCNi32      "li"

#  define SCNiPTR     "hi"

#  define SCNo8       "hho"
#  define SCNo16      "ho"
#  define SCNo32      "lo"

#  define SCNoPTR     "ho"

#  define SCNu8       "hhu"
#  define SCNu16      "hu"
#  define SCNu32      "lu"

#  define SCNuPTR     "hu"

#  define SCNx8       "hhx"
#  define SCNx16      "hx"
#  define SCNx32      "lx"

#  define SCNxPTR     "hx"

#  define INT8_C(x)   x
#  define INT16_C(x)  x
#  define INT32_C(x)  x ## l

#  define UINT8_C(x)  x
#  define UINT16_C(x) x
#  define UINT32_C(x) x ## ul

#else

#  define PRId8       "d"
#  define PRId16      "d"
#  define PRId32      "ld"

#  define PRIdPTR     "d"

#  define PRIi8       "i"
#  define PRIi16      "i"
#  define PRIi32      "li"

#  define PRIiPTR     "i"

#  define PRIo8       "o"
#  define PRIo16      "o"
#  define PRIo32      "lo"

#  define PRIoPTR     "o"

#  define PRIu8       "u"
#  define PRIu16      "u"
#  define PRIu32      "lu"

#  define PRIuPTR     "u"

#  define PRIx8       "x"
#  define PRIx16      "x"
#  define PRIx32      "lx"

#  define PRIxPTR     "x"

#  define PRIX8       "X"
#  define PRIX16      "X"
#  define PRIX32      "lX"

#  define PRIXPTR     "X"

#  define SCNd8       "hhd"
#  define SCNd16      "hd"
#  define SCNd32      "ld"

#  define SCNdPTR     "d"

#  define SCNi8       "hhi"
#  define SCNi16      "hi"
#  define SCNi32      "li"

#  define SCNiPTR     "i"

#  define SCNo8       "hho"
#  define SCNo16      "ho"
#  define SCNo32      "lo"

#  define SCNoPTR     "o"

#  define SCNu8       "hhu"
#  define SCNu16      "hu"
#  define SCNu32      "lu"

#  define SCNuPTR     "u"

#  define SCNx8       "hhx"
#  define SCNx16      "hx"
#  define SCNx32      "lx"

#  define SCNxPTR     "x"

#  define INT8_C(x)   x
#  define INT16_C(x)  x
#  define INT32_C(x)  x ## l

#  define UINT8_C(x)  x
#  define UINT16_C(x) x
#  define UINT32_C(x) x ## ul
#endif

#endif /* __ARCH_Z80_INCLUDE_EZ80_INTTYPES_H */
