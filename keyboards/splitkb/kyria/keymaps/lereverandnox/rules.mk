OLED_ENABLE      = yes
ENCODER_ENABLE   = yes     # Enables the use of one or more encoders
RGBLIGHT_ENABLE  = yes     # Enable keyboard RGB underglow
TAP_DANCE_ENABLE = no
MOUSEKEY_ENABLE  = yes
CAPS_WORD_ENABLE = yes
LTO_ENABLE       = yes
SRC += helpers.c
SRC += process_record_handlers.c
SRC += user_functions.c
ifeq ($(strip $(TAP_DANCE_ENABLE)), yes)
SRC += tapdances.c
SRC += tapdances_handlers.c
endif
