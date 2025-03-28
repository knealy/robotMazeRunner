#pragma config(Motor,  port2,           leftMotor,     tmotorVex393, openLoop)
#pragma config(Motor,  port3,           rightMotor,    tmotorVex393, openLoop)
task main()
{

motor[rightMotor]   =  vexRT[Ch3];
motor[leftMotor]  = -vexRT[Ch2];

}
