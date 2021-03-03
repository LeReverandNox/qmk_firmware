#include "tapdances_handlers.h"

void lsft_finish(qk_tap_dance_state_t *state, void *user_data) { tap_shift_caps(state, KC_LSFT); }

void lsft_reset(qk_tap_dance_state_t *state, void *user_data) { unregister_code(KC_LSFT); }

void rsft_finish(qk_tap_dance_state_t *state, void *user_data) { tap_shift_caps(state, KC_RSFT); }

void rsft_reset(qk_tap_dance_state_t *state, void *user_data) { unregister_code(KC_RSFT); }
