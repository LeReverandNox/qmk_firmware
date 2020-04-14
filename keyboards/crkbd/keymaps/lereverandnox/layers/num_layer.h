// clang-format off
#ifdef OUTER_COLS
/* Numbers
 * ,-----------------------------------------------------------------------------------
 * |      |      |      |      |      |      |  /   |  7   |  8   |  9   |  *   |      |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * |      |      |  F   |  E   |  D   |      |  #   |  4   |  5   |  6   |  -   |      |
 * |      | Ctrl | GUI  | Alt  |Shift |      |      |Shift |  Alt |  GUI | Ctrl |      |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * |      |      |  C   |  B   |  A   |      |  \   |  1   |  2   |  3   |  +   |      |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * |      |      |      |      |      |      |      |  0   |  ,   |      |      |      |
 * |      |      |      |      |      |      |      |      |      |      |      |      |
 * `-----------------------------------------------------------------------------------'
 */
[_NUM] = LAYOUT(
    XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, KC_SLSH, KC_7, KC_8,   KC_9, KC_ASTR, _______,
    _______, XXXXXXX, KC_F,    KC_E,    KC_D,    XXXXXXX, KC_HASH, KC_4, KC_5,   KC_6, KC_MINS, _______,
    _______, XXXXXXX, KC_C,    KC_B,    KC_A,    XXXXXXX, KC_BSLS, KC_1, KC_2,   KC_3, KC_PLUS, _______,
                               _______, _______, _______, _______, KC_0, KC_COMM),
#endif

#ifdef OUTER_CLASSICAL
/* Numbers
 * ,-----------------------------------------------------------------------------------
 * |      | F12  |  F9  |  F8  |  F7  |      |  *   |  7   |  8   |  9   |  \   |      |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * |      | F11  |  F6  |  F5  |  F4  |      |  -   |  4   |  5   |  6   |  /   |      |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * |      | F10  |  F3  |  F2  |  F1  |      |  +   |  1   |  2   |  3   |  #   |      |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * |      |      |      |      |      |      |  =   |      |  0   |      |      |      |
 * |      |      |      |      |      |      |      |      |      |      |      |      |
 * `-----------------------------------------------------------------------------------'
 */
	[_NUM] = LAYOUT(
		XXXXXXX, KC_F12, KC_F9, KC_F8,   KC_F7,   XXXXXXX, KC_ASTR, KC_7,    KC_8, KC_9, KC_BSLS, XXXXXXX,
		_______, KC_F11, KC_F6, KC_F5,   KC_F4,   XXXXXXX, KC_MINS, KC_4,    KC_5, KC_6, KC_SLSH, _______,
		_______, KC_F10, KC_F3, KC_F2,   KC_F1,   XXXXXXX, KC_PLUS, KC_1,    KC_2, KC_3, KC_HASH, _______,
                         		_______, _______, _______, _______, _______, KC_0),
#endif
