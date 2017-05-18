#pragma config(Sensor, in1,    lineFollower,   sensorLineFollower)
#pragma config(Sensor, in2,    potentiometer,  sensorPotentiometer)
#pragma config(Sensor, dgtl1,  limitSwitch,    sensorTouch)
#pragma config(Sensor, dgtl2,  bumpSwitch,     sensorTouch)
#pragma config(Sensor, dgtl12, green,          sensorLEDtoVCC)
#pragma config(Motor,  port1,           rightMotor,    tmotorVex393_HBridge, openLoop, reversed)
#pragma config(Motor,  port2,           leftMotor,     tmotorServoContinuousRotation, openLoop)
//Motor and Sensor Setup above
task main()
{
turnLEDOn(dgtl12);
untilTouch(dgtl2);
turnLEDOff(dgtl12);
startMotor(port2,127);
startMotor(port1,127);
wait(2);
stopMotor(port1);
stopMotor(port2);
startMotor(port2,127);
startMotor(port1, -127);
wait(8);
stopMotor(port1);
stopMotor(port2);
startMotor(port2,127);
startMotor(port1, 127);
wait(2);
stopMotor(port1);
stopMotor(port2);
}
