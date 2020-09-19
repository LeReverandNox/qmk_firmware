#include "tapdances.h"

#include "tapdances_handlers.h"

//Tap Dance Definitions
qk_tap_dance_action_t tap_dance_actions[] = {
  //Tap once for Dot, twice for Colon
  [_LSFT] = ACTION_TAP_DANCE_FN_ADVANCED(NULL, lsft_finish, lsft_reset),
  [_RSFT] = ACTION_TAP_DANCE_FN_ADVANCED(NULL, rsft_finish, rsft_reset)
};
