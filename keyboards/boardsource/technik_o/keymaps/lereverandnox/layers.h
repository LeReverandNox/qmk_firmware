#pragma once

// clang-format off
enum layers {
  _QWERTY = 0,
  _DVORAK,
  _COLEMAKDH,
#ifdef GAMING_DVORAK
  _GAMING,
  _GAMING_LOWER,
  _GAMING_RAISE,
  _GAMING_ADJUST,
#endif // GAMING_DVORAK
  _NAV,
  _SYM,
  _NUM,
  _MEDIA,
  _ADJUST,
#ifdef PLOVER_ENABLED
  _PLOVER,
#endif // PLOVER_ENABLED
#ifdef MOUSEKEY_ENABLE
  _MOUSE
#endif // MOUSEKEY_ENABLE
};
