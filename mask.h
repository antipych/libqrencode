/*
 * qrencode - QR Code encoder
 *
 * Masking.
 * Copyright (C) 2006,2007 Kentaro Fukuchi <fukuchi@megaui.net>
 *
 * This library is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Lesser General Public
 * License as published by the Free Software Foundation; either
 * version 2.1 of the License, or any later version.
 *
 * This library is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the GNU
 * Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public
 * License along with this library; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA 02110-1301 USA
 */

#ifndef __MASK_H__
#define __MASK_H__

#include "qrinput.h"

extern unsigned char *Mask_makeMask(int width, unsigned char *frame, int mask);
extern int Mask_evaluateSymbol(int width, unsigned char *frame);
extern unsigned char *Mask_mask(int width, unsigned char *frame, QRecLevel level);

#endif /* __MASK_H__ */