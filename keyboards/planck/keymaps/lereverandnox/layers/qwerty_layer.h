// clang-format off
/* Qwerty
 * ,-----------------------------------------------------------------------------------------------.
 * |   `   |   Q   |   W   |   E   |   R   |   T   |   Y   |   U   |   I   |   O   |   P   |   '   |
 * |       |       |       |       |       |       |       |       |       |       |       |       |
 * |-------+-------+-------+-------+-------+-------+-------+-------+-------+-------+-------+-------|
 * |  Esc  |   A   |   S   |   D   |   F   |   G   |   H   |   J   |   K   |   L   |   ;   | Enter |
 * | Media |       |       |       |       |       |       |       |       |       |       |       |
 * |-------+-------+-------+-------+-------+-------+-------+-------+-------+-------+-------+-------|
 * | Shift |   Z   |   X   |   C   |   V   |   B   |   N   |   M   |   ,   |   .   |   /   | Shift |
 * |       | Ctrl  |  GUI  |  Alt  | Shift |       |       | Shif  |  Alt  |  GUI  | Ctrl  |       |
 * |-------+-------+-------+-------+-------+-------+-------+-------+-------+-------+-------+-------|
 * |BAS_ENC|  GUI  |  Alt  |  Tab  | Space |       |       | Bkspc | RAlt  |  Alt  |  GUI  | Ctrl  |
 * |       |       |       |  Nav  |       |  Num  |  Sym  |       |       |       |       |       |
 * `-----------------------------------------------------------------------------------------------'
 */
[_QWERTY] = LAYOUT_planck_grid(
    KC_GRV,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_QUOT,
    LT_ESCG, KC_A,    KC_S,    KC_D,    KC_F,    KC_G,    KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_ENT,
    TD_LSFT, QM_Z,    QM_X,    QM_C,    QM_V,    KC_B,    KC_N,    QM_M,    QM_COMM, QM_DOT,  QM_SLSH, TD_RSFT,
    BAS_ENC, KC_LGUI, KC_LALT, LT_TAB,  KC_SPC,  NUM,     SYM,     KC_BSPC, KC_RALT, OS_LALT, OS_RGUI, OS_RCTL
),
