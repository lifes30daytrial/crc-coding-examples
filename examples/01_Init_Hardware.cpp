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

/*
 * Initializing Sensors and Mechanisms:
 * 
 * The first part, "pros::", is telling the compiler that this variable type (motor) is from the
 * PROS library.
 *
 * The second part is "Motor", which means you are creating a variable that is a Motor from PROS.
 *
 * Next comes "motor_name," which is the name of your motor.
 *
 * Inside the brackets, the parameters go ( PORT_NUMBER, GEARSET [gear cartridge], REVERSE INDICATOR, ENCODER UNITS [degrees, counts, revolutions] )
 * 
 * For example:                                                                                                                                   */
#define PORT_NUMBER 10
/* Shows that the port this motor should be connected to is port 10.                                                                              */
#define GEARSET pros::E_MOTOR_GEARSET_18
/* Shows that the motor is using a 1:18 cartridge, which is a Green Cartridge.                                                                    */
#define REVERSED false
/* This variable will determine if a motor will spin positive or negative.                                                                        */
#define ENCODER pros::E_MOTOR_ENCODER_COUNTS
/* This is the unit that the motor encoder will return. This can be in degrees, revolutions, or counts.                                           */

void example_one() {
    pros::Motor motor_name(PORT_NUMBER, GEARSET, REVERSED, ENCODER);
}