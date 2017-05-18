#pragma config(Sensor, dgtl9,  button,         sensorTouch)
#pragma config(Sensor, dgtl10, green,            sensorLEDtoVCC)
#pragma config(Sensor, dgtl11, yellow,         sensorLEDtoVCC)
#pragma config(Sensor, dgtl12, debug,          sensorLEDtoVCC)
#pragma config(Motor,  port1,  bridge,         tmotorVex393_HBridge, openLoop)
//*!!Code automatically generated by 'ROBOTC' configuration wizard               !!*//

task main()
{
repeat(forever) {
turnLEDOff(yellow);
turnLEDOn(debug);
turnLEDOn(green);
untilTouch(button);
turnLEDOff(green);
turnLEDOn(yellow);
startMotor(port1, 12.5);
wait(2);
stopMotor(port1);
untilTouch(button);
startMotor(port1, -12.5);
wait(1.8);
stopMotor(port1);
turnLEDOff(yellow);
turnLEDOn(green);
}}
