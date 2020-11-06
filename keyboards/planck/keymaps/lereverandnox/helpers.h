#pragma once
#include "lereverandnox.h"

#define SFT_NO 0
#define SFT_YES 1
#define CLOSE 1

void tap_key(uint16_t keycode);
void tap_shift_caps(qk_tap_dance_state_t *state, uint8_t shift);
void unregister_code_mods(uint8_t mods);
