#include <Servo.h> //this adds code to our program that defines what a Servo object is and can do

Servo amotor; // create a servo object to control a servo

int mspeed = 1500; // variable to store the motor speed

void setup() {
  amotor.attach(9); // attaches the servo on pin 10 to the servo object amotor
}

void loop(){
  // Run Motor
  mspeed = 1520;//set position variable
  amotor.writeMicroseconds(mspeed); // tell servo to move as indicated by  variable 'mspeed'
  //delay(1000); //time for the servo to move

 
  //Stop Motor 
  mspeed = 1470; //set position variable
  amotor.writeMicroseconds(mspeed); // tell servo to move as indicated by  variable 'mspeed'
  delay(1000); //time for the servo to move*/

  // Run Motor
  mspeed = 1420;//set position variable
  amotor.writeMicroseconds(mspeed); // tell servo to move as indicated by  variable 'mspeed'
  //delay(1000); //time for the servo to move

 //Stop Motor 
  mspeed = 1470; //set position variable
  amotor.writeMicroseconds(mspeed); // tell servo to move as indicated by  variable 'mspeed'
  delay(1000); //time for the servo to move*/
}
