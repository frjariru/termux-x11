#pragma clang diagnostic push
#pragma ide diagnostic ignored "readability-non-const-parameter"
#pragma ide diagnostic ignored "OCDFAInspection"
#include <stdlib.h>
#include <string.h>
#include <log.h>
#include "input-event-codes.h"
#include "android-keycodes.h"
#include "evdev-keycodes.h"
#include "keymaps.h"

#define KEYCODE1(c) case ANDROID_KEYCODE_##c : *eventCode =  KEY_##c; return 0
#define KEYCODE2(kc, ec) case ANDROID_KEYCODE_##kc : *eventCode = KEY_##ec; return 0
#define KEYCODE2shift(kc, ec) case ANDROID_KEYCODE_##kc : *eventCode = KEY_##ec; *shift = 1; return 0
int android_keycode_to_linux_event_code(int keyCode, int *eventCode, int *shift, char **sym) {
	if (!eventCode || !sym) return 1;
	*sym = NULL;
	switch (keyCode) {
		KEYCODE1(1);
		KEYCODE1(2);
		KEYCODE1(3);
		KEYCODE1(4);
		KEYCODE1(5);
		KEYCODE1(6);
		KEYCODE1(7);
		KEYCODE1(8);
		KEYCODE1(9);
		KEYCODE1(0);
		KEYCODE1(A);
		KEYCODE1(B);
		KEYCODE1(C);
		KEYCODE1(D);
		KEYCODE1(E);
		KEYCODE1(F);
		KEYCODE1(G);
		KEYCODE1(H);
		KEYCODE1(I);
		KEYCODE1(J);
		KEYCODE1(K);
		KEYCODE1(L);
		KEYCODE1(M);
		KEYCODE1(N);
		KEYCODE1(O);
		KEYCODE1(P);
		KEYCODE1(Q);
		KEYCODE1(R);
		KEYCODE1(S);
		KEYCODE1(T);
		KEYCODE1(U);
		KEYCODE1(V);
		KEYCODE1(W);
		KEYCODE1(X);
		KEYCODE1(Y);
		KEYCODE1(Z);
		KEYCODE1(COMMA);
		KEYCODE2(PERIOD, DOT);
		KEYCODE2(DPAD_UP, UP);
		KEYCODE2(DPAD_LEFT, LEFT);
		KEYCODE2(DPAD_DOWN, DOWN);
		KEYCODE2(DPAD_RIGHT, RIGHT);
		KEYCODE2(ALT_LEFT, LEFTALT);
		KEYCODE2(ALT_RIGHT, RIGHTALT);
		KEYCODE2(SHIFT_LEFT, LEFTSHIFT);
		KEYCODE2(SHIFT_RIGHT, RIGHTSHIFT);
		KEYCODE1(TAB);
		KEYCODE1(SPACE);
		KEYCODE2(EXPLORER, WWW);
		KEYCODE2(ENVELOPE, MAIL);
		KEYCODE1(ENTER);
		KEYCODE2(DEL, BACKSPACE);
		KEYCODE1(GRAVE);
		KEYCODE1(MINUS);
		KEYCODE2(EQUALS, EQUAL);
		KEYCODE2(LEFT_BRACKET, LEFTBRACE);
		KEYCODE2(RIGHT_BRACKET, RIGHTBRACE);
		KEYCODE1(BACKSLASH);
		KEYCODE1(SEMICOLON);
		KEYCODE1(APOSTROPHE);
		KEYCODE1(SLASH);
		KEYCODE2shift(AT, 2);
		KEYCODE2shift(POUND, 3);
		KEYCODE2shift(STAR, 8);
		KEYCODE2shift(PLUS, EQUAL);
		KEYCODE1(MENU);
		KEYCODE1(SEARCH);
		KEYCODE2(MEDIA_PLAY_PAUSE, PLAYPAUSE);
		KEYCODE2(MEDIA_PLAY, PLAY);
		KEYCODE2(MEDIA_STOP, STOP_RECORD);
		KEYCODE2(MEDIA_NEXT, NEXTSONG);
		KEYCODE2(MEDIA_PREVIOUS, PREVIOUSSONG);
		KEYCODE2(MEDIA_REWIND, REWIND);
		KEYCODE2(MEDIA_FAST_FORWARD, FASTFORWARD);
		KEYCODE2(MEDIA_CLOSE, CLOSECD);
		KEYCODE2(MEDIA_EJECT, EJECTCD);
		KEYCODE2(MEDIA_RECORD, RECORD);
		KEYCODE2(MUTE, MICMUTE);
		KEYCODE2(PAGE_UP, PAGEUP);
		KEYCODE2(PAGE_DOWN, PAGEDOWN);
		KEYCODE2(ESCAPE, ESC);
		KEYCODE2(FORWARD_DEL, DELETE);
		KEYCODE2(CTRL_LEFT, LEFTCTRL);
		KEYCODE2(CTRL_RIGHT, RIGHTCTRL);
		KEYCODE2(CAPS_LOCK, CAPSLOCK);
		KEYCODE2(SCROLL_LOCK, SCROLLLOCK);
		KEYCODE2(NUM_LOCK, NUMLOCK);
		KEYCODE2(META_LEFT, LEFTMETA);
		KEYCODE2(META_RIGHT, RIGHTMETA);
		KEYCODE1(SYSRQ); // Print screen key
		KEYCODE1(BREAK); // Pause key
		KEYCODE2(MOVE_HOME, HOME);
		KEYCODE2(MOVE_END, END);
		KEYCODE1(INSERT);
		KEYCODE1(FORWARD);
		KEYCODE2(BACK, ESC);
		KEYCODE1(F1);
		KEYCODE1(F2);
		KEYCODE1(F3);
		KEYCODE1(F4);
		KEYCODE1(F5);
		KEYCODE1(F6);
		KEYCODE1(F7);
		KEYCODE1(F8);
		KEYCODE1(F9);
		KEYCODE1(F10);
		KEYCODE1(F11);
		KEYCODE1(F12);
		KEYCODE2(NUMPAD_0, KP0);
		KEYCODE2(NUMPAD_1, KP1);
		KEYCODE2(NUMPAD_2, KP2);
		KEYCODE2(NUMPAD_3, KP3);
		KEYCODE2(NUMPAD_4, KP4);
		KEYCODE2(NUMPAD_5, KP5);
		KEYCODE2(NUMPAD_6, KP6);
		KEYCODE2(NUMPAD_7, KP7);
		KEYCODE2(NUMPAD_8, KP8);
		KEYCODE2(NUMPAD_9, KP9);
		KEYCODE2(NUMPAD_DIVIDE, KPSLASH);
		KEYCODE2(NUMPAD_MULTIPLY, KPASTERISK);
		KEYCODE2(NUMPAD_SUBTRACT, KPMINUS);
		KEYCODE2(NUMPAD_ADD, KPPLUS);
		KEYCODE2(NUMPAD_DOT, KPDOT);
		KEYCODE2(NUMPAD_COMMA, KPCOMMA);
		KEYCODE2(NUMPAD_ENTER, KPENTER);
		KEYCODE2(NUMPAD_EQUALS, KPEQUAL);
		KEYCODE2(NUMPAD_LEFT_PAREN, KPLEFTPAREN);
		KEYCODE2(NUMPAD_RIGHT_PAREN, KPRIGHTPAREN);
		KEYCODE1(POWER);
		KEYCODE1(CAMERA);
		KEYCODE2(VOLUME_MUTE, MUTE);
		KEYCODE2(VOLUME_UP, VOLUMEUP);
		KEYCODE2(VOLUME_DOWN, VOLUMEDOWN);
		KEYCODE1(INFO);
		KEYCODE2(CHANNEL_UP, CHANNELUP);
		KEYCODE2(CHANNEL_DOWN, CHANNELDOWN);
		KEYCODE2(ZOOM_IN, ZOOMIN);
		KEYCODE2(ZOOM_OUT, ZOOMOUT);
		KEYCODE1(TV);
		KEYCODE2(BOOKMARK, BOOKMARKS);
		KEYCODE2(PROG_RED, RED);
		KEYCODE2(PROG_GREEN, GREEN);
		KEYCODE2(PROG_YELLOW, YELLOW);
		KEYCODE2(PROG_BLUE, BLUE);
		KEYCODE2(CONTACTS, ADDRESSBOOK);
		KEYCODE1(CALENDAR);
		KEYCODE2(MUSIC, PLAYER);
		KEYCODE2(CALCULATOR, CALC);
		KEYCODE2(BRIGHTNESS_DOWN, BRIGHTNESSDOWN);
		KEYCODE2(BRIGHTNESS_UP, BRIGHTNESSUP);
        default: return KEY_RESERVED;
	}
	return KEY_RESERVED;
}
#undef KEYCODE1
#undef KEYCODE2

#define K(c1, c2) case EVDEV_##c1: return KEY_##c2
int keyCode2eventCode(int kc) {
    int keyCode = kc - KEYCODE_MIN;
	switch(keyCode) {
		K(TLDE, GRAVE);

		K(AE01, 1);
		K(AE02, 2);
		K(AE03, 3);
		K(AE04, 4);
		K(AE05, 5);
		K(AE06, 6);
		K(AE07, 7);
		K(AE08, 8);
		K(AE09, 9);
		K(AE10, 0);
		K(AE11, MINUS);
		K(AE12, EQUAL);

		K(AD01, Q);
		K(AD02, W);
		K(AD03, E);
		K(AD04, R);
		K(AD05, T);
		K(AD06, Y);
		K(AD07, U);
		K(AD08, I);
		K(AD09, O);
		K(AD10, P);
		K(AD11, LEFTBRACE);
		K(AD12, RIGHTBRACE);

		K(AC01, A);
		K(AC02, S);
		K(AC03, D);
		K(AC04, F);
		K(AC05, G);
		K(AC06, H);
		K(AC07, J);
		K(AC08, K);
		K(AC09, L);
		K(AC10, SEMICOLON);
		K(AC11, APOSTROPHE);

		K(AB01, Z);
		K(AB02, X);
		K(AB03, C);
		K(AB04, V);
		K(AB05, B);
		K(AB06, N);
		K(AB07, M);
		K(AB08, COMMA);
		K(AB09, DOT);
		K(AB10, SLASH);
		default: return 0;
	}
}

void get_character_data(char** layout, int *shift, int *eventCode, char *ch) {
	int i, j;
	for (i=0; lorie_keymaps[i]; i++) {
		for (j=0; j<(KEYCODE_MAX-KEYCODE_MIN); j++) {
			if (!strcmp(ch, lorie_keymaps[i]->keysyms[j].normal)) {
				*layout = lorie_keymaps[i]->name;
				*shift = 0;
				*eventCode = keyCode2eventCode(j+KEYCODE_MIN);
			}
			if (!strcmp(ch, lorie_keymaps[i]->keysyms[j].shift)) {
				*layout = lorie_keymaps[i]->name;
				*shift = 1;
				*eventCode = keyCode2eventCode(j+KEYCODE_MIN);
			}
		}
	}
}

#pragma clang diagnostic pop
