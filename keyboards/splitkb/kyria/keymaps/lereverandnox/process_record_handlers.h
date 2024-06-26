#pragma once

#include "lereverandnox.h"

bool QWERTY_handler(keyrecord_t *record);
bool DVORAK_handler(keyrecord_t *record);
bool COLEMAKDH_handler(keyrecord_t *record);
#ifdef MOUSEKEY_ENABLE
bool MOUSE_T_handler(keyrecord_t *record);
#endif // MOUSEKEY_ENABLE
bool KC_MAKE_handler(keyrecord_t *record);
bool KC_CAPS_handler(keyrecord_t *record);
