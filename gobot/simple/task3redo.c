#pragma config(Sensor, in1,    lineFollower,   sensorLineFollower)
#pragma config(Sensor, in2,    potentiometer,  sensorPotentiometer)
#pragma config(Sensor, dgtl1,  limitSwitch,    sensorTouch)
#pragma config(Sensor, dgtl2,  bumpSwitch,     sensorTouch)
#pragma config(Sensor, dgtl12, green,          sensorLEDtoVCC)
#pragma config(Motor,  port1,           frontMotor,    tmotorVex393_HBridge, openLoop)
#pragma config(Motor,  port2,           backMotor,     tmotorServoContinuousRotation, openLoop)
task main()
{
untilTouch(dgtl2);
startMotor(port1,63.5);
startMotor(port2,-63.5);
wait(2);
stopMotor(port1);
stopMotor(port2);
}
