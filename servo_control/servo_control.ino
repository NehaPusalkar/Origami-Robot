#include <Servo.h> //this adds code to our program that defines what a Servo object is and can do

Servo amotor; // create a servo object to control a servo
int i;
int mspeed = 1500; // variable to store the motor speed
int buttong = 4;
int buttonr = 9;
const int ledPin =  13;
int buttonstateg = 0;
int buttonstater = 0;
int flagg = 0;
int flagr = 0;

void setup()
{
  pinMode(buttong, INPUT);   
  pinMode(buttonr, INPUT);
  pinMode(ledPin, OUTPUT);
  digitalWrite(buttong,HIGH);
  digitalWrite(buttonr,HIGH);
  Serial.begin(115200);
  // attaches the servo on pin 10 to the servo object amotor
}

void loop()
{
  
   buttonstateg = digitalRead(buttong);
   buttonstater = digitalRead(buttonr);
if (buttonstateg == LOW)
{
   digitalWrite(ledPin, HIGH);
   delay(1000);
   digitalWrite(ledPin, LOW);
   Serial.println("buttong");
    // Run Motor
  mspeed = 1180;//set position variable
  amotor.attach(10); 
  amotor.writeMicroseconds(mspeed); // tell servo to move as indicated by  variable 'mspeed'
  delay(3000); //time for the servo to move

  
   //Stop motor
   mspeed = 1500;//set position variable
  amotor.writeMicroseconds(mspeed); // tell servo to move as indicated by  variable 'mspeed'
  delay(10);
  amotor.detach();  
  
}

else if (buttonstater == LOW)
{
  digitalWrite(ledPin, HIGH);
   delay(1000);
   digitalWrite(ledPin, LOW);
   Serial.println("buttonr");
   
    //Run Motor 
  mspeed = 1580; //set position variable
  amotor.attach(10); 
  amotor.writeMicroseconds(mspeed); // tell servo to move as indicated by  variable 'mspeed'
  delay(4200); //time for the servo to move*/
    mspeed = 1500;//set position variable
  amotor.writeMicroseconds(mspeed); // tell servo to move as indicated by  variable 'mspeed'
  delay(10);
  amotor.detach();
}

}
