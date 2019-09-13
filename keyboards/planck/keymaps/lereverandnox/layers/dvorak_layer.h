#ifdef OUTER_COLS
// +-------+------+-----+-----+-------+-----+-------+-------+------+-----+------+-------+
// | Mouse |   '  |  ,  |  .  |   P   |  Y  |   F   |   G   |   C  |  R  |   L  | Mouse |
// +-------+------+-----+-----+-------+-----+-------+-------+------+-----+------+-------+
// | Media |   A  |  O  |  E  |   U   |  I  |   D   |   H   |  T   |  N  |   S  |       |
// |       | Ctrl | GUI | Alt | Shift |     |       | Shift |  Alt | GUI | Ctrl |       |
// +-------+------+-----+-----+-------+-----+-------+-------+------+-----+------+-------+
// |       |   ;  |  Q  |  J  |   K   |  X  |   B   |   M   |   W  |  V  |   Z  |       |
// +-------+------+-----+-----+-------+-----+-------+-------+------+-----+------+-------+
// |  Ctrl |  GUI | Alt | Esc | Space | Tab | Enter | Bkspc | RAlt | Alt |  GUI |  Ctrl |
// |       |      |     | Nav |  Sym  | Num |  Num  |  Sym  |  Fn  |     |      |       |
// +-------+------+-----+-----+-------+-----+-------+-------+------+-----+------+-------+

[_DVORAK] = LAYOUT_planck_grid(
    MOUSE_T, KC_QUOT,  KC_COMM,  KC_DOT,  KC_P,    KC_Y,   KC_F,   KC_G,     KC_C,     KC_R,    KC_L,      MOUSE_T,
    MEDIA,   HOME_AD,  HOME_OD,  HOME_ED, HOME_UD, KC_I,   KC_D,   HOME_HD,  HOME_TD,  HOME_ND, HOME_SD,   XXXXXXX,
    XXXXXXX, KC_SCLN,  KC_Q,     KC_J,    KC_K,    KC_X,   KC_B,   KC_M,     KC_W,     KC_V,    KC_Z,      XXXXXXX,
    KC_LCTL, KC_LGUI,  KC_LALT,  LT_ESC,  LT_SPC,  LT_TAB, LT_ENT, LT_BSPC,  LT_RALT,  OS_LALT, OS_RGUI,   OS_RCTL
    ),
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
// | Ctrl | GUI | Alt | Space | Esc | Tab   | RAlt  | Enter | Bkspc | Alt | GUI | Ctrl |
// |      |     |     |  Sym  | Num | Nav   | Fn    |  Num  |  Sym  |     |     |      |
// +------+-----+-----+-------+-----+-------+-------+-------+-------+-----+-----+------+
[_DVORAK] = LAYOUT_planck_grid(
    KC_QUOT,  KC_COMM,  KC_DOT,   KC_P,    KC_Y,    MOUSE_T, MOUSE_T, KC_F,     KC_G,     KC_C,     KC_R,      KC_L,
    HOME_AD,  HOME_OD,  HOME_ED,  HOME_UD, KC_I,    MEDIA,   XXXXXXX, KC_D,     HOME_HD,  HOME_TD,  HOME_ND,   HOME_SD,
    KC_SCLN,  KC_Q,     KC_J,     KC_K,    KC_X,    XXXXXXX, XXXXXXX, KC_B,     KC_M,     KC_W,     KC_V,      KC_Z,
    KC_LCTL,  KC_LGUI,  KC_LALT,  LT_SPC,  LT_ESC,  LT_TAB,  LT_RALT,  LT_ENT,  LT_BSPC,  OS_LALT,  OS_RGUI,   OS_RCTL
    ),
#endif
