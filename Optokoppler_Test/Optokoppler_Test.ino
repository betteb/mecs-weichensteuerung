#include <Servo.h>

#define optoW1 10
#define optoW2 11
#define optoW3 12
#define optoW4 13

#define relayW1 6
#define relayW2 7
#define relayW3 8
#define relayW4 9

#define servoW1 2
#define servoW2 3
#define servoW3 4
#define servoW4 5

#define hi HIGH
#define lo LOW

Servo servoObjW1;
Servo servoObjW2;
Servo servoObjW3;
Servo servoObjW4;

void setup() {
Serial.begin(19200);
  
  pinMode(optoW1,INPUT);
  pinMode(relayW1,OUTPUT);
  if (optoW1 == hi) {
    servoObjW1.attach(servoW1);
  } else {
    
  }
  
  pinMode(optoW2,INPUT);
  pinMode(relayW2,OUTPUT);
  pinMode(servoW2,OUTPUT);
  if (optoW2 == hi) {
    servoObjW2.attach(servoW2);
      delay(200);
      if (servoObjW2.attached()) {
        servoObjW2.write(100);  
        delay(200);
        servoObjW2.detach();
        delay(200);        
      }  
    digitalWrite(relayW2,lo);
  } else {
    servoObjW2.attach(servoW2);
       delay(200);
      if (servoObjW2.attached()) {
        servoObjW2.write(70);  
        delay(200);
        servoObjW2.detach();
        delay(200);        
      }  
    digitalWrite(relayW2,hi);
  }
  
  pinMode(optoW3,INPUT);
  pinMode(relayW3,OUTPUT);
  if (optoW3 == hi) {
    servoObjW3.attach(servoW3);
  } else {
    
  }
  
  pinMode(optoW4,INPUT);
  pinMode(relayW4,OUTPUT);
  if (optoW4 == hi) {
    servoObjW4.attach(servoW4);
  } else {
    
  }
  delay(5000);
}

void loop() {
  delay(100);
  if (digitalRead(optoW1) == hi) {
    Serial.println("Weiche1 HIGH");
  } else {
    Serial.println("Weiche1 LOW");
  }

  if (digitalRead(optoW2) == hi) {
    Serial.println("Weiche2 HIGH");
    if (servoObjW2.read() != 100){
      servoObjW2.attach(servoW2);
      delay(200);
      if (servoObjW2.attached()) {
        servoObjW2.write(100);  
        delay(200);
        servoObjW2.detach();
        delay(200);        
      }  
    }
    digitalWrite(relayW2,hi);
  } else {
    Serial.println("Weiche2 LOW");
    if (servoObjW2.read() != 71  ){
      servoObjW2.attach(servoW2);
      delay(200);
      if (servoObjW2.attached()) {
        servoObjW2.write(70);  
        delay(200);
        servoObjW2.detach();
        delay(200);       
      }
    }
    digitalWrite(relayW2,lo);
  }

if (digitalRead(optoW3) == hi) {
    Serial.println("Weiche3 HIGH");
  } else {
    Serial.println("Weiche3 LOW");
  }

  if (digitalRead(optoW4) == hi) {
    Serial.println("Weiche4 HIGH");
  } else {
    Serial.println("Weiche4 LOW");
  }
  Serial.println("---");
}
