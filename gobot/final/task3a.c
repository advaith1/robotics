#pragma config(Sensor, in1,    lineFollower,   sensorLineFollower)
#pragma config(Sensor, in2,    potentiometer,  sensorPotentiometer)
#pragma config(Sensor, dgtl1,  limitSwitch,    sensorTouch)
#pragma config(Sensor, dgtl2,  bumpSwitch,     sensorTouch)
#pragma config(Sensor, dgtl12, green,          sensorLEDtoVCC)
#pragma config(Motor,  port1,           rightMotor,    tmotorVex393_HBridge, openLoop, reversed)
#pragma config(Motor,  port2,           leftMotor,     tmotorServoContinuousRotation, openLoop)
//motor and sensor setup end
task main()
{
untilLight(2772, in1);
startMotor(port1, 50);
startMotor(port2, 50);
untilDark(2772, in1);
stopMotor(port1);
stopMotor(port2);
}
