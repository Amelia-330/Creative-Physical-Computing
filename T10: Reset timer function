#include <Servo.h>
Servo myservo1;
Servo myservo2;


int servoPin1 = 9;//need connect with pin~ // 伺服马达1
int servoPin2 = 10;//need connect with pin~// 伺服马达2
int forcePin = A0;// 压力传感器
int val = 10;//servo rotation angle 10 degree// 伺服马达转动到的角度
int forceValue = 50;// range from 0-1023 // 压力在50的时候开始计时
int timer = 0;//timer计时器

void setup() {
  Serial.begin(9600);
  pinMode(forcePin, INPUT);//force input
  myservo1.attach(servoPin1);//servo output
  myservo2.attach(servoPin2);//servo output
}


void loop() {
  //Serial.print("Analog ForceValueReading = ");
  //Serial.println(analogRead(forcePin));
  if (analogRead(forcePin) >= forceValue) {// 如果压力传感器上有东西，timer开始计时
    timer = timer++;
  }
  if (analogRead(forcePin) < forceValue) {//无压力马达不转
    myservo1.write(0);
    myservo2.write(0);
  }
  else if ((analogRead(forcePin) >= forceValue) && (timer == 800)) {//有压力时，loop800次后开始转10度再转20度
    myservo1.write(val);   // if force sensor is HIGH, after 5s-10s， then servo 10 degree
    myservo2.write(val);   // if force sensor is HIGH, after 5s-10s， then servo 10 degree
    delay(400);//间隔400再转10度
    myservo1.write(2 * val); // if force sensor is HIGH, after 10s-30s， then servo 20 degree
    myservo2.write(2 * val); // if force sensor is HIGH, after 10s-30s， then servo 20 degree
    delay(400);
  }
  /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
  else if ((analogRead(forcePin) >= forceValue) && (timer == 1500)) {////有压力时，loop1500次后转到90度
    myservo1.write(90);  // if force sensor is LOW, then servo go back
    myservo2.write(90);  // if force sensor is LOW, then servo go back
    timer = 0;//转完九十度后计时器归零，接着loop循环
  }
}
