#pragma once
#include "lereverandnox.h"

void tap_key(uint16_t keycode);
#ifdef TAP_DANCE_ENABLE
void tap_shift_caps(tap_dance_state_t*state, uint8_t shift);
#endif // TAP_DANCE_ENABLE
void unregister_code_mods(uint8_t mods);
