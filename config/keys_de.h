/*
 * German (DE, T1) keycode aliases for ZMK.
 *
 * A ZMK port of QMK's quantum/keymap_extras/keymap_german.h, using the same
 * DE_* naming convention. Like the QMK original, these are *positional*
 * aliases: they name the US key positions that the German T1 layout maps to
 * the umlauts and eszett. ZMK sends raw HID usage codes; the host OS decides
 * which character they produce.
 *
 * Requires the host keyboard layout to be set to German. On a US host these
 * keys produce ' ; [ - instead. (The `lang` macro on the commands layer
 * sends Alt+Shift to switch host layouts.)
 */

#pragma once

#include <dt-bindings/zmk/keys.h>

#define DE_ADIA SQT    // ä  (shifted: Ä)   QMK: KC_QUOT
#define DE_ODIA SEMI   // ö  (shifted: Ö)   QMK: KC_SCLN
#define DE_UDIA LBKT   // ü  (shifted: Ü)   QMK: KC_LBRC
#define DE_SS   MINUS  // ß  (shifted: ?)   QMK: KC_MINS
