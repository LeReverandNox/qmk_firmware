#pragma once

#include "lereverandnox.h"
#include "process_record_handlers.h"

bool          process_record_user(uint16_t keycode, keyrecord_t *record);
bool          process_record_secrets(uint16_t keycode, keyrecord_t *record);
void          matrix_scan_user(void);
layer_state_t layer_state_set_user(layer_state_t state);
void          keyboard_post_init_user(void);
uint16_t      get_tapping_term(uint16_t keycode, keyrecord_t *record);

#ifdef ENCODER_ENABLE
bool          encoder_update_user(uint8_t index, bool clockwise);
const uint16_t PROGMEM encoder_actions[][15];
#endif // ENCODER_ENABLE
