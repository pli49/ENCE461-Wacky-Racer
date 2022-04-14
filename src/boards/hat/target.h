/** @file   target.h
    @author M. P. Hayes, UCECE
    @date   12 February 2018
    @brief
*/
#ifndef TARGET_H
#define TARGET_H

#include "mat91lib.h"

/* This is for the carhat (chart) board configured as a hat!  */

/* System clocks  */
#define F_XTAL 12.00e6
#define MCU_PLL_MUL 16
#define MCU_PLL_DIV 1

#define MCU_USB_DIV 2
/* 192 MHz  */
#define F_PLL (F_XTAL / MCU_PLL_DIV * MCU_PLL_MUL)
/* 96 MHz  */
#define F_CPU (F_PLL / 2)

/* TWI  */
#define TWI_TIMEOUT_US_DEFAULT 10000
#define MPU_ADDRESS 0x68

/* USB  */
//#define USB_VBUS_PIO PA5_PIO
#define USB_CURRENT_MA 500

/* ADC  */
#define ADC_BATTERY PA31_PIO
#define ADC_JOYSTICK_X PA17_PIO
#define ADC_JOYSTICK_Y PA18_PIO
#define JOYSTICK_BUTTON_PIO PA30_PIO

/* IMU  */
// NOT CONNECTED
#define IMU_INT_PIO PA0_PIO

/* LEDs  */
#define LED1_PIO PA0_PIO
#define LED2_PIO PA1_PIO

#define STATUS_LED_B_PIO PA19_PIO
#define STATUS_LED_R_PIO PA16_PIO

#define LEDTAPE_PIO PB0_PIO

/* General  */
// NOT CONNECTED
#define APPENDAGE_PIO PA1_PIO

/* Button  */
#define BUTTON_PIO PA2_PIO
#define RED_BUTTON_PIO PA9_PIO
#define BLACK_BUTTON_PIO PA10_PIO

#define BUZZER_PIO PA27_PIO

/* Radio  */
#define RADIO_CS_PIO PA11_PIO
#define RADIO_CE_PIO PA29_PIO
#define RADIO_IRQ_PIO PA15_PIO

#define RADIO_JUMPER_1_PIO PB1_PIO
#define RADIO_JUMPER_2_PIO PB2_PIO

#define SPEAKER_PIO PB14_PIO

#define EXT_STATUS1_PIO PA20_PIO
#define EXT_STATUS2_PIO PA19_PIO
#define EXT_STATUS3_PIO PA16_PIO
#define EXT_BUTTON1_PIO PA10_PIO
#define EXT_BUTTON2_PIO PA9_PIO

#define PSEUDO_RANDOM_PIO PB3_PIO

#define EXT_BUZZER_PIO PA7_PIO
#endif /* TARGET_H  */
