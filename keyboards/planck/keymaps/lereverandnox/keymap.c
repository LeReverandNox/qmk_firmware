/* Copyright 2015-2017 Jack Humbert
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#include "lereverandnox.h"

extern keymap_config_t keymap_config;

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
#include "layers/qwerty_layer.h"
#include "layers/dvorak_layer.h"
#include "layers/gaming_layer.h"
#include "layers/nav_layer.h"
#include "layers/sym_layer.h"
#include "layers/num_layer.h"
#include "layers/fn_layer.h"
#include "layers/plover_layer.h"
#include "layers/adjust_layer.h"
#include "layers/music_layer.h"
#include "layers/media_layer.h"
#include "layers/mouse_layer.h"
};

