#include <Servo.h> 
 
Servo servo;  // create servo object to control a servo 
 
void setup() 
{ 
  servo.attach(9);  // attaches the servo on pin 9 to the servo object 
  servo.write(90);  // set initial state of servo as "Stopped"
} 
 
void loop() // Keep Main void EMPTY
{
}
