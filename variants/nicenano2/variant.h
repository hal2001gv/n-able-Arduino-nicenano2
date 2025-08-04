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

/*
 * Buttons
 */
#define PIN_BUTTON1          (34) // P1_02

/*
 * Analog pins
 */
#define PIN_A0               (2)  // P0_02 (AIN0)
#define PIN_A2               (4)  // P0_04 (AIN2) - Battery (Used to read the voltage of the battery via ADC. It can’t be used for any other function)
#define PIN_A5               (29) // P0_29 (AIN5)
#define PIN_A7               (31) // P0_31 (AIN7)

/* Jan
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

/* Jan
// Power control
#define PIN_VCC_CONTROL      (13) // P0_13 - VCC control pin (Shuts off the power to VCC when you set it to high; This saves on battery immensely for LEDs of all kinds that eat power even when off
*/

#ifdef __cplusplus
}
#endif

/*----------------------------------------------------------------------------
 *        Arduino objects - C++ only
 *----------------------------------------------------------------------------*/

#endif
