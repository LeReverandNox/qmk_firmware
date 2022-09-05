TAP_DANCE_ENABLE = yes
RGBLIGHT_ENABLE  = no  # Enable WS2812 RGB underlight.
MOUSEKEY_ENABLE  = yes
AUDIO_ENABLE     = yes # Audio output on port C6
MIDI_ENABLE      = no  # MIDI controls
ENCODER_ENABLE   = yes
CAPS_WORD_ENABLE = yes
COMMAND_ENABLE   = no  # Commands for debug and configuration
LTO_ENABLE       = yes
SRC += helpers.c
SRC += process_record_handlers.c
SRC += user_functions.c
ifeq ($(strip $(TAP_DANCE_ENABLE)), yes)
SRC += tapdances.c
SRC += tapdances_handlers.c
endif
