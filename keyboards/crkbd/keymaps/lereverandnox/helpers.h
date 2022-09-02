#pragma once
#include "lereverandnox.h"

void tap_key(uint16_t keycode);
#ifdef TAP_DANCE_ENABLE
void tap_shift_caps(qk_tap_dance_state_t *state, uint8_t shift);
#endif
/* void rgb_matrix_layer_helper(uint8_t hue, uint8_t sat, uint8_t val, uint8_t mode, uint8_t speed, uint8_t led_type); */
