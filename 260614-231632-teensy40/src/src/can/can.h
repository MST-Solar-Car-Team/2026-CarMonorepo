#include <Arduino.h>
#include <FlexCAN_T4.h>

#include "../states/states.h"

#pragma once

// CAN addresses
constexpr short DRIVE_FRAME_ID = 0x501;
constexpr short POWER_FRAME_ID = 0x502;

constexpr short MOTOR_STATUS_FRAME_ID = 0x401;
constexpr short MOTOR_HEAT_FRAME_ID = 0x40B;
constexpr short MOTOR_VELOCITY_FRAME_ID = 0x403;

constexpr float VELOCITY_MAX = 9000;
constexpr float REVERSE_VELOCITY_MAX = -9000;
constexpr float CURRENT_MAX = 1;

// Initialize CAN1 port with 256 RX buffers and 16 TX mailboxes
FlexCAN_T4<CAN1, RX_SIZE_256, TX_SIZE_16> can1;
FlexCAN_T4<CAN2, RX_SIZE_256, TX_SIZE_16> can2;

void handle_can_message(CAN_message_t *frame);

CAN_message_t get_drive_frame(carState &car);

CAN_message_t get_power_frame();

void send_drive_message(carState &car);

void send_power_message();
