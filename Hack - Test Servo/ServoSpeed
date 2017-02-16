/*
 * M. Murat Akcayigit
 * For Legolift Servo Adjustments
 */
 
#include <Servo.h> 
 
Servo servo;  // create servo object to control a servo 
 
void setup() 
{ 
  servo.attach(9);  // attaches the servo on pin 9 to the servo object 
  servo.write(90);  // set initial state of servo as "Stopped"
} 
 
void loop() 
{ 
  servo.write(100); // run the servo in a clockwise direction
  delay(3000);        //            for a duration of 3 seconds
  
  servo.write(90);  // stop the servo
  delay(1500);        //            for a duration of 1.5 seconds
  
  servo.write(80);  // run the servo in a counterclockwise direction
  delay(3000);        //            for a duration of 3 seconds

  servo.write(90);  // stop the servo
  delay(1500);        //            for a duration of 1.5 seconds
} 
