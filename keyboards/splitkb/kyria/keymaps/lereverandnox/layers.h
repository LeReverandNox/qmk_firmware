#pragma once

// clang-format off
enum layers {
  _QWERTY = 0,
  _DVORAK,
  _COLEMAKDH,
#ifdef MOUSEKEY_ENABLE
  _MOUSE,
#endif
  _NAV,
  _SYM,
  _NUM,
  _MEDIA,
  _ADJUST
};
