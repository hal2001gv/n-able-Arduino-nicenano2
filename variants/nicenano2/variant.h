#ifndef _VARIANT_NICENANO_
#define _VARIANT_NICENANO_


/** Master clock frequency */
#define VARIANT_MCK       (64000000ul)

/*----------------------------------------------------------------------------
 *        Headers
 *----------------------------------------------------------------------------*/

#include "WVariant.h"

#ifdef __cplusplus
extern "C"
{
#endif // __cplusplus

// Number of pins defined in PinDescription array
#define PINS_COUNT           (48)
#define NUM_DIGITAL_PINS     (48)
#define NUM_ANALOG_INPUTS    (6)
#define NUM_ANALOG_OUTPUTS   (0)

// LEDs
#define PIN_LED              (15)
#define LED_BUILTIN          PIN_LED

#define LED_STATE_ON         1         // State when LED is litted

// Import from Icantmakethings
#define PIN_002  2   // P0.02
#define PIN_003  3   // P0.03
#define PIN_004  4   // P0.04
#define PIN_005  5   // P0.05
#define PIN_006  6   // P0.06
#define PIN_007  7   // P0.07
#define PIN_008  8   // P0.08
#define PIN_009  9   // P0.09
#define PIN_010  10  // P0.10
#define PIN_011  11  // P0.11
#define PIN_012  12  // P0.12
#define PIN_013  13  // P0.13
#define PIN_014  14  // P0.14
#define PIN_015  15  // P0.15
#define PIN_016  16  // P0.16
#define PIN_017  17  // P0.17
#define PIN_018  18  // P0.18
#define PIN_019  19  // P0.19
#define PIN_020  20  // P0.20
#define PIN_021  21  // P0.21
#define PIN_022  22  // P0.22
#define PIN_023  23  // P0.23
#define PIN_024  24  // P0.24
#define PIN_025  25  // P0.25
#define PIN_026  26  // P0.26
#define PIN_027  27  // P0.27
#define PIN_028  28  // P0.28
#define PIN_029  29  // P0.29
#define PIN_030  30  // P0.30
#define PIN_031  31  // P0.31
#define PIN_100  32  // P1.00
#define PIN_101  33  // P1.01
#define PIN_102  34  // P1.02
#define PIN_103  35  // P1.03
#define PIN_104  36  // P1.04 (SDA) (SPECIFY &Wire)
#define PIN_105  37  // P1.05
#define PIN_106  38  // P1.06 (SCL) (SPECIFY &Wire)
#define PIN_107  39  // P1.07 (ss) (uncomment line 90 to use)
#define PIN_108  40  // P1.08
#define PIN_109  41  // P1.09
#define PIN_110  42  // P1.10
#define PIN_111  43  // P1.11 (SCK)
#define PIN_112  44  // P1.12
#define PIN_113  45  // P1.13 (MOSI)
#define PIN_114  46  // P1.14
#define PIN_115  47  // P1.15 (MISO)


/* Out HALGV2001
// Buttons
#define PIN_BUTTON1          (34) // P1_02

// Analog pins
#define PIN_A0               (2)  // P0_02 (AIN0)
#define PIN_A2               (4)  // P0_04 (AIN2) - Battery (Used to read the voltage of the battery via ADC. It can’t be used for any other function)
#define PIN_A5               (29) // P0_29 (AIN5)
#define PIN_A7               (31) // P0_31 (AIN7)

static const uint8_t A0  = PIN_A0;
static const uint8_t A2  = PIN_A2;
static const uint8_t A5  = PIN_A5;
static const uint8_t A7  = PIN_A7;
#define ADC_RESOLUTION    14

// Other pins
#define PIN_AREF           PIN_A7
#define PIN_VBAT           PIN_A2
#define PIN_NFC1           (9)  // P0_09
#define PIN_NFC2           (10) // P0_10

static const uint8_t AREF = PIN_AREF;
*/


/*
 * Serial interfaces
 */
#define PIN_SERIAL1_RX       (6)  // P0_06
#define PIN_SERIAL1_TX       (8)  // P0_08
#define USB_CDC_DEFAULT_SERIAL 1

/*
 * SPI Interfaces
 */
#define SPI_INTERFACES_COUNT 1

#define PIN_SPI_MISO         (47) // P1_15 (SDI)
#define PIN_SPI_MOSI         (45) // P1_13 (SDO)
#define PIN_SPI_SCK          (43) // P1_11 (SCK)

static const uint8_t SS   = (39); // P1_07
static const uint8_t MOSI = PIN_SPI_MOSI;
static const uint8_t MISO = PIN_SPI_MISO;
static const uint8_t SCK  = PIN_SPI_SCK;

/*
 * Wire Interfaces
 */
#define WIRE_INTERFACES_COUNT 1

#define PIN_WIRE_SDA         (36) // P1_04
#define PIN_WIRE_SCL         (38) // P1_06

// Power control
#define PIN_VCC_CONTROL      (13) // P0_13 - VCC control pin (Shuts off the power to VCC when you set it to high; This saves on battery immensely for LEDs of all kinds that eat power even when off


#ifdef __cplusplus
}
#endif

/*----------------------------------------------------------------------------
 *        Arduino objects - C++ only
 *----------------------------------------------------------------------------*/

#endif
