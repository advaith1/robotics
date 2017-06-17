#pragma config(Sensor, in1,    starter,        sensorLineFollower)
#pragma config(Sensor, in2,    init,           sensorLineFollower)
#pragma config(Motor,  port2,           drill,         tmotorVex393_MC29, openLoop)
#pragma config(Motor,  port3,           chain1,        tmotorServoContinuousRotation, openLoop, reversed)
#pragma config(Motor,  port4,           chain2,        tmotorServoContinuousRotation, openLoop, reversed)
#pragma config(Motor,  port5,           updown,        tmotorServoContinuousRotation, openLoop, reversed)
#pragma config(Motor,  port6,           updown2,       tmotorServoContinuousRotation, openLoop)
//*!!Code automatically generated by 'ROBOTC' configuration wizard               !!*//

task main()
{
	repeat(forever)
	{
		waitUntil(SensorValue[starter] < 2050);
		startMotor(chain1,50);
		startMotor(chain2,50);
		waitUntil(SensorValue[init] < 3000);
		wait(0.25);
		stopMotor(chain1);
		stopMotor(chain2);
		startMotor(updown,50);
		startMotor(updown2,50);
		startMotor(drill,50);
		wait(0.75);
		stopMotor(updown);
		stopMotor(updown2);
		stopMotor(drill);
		startMotor(updown,-50);
		startMotor(updown2,-50);
		startMotor(drill,50);
		wait(0.25);
		startMotor(drill,-50);
		startMotor(updown,-50);
		startMotor(updown2,-50);
		wait(0.25);
		stopMotor(drill);
		stopMotor(updown);
		stopMotor(updown2);
		startMotor(chain1,100);
		startMotor(chain2,100);
		wait(1);
		stopMotor(chain1);
		stopMotor(chain2);}}
