#pragma once

#include "lereverandnox.h"
#include "process_record_handlers.h"

bool process_record_user(uint16_t keycode, keyrecord_t *record);
void matrix_scan_user(void);
void matrix_init_user(void);
uint16_t get_tapping_term(uint16_t keycode, keyrecord_t *record);
layer_state_t layer_state_set_user(layer_state_t state);
void rgb_matrix_indicators_user(void);

#ifdef OLED_ENABLE
oled_rotation_t oled_init_user(oled_rotation_t rotation);
void oled_render_layer_state(void);
void set_keylog(uint16_t keycode, keyrecord_t *record);
void oled_render_keylog(void);
void render_bootmagic_status(bool status);
void oled_render_logo(void);
bool oled_task_user(void);
bool process_record_user(uint16_t keycode, keyrecord_t *record);
#endif // OLED_ENABLE
