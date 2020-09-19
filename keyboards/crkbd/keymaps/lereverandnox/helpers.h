#pragma once
#include "lereverandnox.h"
#include "lib/lib8tion/lib8tion.h"

#define SFT_NO 0
#define SFT_YES 1
#define CLOSE 1

void tap_key(uint16_t keycode);
void tap_shift_caps(qk_tap_dance_state_t *state, uint8_t shift);
void rgb_matrix_layer_helper(uint8_t hue, uint8_t sat, uint8_t val, uint8_t mode, uint8_t speed, uint8_t led_type);
