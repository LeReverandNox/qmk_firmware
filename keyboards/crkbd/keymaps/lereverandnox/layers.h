#pragma once

enum layers {
    _COLEMAKDH = 0,
	_QWERTY,
	_DVORAK,
#ifdef MOUSEKEY_ENABLE
	_MOUSE,
#endif // MOUSEKEY_ENABLE
	_NAV,
	_SYM,
	_NUM,
	_MEDIA,
	_ADJUST
};
