/**
 * @file 01_Init_Hardware.cpp
 * @author Jonathan Xu (jonathanxu29@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2022-12-01
 * 
 * @copyright Copyright (c) 2022
 * 
 */

// "main.h" is a file that includes all PROS libraries for you to use.
#include "main.h"
#include "examples.h"

#define PORT_NUMBER 10
#define GEARSET pros::E_MOTOR_GEARSET_18
#define REVERSED false
#define ENCODER pros::E_MOTOR_ENCODER_COUNTS

void example_two() {
    pros::Motor motor_name(PORT_NUMBER, GEARSET, REVERSED, ENCODER);
    // if the B button has changed from unpressed to pressed:
    if (master.get_digital_new_press(DIGITAL_A)) {
        motor_name.move_relative(150, 100);
    }
    // if the B button is being pressed:
    if (master.get_digital(DIGITAL_B)) {
        motor_name.move_relative(10, 100);
    }
    // the motor will move to the left joystick's y position
    motor_name = master.get_analog(ANALOG_LEFT_Y);
}