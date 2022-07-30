#pragma once
#include "lereverandnox.h"

void tap_key(uint16_t keycode);
void tap_shift_caps(qk_tap_dance_state_t *state, uint8_t shift);
void unregister_code_mods(uint8_t mods);
