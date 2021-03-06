/*
  pins.h
  Header file mapping to the 2017-2018 boat

  Created in December 2017, QMAST
*/


//#define DEBUG // Comment this line out to disable debug printing to USB serial

#ifdef DEBUG
 #define DEBUG_PRINTLN(x)  SERIAL_PORT_CONSOLE.println (x)
 #define DEBUG_PRINT(x)  SERIAL_PORT_CONSOLE.print (x)
#else
 #define DEBUG_PRINTLN(x)
 #define DEBUG_PRINT(x)
#endif

#ifndef _PINS_H
#define _PINS_H

// Console
#define SERIAL_PORT_CONSOLE         Serial
#define SERIAL_BAUD_CONSOLE         57600

// XBee
#define SERIAL_PORT_XBEE            Serial1
#define SERIAL_BAUD_XBEE            57600

// Raspberry Pi
#define SERIAL_PORT_RPI             Serial2
#define SERIAL_BAUD_RPI             9600

// GPS
#define SERIAL_PORT_GPS             Serial3
#define SERIAL_BAUD_GPS             9600

#define PORT_RPI                    1
#define PORT_XBEE                   2

// Remote control (Spektrum)
#define PIN_RC_CH1                  22
#define PIN_RC_CH2                  23
#define PIN_RC_CH3                  24
#define PIN_RC_CH4                  25
#define PIN_RC_CH5                  26
#define PIN_RC_CH6                  27
#define PIN_RC_CH7                  28
#define PIN_RC_CH8                  29

#define RC_STD_TIMEOUT 50000 // Time (micros) to wait for pulses to begin from the RC receiver, recommend at least 20000
#define RC_MIN_DELAY 50 // Minimum time (millis) between checking RC input
#define RC_SMOOTHING_CONS 250 //Time (millis) over which to perform exponential smoothing (tau value)

#define CHANNEL_RUDDERS PIN_RC_CH2 // Adjust this so the left/right motion of the right stick corresponds with rudder movement
#define RUDDER_PULSE_LOW 1093
#define RUDDER_PULSE_HIGH 1890
#define RUDDER_DEAD_WIDTH 30

#define CHANNEL_WINCH PIN_RC_CH1 // Adjust this so that the up/down motion of the left stick corresponds with the winch channel
#define WINCH_PULSE_LOW 1100
#define WINCH_PULSE_HIGH 1880

// Servo connections
#define PIN_SERVO_1                 8
#define PIN_SERVO_2                 9
#define PIN_SERVO_3                 10
#define PIN_SERVO_WINCH             7

// Wind Vane (Analog)
#define APIN_WINDVANE               1

// Compass (CMPS11) 
#define COMPASS_ADDRESS             0xC0

#endif
