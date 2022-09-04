// clang-format off
/* Colemak-DH
 * ,-----------------------------------------------------------------------------------------------.
 * |BAS_ENC|       |       |       |       |       |       |       |       |       |       |       |
 * |       |       |       |       |       |       |       |       |       |       |       |       |
 * |-------+-------+-------+-------+-------+-------+-------+-------+-------+-------+-------+-------|
 * |   `   |   Q   |   W   |   F   |   P   |   B   |   J   |   L   |   U   |   Y   |   ;   |   '   |
 * |       |       |       |       |       |       |       |       |       |       |       |       |
 * |-------+-------+-------+-------+-------+-------+-------+-------+-------+-------+-------+-------|
 * |  Esc  |   A   |   R   |   S   |   T   |   G   |   M   |   N   |   E   |   I   |   O   | Enter |
 * | Media |       |       |       |       |       |       |       |       |       |       |       |
 * |-------+-------+-------+-------+-------+-------+-------+-------+-------+-------+-------+-------|
 * |  Tab  |   Z   |   X   |   C   |   D   |   V   |   K   |   H   |   ,   |   .   |   /   | Shift |
 * |       | Ctrl  |  GUI  |  Alt  | Shift |       |       | Shift |  Alt  |  GUI  | Ctrl  |       |
 * |-------+-------+-------+-------+-------+-------+-------+-------+-------+-------+-------+-------|
 * | Ctrl  |  GUI  |  Alt  |  Nav  | Space |       |       | Bkspc | RAlt  |  Alt  |  GUI  | Ctrl  |
 * |       |       |       |       |       |  Num  |  Sym  |       |       |       |       |       |
 * `-----------------------------------------------------------------------------------------------'
 */
[_COLEMAKDH] = LAYOUT_preonic_grid(
    BAS_ENC, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
    KC_GRV,  KC_Q,    KC_W,    KC_F,    KC_P,    KC_B,    KC_J,    KC_L,    KC_U,    KC_Y,    KC_SCLN, KC_QUOT,
    LT_ESCG, KC_A,    KC_R,    KC_S,    KC_T,    KC_G,    KC_M,    KC_N,    KC_E,    KC_I,    KC_O,    KC_ENT,
    LT_TAB,  CM_Z,    CM_X,    CM_C,    CM_D,    KC_V,    KC_K,    CM_H,    CM_COMM, CM_DOT,  CM_SLSH, TD_RSFT,
    KC_LCTL, KC_LGUI, KC_LALT, NAV,     KC_SPC,  NUM,     SYM,     KC_BSPC, KC_RALT, OS_LALT, OS_RGUI, OS_RCTL
),
