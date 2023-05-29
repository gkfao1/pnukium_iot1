#include <Servo.h>

Servo myservo;
char serial_data;

void setup(){
  Serial.begin(9600);
  myservo.attach(9);
  myservo.write(80);
}

void loop() {
  if (Serial.available()>0)
  {
    serial_data=Serial.read();
    if (serial_data == 'b')
    {
      myservo.write(140);
      Serial.println("b");
    }
    else if (serial_data == 'c')
    {
      myservo.write(20);
      Serial.println("c");;
    }
    else if (serial_data == 'n')
    {
      myservo.write(80);
      Serial.println("n");
    }
  }
}