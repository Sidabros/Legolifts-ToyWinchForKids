# Turn EMAX ES3154 servo motor into a Continuous one :
   <br />
   ![thumbnail_img_20170216_135619](https://cloud.githubusercontent.com/assets/24646925/23031163/ac788d7a-f478-11e6-9341-bd2586a82092.jpg)

   In this project I have used EMAX ES3154 model Servo Motor <br />
   which is not continuous. If you do not have a continuous servo, you can follow steps "carefully" here:<br />
   
   >1.First remove the screws (4 at the bottom side)<br />
   2.Then remove the caps on both ends<br />
  
  It is very beneficial to take a picture of the gears for replacing them correctly when the process is over.<br />
  
   >3.Now remove the gears and notice that there is a particular gear that is also turning a hidden Pot (variable resistor)<br />
   4.Then cut the metal that is outgrown from gear towards inside of the Pot, which rotates the Pot(Variable Resistor)
   5.Later replace all the gears and make sure the particular gear is not rotating the Pot (variable resistor) anymore when it is rotated,
   and close only TOP cover of the servo motor. <br />
   6.Now run the "SampleCode.ino" that I've uploaded<br />
   
   Now your servo will rotate continuously !!<br />
   >You need to turn POT (variable resistor)slowly from inside until the servo motor stops rotating completely.<br />
   When you make sure the servo has no movement at the current position of Pot(variable resistor), You can glue the Pot's (variable resistor)<br />
   rotating part so it stays constant permanently<br /> 
   
   ! You have now achieved to set your servo Centre value to 90, which means servo will have no movement when the code runs "servo.write(90)" <br />
   <br />
   So If you drive your servo with below 90, it will rotate counter-clockwise and above 90, it will rotate clockwise<br />
   <br />
   0 for full speed counter-clockwise rotation<br />
   180 for full speed clockwise rotation<br />
   <br />
   >After testing the rotations you can gently replace the circuit back in its place and screw the bottom cover too
   
