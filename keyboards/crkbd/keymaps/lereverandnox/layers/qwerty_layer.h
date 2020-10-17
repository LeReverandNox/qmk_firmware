// clang-format off
#ifdef OUTER_CLASSICAL
// +-------+------+-----+-----+-------+-----+-------+-------+------+-----+------+-------+
// |   `   |   Q  |  W  |  E  |   R   |  T  |   Y   |   U   |   I  |  O  |   P  |   '   |
// +-------+------+-----+-----+-------+-----+-------+-------+------+-----+------+-------+
// |  Esc  |   A  |  S  |  D  |   F   |  G  |   H   |   J   |  K   |  L  |   ;  | Enter |
// | Media |      |     |     |       |     |       |       |      |     |      |       |
// +-------+------+-----+-----+-------+-----+-------+-------+------+-----+------+-------+
// | Shift |   Z  |  X  |  C  |   V   |  B  |   N   |   M   |   ,  |  .  |   /  | Shift |
// |       | Ctrl | GUI | Alt | Shift |     |       | Shift |  Alt | GUI | Ctrl |       |
// +-------+------+-----+-----+-------+-----+-------+-------+------+-----+------+-------+
// |       |      |     | Tab | Space |     |       | Bkspc | RAlt |     |      |       |
// |       |      |     | Nav |       | Sym |  Num  |       |      |     |      |       |
// +-------+------+-----+-----+-------+-----+-------+-------+------+-----+------+-------+
[_QWERTY] = LAYOUT(
    KC_GRV,  KC_Q, KC_W, KC_E,   KC_R,   KC_T, KC_Y, KC_U,    KC_I,    KC_O,   KC_P,    KC_QUOT,
    LT_ESCG, QM_A, QM_S, QM_D,   QM_F,   KC_G, KC_H, QM_J,    QM_K,    QM_L,   QM_SCLN, KC_ENT,
    TD_LSFT, QM_Z, QM_X, QM_C,   QM_V,   KC_B, KC_N, QM_M,    QM_COMM, QM_DOT, QM_SLSH, TD_RSFT,
                         LT_TAB, KC_SPC, NUM,  SYM,  KC_BSPC, KC_RALT),
#endif
