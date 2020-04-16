// clang-format off
#ifdef OUTER_COLS
/* Qwerty
 * ,-----------------------------------------------------------------------------------.
 * |Mouse |   Q  |   W  |   E  |   R  |   T  |   Y  |   U  |   I  |   O  |   P  |Mouse |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * |Media |   A  |   S  |   D  |   F  |   G  |   H  |   J  |   K  |   L  |   ;  |      |
 * |      | Ctrl | GUI  | Alt  |Shift |      |      |Shift |  Alt |  GUI | Ctrl |      |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * |      |   Z  |   X  |   C  |   V  |   B  |   N  |   M  |   ,  |   .  |   /  |      |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * | Ctrl | GUI  | Alt  | Esc  |  Spc | Tab  |Enter | Bksp | RAlt | Alt  |  GUI | Ctrl |
 * |      |      |      | Nav  | Sym  | Num  | Num  | Sym  |  Fn  |      |      |      |
 * `-----------------------------------------------------------------------------------'
 */
[_QWERTY] = LAYOUT_planck_grid(
    MOUSE_T, KC_Q,    KC_W,    KC_E,   KC_R,   KC_T,   KC_Y,   KC_U,    KC_I,    KC_O,    KC_P,    MOUSE_T,
    MEDIA,   QM_A,    QM_S,    QM_D,   QM_F,   KC_G,   KC_H,   QM_J,    QM_K,    QM_L,    QM_SCLN, XXXXXXX,
    XXXXXXX, KC_Z,    KC_X,    KC_C,   KC_V,   KC_B,   KC_N,   KC_M,    KC_COMM, KC_DOT,  KC_SLSH, XXXXXXX,
    KC_LCTL, KC_LGUI, KC_LALT, LT_ESC, LT_SPC, LT_TAB, LT_ENT, LT_BSPC, KC_RALT, OS_LALT, OS_RGUI, OS_RCTL
    ),
#endif

#ifdef OUTER_CLASSICAL
// +-------+------+-----+-----+-------+-----+-------+-------+------+-----+------+-------+
// |   `   |   Q  |  W  |  E  |   R   |  T  |   Y   |   U   |   I  |  O  |   P  | Mouse |
// +-------+------+-----+-----+-------+-----+-------+-------+------+-----+------+-------+
// |  Esc  |   A  |  S  |  D  |   F   |  G  |   H   |   J   |  K   |  L  |   ;  | Enter |
// | Media |      |     |     |       |     |       |       |      |     |      |       |
// +-------+------+-----+-----+-------+-----+-------+-------+------+-----+------+-------+
// | Shift |   Z  |  X  |  C  |   V   |  B  |   N   |   M   |   ,  |  .  |   /  | Shift |
// |       | Ctrl | GUI | Alt | Shift |     |       | Shift |  Alt | GUI | Ctrl |       |
// +-------+------+-----+-----+-------+-----+-------+-------+------+-----+------+-------+
// |  Ctrl |  GUI | Alt | Tab | Space |     |       | Bkspc | RAlt | Alt |  GUI |  Ctrl |
// |       |      |     | Nav |       | Sym |  Num  |       |  Fn  |     |      |       |
// +-------+------+-----+-----+-------+-----+-------+-------+------+-----+------+-------+
[_QWERTY] = LAYOUT_planck_grid(
    KC_GRV,  KC_Q,    KC_W,    KC_E,   KC_R,   KC_T,   KC_Y,   KC_U,    KC_I,    KC_O,    KC_P,    MOUSE_T,
    LT_ESCG, QM_A,    QM_S,    QM_D,   QM_F,   KC_G,   KC_H,   QM_J,    QM_K,    QM_L,    QM_SCLN, KC_ENT,
    TD_LSFT, QM_Z,    QM_X,    QM_C,   QM_V,   KC_B,   KC_N,   QM_M,    QM_COMM, QM_DOT,  QM_SLSH, TD_RSFT,
    KC_LCTL, KC_LGUI, KC_LALT, LT_TAB, KC_SPC, NUM,    SYM,    KC_BSPC, KC_RALT, OS_LALT, OS_RGUI, OS_RCTL
    ),
#endif
