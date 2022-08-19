#pragma once
#include "lereverandnox.h"

enum planck_keycodes {
    QWERTY = SAFE_RANGE,
    DVORAK,
    CLMKDH,
    GAMING,
#ifdef PLOVER_ENABLED
    PLOVER,
#endif
    EXT_PLV,
    EXT_GAM,
    KC_MAKE,
    TIMBR_1,
    TIMBR_2,
    TIMBR_3,
    TIMBR_4,
    TEMP_UP,
    TEMP_DN,
    TEMP_DF,
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
#define G_RAISE MO(_GAMING_RAISE)
#define G_LOWER MO(_GAMING_LOWER)

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

// Ose-shot mods
#define OS_LALT OSM(MOD_LALT)
#define OS_RGUI OSM(MOD_RGUI)
#define OS_RCTL OSM(MOD_RCTL)
#define OS_LSFT OSM(MOD_LSFT)
#define OS_RSFT OSM(MOD_RSFT)

#define NKR_TOG MAGIC_TOGGLE_NKRO

// Encoder button
#define BAS_ENC KC_MPLY
#define NUM_ENC XXXXXXX
#define SYM_ENC KC_MUTE
#define MOU_ENC XXXXXXX
#define MED_ENC XXXXXXX
#define NAV_ENC XXXXXXX
#define ADJ_ENC XXXXXXX

#define TABPREV LCTL(KC_PGUP)
#define TABNEXT LCTL(KC_PGDN)
