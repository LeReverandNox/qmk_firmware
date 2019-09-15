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
