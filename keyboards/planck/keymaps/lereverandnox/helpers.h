#pragma once
#include "lereverandnox.h"

#define SFT_NO 0
#define SFT_YES 1
#define CLOSE 1

void tap_key(uint16_t keycode);
void shift_key(uint16_t keycode);
void tap_pair(qk_tap_dance_state_t *state, uint8_t shift, uint16_t left, uint16_t right, uint16_t modifier, uint8_t close);
void symbol_pair(uint8_t shift, uint16_t left, uint16_t right);
