// clang-format off
/*
 * Qwerty
 *
 * ,-----------------------------------------------------------------------------------------------------------.
 * | BAS_ENC|        |        |        |        |        |        |        |        |        |        |        |
 * |        |        |        |        |        |        |        |        |        |        |        |        |
 * |--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------|
 * |   ` ~  |    Q   |    W   |    E   |    R   |    T   |    Y   |    U   |    I   |    O   |    P   |   ' "  |
 * |        |        |        |        |        |        |        |        |        |        |        |        |
 * |--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------|
 * |   Esc  |    A   |    S   |    D   |    F   |    G   |    H   |    J   |    K   |    L   |   ; :  |  Enter |
 * |  Media |        |        |        |        |        |        |        |        |        |        |        |
 * |--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------|
 * |   Tab  |    Z   |    X   |    C   |    V   |    B   |    N   |    M   |   , <  |   . >  |   / ?  |  Shift |
 * |        |  Ctrl  |   GUI  |   Alt  |  Shift |        |        |  Shift |   Alt  |   GUI  |  Ctrl  |        |
 * |--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------|
 * |  Ctrl  |   GUI  |   Alt  |   Nav  |  Space |   Num  |   Sym  |  Bkspc |  RAlt  |   Alt  |   GUI  |  Ctrl  |
 * |        |        |        |        |        |        |        |        |        |        |        |        |
 * `-----------------------------------------------------------------------------------------------------------'
 */
[_QWERTY] = LAYOUT_preonic_grid(
    BAS_ENC, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
    KC_GRV,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_QUOT,
    LT_ESCG, KC_A,    KC_S,    KC_D,    KC_F,    KC_G,    KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_ENT,
#ifdef TAP_DANCE_ENABLE
    KC_TAB,  QM_Z,    QM_X,    QM_C,    QM_V,    KC_B,    KC_N,    QM_M,    QM_COMM, QM_DOT,  QM_SLSH, TD_RSFT,
#else
    KC_TAB,  QM_Z,    QM_X,    QM_C,    QM_V,    KC_B,    KC_N,    QM_M,    QM_COMM, QM_DOT,  QM_SLSH, KC_RSFT,
#endif // TAP_DANCE_ENABLE
    KC_LCTL, KC_LGUI, KC_LALT, NAV,     KC_SPC,  NUM,     SYM,     KC_BSPC, KC_RALT, OS_LALT, OS_RGUI, OS_RCTL
),
