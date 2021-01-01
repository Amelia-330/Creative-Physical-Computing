int tiltPin = 3;// 倾斜传感器
int buzzerPin = 6;// 蜂鸣器

void setup()
{
  pinMode(tiltPin, INPUT); //tilt input
  pinMode(buzzerPin, OUTPUT);//buzzer output
}
void loop()
{ if (digitalRead(tiltPin) == HIGH) {//倾斜传感器打开，蜂鸣器响
    digitalWrite(buzzerPin, HIGH);
    delay(200);
  }
  else {
    digitalWrite(buzzerPin, LOW);//反之蜂鸣器不响
    delay(200);
  }
}
