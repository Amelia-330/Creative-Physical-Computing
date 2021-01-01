#include <Servo.h>
Servo myservo1;
Servo myservo2;


int servoPin1 = 9;//need connect with pin~ // 伺服马达1
int servoPin2 = 8;//need connect with pin~// 伺服马达2
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
  Serial.print("timer = ");
  Serial.println(millis());
  if ((analogRead(forcePin) >= forceValue) && (10000 > millis() >= 5000)) {
    myservo1.write(val);   // if force sensor is HIGH, after 5s-10s， then servo 10 degree
    myservo2.write(val);   // if force sensor is HIGH, after 5s-10s， then servo 10 degree
    delay(100);
  }
  else if ((analogRead(forcePin) >= forceValue) && (30000 > millis() >= 10000)) {
    myservo1.write(2 * val); // if force sensor is HIGH, after 10s-30s， then servo 20 degree
    myservo2.write(2 * val); // if force sensor is HIGH, after 10s-30s， then servo 20 degree
    delay(100);
  }
  /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////触摸传感器启动30秒后，伺服器带动盘子倾斜最大角度
  else if ((analogRead(forcePin) >= forceValue) && (millis() >= 30000)) {
    myservo1.write(9 * val); // if force sensor is HIGH, after 30s， then servo rotate degree
    myservo2.write(9 * val); // if force sensor is HIGH, after 30s， then servo rotate degree
    delay(100);

  }
  /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
  else {
    myservo1.write(0);  // if force sensor is LOW, then servo go back
    myservo2.write(0);  // if force sensor is LOW, then servo go back
    //delay(100);

  }
}
