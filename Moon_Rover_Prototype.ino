#include<Vex.h>

Vex Robot;
Gyro gyro;
Adafruit_DCMotor*motorA = Robot.setMotor(1);
Adafruit_DCMotor*motorB = Robot.setMotor(4);
Adafruit_DCMotor*motorC = Robot.setMotor(3);
Adafruit_DCMotor*motorD = Robot.setMotor(2);
void setup() {
// put your setup code here, to run once:
  Serial.begin(9600);
  Robot.begin();
  gyro.begin();
}
void loop() {
  //recalibration
  Robot.moveMotor(motorD, 30, 2.9);
  delay(100);
  Robot.moveMotor(motorC, -45, 3.3);
  delay(100);
 
  // 1ST CLAW POSITION
  Robot.moveMotor(motorC, 40, 3.67);
  delay(100);
  Robot.moveMotor(motorD, -3.7, 1.5);
  delay(100);
 
  // MOVING TO PKANT A
  Robot.moveTank(motorA, motorB, -80, -80, 3.3); // change the speed perhaps it will change wether i
  delay(100);
 
  // PLANT A PICK UP
  Robot.moveMotor(motorC, 40, 1.3);
  delay(100);
 
  // MOVING AWAY FROM PLANT A
  Robot.moveTank(motorA, motorB, 40, 40, 2);
  delay(100);
  Robot.moveTank(motorA, motorB, -50, 20, 1.785);
  delay(100);
  Robot.moveTank(motorA, motorB, -80, -80, 0.72);
  delay(100);
  Robot.moveTank(motorA, motorB, -40, 40, 1.505);
  delay(100);
  Robot.moveTank(motorA, motorB, -80, -80, 2.15);
  
  Robot.moveTank(motorA, motorB, 0, 0, 2);
 
  // PLANT A DROP
  Robot.moveMotor(motorC, -20, 2.5);
  Robot.moveMotor(motorD, -15, 1);
  Robot.moveMotor(motorC, 20, 1.4);
  Robot.moveMotor(motorD, -15, 1);
  Robot.moveMotor(motorC, 20, 0.7);
  delay(100);
 
  // MOVING TO PLANT B
  Robot.moveTank(motorA, motorB, 80, 80, 1.72);
  delay(100);
  Robot.moveTank(motorA, motorB, 40, -40, 1.51);
  delay(100);
  Robot.moveTank(motorA, motorB, -80, -80, 1.1);
  delay(100);
  Robot.moveTank(motorA, motorB, 40, -40, 1.374);
  delay(100);
 
  // Claw recalibration
  Robot.moveMotor(motorD, 50, 3);
  delay(100);
  Robot.moveMotor(motorC, -45, 4.4 );
  delay(100);
  Robot.moveMotor(motorC, 0, 2);
 
  //PLANT B LIFT
  Robot.moveMotor(motorC, 40, 5.2);
  Robot.moveMotor(motorD, -15, 4.1);
  Robot.moveTank(motorA, motorB, -30, -30, 1.7);
  Robot.moveMotor(motorC, 40, 1);
 
  // MOVING AWAY FROM PLANT B
  Robot.moveTank(motorA, motorB, 30, 30, 1.7);
  Robot.moveTank(motorA, motorB, 40, -40, 1.525);
  Robot.moveTank(motorA, motorB, -80, -80, 1);
  Robot.moveTank(motorA, motorB, 40, -40, 1.525);
  Robot.moveTank(motorA, motorB, -80, -80, 1.15);
  Robot.moveTank(motorA, motorB, 40, -40, 1.525);
  Robot.moveTank(motorA, motorB, -80, -80, 3.35);
  Robot.moveTank(motorA, motorB, -40, 40, 1.5);
//  Robot.moveTank(motorA, motorB, -80, -80, 0.8);
 
  // DROP PLANT B
  Robot.moveMotor(motorD, 30, 2.8);
  Robot.moveMotor(motorC, -40, 1.5);
  Robot.moveMotor(motorD, 30, 1);
  Robot.moveTank(motorA, motorB, -80, -80, 0.2);//change moving time
  Robot.moveMotor(motorD, 30, 1);
  Robot.moveMotor(motorC, -40, 1.15);
  Robot.moveMotor(motorC, -40, 0.5);
  Robot.moveTank(motorA, motorB, 80, 80, 0.45);
 

  // GATE WAY ADJUSMENT
//  Robot.moveTank(motorA, motorB, -40, 40, 3.5);
//  Robot.moveTank(motorA, motorB, -80, -80, 3);
//  Robot.moveTank(motorA, motorB, -40, 40, 1.33);
 
 
  //RE-CALIBRATION
  Robot.moveMotor(motorD, 30, 2.9);
  delay(100);
  Robot.moveMotor(motorC, -45, 3.3);
  delay(100);
 
 Robot.end();
}