#pragma once

#include "lereverandnox.h"
#include "process_record_handlers.h"

bool process_record_user(uint16_t keycode, keyrecord_t *record);
void matrix_scan_user(void);
layer_state_t layer_state_set_user(layer_state_t state);
bool music_mask_user(uint16_t keycode);
void keyboard_post_init_user(void);
uint16_t get_tapping_term(uint16_t keycode);
