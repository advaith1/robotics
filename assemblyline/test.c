#pragma config(Sensor, in1,    starter,        sensorLineFollower)
#pragma config(Sensor, in2,    init,        sensorLineFollower)
#pragma config(Motor,  port2,           drill,         tmotorVex393_MC29, openLoop)
#pragma config(Motor,  port3,           chain1,        tmotorServoContinuousRotation, openLoop, reversed)
#pragma config(Motor,  port4,           chain2,        tmotorServoContinuousRotation, openLoop, reversed)
#pragma config(Motor,  port5,           updown,        tmotorServoContinuousRotation, openLoop, reversed)
//*!!Code automatically generated by 'ROBOTC' configuration wizard               !!*//
task main()
{
	repeat(forever)
	{
		waitUntil(SensorValue[starter] < 2050);
		startMotor(chain1,50);
		startMotor(chain2,50);}}
