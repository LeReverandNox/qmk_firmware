#include "tapdances_handlers.h"

void lsft_finish(tap_dance_state_t *state, void *user_data) { tap_shift_caps(state, KC_LSFT); }

void lsft_reset(tap_dance_state_t *state, void *user_data) { unregister_code(KC_LSFT); }

void rsft_finish(tap_dance_state_t *state, void *user_data) { tap_shift_caps(state, KC_RSFT); }

void rsft_reset(tap_dance_state_t *state, void *user_data) { unregister_code(KC_RSFT); }
