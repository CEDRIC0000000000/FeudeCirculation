#include <Arduino.h>




const int RedLED1 = 2;
const int OrangeLED1 = 3;
const int GreenLED1 = 4;
const int RedLED2 = 5;
const int OrangeLED2 = 6;
const int GreenLED2 = 7;


void setup()
{
  
  
  pinMode(RedLED1, OUTPUT);
  pinMode(OrangeLED1, OUTPUT);
  pinMode( GreenLED1, OUTPUT);
  pinMode( RedLED2 , OUTPUT);
  pinMode( OrangeLED2, OUTPUT);
  pinMode(GreenLED2, OUTPUT);
}

void loop()
{
    digitalWrite(RedLED1, HIGH);
    digitalWrite( OrangeLED1, LOW);
    digitalWrite(GreenLED1, LOW);
    digitalWrite(RedLED2, HIGH);
    digitalWrite( OrangeLED2, LOW);
    digitalWrite(GreenLED2, LOW);
   delay(3000); // Wait for 1000 millisecond(s)
  
   // feu de priorite 
   digitalWrite(RedLED1, HIGH);
    digitalWrite( OrangeLED1, LOW);
    digitalWrite(GreenLED1, LOW);
    digitalWrite(RedLED2, LOW);
    digitalWrite( OrangeLED2, LOW);
    digitalWrite(GreenLED2, HIGH);
    delay(1000); 
     digitalWrite(GreenLED2, LOW);
    delay(1000); 
    digitalWrite(GreenLED2, HIGH);
    delay(1000); 
    digitalWrite(GreenLED2, LOW);
    delay(1000); 

  
  
  
   digitalWrite(RedLED1, HIGH);
    digitalWrite( OrangeLED1, LOW);
    digitalWrite(GreenLED1, LOW);
    digitalWrite(RedLED2, LOW);
    digitalWrite( OrangeLED2, LOW);
    digitalWrite(GreenLED2, HIGH);
   delay(3000); // Wait for 1000 millisecond(s)
  
   digitalWrite(RedLED1, HIGH);
    digitalWrite( OrangeLED1, LOW);
    digitalWrite(GreenLED1, LOW);
    digitalWrite(RedLED2, LOW);
    digitalWrite( OrangeLED2, HIGH);
    digitalWrite(GreenLED2, LOW);
  delay(3000); // Wait for 1000 millisecond(s)
  
  digitalWrite(RedLED1, HIGH);
    digitalWrite( OrangeLED1, LOW);
    digitalWrite(GreenLED1, LOW);
    digitalWrite(RedLED2,HIGH);
    digitalWrite( OrangeLED2, LOW);
    digitalWrite(GreenLED2, LOW);
  delay(3000); // Wait for 1000 millisecond(s)
  
  // feu de priorite 
   digitalWrite(RedLED2, HIGH);
    digitalWrite( OrangeLED1, LOW);
    digitalWrite(GreenLED2, LOW);
    digitalWrite(RedLED1, LOW);
    digitalWrite( OrangeLED2, LOW);
    digitalWrite(GreenLED1, HIGH);
    delay(1000); 
     digitalWrite(GreenLED1, LOW);
    delay(1000); 
    digitalWrite(GreenLED1, HIGH);
    delay(1000); 
    digitalWrite(GreenLED1, LOW);
    delay(1000); 

  
  digitalWrite(RedLED1, LOW);
    digitalWrite( OrangeLED1, LOW);
    digitalWrite(GreenLED1, HIGH);
    digitalWrite(RedLED2,HIGH);
    digitalWrite( OrangeLED2, LOW);
    digitalWrite(GreenLED2, LOW);
  delay(3000); // Wait for 1000 millisecond(s)
  
    digitalWrite(RedLED1, LOW);
    digitalWrite( OrangeLED1,HIGH);
    digitalWrite(GreenLED1, LOW);
    digitalWrite(RedLED2,HIGH);
    digitalWrite( OrangeLED2, LOW);
    digitalWrite(GreenLED2, LOW);
  delay(3000); // Wait for 1000 millisecond(s)
 
  
  
  
}