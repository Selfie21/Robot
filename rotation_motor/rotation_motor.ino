
#include <Servo.h>

Servo myservo;  // create servo object to control a servo
int pos = 0;    // variable to store the servo position

void setup() {
  myservo.attach(13);  // attaches the servo on pin 13 to the servo object
  Serial.begin(9600);
}

void loop() {
  for(pos = 0; pos <= 180; pos++){
    myservo.write(pos);
    if(pos % 90 == 0){
      delay(700);
    }else{
      delay(15);
    }
  }
}
