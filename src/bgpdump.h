/*
 * Bgpdump2: A Tool to Read and Compare the BGP RIB Dump Files.
 * Copyright (C) 2015.  Yasuhiro Ohara <yasu@nttv6.jp>
 *
 * This program is free software: you can redistribute it and/or modify it
 * under the terms of the GNU General Public License as published by the
 * Free Software Foundation, either version 3 of the License, or (at your
 * option) any later version.
 *
 * This program is distributed in the hope that it will be useful, but
 * WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the GNU
 * General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License along
 * with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#ifndef _BGPDUMP_H_
#define _BGPDUMP_H_

#ifndef MIN
#define MIN(x, y) ((x) > (y) ? (y) : (x))
#endif /*MIN*/

#define AUTLIM 8
extern unsigned long autnums[];
extern int autsiz;

extern struct ptree *ptree[];
#define ROUTE_ORIG_SIZE (1000 * 1000 * 1000)
extern int route_orig_size;

extern int safi;
extern int qaf;
#define MAX_ADDR_LENGTH 16

static inline int16_t
btoi16(char *p)
{
	int16_t x;
	memcpy(&x, p, sizeof(x));
	return x;
}

static inline int32_t
btoi32(char *p)
{
	int32_t x;
	memcpy(&x, p, sizeof(x));
	return x;
}

#endif /*_BGPDUMP_H_*/

