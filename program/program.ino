#include <Servo.h>

#define basePin 8
#define updownPin 2
#define estampPin 3

Servo baseServo;
Servo updownServo;
Servo estampServo;

void setup() {
  // Servos
  baseServo.attach(basePin);
  //updownServo.attach(updownPin);
  //estamp.attach(estampPin);


}

void loop() {
  // put your main code here, to run repeatedly:
  baseServo.write(180);
}