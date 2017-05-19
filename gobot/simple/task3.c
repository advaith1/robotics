//Motor and Sensor Setup
#pragma config(Sensor, in1,    lineFollower,   sensorLineFollower)
#pragma config(Sensor, in2,    potentiometer,  sensorPotentiometer)
#pragma config(Sensor, dgtl1,  limitSwitch,    sensorTouch)
#pragma config(Sensor, dgtl2,  bumpSwitch,     sensorTouch)
#pragma config(Sensor, dgtl12, greenLED,       sensorLEDtoVCC)
#pragma config(Motor,  port1,           frontMotor,    tmotorVex393_HBridge, openLoop)
#pragma config(Motor,  port2,           backMotor,     tmotorServoContinuousRotation, openLoop)
//end Motor & Sensor Setup
//WARNING: MAKE SURE ROBOT IS UPSIDE DOWN (MICROCONTROLLER UP) BEFOR RUNNING PROGRAM!!!!!
task main()
{
turnLEDOff(dgtl12); //turn LED off for debug
untilTouch(dgtl2); //wait until Bumper Switch pressed
turnLEDOn(dgtl12); //turn LED On for debug
startMotor(port1, 63.5); //turn Front Motor on at half power
startMotor(port2, -63.5); //turn Back Motor on at half power reverse
wait(2); //wait 2 secs
stopMotor(port1); //stop Front Motor
stopMotor(port2); //stop Back Motor
}
