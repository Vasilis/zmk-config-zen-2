#define _______ &trans

// Arrow keys
#define _LEFT__ &kp LEFT
#define __UP___ &kp UP
#define _DOWN__ &kp DOWN
#define _RIGHT_ &kp RIGHT

// Auto-shift macro
#define AS(keycode) &as LS(keycode) keycode

// Auto-shift letters
#define ___A___ AS(A)
#define ___B___ AS(B)
#define ___C___ AS(C)
#define ___D___ AS(D)
#define ___E___ AS(E)
#define ___F___ AS(F)
#define ___G___ AS(G)
#define ___H___ AS(H)
#define ___I___ AS(I)
#define ___J___ AS(J)
#define ___K___ AS(K)
#define ___L___ AS(L)
#define ___M___ AS(M)
#define ___N___ AS(N)
#define ___O___ AS(O)
#define ___P___ AS(P)
#define ___Q___ AS(Q)
#define ___R___ AS(R)
#define ___S___ AS(S)
#define ___T___ AS(T)
#define ___U___ AS(U)
#define ___V___ AS(V)
#define ___W___ AS(W)
#define ___X___ AS(X)
#define ___Y___ AS(Y)
#define ___Z___ AS(Z)

// Number keys
#define ___0___ &kp N0
#define ___1___ &kp N1
#define ___2___ &kp N2
#define ___3___ &kp N3
#define ___4___ &kp N4
#define ___5___ &kp N5
#define ___6___ &kp N6
#define ___7___ &kp N7
#define ___8___ &kp N8
#define ___9___ &kp N9

// Nordic characters (Option key combos)
#define _ARING_ &kp RA(A)             // Å
#define _OSLSH_ &kp RA(O)             // Ø
#define _AELIG_ &kp RA(SINGLE_QUOTE)  // Æ

// Common keys
#define _SPACE_ &kp SPACE
#define __TAB__ &kp TAB
#define _ENTER_ &kp ENTER
#define _BKSPC_ &kp BACKSPACE
#define __DEL__ &kp DELETE
#define __ESC__ &kp ESC
#define _LGUI__ &kp LGUI              // Left Command (⌘)
#define _LOWER_ &mo 1
#define _RAISE_ &mo 2

// Sticky modifiers
#define _LSHFT_ &sk LEFT_SHIFT
#define _RSHFT_ &sk RIGHT_SHIFT
#define _LCTRL_ &sk LEFT_CONTROL
#define _LOPT__ &sk LEFT_ALT
#define _LCMD__ &sk LEFT_COMMAND

// Math symbols
#define _MINUS_ &kp MINUS
#define _PLUS__ &kp PLUS
#define _EQUAL_ &kp EQUAL

// Punctuation
#define _COMMA_ &kp COMMA
#define _EXCL__ &kp EXCL
#define _SCLON_ &kp SEMI
#define _COLON_ &kp COLON
#define _GRAVE_ &kp GRAVE
#define _TILDE_ &kp TILDE
#define _PIPE__ &kp PIPE
#define __DOT__ &kp PERIOD
#define _FSLH__ &kp FSLH
#define _BSLH__ &kp BSLH
#define _SQUOT_ &kp SINGLE_QUOTE
#define _DQUOT_ &kp DOUBLE_QUOTES

// macOS editing shortcuts
#define MAC_UNDO &kp LG(Z)
#define MAC_REDO &kp LS(LG(Z))
#define MAC_COPY &kp LG(C)
#define MAC_PASTE &kp LG(V)
#define MAC_CUT &kp LG(X)
#define MAC_SELECT_ALL &kp LG(A)

// Screenshot
#define _SCRSH_ &kp LS(LG(N4))        // Selection screenshot

// Bluetooth
#define _BTCLR_ &bt BT_CLR            // Clear current profile's bond
#define _BTPRV_ &bt BT_PRV
#define _BTNXT_ &bt BT_NXT
#define _BT_00_ &bt BT_SEL 0
#define _BT_01_ &bt BT_SEL 1
#define _BT_02_ &bt BT_SEL 2

// Navigation keys
#define _HOME__ &kp HOME
#define __END__ &kp END
#define _PGUP__ &kp PAGE_UP
#define _PGDN__ &kp PAGE_DOWN

// macOS Mission Control keys
#define _MCTRL_ &kp LC(UP)            // Mission Control
#define _EXPOS_ &kp LC(DOWN)          // App Exposé
#define _DSK_L_ &kp LC(LEFT)          // Desktop left
#define _DSK_R_ &kp LC(RIGHT)         // Desktop right
