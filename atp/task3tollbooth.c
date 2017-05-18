#pragma config(Sensor, in1,    LineTracker,    sensorLineFollower)
#pragma config(Sensor, dgtl1,  green,          sensorLEDtoVCC)
#pragma config(Sensor, dgtl2,  yellow,         sensorLEDtoVCC)
#pragma config(Sensor, dgtl3,  red,            sensorLEDtoVCC)
#pragma config(Sensor, dgtl4,  open,           sensorTouch)
#pragma config(Motor,  port9,           turn,          tmotorServoContinuousRotation, openLoop)
//end Motor and Sensor Setup :)

task main(){
	repeat(forever){
		turnLEDOn(dgtl3);
		if(SensorValue[dgtl4]== 1){
			 startMotor(port9,15);
			 wait(2.5);
			 stopMotor(port9);
			 turnLEDOff(dgtl3);
			 turnLEDOn(dgtl1);
			 wait(2);
			 waitUntil(SensorValue[in1] > 3040);
			 wait(2);
			 turnLEDOff(dgtl1);
			 turnLEDOn(dgtl2);
			 startMotor(port9,-15);
			 wait(2.5);
			 stopMotor(port9);
			 turnLEDOff(dgtl2);
			 turnLEDOn(dgtl3);
		}
	}
}
