#include "tapdances_handlers.h"

void lbrc_finish(qk_tap_dance_state_t *state, void *user_data)
{
  tap_pair(state, SFT_NO, KC_LBRC, KC_RBRC, 0, 0);
}

void rbrc_finish(qk_tap_dance_state_t *state, void *user_data)
{
  tap_pair(state, SFT_NO, KC_LBRC, KC_RBRC, 0, CLOSE);
}

void lcbr_finish(qk_tap_dance_state_t *state, void *user_data)
{
  tap_pair(state, SFT_YES, KC_LBRC, KC_RBRC, 0, 0);
}

void rcbr_finish(qk_tap_dance_state_t *state, void *user_data)
{
  tap_pair(state, SFT_YES, KC_LBRC, KC_RBRC, 0, CLOSE);
}

void lprn_finish(qk_tap_dance_state_t *state, void *user_data)
{
  tap_pair(state, SFT_YES, KC_9, KC_0, 0, 0);
}

void rprn_finish(qk_tap_dance_state_t *state, void *user_data)
{
  tap_pair(state, SFT_YES, KC_9, KC_0, 0, CLOSE);
}

void quot_finish(qk_tap_dance_state_t *state, void *user_data)
{
  tap_pair(state, SFT_NO, KC_QUOT, KC_QUOT, 0, 0);
}

void dquo_finish(qk_tap_dance_state_t *state, void *user_data)
{
  tap_pair(state, SFT_YES, KC_QUOT, KC_QUOT, 0, CLOSE);
}

