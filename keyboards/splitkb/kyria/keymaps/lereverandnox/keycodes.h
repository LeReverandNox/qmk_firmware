#pragma once
#include "lereverandnox.h"

enum keycodes {
    QWERTY = SAFE_RANGE,
    DVORAK,
    CLMKDH,
    KC_MAKE,
    KC_SEC1,
    KC_SEC2,
    KC_SEC3,
    KC_SEC4,
    KC_SEC5,
};

// Layers
#define NAV     MO(_NAV)
#define SYM     MO(_SYM)
#define NUM     MO(_NUM)
#define ADJUST  MO(_ADJUST)
#ifdef MOUSEKEY_ENABLE
#define MOUSE_T TG(_MOUSE)
#endif // MOUSEKEY_ENABLE
#define MEDIA   MO(_MEDIA)

// Layer Tap
#define LT_ESCG LT(MEDIA, KC_ESC)
#define LT_TAB LT(NAV, KC_TAB)

// Below-Home mods
// DVORAK
#define DM_SCLN LCTL_T(KC_SCLN)
#define DM_Q    LGUI_T(KC_Q)
#define DM_J    LALT_T(KC_J)
#define DM_K    LSFT_T(KC_K)
#define DM_M    RSFT_T(KC_M)
#define DM_W    LALT_T(KC_W)
#define DM_V    RGUI_T(KC_V)
#define DM_Z    RCTL_T(KC_Z)
// QWERTY
#define QM_Z    LCTL_T(KC_Z)
#define QM_X    LGUI_T(KC_X)
#define QM_C    LALT_T(KC_C)
#define QM_V    LSFT_T(KC_V)
#define QM_M    RSFT_T(KC_M)
#define QM_COMM LALT_T(KC_COMM)
#define QM_DOT  RGUI_T(KC_DOT)
#define QM_SLSH RCTL_T(KC_SLSH)
// COLEMAK-DH
#define CM_Z    LCTL_T(KC_Z)
#define CM_X    LGUI_T(KC_X)
#define CM_C    LALT_T(KC_C)
#define CM_D    LSFT_T(KC_D)
#define CM_H    RSFT_T(KC_H)
#define CM_COMM LALT_T(KC_COMM)
#define CM_DOT  RGUI_T(KC_DOT)
#define CM_SLSH RCTL_T(KC_SLSH)

#define NKR_TOG MAGIC_TOGGLE_NKRO

// Encoder button
#define BAS_EN1 KC_MPLY
#define BAS_EN2 KC_MPLY
#define NUM_EN1 XXXXXXX
#define NUM_EN2 XXXXXXX
#define SYM_EN1 KC_MUTE
#define SYM_EN2 KC_MUTE
#define MOU_EN1 XXXXXXX
#define MOU_EN2 XXXXXXX
#define MED_EN1 XXXXXXX
#define MED_EN2 XXXXXXX
#define NAV_EN1 XXXXXXX
#define NAV_EN2 XXXXXXX
#define ADJ_EN1 XXXXXXX
#define ADJ_EN2 XXXXXXX

#define TABPREV LCTL(KC_PGUP)
#define TABNEXT LCTL(KC_PGDN)
