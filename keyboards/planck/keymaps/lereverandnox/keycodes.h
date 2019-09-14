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
#ifdef INNER_COLS
#define LT_ESC   LT(NAV, KC_ESC)
#define LT_SPC   LT(SYM, KC_SPC)
#define LT_TAB   LT(NUM, KC_TAB)
#define LT_ENT   LT(NUM, KC_ENT)
#define LT_BSPC  LT(SYM, KC_BSPC)
#define LT_RALT  LT(FN,  KC_RALT)
#endif

#ifdef OUTER_COLS
#define LT_SPC   LT(SYM, KC_SPC)
#define LT_ESC   LT(NUM, KC_ESC)
#define LT_TAB   LT(NAV, KC_TAB)
#define LT_RALT  LT(FN,  KC_RALT)
#define LT_ENT   LT(NUM, KC_ENT)
#define LT_BSPC  LT(SYM, KC_BSPC)
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

// DVORAK
#define HOME_AD  CTL_T(KC_A)
#define HOME_OD  LGUI_T(KC_O)
#define HOME_ED  LALT_T(KC_E)
#define HOME_UD  LSFT_T(KC_U)
#define HOME_HD  RSFT_T(KC_H)
#define HOME_TD  LALT_T(KC_T)
#define HOME_ND  RGUI_T(KC_N)
#define HOME_SD  RCTL_T(KC_S)
// QWERTY
#define HOME_AQ  CTL_T(KC_A)
#define HOME_SQ  LGUI_T(KC_S)
#define HOME_DQ  LALT_T(KC_D)
#define HOME_FQ  LSFT_T(KC_F)
#define HOME_JQ  RSFT_T(KC_J)
#define HOME_KQ  LALT_T(KC_K)
#define HOME_LQ  RGUI_T(KC_L)
#define HOME_SC  RCTL_T(KC_SCLN)

// Ose-shot mods
#define OS_LALT  OSM(MOD_LALT)
#define OS_RGUI  OSM(MOD_RGUI)
#define OS_RCTL  OSM(MOD_RCTL)

// Tapdances
#define TD_DOT   TD(_DOT)

#define NKR_TOG MAGIC_TOGGLE_NKRO
