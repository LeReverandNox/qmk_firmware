OLED_ENABLE = yes
OLED_DRIVER = SSD1306   # Enables the use of OLED displays
ENCODER_ENABLE = yes       # Enables the use of one or more encoders
RGBLIGHT_ENABLE = yes      # Enable keyboard RGB underglow
TAP_DANCE_ENABLE = no
MOUSEKEY_ENABLE = yes
SRC += helpers.c
SRC += process_record_handlers.c
SRC += user_functions.c
ifeq ($(strip $(TAP_DANCE_ENABLE)), yes)
SRC += tapdances.c
SRC += tapdances_handlers.c
endif

# Firmware size reduction
EXTRAFLAGS += -flto
