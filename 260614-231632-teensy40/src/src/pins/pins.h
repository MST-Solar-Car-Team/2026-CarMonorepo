#include <Arduino.h>

#include "../states/states.h"

#pragma once


//kust checking

/////   PIN DEFINITIONS
#define ACC_PEDAL A7
#define ACC_BASELINE A6
// outputs
#define BLINKER_BACK_LEFT 35 //60 //39
#define BLINKER_BACK_RIGHT 33 //55 //41

#define BLINKER_FRONT_LEFT 27 //15 //36
#define BLINKER_FRONT_RIGHT 23 //19 //35

#define HEADLIGHTS 30

#define BRAKE_RIGHT 36 //116 //42
#define BRAKE_LEFT  36 //116 //44

#define CRUISE_CONTROL 8
#define LEFT_TURN_SIGNAL_BUTTON   6
#define RIGHT_TURN_SIGNAL_BUTTON  5
#define HEADLIGHTS_BUTTON 2 //6
#define HORN_BUTTON 2
#define BRAKE_SWITCH 7 //9
#define REVERSE_SWITCH 11

#define LEFT_INTERNAL_SIGNAL 29
#define RIGHT_INTERNAL_SIGNAL 32

//MAIN BOARD PINS

//Digital Inputs
// todo: rename buttons to function of button name when wired
#define Button1 2
#define Button2 3
#define Button3 4
#define Button4 5
#define Button5 6
#define ThrotError 7
#define BrakePedal 8

//Relays
#define HornRelay 9
#define BrakeRelay 10
#define LeftLight 11
#define RightLight 12
#define BatteryRelay 13

//empty: 14, 15

//Analog Inputs
#define Throttle1 A2 //16
#define Throttle2 A3 //17
#define SteerEnc  A4 //18

//empty: 19

//Serial
#define USART_TX A6 //20
#define USART_RX A7 //21

//CAN
//CanRx0 23
//CanTx0 22

//CanRx1 0
//CanTx1 1


void pinInit();
