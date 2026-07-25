#include <Arduino.h>

// put function declarations here:


void setup() {
  pinMode(13, OUTPUT);
  pinMode(12, OUTPUT);
  pinMode(11, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(8, OUTPUT);
  
}

void loop() {

  int t = 200;
   for (int i=13; i>7;i--)
   {
    digitalWrite(i, HIGH);
    delay(t);
    digitalWrite(i, LOW);
    
   }

for (int j=9; j<14;j++)
   {
    digitalWrite(j, HIGH);
    delay(t);
    digitalWrite(j, LOW);
    
   }
}

