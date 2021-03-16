/*
Copyright 2012 Jun Wako <wakojun@gmail.com>
Copyright 2015 Jack Humbert

This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 2 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

#pragma once

#include "config_common.h"

/* USB Device descriptor parameter */
#define PRODUCT		ErgoSplit-Doehring-42

/* key matrix size */
// Rows are doubled-up
#define MATRIX_ROWS 10
#define MATRIX_COLS 5

// wiring of each half
#define MATRIX_ROW_PINS { F7, B1, B3, B2, B6 }
#define MATRIX_COL_PINS { C6, D7, E6, B4, B5 }

#define DIODE_DIRECTION COL2ROW

/* define if matrix has ghost */
//#define MATRIX_HAS_GHOST

// WS2812 RGB LED strip input and number of LEDs
#define RGB_DI_PIN D3
#define RGBLED_NUM 42

#define RGBLED_SPLIT {21,21}

// enable all animation modes
#define RGBLIGHT_ANIMATIONS
//
// enable different colors on layers
#define RGBLIGHT_LAYERS

/* number of backlight levels */
// #define BACKLIGHT_LEVELS 3
#define TAPPING_TERM 180
#define TAPPING_TERM_PER_KEY


#define PERMISSIVE_HOLD
#define IGNORE_MOD_TAP_INTERRUPT
