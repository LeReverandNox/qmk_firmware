/*
This is the c configuration file for the keymap

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

//#define USE_MATRIX_I2C

/* Select hand configuration */

#define MASTER_LEFT
// #define MASTER_RIGHT
// #define EE_HANDS

#define SSD1306OLED // (+5086)

#define USE_SERIAL_PD2

#ifdef RGBLIGHT_ENABLE
#undef RGBLED_NUM
/* #define RGBLIGHT_ANIMATIONS // (+5608) */
/* #define RGBLIGHT_EFFECT_RAINBOW_SWIRL // (+522) */
#define RGBLED_NUM 27
#define RGBLIGHT_LIMIT_VAL 120
#define RGBLIGHT_HUE_STEP 10
#define RGBLIGHT_SAT_STEP 17
#define RGBLIGHT_VAL_STEP 17
#define RGBLIGHT_SPLIT
#endif

// PERSO

#define IGNORE_MOD_TAP_INTERRUPT // (-12)
#define TAPPING_TERM 150
#define TAPPING_TERM_PER_KEY
// #define RETRO_TAPPING
// #define PERMISSIVE_HOLD

// Choose between OUTER_COLS (one additional column on each side filled with mods)
// or INNER_COLS (both columns in the middle)
// or OUTER_CLASSICAL (no mods column, everthing is used)
#define OUTER_CLASSICAL

// If you want to have hold modifiers on the home row. Love the idea, sooo convenient, but it's not easy to work with in reality...
// Either the TAPPING_TERM is too long, often getting "as" instead of "C-s"
// or is too short, causing to trigger unwanted mods while typing normally, quite dangerous.
// #define HOME_MODS

// This is an experiment, putting the mods one row below the home row.
// This is the less used row, especially in Dvorak, so it might work better, less prone to unwanted mods with shorter TAPPING_TERM
#define BELOW_HOME_MODS

// Firmware size reduction (https://thomasbaart.nl/2018/12/01/reducing-firmware-size-in-qmk/)
#ifndef NO_DEBUG
#define NO_DEBUG
#endif // !NO_DEBUG
#if !defined(NO_PRINT) && !defined(CONSOLE_ENABLE)
#define NO_PRINT
#endif // !NO_PRINT


#define NO_ACTION_MACRO
#define NO_ACTION_FUNCTION
/* #define NO_ACTION_LAYER	// (-1368) */
/* #define NO_ACTION_ONESHOT // (+382) */
/* #define NO_ACTION_TAPPING // (+2186) */
