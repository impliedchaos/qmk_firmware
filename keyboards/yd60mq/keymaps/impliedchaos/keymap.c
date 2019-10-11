#include QMK_KEYBOARD_H

enum custom_keycodes {
   LODAP = SAFE_RANGE,
   CRZRUN,
   TABFLP,
   DUNNO
};

enum unicode_names {
   // Shift pairs go at the beginning. They must be the first 127 codes.
   IBANG,    PRIME,
   CURRENCY, GBP,
   JPY,      EMDASH,
   MLTPLY,   DIVIDE,
   UADIA,    LADIA,
   UARNG,    LARNG,
   UEACT,    LEACT,
   UTHRN,    LTHRN,
   UUDIA,    LUDIA,
   UUACT,    LUACT,
   UIACT,    LIACT,
   UOACT,    LOACT,
   UODIA,    LODIA,
   NOTSIN,   BRKNB,
   UAACT,    LAACT,
   SCTSIN,   SSHRPS,
   UDLIN,    LDLIN,
   UOSTR,    LOSTR,
   DEGREE,   PILCRW,
   CGRV,     CTLD,
   CCRT,     QUARTER,
   CDIA,     CACT,
   UAE,      LAE,
   CENT,     COPYR,
   UENE,     LENE,
   UCCED,    LCCED,
   INTBNG,   IINTBNG,

   INVQ, 
   SQUARE,
   CUBE,
   EURO,
   HALF,
   THRQU,
   LSQM,
   RSQM,
   REGTR,
   LDAQ,
   RDAQ,
   LMU,
   SKULL,
   NUKE,
   BIOH,
   RLAXD,
   SMILEY,
   JOY,
   GRIN,
   WINK,
   SAD,
   CRY,
   ANGRY,
   NEUTRAL,
   CRAZY,
   MEH,
   TIRED,
   SILENT,
   HNDL,
   HNDR,
   HNDU,
   HNDD,
   FIST,
   ARRU,
   ARRD,
   ARRL,
   ARRR,
   EGGPL,
   POOP
};

const uint32_t PROGMEM unicode_map[] = {
   // Listing pairs first for consistency, but the enum already did it.
   [IBANG]   = 0x00A1, [PRIME]   = 0x00B9,
   [CURRENCY]= 0x00A4, [GBP]     = 0x00A3,
   [JPY]     = 0x00A5, [EMDASH]  = 0x2014,
   [MLTPLY]  = 0x00D7, [DIVIDE]  = 0x00F7,
   [UADIA]   = 0x00C4, [LADIA]   = 0x00E4,
   [UARNG]   = 0x00C5, [LARNG]   = 0x00E5,
   [UEACT]   = 0x00C9, [LEACT]   = 0x00E9,
   [UTHRN]   = 0x00DE, [LTHRN]   = 0x00FE,
   [UUDIA]   = 0x00DC, [LUDIA]   = 0x00FC,
   [UUACT]   = 0x00DA, [LUACT]   = 0x00FA,
   [UIACT]   = 0x00CD, [LIACT]   = 0x00ED,
   [UOACT]   = 0x00D3, [LOACT]   = 0x00F3,
   [UODIA]   = 0x00D6, [LODIA]   = 0x00F6,
   [NOTSIN]  = 0x00AC, [BRKNB]   = 0x00A6,
   [UAACT]   = 0x00C1, [LAACT]   = 0x00E1,
   [SCTSIN]  = 0x00A7, [SSHRPS]  = 0x00DF,
   [UDLIN]   = 0x0110, [LDLIN]   = 0x0111,
   [UOSTR]   = 0x00D8, [LOSTR]   = 0x00F8,
   [DEGREE]  = 0x00B0, [PILCRW]  = 0x00B6,
   [QUARTER] = 0x00BC, [CCRT]    = 0x0302,
   [CGRV]    = 0x0300, [CTLD]    = 0x0303,
   [CDIA]    = 0x0308, [CACT]    = 0x0301,
   [UAE]     = 0x00C6, [LAE]     = 0x00E6,
   [CENT]    = 0x00A2, [COPYR]   = 0x00A9,
   [UENE]    = 0x00D1, [LENE]    = 0x00F1,
   [UCCED]   = 0x00C7, [LCCED]   = 0x00E7,
   [INTBNG]  = 0x203D, [IINTBNG] = 0x2e18,

   [INVQ]    = 0x00BF, 
   [SQUARE]  = 0x00B2,
   [CUBE]    = 0x00B3,
   [EURO]    = 0x20AC,
   [HALF]    = 0x00BD,
   [THRQU]   = 0x00BE,
   [LSQM]    = 0x2018,
   [RSQM]    = 0x2019,
   [REGTR]   = 0x00AE,
   [LDAQ]    = 0x00AB,
   [RDAQ]    = 0x00BB,
   [LMU]     = 0x03BC,
   [SKULL]   = 0x2620,
   [NUKE]    = 0x2622,
   [BIOH]    = 0x2623,
   [RLAXD]   = 0x263A,
   [SMILEY]  = 0x1F603,
   [JOY]     = 0x1F602,
   [GRIN]    = 0x1F601,
   [WINK]    = 0x1F609,
   [SAD]     = 0x2639,
   [CRY]     = 0x1F622,
   [ANGRY]   = 0x1F620,
   [NEUTRAL] = 0x1F610,
   [CRAZY]   = 0x1F61C,
   [MEH]     = 0x1F612,
   [TIRED]   = 0x1F62B,
   [SILENT]  = 0x1F636,
   [HNDL]    = 0x1F448,
   [HNDR]    = 0x1F449,
   [HNDU]    = 0x1F446,
   [HNDD]    = 0x1F447,
   [FIST]    = 0x270A,
   [ARRU]    = 0x2B06,
   [ARRD]    = 0x2B07,
   [ARRL]    = 0x2B05,
   [ARRR]    = 0x27A1,
   [EGGPL]   = 0x1F346,
   [POOP]    = 0x1F4A9
};

#define _BASE 0
#define _FN_1 1
#define _FN_2 2
#define _FN_3 3
#define _ALTG 4
#define _FALT 5

#define NOxNO KC_NO

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

	[_BASE] = LAYOUT(
		KC_ESC,  KC_1,    KC_2,    KC_3,  KC_4,   KC_5,  KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_MINS, KC_EQL, KC_BSPC,  KC_GRV, 
		KC_TAB,  KC_Q,    KC_W,    KC_E,  KC_R,   KC_T,  KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_LBRC, KC_RBRC, KC_BSLS, 
		KC_RCTL, KC_A,    KC_S,    KC_D,  KC_F,   KC_G,  KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_QUOT, KC_ENT,  KC_ENT, 
		KC_LSFT, KC_LSFT, KC_Z,    KC_X,  KC_C,   KC_V,  KC_B,    KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH, KC_RSFT, KC_UP, KC_INS, 
		KC_LCTL, KC_LGUI, KC_LALT, MO(_FN_1),            KC_SPC,            MO(_FN_2),   MO(_ALTG), KC_RGUI, KC_LEFT, KC_DOWN, KC_RGHT),

	[_FN_1] = LAYOUT(
		NOxNO, KC_F1, KC_F2, KC_F3, KC_F4, KC_F5, KC_F6, KC_F7, KC_F8, KC_F9, KC_F10, KC_F11, KC_F12, KC_DEL, NOxNO,
		NOxNO, NOxNO, KC_UP, NOxNO, NOxNO, NOxNO, NOxNO, NOxNO, NOxNO, NOxNO, NOxNO, NOxNO, KC_TRNS, NOxNO, 
		KC_CAPS, KC_LEFT, KC_DOWN, KC_RGHT, NOxNO, NOxNO, NOxNO, NOxNO, NOxNO, NOxNO, NOxNO, NOxNO, NOxNO, NOxNO, 
		KC_TRNS, KC_TRNS, NOxNO, NOxNO, NOxNO, NOxNO, NOxNO, NOxNO, NOxNO, NOxNO, NOxNO, NOxNO, KC_TRNS, KC_PGUP, KC_DEL, 
		KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_ENT, MO(_FN_3), MO(_FALT), KC_TRNS, KC_HOME, KC_PGDN, KC_END),

	[_FN_2] = LAYOUT(
		NOxNO, KC_F1, KC_F2, KC_F3, KC_F4, KC_F5, KC_F6, KC_F7, KC_F8, KC_F9, KC_F10, KC_F11, KC_F12, KC_DEL, NOxNO,
		NOxNO, NOxNO, KC_UP, NOxNO, NOxNO, NOxNO, NOxNO, NOxNO, NOxNO, NOxNO, NOxNO, NOxNO, KC_TRNS, NOxNO, 
		KC_CAPS, KC_LEFT, KC_DOWN, KC_RGHT, NOxNO, NOxNO, NOxNO, NOxNO, NOxNO, NOxNO, NOxNO, NOxNO, NOxNO, NOxNO, 
		KC_TRNS, KC_TRNS, NOxNO, NOxNO, NOxNO, NOxNO, NOxNO, NOxNO, NOxNO, NOxNO, NOxNO, NOxNO, KC_TRNS, KC_PGUP, KC_DEL, 
		KC_TRNS, KC_TRNS, KC_TRNS, MO(_FN_3), KC_ENT, KC_TRNS, MO(_FALT), KC_TRNS, KC_HOME, KC_PGDN, KC_END),

	[_FN_3] = LAYOUT(
		RESET, KC_F13, KC_F14, KC_F15, KC_F16, KC_F17, KC_F18, KC_F19, KC_F20, KC_F21, KC_F22, KC_F23, KC_F24, NOxNO, NOxNO, 
		RGB_MOD, RGB_HUI, RGB_HUD, NOxNO, NOxNO, NOxNO, NOxNO, NOxNO, NOxNO, NOxNO, NOxNO, NOxNO, NOxNO, NOxNO, 
		NOxNO, RGB_SAI, RGB_SAD, NOxNO, NOxNO, NOxNO, NOxNO, NOxNO, NOxNO, NOxNO, NOxNO, NOxNO, NOxNO, UC_MOD, 
		NOxNO, NOxNO, RGB_VAI, RGB_VAD, NOxNO, NOxNO, NOxNO, NOxNO, NOxNO, NOxNO, NOxNO, NOxNO, NOxNO, BL_INC, NOxNO, 
		NOxNO, NOxNO, NOxNO, KC_TRNS, NOxNO, KC_TRNS, KC_TRNS, NOxNO, NOxNO, BL_DEC, NOxNO),

	[_ALTG] = LAYOUT(
      RALT(KC_ESC), XP(IBANG,PRIME),X(SQUARE),        X(CUBE),        XP(CURRENCY,GBP),X(EURO),        XP(QUARTER,CCRT),X(HALF),        X(THRQU),       X(LSQM),           X(RSQM),          XP(JPY,EMDASH),XP(MLTPLY,DIVIDE), RALT(KC_BSPC), XP(CGRV,CTLD),
      RALT(KC_TAB), XP(LADIA,UADIA),XP(LARNG,UARNG),  XP(LEACT,UEACT),X(REGTR),        XP(LTHRN,UTHRN),XP(LUDIA,UUDIA), XP(LUACT,UUACT),XP(LIACT,UIACT),XP(LOACT,UOACT),   XP(LODIA,UODIA),  X(LDAQ),       X(RDAQ),           XP(NOTSIN,BRKNB),
      RALT(KC_RCTL),XP(LAACT,UAACT),XP(SSHRPS,SCTSIN),XP(LDLIN,UDLIN),X(SKULL),        LODAP,          TABFLP,          CRZRUN,         DUNNO,          XP(LOSTR,UOSTR),   XP(PILCRW,DEGREE),XP(CACT,CDIA),                    RALT(KC_ENT), RALT(KC_ENT),
      RALT(KC_LSFT),RALT(KC_LSFT),XP(LAE,UAE),    RALT(KC_X),       XP(COPYR,CENT), X(NUKE),         X(BIOH),        XP(LENE,UENE),   X(LMU),         XP(LCCED,UCCED),XP(INTBNG,IINTBNG),X(INVQ),          RALT(KC_RSFT), RALT(KC_UP),       RALT(KC_INS),
      RALT(KC_LCTL),RALT(KC_LGUI),  RALT(KC_LALT),    MO(_FALT),                                RALT(KC_SPC),                               MO(_FALT),          KC_TRNS,             RALT(KC_RGUI),    RALT(KC_LEFT), RALT(KC_DOWN),     RALT(KC_RIGHT) ),

	[_FALT] = LAYOUT(
      NOxNO,X(RLAXD),X(SMILEY),X(GRIN),X(JOY),X(WINK),X(CRAZY),X(NEUTRAL),X(SILENT),X(MEH),X(SAD),X(CRY),X(ANGRY), NOxNO, NOxNO,
		NOxNO, NOxNO, NOxNO, NOxNO, NOxNO, NOxNO, NOxNO, NOxNO, NOxNO, NOxNO, NOxNO, NOxNO, NOxNO, NOxNO, 
		NOxNO, NOxNO, NOxNO, NOxNO, NOxNO, NOxNO, NOxNO, NOxNO, NOxNO, NOxNO, NOxNO, NOxNO, NOxNO, X(POOP), 
		NOxNO, NOxNO, NOxNO, NOxNO, NOxNO, NOxNO, NOxNO, NOxNO, NOxNO, NOxNO, NOxNO, NOxNO, NOxNO, X(ARRU), NOxNO, 
		NOxNO, NOxNO, NOxNO, KC_TRNS, X(EGGPL), KC_TRNS, KC_TRNS, NOxNO, X(ARRL), X(ARRD), X(ARRR)),

};

void matrix_init_user(void) {
}

void matrix_scan_user(void) {
}

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  switch (keycode) {
    case LODAP:
      if (record->event.pressed) {
        send_unicode_hex_string("0CA0 005F 0CA0");
      }
      break;
    case TABFLP:
      if (record->event.pressed) {
        send_unicode_hex_string("0028 256F 00B0 25A1 00B0 FF09 256F FE35 0020 253B 2501 253B");
      }
      break;
    case CRZRUN:
      if (record->event.pressed) {
        send_unicode_hex_string("1555 0028 0020 141B 0020 0029 1557");
      }
      break;
    case DUNNO:
      if (record->event.pressed) {
        send_unicode_hex_string("00AF 005C 005F 0028 30C4 0029 005F 002F 00AF");
      }
      break;
  }
  return true;
};

