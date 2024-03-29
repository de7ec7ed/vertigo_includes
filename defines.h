/* This file is part of VERTIGO.
 *
 * (C) Copyright 2013, Siege Technologies <http://www.siegetechnologies.com>
 * (C) Copyright 2013, Kirk Swidowski <http://www.swidowski.com>
 *
 * VERTIGO is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * VERTIGO is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with VERTIGO. If not, see <http://www.gnu.org/licenses/>.
 *
 * Written by Kirk Swidowski <kirk@swidowski.com>
 */

#ifndef __DEFINES_H__
#define __DEFINES_H__

#ifndef CALLSIGN
#define CALLSIGN 0xde7ec7ed
#endif //CALLSIGN

#ifndef SUCCESS
#define SUCCESS     0
#endif //SUCCESS

#ifndef FAILURE
#define FAILURE     0xFFFF
#endif //FAILURE

#ifndef TRUE
#define TRUE     1
#endif //TRUE

#ifndef FALSE
#define FALSE    0
#endif //FALSE

#ifndef NULL
#define NULL ((void *)0)
#endif // NULL

#ifndef BITS_PER_BYTE
#define BITS_PER_BYTE 8
#endif //BITS_PER_BYTE

#ifndef BYTES_PER_LONG
#define BYTES_PER_LONG 4
#endif //BYTES_PER_LONG

#ifndef BITS_PER_LONG
#define BITS_PER_LONG (BITS_PER_BYTE * BYTES_PER_LONG)
#endif //BITS_PER_LONG

#ifndef BYTES_PER_THUMB_INSTRUCTION
#define BYTES_PER_THUMB_INSTRUCTION 2
#endif //BYTES_PER_THUMB_INSTRUCTION

#ifndef BYTES_PER_ARM_INSTRUCTION
#define BYTES_PER_ARM_INSTRUCTION 4
#endif //BYTES_PER_ARM_INSTRUCTION

#ifndef ONE_BYTE
#define ONE_BYTE 1
#endif //ONE_BYTE

#ifndef ONE_KILOBYTE
#define ONE_KILOBYTE (ONE_BYTE * 1024)
#endif //ONE_KILOBYTE

#ifndef ONE_MEGABYTE
#define ONE_MEGABYTE (ONE_KILOBYTE * 1024)
#endif //ONE_MEGABYTE

#ifndef ONE_GIGABYTE
#define ONE_GIGABYTE (ONE_MEGABYTE * 1024)
#endif //ONE_GIGABYTE

#ifndef FOUR_KILOBYTES
#define FOUR_KILOBYTES       (4 * ONE_KILOBYTE)
#endif //FOUR_KILOBYTES

#ifndef SIXTEEN_KILOBYTES
#define SIXTEEN_KILOBYTES    (4 * FOUR_KILOBYTES)
#endif //SIXTEEN_KILOBYTES

#ifndef SIXTY_FOUR_KILOBYTES
#define SIXTY_FOUR_KILOBYTES (4 * SIXTEEN_KILOBYTES)
#endif //SIXTY_FOUR_KILOBYTES

#ifndef TWO_MEGABYTES
#define TWO_MEGABYTES  (2 * ONE_MEGABYTE)
#endif //TWO_MEGABYTES

#ifndef FOUR_MEGABYTES
#define FOUR_MEGABYTES (4 * ONE_MEGABYTE)
#endif //FOUR_MEGABYTES

#ifndef ONE_KILOBYTE_MASK
#define ONE_KILOBYTE_MASK  0x3FF
#endif //ONE_KILOBYTE_MASK

#ifndef FOUR_KILOBYTE_MASK
#define FOUR_KILOBYTE_MASK 0xFFF
#endif //FOUR_KILOBYTE_MASK

#ifndef SIXTEEN_KILOBYTE_MASK
#define SIXTEEN_KILOBYTE_MASK 0x3FFF
#endif //SIXTEEN_KILOBYTE_MASK

#ifndef THIRTY_TWO_KILOBYTE_MASK
#define THIRTY_TWO_KILOBYTE_MASK 0x7FFF
#endif //THIRTY_TWO_KILOBYTE_MASK

#ifndef ONE_MEGABYTE_MASK
#define ONE_MEGABYTE_MASK  0xFFFFF
#endif //ONE_MEGABYTE_MASK

#ifndef TWO_MEGABYTE_MASK
#define TWO_MEGABYTE_MASK  0x1FFFFF
#endif //TWO_MEGABYTE_MASK

#ifndef FOUR_MEGABYTE_MASK
#define FOUR_MEGABYTE_MASK 0x3FFFFF
#endif //FOUR_MEGABYTE_MASK

#ifndef SIXTEEN_MEGABYTE_MASK
#define SIXTEEN_MEGABYTE_MASK 0xFFFFFF
#endif //SIXTEEN_MEGABYTE_MASK

#ifndef ONE_GIGABYTE_MASK
#define ONE_GIGABYTE_MASK  0x3FFFFFFF
#endif //ONE_GIGABYTE_MASK

#ifndef ONE_KILOBYTE_BIT_SHIFT
#define ONE_KILOBYTE_BIT_SHIFT        10
#endif //ONE_KILOBYTE_BIT_SHIFT

#ifndef FOUR_KILOBYTE_BIT_SHIFT
#define FOUR_KILOBYTE_BIT_SHIFT       12
#endif //FOUR_KILOBYTE_BIT_SHIFT

#ifndef SIXTEEN_KILOBYTE_BIT_SHIFT
#define SIXTEEN_KILOBYTE_BIT_SHIFT    14
#endif //SIXTEEN_KILOBYTE_BIT_SHIFT

#ifndef SIXTY_FOUR_KILOBYTE_BIT_SHIFT
#define SIXTY_FOUR_KILOBYTE_BIT_SHIFT 16
#endif //SIXTY_FOUR_KILOBYTE_BIT_SHIFT

#ifndef ONE_MEGABYTE_BIT_SHIFT
#define ONE_MEGABYTE_BIT_SHIFT        20
#endif //ONE_MEGABYTE_BIT_SHIFT

#ifndef TWO_MEGABYTE_BIT_SHIFT
#define TWO_MEGABYTE_BIT_SHIFT        21
#endif //TWO_MEGABYTE_BIT_SHIFT

#ifndef SIXTEEN_MEGABYTE_BIT_SHIFT
#define SIXTEEN_MEGABYTE_BIT_SHIFT    24
#endif //SIXTEEN_MEGABYTE_BIT_SHIFT

#ifndef ONE_GIGABYTE_BIT_SHIFT
#define ONE_GIGABYTE_BIT_SHIFT        30
#endif //ONE_GIGABYTE_BIT_SHIFT

#ifndef THUMB_ALIGNMENT
#define THUMB_ALIGNMENT 1
#endif //THUMB_ALIGNMENT

#ifndef ARM_ALIGNMENT
#define ARM_ALIGNMENT 2
#endif //ARM_ALIGNMENT

#ifndef UNUSED_VARIABLE
#define UNUSED_VARIABLE(a) \
	a = a
#endif //UNUSED_VARIABLE

#ifndef PACKED
#define PACKED __attribute__((packed))
#endif //PACKED

#ifndef NORETURN
#define NORETURN __attribute__((noreturn))
#endif //NORETURN

#ifndef REGPARAM
#define REGPARAM __attribute__((regparm(3)))
#endif //REGPARAM

#ifdef __ASSEMBLY__

#define VARIABLE(a) \
	.global a ; \
	a:

#define ENTRY_POINT(a) \
	.align ARM_ALIGNMENT ; \
	.global a ; \
	a:

#define FUNCTION(a) \
	.align ARM_ALIGNMENT ; \
	.global a ; \
	a:
	
#define LABEL(a) \
	.global a ; \
	a:

#define SECTION(a) \
	.section .a

#endif //__ASSEMBLY__

#endif //__DEFINES_H__
