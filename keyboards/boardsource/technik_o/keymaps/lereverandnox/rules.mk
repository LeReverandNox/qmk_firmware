TAP_DANCE_ENABLE = yes
MOUSEKEY_ENABLE = yes
UNICODE_ENABLE = yes
SRC += helpers.c
SRC += process_record_handlers.c
SRC += user_functions.c
SRC += tapdances.c
SRC += tapdances_handlers.c

# Firmware size reduction
EXTRAFLAGS += -flto
