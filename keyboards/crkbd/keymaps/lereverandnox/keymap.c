#include "lereverandnox.h"

extern keymap_config_t keymap_config;

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
#include "layers/dvorak_layer.h"
#include "layers/qwerty_layer.h"
#include "layers/nav_layer.h"
#include "layers/num_layer.h"
#include "layers/sym_layer.h"
#include "layers/fn_layer.h"
#include "layers/adjust_layer.h"
#include "layers/media_layer.h"
#ifdef MOUSEKEY_ENABLE
#include "layers/mouse_layer.h"
#endif
};
