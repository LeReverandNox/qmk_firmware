#include "lereverandnox.h"

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
#include "layers/dvorak_layer.h"
#include "layers/qwerty_layer.h"
#include "layers/colemakdh_layer.h"
#ifdef GAMING_DVORAK
#    include "layers/gaming_layer.h"
#endif // GAMING_DVORAK
#include "layers/nav_layer.h"
#include "layers/sym_layer.h"
#include "layers/num_layer.h"
#include "layers/media_layer.h"
#include "layers/adjust_layer.h"
#    ifdef PLOVER_ENABLED
#include "layers/plover_layer.h"
#endif // PLOVER_ENABLED
#ifdef AUDIO_ENABLE
#    include "layers/music_layer.h"
#endif // AUDIO_ENABLE
#ifdef MOUSEKEY_ENABLE
#    include "layers/mouse_layer.h"
#endif // MOUSEKEY_ENABLE
};
