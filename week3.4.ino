const int echo = 13;
const int trig = 12;

const int led1 = 8;
const int led2 = 7;
const int led3 = 6;
const int led4 = 5;
const int led5 = 4;
const int led6 = 3;
const int led7 = 2;


int duration = 0;
int distance = 0;


void setup() {

  // put your setup code here, to run once:
  pinMode(trig,OUTPUT);
  pinMode(echo,INPUT);

  pinMode(led1,OUTPUT);
  pinMode(led2,OUTPUT);
  pinMode(led3,OUTPUT);
  pinMode(led4,OUTPUT);
  pinMode(led5,OUTPUT);
  pinMode(led6,OUTPUT);
  pinMode(led7,OUTPUT);

  
  Serial.begin(9600);
 
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(trig,HIGH);
  delayMicroseconds(1000);
  digitalWrite(trig,LOW);

  duration = pulseIn(echo,HIGH);
  distance = (duration/2)/28.5;
  Serial.print(distance);

  

  if ( distance <= 7)
  {
    digitalWrite (led1,HIGH);
  }
  else
  {
    digitalWrite (led1,LOW);
  }



  if ( distance <= 14)
  {
    digitalWrite (led2,HIGH);
  }
  else
  {
    digitalWrite (led2,LOW);
  }

  
  if ( distance <= 21)
  {
    digitalWrite (led3,HIGH);
  }
  else
  {
    digitalWrite (led3,LOW);
  }


  if ( distance <= 28 )
  {
    digitalWrite (led4,HIGH);
  }
  else
  {
    digitalWrite (led4,LOW);
  }


  if ( distance <= 35 )
  {
    digitalWrite (led5,HIGH);
  }
  else
  {
    digitalWrite (led5,LOW);
  }


  if ( distance <= 42 )
  {
    digitalWrite (led6,HIGH);
  }
  else
  {
    digitalWrite (led6,LOW);
  }


  if ( distance <= 49 )
  {
    digitalWrite (led7,HIGH);
  }
  else
  {
    digitalWrite (led7,LOW);
  }

   
}
