#pragma once
#include "keycodes.h"

#define ________________NUMBER_LEFT________________         ___1___    ___2___    ___3___    ___4___    ___5___
#define ________________NUMBER_RIGHT_______________         ___6___    ___7___    ___8___    ___9___    ___0___

#define _________________FUNC_LEFT_________________         &kp F1   &kp F2   &kp F3   &kp F4   &kp F5
#define _________________FUNC_RIGHT________________         &kp F6   &kp F7   &kp F8   &kp F9   &kp F10

#define _________________SYM_LEFT__________________         &kp EXCL  &kp AT    &kp HASH        &kp DLLR &kp PRCNT
#define _________________SYM_RIGHT_________________         &kp CARET &kp AMPS  &kp KP_MULTIPLY &kp LPAR &kp RPAR

#define ___________________BLANK___________________         _______ _______ _______ _______ _______

#define _________________COLEMAK_L1________________         ___Q___    ___W___    ___F___    ___P___    ___B___
#define _________________COLEMAK_L2________________         ___A___    ___R___    ___S___    ___T___    ___G___
#define _________________COLEMAK_L3________________         ___Z___    ___X___    ___C___    ___D___    ___V___

#define _________________COLEMAK_R1________________         ___J___    ___L___    ___U___    ___Y___    _SCLON_
#define _________________COLEMAK_R2________________         ___M___    ___N___    ___E___    ___I___    ___O___
#define _________________COLEMAK_R3________________         ___K___    ___H___    _COMMA_    __DOT__    _FSLH__

#define _________________LOWER_L1__________________         _________________FUNC_LEFT_________________
#define _________________LOWER_L2__________________         ________________NUMBER_LEFT________________
#define _________________LOWER_L3__________________         _______ _______ _______ _LOPT__ _______

#define _________________LOWER_R1__________________         _________________FUNC_RIGHT________________
#define _________________LOWER_R2__________________         ________________NUMBER_RIGHT_______________
#define _________________LOWER_R3__________________         &kp UNDER _PLUS__ _PIPE__ &kp LEFT_BRACE &kp RIGHT_BRACE

#define _________________RAISE_L1__________________         _________________SYM_LEFT__________________
#define _________________RAISE_L2__________________         _______ _______ &kp C_PLAY_PAUSE &kp C_PREV &kp C_NEXT
#define _________________RAISE_L3__________________         _______ _______ &kp K_MUTE &kp C_VOL_DN &kp C_VOLUME_UP

#define _________________RAISE_R1__________________         _________________SYM_RIGHT_________________
#define _________________RAISE_R2__________________         _______ _LEFT__  __UP___  _DOWN__ _RIGHT_
#define _________________RAISE_R3__________________         _MINUS_ _EQUAL_ _______  &kp LEFT_BRACKET &kp RIGHT_BRACKET

// Adjust layer (tri-layer: Lower + Raise)
#define _________________ADJUST_L1_________________  &kp F11 &kp F12 _EXPOS_ _MCTRL_ _LNCHP_
#define _________________ADJUST_L2_________________  _BT_00_ _BT_01_ _BT_02_ _APPSW_ _SPTLT_
#define _________________ADJUST_L3_________________  _______ _______ _BTCLR_ _W_PREV _W_NEXT

#define _________________ADJUST_R1_________________  _SCRSH_ _HOME__ __END__ _______ _______
#define _________________ADJUST_R2_________________  _DSK_L_ _DSKT1_ _DSKT2_ _DSKT3_ _DSKT4_
#define _________________ADJUST_R3_________________  _DSK_R_ _PGDN__ _PGUP__ o_TABL_ o_TABR_

// clang-format on
