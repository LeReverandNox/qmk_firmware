#pragma once
#include "lereverandnox.h"

enum planck_keycodes {
    QWERTY = SAFE_RANGE,
    DVORAK,
    GAMING,
    PLOVER,
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
#ifdef OUTER_COLS
#    define LT_ESC LT(NAV, KC_ESC)
#    define LT_SPC LT(SYM, KC_SPC)
#    define LT_TAB LT(NUM, KC_TAB)
#    define LT_ENT LT(NUM, KC_ENT)
#    define LT_BSPC LT(SYM, KC_BSPC)
#endif

#ifdef INNER_COLS
#    define LT_SPC LT(SYM, KC_SPC)
#    define LT_ESC LT(NUM, KC_ESC)
#    define LT_TAB LT(NAV, KC_TAB)
#    define LT_ENT LT(NUM, KC_ENT)
#    define LT_BSPC LT(SYM, KC_BSPC)
#endif

#ifdef OUTER_CLASSICAL
#    define LT_TABG LT(MEDIA, KC_TAB)
#    define LT_ESCG LT(MEDIA, KC_ESC)
#    define LT_TAB LT(NAV, KC_TAB)
#    define LT_SPC LT(SYM, KC_SPC)
#    define LT_ESC LT(SYM, KC_ESC)
#    define LT_ENT LT(NUM, KC_ENT)
#    define LT_BSPC LT(NUM, KC_BSPC)
#endif

// Home mods
#ifdef HOME_MODS
// DVORAK
#    define DM_A CTL_T(KC_A)
#    define DM_O LGUI_T(KC_O)
#    define DM_E LALT_T(KC_E)
#    define DM_U LSFT_T(KC_U)
#    define DM_H LSFT_T(KC_H)
#    define DM_T LALT_T(KC_T)
#    define DM_N LGUI_T(KC_N)
#    define DM_S LCTL_T(KC_S)
// QWERTY
#    define QM_A CTL_T(KC_A)
#    define QM_S LGUI_T(KC_S)
#    define QM_D LALT_T(KC_D)
#    define QM_F LSFT_T(KC_F)
#    define QM_J LSFT_T(KC_J)
#    define QM_K LALT_T(KC_K)
#    define QM_L LGUI_T(KC_L)
#    define QM_SCLN LCTL_T(KC_SCLN)
#else
#    define DM_A KC_A
#    define DM_O KC_O
#    define DM_E KC_E
#    define DM_U KC_U
#    define DM_H KC_H
#    define DM_T KC_T
#    define DM_N KC_N
#    define DM_S KC_S
// QWERTY
#    define QM_A KC_A
#    define QM_S KC_S
#    define QM_D KC_D
#    define QM_F KC_F
#    define QM_J KC_J
#    define QM_K KC_K
#    define QM_L KC_L
#    define QM_SCLN KC_SCLN
#endif

// Below-Home mods
#ifdef BELOW_HOME_MODS
// DVORAK
#    define DM_SCLN CTL_T(KC_SCLN)
#    define DM_Q LGUI_T(KC_Q)
#    define DM_J LALT_T(KC_J)
#    define DM_K LSFT_T(KC_K)
#    define DM_M LSFT_T(KC_M)
#    define DM_W LALT_T(KC_W)
#    define DM_V LGUI_T(KC_V)
#    define DM_Z LCTL_T(KC_Z)
// QWERTY
#    define QM_Z CTL_T(KC_Z)
#    define QM_X LGUI_T(KC_X)
#    define QM_C LALT_T(KC_C)
#    define QM_V LSFT_T(KC_V)
#    define QM_M LSFT_T(KC_M)
#    define QM_COMM LALT_T(KC_COMM)
#    define QM_DOT LGUI_T(KC_DOT)
#    define QM_SLSH LCTL_T(KC_SLSH)
#else
// DVORAK
#    define DM_SCLN KC_SCLN
#    define DM_Q KC_Q
#    define DM_J KC_J
#    define DM_K KC_K
#    define DM_M KC_M
#    define DM_W KC_W
#    define DM_V KC_V
#    define DM_Z KC_Z
// QWERTY
#    define QM_Z KC_Z
#    define QM_X KC_X
#    define QM_C KC_C
#    define QM_V KC_V
#    define QM_M KC_M
#    define QM_COMM KC_COMM
#    define QM_DOT KC_DOT
#    define QM_SLSH KC_SLSH
#endif

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

#define TABPREV LCTL(KC_PGUP)
#define TABNEXT LCTL(KC_PGDN)
