#pragma once

// clang-format off
enum layers {
  _DVORAK = 0,
  _QWERTY,
  _COLEMAKDH,
#ifdef GAMING_ENABLE
  _GAMING,
  _GAMING_RAISE,
  _GAMING_LOWER,
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
#ifdef AUDIO_ENABLE
  _MUSIC,
#endif // AUDIO_ENABLE
#ifdef MOUSEKEY_ENABLE
  _MOUSE
#endif // MOUSEKEY_ENABLE
};
