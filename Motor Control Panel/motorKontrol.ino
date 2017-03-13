
#include "Nextion.h"

#include <Servo.h>

SoftwareSerial HMISerial(10, 11);

volatile unsigned int rotateSpeed = 91;

Servo servo;

NexPicture p0 = NexPicture(0, 1, "p0");
NexPicture p1 = NexPicture(0, 2, "p1");
NexPicture p2 = NexPicture(0, 3, "p2");

NexTouch *nexListenList[] =
{
  &p0,
  &p1,
  &p2,
  NULL
};

void p0PushCallback(void *ptr)
{
   rotateSpeed=88;
}

void p1PushCallback(void *ptr)
{
   rotateSpeed=93;
}

void p2PushCallback(void *ptr)
{
   rotateSpeed=91;
}

void setup()
{
  nexInit();
  p0.attachPush(p0PushCallback);
  p1.attachPush(p1PushCallback);
  p2.attachPush(p2PushCallback);
  
  servo.attach(8);
  servo.write(rotateSpeed);

  delay(10);
}

void loop()
{
  nexLoop(nexListenList);
  servo.write(rotateSpeed);
  delay(100);
}



