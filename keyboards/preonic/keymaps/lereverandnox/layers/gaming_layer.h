// clang-format off

#ifdef GAMING_DVORAK
/*
 * Gaming Dvorak
 *
 * ,-----------------------------------------------------------------------------------------------------------.
 * | BAS_ENC|    1   |    2   |    3   |    4   |    5   |    6   |    7   |    8   |    9   |    0   |        |
 * |        |        |        |        |        |        |        |        |        |        |        |        |
 * |--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------|
 * |   ` ~  |   ' "  |   , <  |   . >  |    P   |    Y   |    F   |    G   |    C   |    R   |    L   |   / ?  |
 * |        |        |        |        |        |        |        |        |        |        |        |        |
 * |--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------|
 * |   Esc  |    A   |    O   |    E   |    U   |    I   |    D   |    H   |    T   |    N   |    S   |  Enter |
 * |        |        |        |        |        |        |        |        |        |        |        |        |
 * |--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------|
 * |  Shift |   ; :  |    Q   |    J   |    K   |    X   |    B   |    M   |    W   |    V   |    Z   |  Shift |
 * |        |        |        |        |        |        |        |        |        |        |        |        |
 * |--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------|
 * |  Ctrl  |   GUI  |   Alt  |   Tab  |  Space |  Lower |  Raise |  Bkspc |  RAlt  |   Alt  |   GUI  |  Ctrl  |
 * |        |        |        |        |        |        |        |        |        |        |        |        |
 * `-----------------------------------------------------------------------------------------------------------'
 */
[_GAMING] = LAYOUT_preonic_grid(
    BAS_ENC, KC_1,    KC_2,    KC_3,   KC_4,   KC_5,    KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    XXXXXXX,
    KC_GRV,  KC_QUOT, KC_COMM, KC_DOT, KC_P,   KC_Y,    KC_F,    KC_G,    KC_C,    KC_R,    KC_L,    KC_SLSH,
    KC_ESC,  KC_A,    KC_O,    KC_E,   KC_U,   KC_I,    KC_D,    KC_H,    KC_T,    KC_N,    KC_S,    KC_ENT,
    KC_LSFT, KC_SCLN, KC_Q,    KC_J,   KC_K,   KC_X,    KC_B,    KC_M,    KC_W,    KC_V,    KC_Z,    KC_RSFT,
    KC_LCTL, KC_LGUI, KC_LALT, KC_TAB, KC_SPC, G_LOWER, G_RAISE, KC_BSPC, KC_RALT, KC_LALT, KC_RGUI, KC_RCTL
),
#elif defined(GAMING_COLEMAK)
/*
 * Gaming Colemak
 *
 * ,-----------------------------------------------------------------------------------------------------------.
 * | BAS_ENC|    1   |    2   |    3   |    4   |    5   |    6   |    7   |    8   |    9   |    0   |        |
 * |        |        |        |        |        |        |        |        |        |        |        |        |
 * |--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------|
 * |   ` ~  |    Q   |    W   |    F   |    P   |    B   |    J   |    L   |    U   |    Y   |   ; :  |   ' "  |
 * |        |        |        |        |        |        |        |        |        |        |        |        |
 * |--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------|
 * |   Esc  |    A   |    R   |    S   |    T   |    G   |    M   |    N   |    E   |    I   |    O   |  Enter |
 * |        |        |        |        |        |        |        |        |        |        |        |        |
 * |--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------|
 * |  Shift |    Z   |    X   |    C   |    D   |    V   |    K   |    H   |   , <  |   . >  |   / ?  |  Shift |
 * |        |        |        |        |        |        |        |        |        |        |        |        |
 * |--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------|
 * |  Ctrl  |   GUI  |   Alt  |   Tab  |  Space |  Lower |  Raise |  Bkspc |  RAlt  |   Alt  |   GUI  |  Ctrl  |
 * |        |        |        |        |        |        |        |        |        |        |        |        |
 * `-----------------------------------------------------------------------------------------------------------'
 */
[_GAMING] = LAYOUT_preonic_grid(
    BAS_ENC, KC_1,    KC_2,    KC_3,   KC_4,   KC_5,    KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    XXXXXXX,
    KC_GRV,  KC_Q,    KC_W,    KC_F,   KC_P,   KC_B,    KC_J,    KC_L,    KC_U,    KC_Y,    KC_SCLN, KC_QUOT,
    KC_ESC,  KC_A,    KC_R,    KC_S,   KC_T,   KC_G,    KC_M,    KC_N,    KC_E,    KC_I,    KC_O,    KC_ENT,
    KC_LSFT, KC_Z,    KC_X,    KC_C,   KC_D,   KC_V,    KC_K,    KC_H,    KC_COMM, KC_DOT,  KC_SLSH, KC_RSFT,
    KC_LCTL, KC_LGUI, KC_LALT, KC_TAB, KC_SPC, G_LOWER, G_RAISE, KC_BSPC, KC_RALT, KC_LALT, KC_RGUI, KC_RCTL
),
#else
/*
 * Gaming Qwerty
 *
 * ,-----------------------------------------------------------------------------------------------------------.
 * | BAS_ENC|    1   |    2   |    3   |    4   |    5   |    6   |    7   |    8   |    9   |    0   |        |
 * |        |        |        |        |        |        |        |        |        |        |        |        |
 * |--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------|
 * |   ` ~  |    Q   |    W   |    E   |    R   |    T   |    Y   |    U   |    I   |    O   |    P   |   ' "  |
 * |        |        |        |        |        |        |        |        |        |        |        |        |
 * |--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------|
 * |   Esc  |    A   |    S   |    D   |    F   |    G   |    H   |    J   |    K   |    L   |   ; :  |  Enter |
 * |        |        |        |        |        |        |        |        |        |        |        |        |
 * |--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------|
 * |  Shift |    Z   |    X   |    C   |    V   |    B   |    N   |    M   |   , <  |   . >  |   / ?  |  Shift |
 * |        |        |        |        |        |        |        |        |        |        |        |        |
 * |--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------|
 * |  Ctrl  |   GUI  |   Alt  |   Tab  |  Space |  Lower |  Raise |  Bkspc |  RAlt  |   Alt  |   GUI  |  Ctrl  |
 * |        |        |        |        |        |        |        |        |        |        |        |        |
 * `-----------------------------------------------------------------------------------------------------------'
 */
[_GAMING] = LAYOUT_preonic_grid(
    BAS_ENC, KC_1,    KC_2,    KC_3,   KC_4,   KC_5,    KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    XXXXXXX,
    KC_GRV,  KC_Q,    KC_W,    KC_E,   KC_R,   KC_T,    KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_QUOT,
    KC_ESC,  KC_A,    KC_S,    KC_D,   KC_F,   KC_G,    KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_ENT,
    KC_LSFT, QM_Z,    QM_X,    QM_C,   QM_V,   KC_B,    KC_N,    QM_M,    QM_COMM, QM_DOT,  QM_SLSH, KC_RSFT,
    KC_LCTL, KC_LGUI, KC_LALT, KC_TAB, KC_SPC, G_LOWER, G_RAISE, KC_BSPC, KC_RALT, KC_LALT, KC_RGUI, KC_RCTL
),
#endif // GAMING_*

/*
 * Gaming Lower (Num)
 *
 * ,-----------------------------------------------------------------------------------------------------------.
 * | NUM_ENC|   F1   |   F2   |   F3   |   F4   |   F5   |   F6   |   F7   |   F8   |   F9   |   F10  |   F11  |
 * |        |        |        |        |        |        |        |        |        |        |        |        |
 * |--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------|
 * | Pr Scr |        |        |        |        |        |        |  Home  |   Up   |  Pg Up |        |   F12  |
 * |        |        |        |        |        |        |        |        |        |        |        |        |
 * |--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------|
 * |        |        |        |        |        |        |        |  Left  |  Down  |  Right |        |        |
 * |        |        |        |        |        |        |        |        |        |        |        |        |
 * |--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------|
 * |        |        |        |        |        |        |        |   End  |        |  Pg Dn |        |        |
 * |        |        |        |        |        |        |        |        |        |        |        |        |
 * |--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------|
 * |        |        |        |        |        |        |        |   Ins  |        |        |        |        |
 * |        |        |        |        |        |        |        |        |        |        |        |        |
 * `-----------------------------------------------------------------------------------------------------------'
 */
[_GAMING_LOWER] = LAYOUT_preonic_grid(
    NUM_ENC, KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,
    KC_PSCR, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, KC_HOME, KC_UP,   KC_PGUP, XXXXXXX, KC_F12,
    XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, KC_LEFT, KC_DOWN, KC_RGHT, XXXXXXX, XXXXXXX,
    XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, KC_END,  XXXXXXX, KC_PGDN, XXXXXXX, XXXXXXX,
    XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, _______, _______, KC_INS,  XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX
),

/*
 * Gaming Raise (Sym)
 *
 * ,-----------------------------------------------------------------------------------------------------------.
 * | SYM_ENC|   F1   |   F2   |   F3   |   F4   |   F5   |   F6   |   F7   |   F8   |   F9   |   F10  |   F11  |
 * |        |        |        |        |        |        |        |        |        |        |        |        |
 * |--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------|
 * | Pr Scr |        |        |        |        |        |        |    +   |    _   |    |    |    ?   |  F12  |
 * |        |        |        |        |        |        |        |        |        |         |        |       |
 * |--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------|
 * |        |        |        |        |        |    [   |    ]   |    =   |    -   |    \   |    /   |        |
 * |        |        |        |        |        |        |        |        |        |        |        |        |
 * |--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------|
 * |        |        |        |        |        |    {   |    }   |        |        |        |        |        |
 * |        |        |        |        |        |        |        |        |        |        |        |        |
 * |--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------|
 * |        |        |        |        |        |        |        |   Del  |        |        |        |        |
 * |        |        |        |        |        |        |        |        |        |        |        |        |
 * `-----------------------------------------------------------------------------------------------------------'
 */
[_GAMING_RAISE] = LAYOUT_preonic_grid(
    SYM_ENC, KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,
    KC_PSCR, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, KC_PLUS, KC_UNDS, KC_PIPE, KC_QUES, KC_F12,
    XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, KC_LBRC, KC_RBRC, KC_EQL,  KC_MINS, KC_BSLS, KC_SLSH, XXXXXXX,
    XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, KC_LCBR, KC_RCBR, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
    XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, _______, _______, KC_DEL,  XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX
),

/*
 * Gaming Adjust
 *
 * ,-----------------------------------------------------------------------------------------------------------.
 * | ADJ_ENC| Sc Lck |  Pause |        |        |        |        |        |        |        |        |        |
 * |        |        |        |        |        |        |        |        |        |        |        |        |
 * |--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------|
 * |  Media |        |        |        |        |        |        |        |        |        |        |  Mouse |
 * |        |        |        |        |        |        |        |        |        |        |        |        |
 * |--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------|
 * |  Caps  |        |        |        |        |        |        |        |        |        |        |        |
 * |        |        |        |        |        |        |        |        |        |        |        |        |
 * |--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------|
 * |        |        |        |        |        |        |        |        |        |        |        |        |
 * |        |        |        |        |        |        |        |        |        |        |        |        |
 * |--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------|
 * |        |        |        |        |        |        |        |        |        |        |        | EXT_GAM|
 * |        |        |        |        |        |        |        |        |        |        |        |        |
 * `-----------------------------------------------------------------------------------------------------------'
 */
[_GAMING_ADJUST] = LAYOUT_preonic_grid(
    ADJ_ENC, KC_SCRL, KC_PAUS, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
#ifdef MOUSEKEY_ENABLE
    MEDIA,   XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, MOUSE_T,
#else
    MEDIA,   XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
#endif // MOUSEKEY_ENABLE
    KC_CAPS, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
    XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
    XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, _______, _______, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, EXT_GAM
),
