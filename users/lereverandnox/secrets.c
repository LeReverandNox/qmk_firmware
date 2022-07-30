#include "lereverandnox.h"  // replace with your keymap's "h" file, or whatever file stores the keycodes

#include "secrets.h"

bool process_record_secrets(uint16_t keycode, keyrecord_t *record) {
  switch (keycode) {
    case KC_SEC1 ... KC_SEC5: // Secrets!  Externally defined strings, not stored in repo
      if (!record->event.pressed) {
        clear_oneshot_layer_state(ONESHOT_OTHER_KEY_PRESSED);
        send_string_with_delay(secrets[keycode - KC_SEC1], 10);
      }
      return false;
      break;
  }
  return true;
}
