TAP_DANCE_ENABLE  = no        # Tap dances (+1060)
MOUSEKEY_ENABLE   = yes       # Mouse keys(+4700)
EXTRAKEY_ENABLE   = yes       # Audio control and System control(+450)
RGBLIGHT_ENABLE   = no        # Enable WS2812 RGB underlight.(+1764)
RGB_MATRIX_ENABLE = yes
OLED_ENABLE       = yes
OLED_DRIVER       = SSD1306
CAPS_WORD_ENABLE  = yes
LTO_ENABLE        = yes
BOOTLOADER        = atmel-dfu # Because of Elite-C's
DYNAMIC_TAPPING_TERM_ENABLE = yes
SRC += helpers.c
SRC += process_record_handlers.c
SRC += user_functions.c
ifeq ($(strip $(TAP_DANCE_ENABLE)), yes)
SRC += tapdances.c
SRC += tapdances_handlers.c
endif
