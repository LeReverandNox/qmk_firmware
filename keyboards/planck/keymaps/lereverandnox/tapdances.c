#include "tapdances.h"

#include "tapdances_handlers.h"

// clang-format off
//Tap Dance Definitions
qk_tap_dance_action_t tap_dance_actions[] = {
  //Tap once for Dot, twice for Colon
  [_DOT]  = ACTION_TAP_DANCE_DOUBLE(KC_DOT, KC_COLN),
  [_LBRC] = ACTION_TAP_DANCE_FN(lbrc_finish),
  [_RBRC] = ACTION_TAP_DANCE_FN(rbrc_finish),
  [_LCBR] = ACTION_TAP_DANCE_FN(lcbr_finish),
  [_RCBR] = ACTION_TAP_DANCE_FN(rcbr_finish),
  [_LPRN] = ACTION_TAP_DANCE_FN(lprn_finish),
  [_RPRN] = ACTION_TAP_DANCE_FN(rprn_finish),
  [_QUOT] = ACTION_TAP_DANCE_FN(quot_finish),
  [_DQUO] = ACTION_TAP_DANCE_FN(dquo_finish),
  [_SDQU] = ACTION_TAP_DANCE_FN(sdqu_finish),
  [_GRV] = ACTION_TAP_DANCE_FN(grv_finish),
  [_LABK] = ACTION_TAP_DANCE_FN(labk_finish),
  [_RABK] = ACTION_TAP_DANCE_FN(rabk_finish),
  [_LSFT] = ACTION_TAP_DANCE_FN_ADVANCED(NULL, lsft_finish, lsft_reset),
  [_RSFT] = ACTION_TAP_DANCE_FN_ADVANCED(NULL, rsft_finish, rsft_reset)
};
