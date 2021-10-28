#include <Servo.h>

#define PIN_SERVO 10
#define _DUTY_MIN 553 // servo full clockwise position (0 degree)
#define _DUTY_NEU 1476 // servo neutral position (90 degree)
#define _DUTY_MAX 2399 // servo full counterclockwise position (180 degree)

float i = 0;
Servo myservo;

void setup() {
  // put your setup code here, to run once:
  myservo.attach(PIN_SERVO);
  myservo.writeMicroseconds(_DUTY_MIN);
}

void loop() {
  // put your main code here, to run repeatedly:
  //_SERVO_SPEED = 3 
   if(_DUTY_MIN + i < _DUTY_MAX){
      myservo.writeMicroseconds(_DUTY_MIN + i); 
      i += 0.307;
      delay(10);
    }
   else{
    ;
   }
   //_SERVO_SPEED = 0.3
/*   if(_DUTY_MIN + i < _DUTY_MAX){
      myservo.writeMicroseconds(_DUTY_MIN + i); 
      i += 0.061;
      delay(10);
    }
   else{
    ;
   }
*/
}
