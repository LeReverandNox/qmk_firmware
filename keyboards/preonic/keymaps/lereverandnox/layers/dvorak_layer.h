// clang-format off
#ifdef OUTER_CLASSICAL
/* Dvorak
 * ,-----------------------------------------------------------------------------------------------.
 * |BAS_ENC|       |       |       |       |       |       |       |       |       |       |       |
 * |       |       |       |       |       |       |       |       |       |       |       |       |
 * |-------+-------+-------+-------+-------+-------+-------+-------+-------+-------+-------+-------|
 * |   `   |   '   |   ,   |   .   |   P   |   Y   |   F   |   G   |   C   |   R   |   L   |   /   |
 * |       |       |       |       |       |       |       |       |       |       |       |       |
 * |-------+-------+-------+-------+-------+-------+-------+-------+-------+-------+-------+-------|
 * |  Esc  |   A   |   O   |   E   |   U   |   I   |   D   |   H   |   T   |   N   |   S   | Enter |
 * | Media |       |       |       |       |       |       |       |       |       |       |       |
 * |-------+-------+-------+-------+-------+-------+-------+-------+-------+-------+-------+-------|
 * | Shift |   ;   |   Q   |   J   |   K   |   X   |   B   |   M   |   W   |   V   |   Z   | Shift |
 * |       | Ctrl  |  GUI  |  Alt  | Shift |       |       | Shift |  Alt  |  GUI  | Ctrl  |       |
 * |-------+-------+-------+-------+-------+-------+-------+-------+-------+-------+-------+-------|
 * | Ctrl  |  GUI  |  Alt  |  Tab  | Space |       |       | Bkspc | RAlt  |  Alt  |  GUI  |  Ctrl |
 * |       |       |       |  Nav  |       |  Num  |  Sym  |       |       |       |       |       |
 * `-----------------------------------------------------------------------------------------------'
 */
[_DVORAK] = LAYOUT_preonic_grid(
    BAS_ENC, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
    KC_GRV,  KC_QUOT, KC_COMM, KC_DOT,  KC_P,    KC_Y,    KC_F,    KC_G,    KC_C,    KC_R,    KC_L,    KC_SLSH,
    LT_ESCG, DM_A,    DM_O,    DM_E,    DM_U,    KC_I,    KC_D,    DM_H,    DM_T,    DM_N,    DM_S,    KC_ENT,
    TD_LSFT, DM_SCLN, DM_Q,    DM_J,    DM_K,    KC_X,    KC_B,    DM_M,    DM_W,    DM_V,    DM_Z,    TD_RSFT,
    KC_LCTL, KC_LGUI, KC_LALT, LT_TAB,  KC_SPC,  NUM,     SYM,     KC_BSPC, KC_RALT, KC_LALT, KC_RGUI, KC_RCTL
),
#endif
