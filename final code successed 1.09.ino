#include <Servo.h>
Servo s1, s2;
int pin_s1 = 9;
int pin_s2 = 10;
int pin_sensor = A0;
int force_value = 1023;

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
    if (val < force_value)
    {
        timer++;
    }
    else
    {
        s1.write(0);
        s2.write(180);
        timer = 0;
        delay(400);
        
    }

    if (val < force_value && timer == 7000)
    {
        s1.write(angle * 0.5);
        s2.write(angle * 17.5);
        delay(400);
    }

        
    else if (val < force_value && timer == 15000)    
    {   
        s1.write(angle * 1);
        s2.write(angle * 17);
        delay(400);
    }
      
   else if (val < force_value && timer == 22000)    
    {        
        s1.write(angle * 1.5);
        s2.write(angle * 16.5);
        delay(400);
      
    }
    else if (val < force_value && timer == 30000)
    {
        s1.write(22);
        s2.write(158);
    }
}
