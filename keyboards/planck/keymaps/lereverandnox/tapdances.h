#pragma once

#include "lereverandnox.h"

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
  _GRV
};

#define TD_DOT   TD(_DOT)
#define TD_LBRC  TD(_LBRC)
#define TD_RBRC  TD(_RBRC)
#define TD_LCBR  TD(_LCBR)
#define TD_RCBR  TD(_RCBR)
#define TD_LPRN  TD(_LPRN)
#define TD_RPRN  TD(_RPRN)
#define TD_QUOT  TD(_QUOT)
#define TD_DQUO  TD(_DQUO)
#define TD_SDQU  TD(_SDQU)
#define TD_GRV  TD(_GRV)
