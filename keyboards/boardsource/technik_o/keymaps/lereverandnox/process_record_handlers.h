#pragma once

#include "lereverandnox.h"

bool QWERTY_handler(keyrecord_t *record);
bool DVORAK_handler(keyrecord_t *record);
bool COLEMAKDH_handler(keyrecord_t *record);
bool KC_MAKE_handler(keyrecord_t *record);
bool KC_CAPS_handler(keyrecord_t *record);
bool GUI_OFF_handler(keyrecord_t *record);
bool GUI_ON_handler(keyrecord_t *record);
#ifdef GAMING_ENABLE
bool GAMING_handler(keyrecord_t *record);
bool EXT_GAM_handler(keyrecord_t *record);
#endif // GAMING_ENABLE
#ifdef PLOVER_ENABLED
bool PLOVER_handler(keyrecord_t *record);
bool EXT_PLV_handler(keyrecord_t *record);
#endif // PLOVER_ENABLED
#ifdef MOUSEKEY_ENABLE
bool MOUSE_T_handler(keyrecord_t *record);
#endif // MOUSEKEY_ENABLE
#ifdef UNICODE_ENABLE
bool KC_SHRG_handler(keyrecord_t *record);
#endif // UNICODE_ENABLE
