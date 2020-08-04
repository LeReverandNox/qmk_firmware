#pragma once

#include "lereverandnox.h"
#include "process_record_handlers.h"

bool process_record_user(uint16_t keycode, keyrecord_t *record);
void matrix_scan_user(void);
void matrix_init_user(void);
uint16_t get_tapping_term(uint16_t keycode);
layer_state_t layer_state_set_user(layer_state_t state);
void rgb_matrix_indicators_user(void);

//SSD1306 OLED update loop, make sure to add #define SSD1306OLED in config.h
#ifdef SSD1306OLED

// When add source files to SRC in rules.mk, you can use functions.
const char *read_layer_state(void);
const char *read_logo(void);
void set_keylog(uint16_t keycode, keyrecord_t *record);
const char *read_keylog(void);
const char *read_keylogs(void);

const char *read_mode_icon(bool swap);
const char *read_host_led_state(void);
void set_timelog(void);
const char *read_timelog(void);
const char *read_rgb_info(void);

void matrix_render_user(struct CharacterMatrix *matrix);
void matrix_update(struct CharacterMatrix *dest, const struct CharacterMatrix *source);
void iota_gfx_task_user(void);

#endif//SSD1306OLED
