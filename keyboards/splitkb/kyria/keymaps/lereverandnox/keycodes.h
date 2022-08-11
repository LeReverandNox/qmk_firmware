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
#define NAV MO(_NAV)
#define SYM MO(_SYM)
#define NUM MO(_NUM)
#define ADJUST MO(_ADJUST)
#define MOUSE_T TG(_MOUSE)
#define MEDIA MO(_MEDIA)

// Layer Tap
#define LT_TABG LT(MEDIA, KC_TAB)
#define LT_ESCG LT(MEDIA, KC_ESC)
#define LT_TAB LT(NAV, KC_TAB)
#define LT_SPC LT(SYM, KC_SPC)
#define LT_ESC LT(SYM, KC_ESC)
#define LT_ENT LT(NUM, KC_ENT)
#define LT_BSPC LT(NUM, KC_BSPC)

// Below-Home mods
// DVORAK
#define DM_SCLN CTL_T(KC_SCLN)
#define DM_Q LGUI_T(KC_Q)
#define DM_J LALT_T(KC_J)
#define DM_K LSFT_T(KC_K)
#define DM_M LSFT_T(KC_M)
#define DM_W LALT_T(KC_W)
#define DM_V LGUI_T(KC_V)
#define DM_Z LCTL_T(KC_Z)
// QWERTY
#define QM_Z CTL_T(KC_Z)
#define QM_X LGUI_T(KC_X)
#define QM_C LALT_T(KC_C)
#define QM_V LSFT_T(KC_V)
#define QM_M LSFT_T(KC_M)
#define QM_COMM LALT_T(KC_COMM)
#define QM_DOT LGUI_T(KC_DOT)
#define QM_SLSH LCTL_T(KC_SLSH)
// COLEMAK-DH
#define CM_Z CTL_T(KC_Z)
#define CM_X LGUI_T(KC_X)
#define CM_C LALT_T(KC_C)
#define CM_D LSFT_T(KC_D)
#define CM_H LSFT_T(KC_H)
#define CM_COMM LALT_T(KC_COMM)
#define CM_DOT LGUI_T(KC_DOT)
#define CM_SLSH LCTL_T(KC_SLSH)

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
