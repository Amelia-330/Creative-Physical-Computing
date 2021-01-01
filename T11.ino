#include <Servo.h>
Servo s1, s2;
int pin_s1 = 9;
int pin_s2 = 10;
int pin_sensor = A0;
int force_value = 50;

int angle = 10;
int timer = 0;
void setup()
{
    s1.attach(pin_s1);
    s2.attach(pin_s2);
    s1.write(0);
    s2.write(0);
    Serial.begin(115200);
}

void loop()
{
    int val = analogRead(A0);
    Serial.println(val);
    if (val >= force_value)
    {
        timer++;
    }
    else
    {
        s1.write(0);
        s2.write(0);
        timer = 0;
    }

    if (val >= force_value && timer == 2000)
    {
        s1.write(angle);
        s2.write(angle);
        delay(1000);
        s1.write(angle * 2);
        s2.write(angle * 2);
        delay(1000);

        s1.write(angle * 4);
        s2.write(angle * 4);
        delay(1000);

        s1.write(angle * 6);
        s2.write(angle * 6);
        delay(1000);

        s1.write(angle * 8);
        s2.write(angle * 8);
        delay(1000);

        
    }
    else if (val >= force_value && timer == 8500)
    {
        s1.write(90);
        s2.write(90);
    }
}
