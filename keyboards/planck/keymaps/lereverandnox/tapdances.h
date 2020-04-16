#pragma once

#include "lereverandnox.h"

// clang-format off
enum tap_dances {
  _DOT = 0,
  _LBRC,
  _RBRC,
  _LCBR,
  _RCBR,
  _LPRN,
  _RPRN,
  _QUOT,
  _DQUO,
  _SDQU,
  _GRV,
  _LABK,
  _RABK,
  _LSFT,
  _RSFT
};
// clang-format on

#define TD_DOT TD(_DOT)
#define TD_LBRC TD(_LBRC)
#define TD_RBRC TD(_RBRC)
#define TD_LCBR TD(_LCBR)
#define TD_RCBR TD(_RCBR)
#define TD_LPRN TD(_LPRN)
#define TD_RPRN TD(_RPRN)
#define TD_QUOT TD(_QUOT)
#define TD_DQUO TD(_DQUO)
#define TD_SDQU TD(_SDQU)
#define TD_GRV TD(_GRV)
#define TD_LABK TD(_LABK)
#define TD_RABK TD(_RABK)
#define TD_GRV TD(_GRV)
#define TD_LSFT TD(_LSFT)
#define TD_RSFT TD(_RSFT)
