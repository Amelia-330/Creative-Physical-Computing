
int led1 = 4;
int led2 = 5;
int led3 = 6;
int led4 = 7;

int led5 = 8;
int led6 = 9;
int led7 = 10;
int led8 = 11;


void setup() {
  // put your setup code here, to run once:

 //  for (int i=3; i<12; i++){
 //    pinMode(i,INPUT);
 //    }
 //  }

     pinMode(led1,OUTPUT);
     pinMode(led2,OUTPUT);
     pinMode(led3,OUTPUT);
     pinMode(led4,OUTPUT);
   
     pinMode(led5,OUTPUT);
     pinMode(led6,OUTPUT);
     pinMode(led7,OUTPUT);
     pinMode(led8,OUTPUT);
 }

void loop() {

   //for (int i=3; i<12; i++){
    // digitalWrite(i,HIGH);
    // delay(100);
    // digitalWrite(i,LOW);
    // delay(100);
    // }


  // put your main code here, to run repeatedly:
    digitalWrite(led1,HIGH);
    delay(100);
    digitalWrite(led1,LOW);
    delay(100);
  

    digitalWrite(led2,HIGH);
    delay(100);
    digitalWrite(led2,LOW);
    delay(100);
  
 
    digitalWrite(led3,HIGH);
    delay(100);
    digitalWrite(led3,LOW);
    delay(100);
  
  
    digitalWrite(led4,HIGH);
    delay(100);
    digitalWrite(led4,LOW);
    delay(100);
  
    digitalWrite(led5,HIGH);
    delay(100);
    digitalWrite(led5,LOW);
    delay(100);
  
    digitalWrite(led6,HIGH);
    delay(100);
    digitalWrite(led6,LOW);
    delay(100);
  
    digitalWrite(led7,HIGH);
    delay(100);
    digitalWrite(led7,LOW);
    delay(100);
  
    digitalWrite(led8,HIGH);
    delay(100);
    digitalWrite(led8,LOW);
    delay(100);

}
