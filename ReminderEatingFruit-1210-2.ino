#include <Servo.h>
Servo myservo1;
Servo myservo2;


int servoPin1 = 9;//need connect with pin~ // 伺服马达1
int servoPin2 = 10;//need connect with pin~// 伺服马达2
int forcePin = A0;// 压力传感器
int val = 10;//servo rotation angle 10 degree// 伺服马达转动到的角度
int forceValue = 50;// range from 0-1023 // 等苹果泡沫模型到了用Serial序列部测试一下，多大值合适

void setup() {
  Serial.begin(9600);
  pinMode(forcePin, INPUT);//force input
  myservo1.attach(servoPin1);//servo output
  myservo2.attach(servoPin2);//servo output
}


void loop() {
  //Serial.print("Analog ForceValueReading = ");
  //Serial.println(analogRead(forcePin));
  if (analogRead(forcePin) < forceValue) {
    myservo1.write(0);
    myservo2.write(0);
  }
  else if ((analogRead(forcePin) >= forceValue) && (millis() == 10000)) {
    myservo1.write(val);   // if force sensor is HIGH, after 5s-10s， then servo 10 degree
    myservo2.write(val);   // if force sensor is HIGH, after 5s-10s， then servo 10 degree
    delay(400);
    myservo1.write(2 * val); // if force sensor is HIGH, after 10s-30s， then servo 20 degree
    myservo2.write(2 * val); // if force sensor is HIGH, after 10s-30s， then servo 20 degree
    delay(400);
  }
  /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
  else if ((analogRead(forcePin) >= forceValue) && (millis() == 30000)) {
    myservo1.write(90);  // if force sensor is LOW, then servo go back
    myservo2.write(90);  // if force sensor is LOW, then servo go back
  }
}
