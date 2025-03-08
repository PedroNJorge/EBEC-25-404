#include <Servo.h>

#define basePin 1;
#define updownPin 2;
#define grabdropPin 3;

Servo baseServo;
Servo updownServo;
Servo grabdropServo;

void setup() {
  // put your setup code here, to run once:
  baseServo.attach(basePin);
  updownServo.attach(updownPin);
  grabdropPin.attach(grabdropPin);  
}

void loop() {
  // put your main code here, to run repeatedly:

}