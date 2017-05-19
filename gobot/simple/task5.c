//Motor and Sensor Setup
#pragma config(Sensor, in1,    lineFollower,   sensorLineFollower)
#pragma config(Sensor, in2,    potentiometer,  sensorPotentiometer)
#pragma config(Sensor, dgtl1,  limitSwitch,    sensorTouch)
#pragma config(Sensor, dgtl2,  bumpSwitch,     sensorTouch)
#pragma config(Sensor, dgtl12, green,          sensorLEDtoVCC)
#pragma config(Motor,  port1,           frontMotor,    tmotorVex393_HBridge, openLoop)
#pragma config(Motor,  port2,           backMotor,     tmotorServoContinuousRotation, openLoop)
//Setup Done

task main()
{
turnLEDOn(dgtl12); //Turn LED On for debug
untilTouch(dgtl2); //Wait until Bumper Switch is pressed
turnLEDOff(dgtl12); //Turn LED Off for debug
startMotor(port1,127); //Start Front Motor at full speed
startMotor(port2,127); //Start Back Motor at full speed
untilTouch(dgtl1); //Wait Until Limit Switch is touched
turnLEDOn(dgtl12); //Turn LED On for debug
stopMotor(port1); //Stop Front Motor
stopMotor(port2); //Stop Back Motor
}
