#pragma once

// clang-format off
enum layers {
  _COLEMAKDH = 0,
  _QWERTY,
  _DVORAK,
#ifdef GAMING_ENABLE
  _GAMING,
  _GAMING_LOWER,
  _GAMING_RAISE,
  _GAMING_ADJUST,
#endif // GAMING_ENABLE
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
