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
  pinMode(servoW1,OUTPUT);
 
  
  pinMode(optoW2,INPUT);
  pinMode(relayW2,OUTPUT);
  pinMode(servoW2,OUTPUT);
  
  pinMode(optoW3,INPUT);
  pinMode(relayW3,OUTPUT);
  pinMode(servoW3,OUTPUT);
  
  pinMode(optoW4,INPUT);
  pinMode(relayW4,OUTPUT);
  pinMode(servoW4,OUTPUT);
  
  delay(1000);
}

void loop() {
  delay(100);
  
  if (digitalRead(optoW1) == hi) {
    Serial.println("Weiche1 HIGH");
    if (servoObjW1.read() != 100){
      servoObjW1.attach(servoW1);
      delay(200);
      if (servoObjW1.attached()) {
        for (int pulselen = servoObjW1.read(); pulselen < 100; pulselen++) {
          servoObjW1.write(pulselen);  
          delay(40);
        }  
      }
    }
    digitalWrite(relayW1,hi);
    
  } else {
    Serial.println("Weiche1 LOW");
    if (servoObjW1.read() != 25  ){
      servoObjW1.attach(servoW1);
      delay(200);
      if (servoObjW1.attached()) {
        for (int pulselen = servoObjW1.read(); pulselen > 25; pulselen--) {
          servoObjW1.write(pulselen);  
          delay(40);
        }
      }
    }
    digitalWrite(relayW1,lo);
  }

  if (digitalRead(optoW2) == hi) {
    Serial.println("Weiche2 HIGH");
    if (servoObjW2.read() != 100){
      servoObjW2.attach(servoW2);
      delay(200);
      if (servoObjW2.attached()) {
        for (int pulselen = servoObjW2.read(); pulselen < 100; pulselen++) {
          servoObjW2.write(pulselen);  
          delay(40);
        }  
      }
    }
    digitalWrite(relayW2,hi);
    
  } else {
    Serial.println("Weiche2 LOW");
    if (servoObjW2.read() != 25  ){
      servoObjW2.attach(servoW2);
      delay(200);
      if (servoObjW2.attached()) {
        for (int pulselen = servoObjW2.read(); pulselen > 25; pulselen--) {
          servoObjW2.write(pulselen);  
          delay(40);
        }
      }
    }
    digitalWrite(relayW2,lo);
  }

    if (digitalRead(optoW3) == hi) {
    Serial.println("Weiche2 HIGH");
    if (servoObjW3.read() != 100){
      servoObjW3.attach(servoW3);
      delay(200);
      if (servoObjW3.attached()) {
        for (int pulselen = servoObjW3.read(); pulselen < 100; pulselen++) {
          servoObjW3.write(pulselen);  
          delay(40);
        }  
      }
    }
    digitalWrite(relayW3,hi);
    
  } else {
    Serial.println("Weiche3 LOW");
    if (servoObjW3.read() != 25  ){
      servoObjW3.attach(servoW3);
      delay(200);
      if (servoObjW3.attached()) {
        for (int pulselen = servoObjW3.read(); pulselen > 25; pulselen--) {
          servoObjW3.write(pulselen);  
          delay(40);
        }
      }
    }
    digitalWrite(relayW3,lo);
  }

  if (digitalRead(optoW4) == hi) {
    Serial.println("Weiche4 HIGH");
    if (servoObjW4.read() != 100){
      servoObjW4.attach(servoW4);
      delay(200);
      if (servoObjW4.attached()) {
        for (int pulselen = servoObjW4.read(); pulselen < 100; pulselen++) {
          servoObjW4.write(pulselen);  
          delay(40);
        }  
      }
    }
    digitalWrite(relayW4,hi);
    
  } else {
    Serial.println("Weiche4 LOW");
    if (servoObjW4.read() != 25  ){
      servoObjW4.attach(servoW4);
      delay(200);
      if (servoObjW4.attached()) {
        for (int pulselen = servoObjW4.read(); pulselen > 25; pulselen--) {
          servoObjW4.write(pulselen);  
          delay(40);
        }
      }
    }
    digitalWrite(relayW4,lo);
  }}
