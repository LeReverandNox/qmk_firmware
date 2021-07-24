ifneq ("$(wildcard $(USER_PATH)/secrets.c)", "")
	SRC += secrets.c
endif
