/* This file is part of the MicroPython project, http://micropython.org/
 * MIT License; Copyright (c) 2019 Damien P. George
 */

#define MICROPY_HW_BOARD_NAME       "WEACTWB55CG"
#define MICROPY_HW_MCU_NAME         "STM32WB55CGV6"

#define MICROPY_PY_PYB_LEGACY       (0)

#define MICROPY_HW_HAS_FLASH        (1)
#define MICROPY_HW_ENABLE_RTC       (1)
#define MICROPY_HW_ENABLE_RNG       (1)
#define MICROPY_HW_ENABLE_USB       (1)
// #define MICROPY_HW_HAS_SWITCH       (1)

// There is an external 32kHz oscillator
#define RTC_ASYNCH_PREDIV           (0)
#define RTC_SYNCH_PREDIV            (0x7fff)
#define MICROPY_HW_RTC_USE_LSE      (1)
#define MICROPY_HW_RTC_USE_US       (1)

// UART buses
#define MICROPY_HW_UART1_TX         (pin_B6)
#define MICROPY_HW_UART1_RX         (pin_B7)
#define MICROPY_HW_LPUART1_TX       (pin_A2)
#define MICROPY_HW_LPUART1_RX       (pin_A3)
// USART 1 is connected to the virtual com port on the ST-LINK
#define MICROPY_HW_UART_REPL        PYB_UART_1
#define MICROPY_HW_UART_REPL_BAUD   115200

// I2C buses
#define MICROPY_HW_I2C1_SCL         (pin_B8)
#define MICROPY_HW_I2C1_SDA         (pin_B9)

// SPI buses
#define MICROPY_HW_SPI1_NSS         (pin_A4)
#define MICROPY_HW_SPI1_SCK         (pin_A5)
#define MICROPY_HW_SPI1_MISO        (pin_A6)
#define MICROPY_HW_SPI1_MOSI        (pin_A7)

// User switch; pressing the button makes the input go low
// #define MICROPY_HW_USRSW_PIN        (pin_C4)
// #define MICROPY_HW_USRSW_PULL       (GPIO_PULLUP)
// #define MICROPY_HW_USRSW_EXTI_MODE  (GPIO_MODE_IT_FALLING)
// #define MICROPY_HW_USRSW_PRESSED    (0)

// LEDs
#define MICROPY_HW_LED1             (pin_E4) // blue
#define MICROPY_HW_LED_ON(pin)      (mp_hal_pin_high(pin))
#define MICROPY_HW_LED_OFF(pin)     (mp_hal_pin_low(pin))

// USB config
#define MICROPY_HW_USB_FS           (1)
#define MICROPY_HW_USB_CDC_RX_DATA_SIZE (512)
#define MICROPY_HW_USB_CDC_TX_DATA_SIZE (512)

// Bluetooth config
#define MICROPY_HW_BLE_UART_ID       (0)
#define MICROPY_HW_BLE_UART_BAUDRATE (115200)
