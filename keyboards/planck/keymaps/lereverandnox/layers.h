#pragma once

// clang-format off
enum planck_layers {
  _QWERTY = 0,
  _DVORAK,
  _GAMING,
  _GAMING_RAISE,
  _GAMING_LOWER,
  _GAMING_ADJUST,
  _MOUSE,
  _NAV,
  _SYM,
  _NUM,
#ifdef PLOVER_ENABLED
  _PLOVER,
#endif
  _MUSIC,
  _MEDIA,
  _ADJUST
};
