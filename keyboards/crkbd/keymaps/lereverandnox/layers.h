#pragma once

enum crkbd_layers {
	_DVORAK,
	_QWERTY,
    _COLEMAKDH,
#ifdef MOUSEKEY_ENABLE
	_MOUSE,
#endif
	_NAV,
	_SYM,
	_NUM,
	_FN,
	_MEDIA,
	_ADJUST
};
