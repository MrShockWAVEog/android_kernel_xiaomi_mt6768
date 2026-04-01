/*
 * Copyright (C) 2016 MediaTek Inc.
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 as
 * published by the Free Software Foundation.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
 * See http://www.gnu.org/licenses/gpl-2.0.html for more details.
 */

#ifndef TPD_FAT_TOUCH
#define TPD_FAT_TOUCH 120
#endif

#define TOUCH_MAX_NUM 10
#define USE_TPD_BUTTON 0
#define TPD_RESOLUTION_WIDTH 1080
#define TPD_RESOLUTION_HEIGHT 2340
#define TOUCH_FILTER 0
#define PIXEL_DENSITY 168

int tpd_trembling_tolerance(int t, int p);
