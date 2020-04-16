#include "tapdances_handlers.h"

void lbrc_finish(qk_tap_dance_state_t *state, void *user_data) { tap_pair(state, SFT_NO, KC_LBRC, KC_RBRC, 0, 0); }

void rbrc_finish(qk_tap_dance_state_t *state, void *user_data) { tap_pair(state, SFT_NO, KC_LBRC, KC_RBRC, 0, CLOSE); }

void lcbr_finish(qk_tap_dance_state_t *state, void *user_data) { tap_pair(state, SFT_YES, KC_LBRC, KC_RBRC, 0, 0); }

void rcbr_finish(qk_tap_dance_state_t *state, void *user_data) { tap_pair(state, SFT_YES, KC_LBRC, KC_RBRC, 0, CLOSE); }

void lprn_finish(qk_tap_dance_state_t *state, void *user_data) { tap_pair(state, SFT_YES, KC_9, KC_0, 0, 0); }

void rprn_finish(qk_tap_dance_state_t *state, void *user_data) { tap_pair(state, SFT_YES, KC_9, KC_0, 0, CLOSE); }

void quot_finish(qk_tap_dance_state_t *state, void *user_data) { tap_pair(state, SFT_NO, KC_QUOT, KC_QUOT, 0, 0); }

void dquo_finish(qk_tap_dance_state_t *state, void *user_data) { tap_pair(state, SFT_YES, KC_QUOT, KC_QUOT, 0, 0); }

void sdqu_finish(qk_tap_dance_state_t *state, void *user_data) {
    uint8_t mods      = get_mods();
    uint8_t weak_mods = get_weak_mods();

    if (mods & MOD_MASK_SHIFT) {
        clear_mods();
        clear_weak_mods();
        dquo_finish(state, user_data);
        set_mods(mods);
        set_weak_mods(weak_mods);
    } else
        quot_finish(state, user_data);
}

void grv_finish(qk_tap_dance_state_t *state, void *user_data) { tap_pair(state, SFT_NO, KC_GRV, KC_GRV, 0, 0); }

void labk_finish(qk_tap_dance_state_t *state, void *user_data) {
    if (state->count == 2) {
        shift_key(KC_COMM);
        tap_key(KC_MINS);
    } else {
        tap_pair(state, SFT_YES, KC_COMM, KC_DOT, 0, 0);
    }
}

void rabk_finish(qk_tap_dance_state_t *state, void *user_data) {
    if (state->count == 2) {
        tap_key(KC_MINS);
        shift_key(KC_DOT);
    } else {
        tap_pair(state, SFT_YES, KC_COMM, KC_DOT, 0, CLOSE);
    }
}

void lsft_finish(qk_tap_dance_state_t *state, void *user_data) { tap_shift_caps(state, KC_LSFT); }

void lsft_reset(qk_tap_dance_state_t *state, void *user_data) { unregister_code(KC_LSFT); }

void rsft_finish(qk_tap_dance_state_t *state, void *user_data) { tap_shift_caps(state, KC_RSFT); }

void rsft_reset(qk_tap_dance_state_t *state, void *user_data) { unregister_code(KC_RSFT); }
