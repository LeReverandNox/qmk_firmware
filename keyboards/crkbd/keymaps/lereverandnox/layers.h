#pragma once

enum layers {
	_DVORAK,
	_QWERTY,
    _COLEMAKDH,
#ifdef MOUSEKEY_ENABLE
	_MOUSE,
#endif
	_NAV,
	_SYM,
	_NUM,
	_MEDIA,
	_ADJUST
};
