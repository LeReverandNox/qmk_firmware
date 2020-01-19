// clang-format off
#ifdef OUTER_COLS
// +-------+------+-----+-----+-------+-----+-------+-------+------+-----+------+-------+
// | Mouse |   '  |  ,  |  .  |   P   |  Y  |   F   |   G   |   C  |  R  |   L  | Mouse |
// +-------+------+-----+-----+-------+-----+-------+-------+------+-----+------+-------+
// | Media |   A  |  O  |  E  |   U   |  I  |   D   |   H   |  T   |  N  |   S  |       |
// |       | Ctrl | GUI | Alt | Shift |     |       | Shift |  Alt | GUI | Ctrl |       |
// +-------+------+-----+-----+-------+-----+-------+-------+------+-----+------+-------+
// |       |   ;  |  Q  |  J  |   K   |  X  |   B   |   M   |   W  |  V  |   Z  |       |
// +-------+------+-----+-----+-------+-----+-------+-------+------+-----+------+-------+
// |       |      |     | Esc | Space | Tab | Enter | Bkspc | RAlt |     |      |       |
// |       |      |     | Nav |  Sym  | Num |  Num  |  Sym  |  Fn  |     |      |       |
// +-------+------+-----+-----+-------+-----+-------+-------+------+-----+------+-------+

[_DVORAK] = LAYOUT(
    MOUSE_T, KC_QUOT, KC_COMM, KC_DOT, KC_P,   KC_Y,   KC_F,   KC_G,    KC_C,   KC_R, KC_L, MOUSE_T,
    MEDIA,   DM_A,    DM_O,    DM_E,   DM_U,   KC_I,   KC_D,   DM_H,    DM_T,   DM_N, DM_S, XXXXXXX,
    XXXXXXX, KC_SCLN, KC_Q,    KC_J,   KC_K,   KC_X,   KC_B,   KC_M,    KC_W,   KC_V, KC_Z, XXXXXXX,
                               LT_ESC, LT_SPC, LT_TAB, LT_ENT, LT_BSPC, LT_RALT),
#endif

#ifdef INNER_COLS
// +------+-----+-----+-------+-----+-------+-------+-------+-------+-----+-----+------+
// |   '  |  ,  |  .  |   P   |  Y  | Mouse | Mouse |   F   |   G   | C   |  R  |   L  |
// +------+-----+-----+-------+-----+-------+-------+-------+-------+-----+-----+------+
// |   A  |  O  |  E  |   U   |  I  | Media |       |   D   |   H   | T   |  N  |   S  |
// | Ctrl | GUI | Alt | Shift |     |       |       |       | Shift | Alt | GUI | Ctrl |
// +------+-----+-----+-------+-----+-------+-------+-------+-------+-----+-----+------+
// |   ;  |  Q  |  J  |   K   |  X  |       |       |   B   |   M   | W   |  V  |   Z  |
// +------+-----+-----+-------+-----+-------+-------+-------+-------+-----+-----+------+
// |      |     |     | Space | Esc | Tab   | RAlt  | Enter | Bkspc |     |     |      |
// |      |     |     |  Sym  | Num | Nav   | Fn    |  Num  |  Sym  |     |     |      |
// +------+-----+-----+-------+-----+-------+-------+-------+-------+-----+-----+------+
[_DVORAK] = LAYOUT(
    KC_QUOT, KC_COMM, KC_DOT, KC_P,    KC_Y,   MOUSE_T, MOUSE_T, KC_F,   KC_G,   KC_C, KC_R, KC_L,
    DM_A,    DM_O,    DM_E,   DM_U,    KC_I,   MEDIA,   XXXXXXX, KC_D,   DM_H,   DM_T, DM_N, DM_S,
    KC_SCLN, KC_Q,    KC_J,   KC_K,    KC_X,   XXXXXXX, XXXXXXX, KC_B,   KC_M,   KC_W, KC_V, KC_Z,
                              LT_SPC,  LT_ESC, LT_TAB,  LT_RALT, LT_ENT, LT_BSPC),
#endif

#ifdef OUTER_CLASSICAL
// +-------+------+-----+-----+-------+-----+-------+-------+------+-----+------+-------+
// |   `   |   '  |  ,  |  .  |   P   |  Y  |   F   |   G   |   C  |  R  |   L  | Mouse |
// +-------+------+-----+-----+-------+-----+-------+-------+------+-----+------+-------+
// |  Esc  |   A  |  O  |  E  |   U   |  I  |   D   |   H   |  T   |  N  |   S  | Enter |
// | Media |      |     |     |       |     |       |       |      |     |      |       |
// +-------+------+-----+-----+-------+-----+-------+-------+------+-----+------+-------+
// | Shift |   ;  |  Q  |  J  |   K   |  X  |   B   |   M   |   W  |  V  |   Z  | Shift |
// |       | Ctrl | GUI | Alt | Shift |     |       | Shift |  Alt | GUI | Ctrl |       |
// +-------+------+-----+-----+-------+-----+-------+-------+------+-----+------+-------+
// |       |      |     | Tab | Space |     |       | Bkspc | RAlt |     |      |       |
// |       |      |     | Nav |       | Num |  Sym  |       |  Fn  |     |      |       |
// +-------+------+-----+-----+-------+-----+-------+-------+------+-----+------+-------+
[_DVORAK] = LAYOUT(
    TD_GRV,  TD_SDQU, KC_COMM, KC_DOT, KC_P,   KC_Y, KC_F, KC_G,    KC_C,   KC_R, KC_L, MOUSE_T,
    LT_ESCG, DM_A,    DM_O,    DM_E,   DM_U,   KC_I, KC_D, DM_H,    DM_T,   DM_N, DM_S, KC_ENT,
    TD_LSFT, DM_SCLN, DM_Q,    DM_J,   DM_K,   KC_X, KC_B, DM_M,    DM_W,   DM_V, DM_Z, TD_RSFT,
                               LT_TAB, KC_SPC, NUM,  SYM,  KC_BSPC, LT_RALT),
#endif
