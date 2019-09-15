#pragma once
#include "lereverandnox.h"

enum planck_keycodes {
  QWERTY = SAFE_RANGE,
  DVORAK,
  PLOVER,
  BACKLIT,
  EXT_PLV,
  ALT_TAB,
  KC_MAKE
};

// Layers
#define NAV      MO(_NAV)
#define SYM      MO(_SYM)
#define NUM      MO(_NUM)
#define FN       MO(_FN)
#define ADJUST   MO(_ADJUST)
#define MOUSE_T  TG(_MOUSE)
#define MEDIA    MO(_MEDIA)

// Layer Tap
#ifdef OUTER_COLS
#    define LT_ESC LT(NAV, KC_ESC)
#    define LT_SPC LT(SYM, KC_SPC)
#    define LT_TAB LT(NUM, KC_TAB)
#    define LT_ENT LT(NUM, KC_ENT)
#    define LT_BSPC LT(SYM, KC_BSPC)
#    define LT_RALT LT(FN, KC_RALT)
#endif

#ifdef INNER_COLS
#    define LT_SPC LT(SYM, KC_SPC)
#    define LT_ESC LT(NUM, KC_ESC)
#    define LT_TAB LT(NAV, KC_TAB)
#    define LT_RALT LT(FN, KC_RALT)
#    define LT_ENT LT(NUM, KC_ENT)
#    define LT_BSPC LT(SYM, KC_BSPC)
#endif

#ifdef OUTER_CLASSICAL
#    define LT_TABG LT(MEDIA, KC_TAB)
#    define LT_TAB LT(NAV, KC_TAB)
#    define LT_SPC LT(NUM, KC_SPC)
#    define LT_ESC LT(SYM, KC_ESC)
#    define LT_ENT LT(NUM, KC_ENT)
#    define LT_BSPC LT(SYM, KC_BSPC)
#    define LT_RALT LT(FN, KC_RALT)
#endif

// Home mods
#ifdef HOME_MODS
// DVORAK
#    define DM_A CTL_T(KC_A)
#    define DM_O LGUI_T(KC_O)
#    define DM_E LALT_T(KC_E)
#    define DM_U LSFT_T(KC_U)
#    define DM_H RSFT_T(KC_H)
#    define DM_T LALT_T(KC_T)
#    define DM_N RGUI_T(KC_N)
#    define DM_S RCTL_T(KC_S)
// QWERTY
#    define QM_A CTL_T(KC_A)
#    define QM_S LGUI_T(KC_S)
#    define QM_D LALT_T(KC_D)
#    define QM_F LSFT_T(KC_F)
#    define QM_J RSFT_T(KC_J)
#    define QM_K LALT_T(KC_K)
#    define QM_L RGUI_T(KC_L)
#    define QM_SCLN RCTL_T(KC_SCLN)
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
#    define DM_M RSFT_T(KC_M)
#    define DM_W LALT_T(KC_W)
#    define DM_V RGUI_T(KC_V)
#    define DM_Z RCTL_T(KC_Z)
// QWERTY
#    define QM_Z CTL_T(KC_Z)
#    define QM_X LGUI_T(KC_X)
#    define QM_C LALT_T(KC_C)
#    define QM_V LSFT_T(KC_V)
#    define QM_M RSFT_T(KC_M)
#    define QM_COMM LALT_T(KC_COMM)
#    define QM_DOT RGUI_T(KC_DOT)
#    define QM_SLSH RCTL_T(KC_SLSH)
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

// Tapdances
#define TD_DOT   TD(_DOT)
#define TD_LBRC  TD(_LBRACE)

#define NKR_TOG MAGIC_TOGGLE_NKRO
