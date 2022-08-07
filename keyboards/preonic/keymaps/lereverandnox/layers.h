#pragma once

// clang-format off
enum preonic_layers {
  _DVORAK = 0,
  _QWERTY,
  _COLEMAKDH,
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
