#pragma once

#include "lereverandnox.h"
#include "process_record_handlers.h"

bool          process_record_user(uint16_t keycode, keyrecord_t *record);
bool          process_record_secrets(uint16_t keycode, keyrecord_t *record);
layer_state_t layer_state_set_user(layer_state_t state);
uint16_t      get_tapping_term(uint16_t keycode, keyrecord_t *record);

const uint16_t PROGMEM encoder_actions[][15];
