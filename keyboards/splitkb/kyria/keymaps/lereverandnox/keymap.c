#include "lereverandnox.h"

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
#include "layers/qwerty_layer.h"
#include "layers/dvorak_layer.h"
#include "layers/colemakdh_layer.h"
#include "layers/nav_layer.h"
#include "layers/sym_layer.h"
#include "layers/num_layer.h"
#include "layers/adjust_layer.h"
#include "layers/media_layer.h"
#ifdef MOUSEKEY_ENABLE
#    include "layers/mouse_layer.h"
#endif // MOUSEKEY_ENABLE
};
