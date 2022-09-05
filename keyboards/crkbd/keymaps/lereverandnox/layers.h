#pragma once

enum layers {
	_DVORAK,
	_QWERTY,
    _COLEMAKDH,
#ifdef MOUSEKEY_ENABLE
	_MOUSE,
#endif // MOUSEKEY_ENABLE
	_NAV,
	_SYM,
	_NUM,
	_MEDIA,
	_ADJUST
};
