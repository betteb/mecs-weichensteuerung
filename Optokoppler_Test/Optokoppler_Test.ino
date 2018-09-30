/*
 * mecs Weichensteuerung
 * B.Etter 30.09.2018
 */

/*
 * Steuereinheit 10
 */
#include <Servo.h>

//Weiche 1 Einstellungen(müssen pro Weichen angepasst werden)
#define W1_Hi_Winkel 100
#define W1_Lo_Winkel 40
#define W1_Geschwindigkeit 40

//Weiche 2 Einstellungen(müssen pro Weichen angepasst werden)
#define W2_Hi_Winkel 100
#define W2_Lo_Winkel 40
#define W2_Geschwindigkeit 40

//Weiche 3 Einstellungen(müssen pro Weichen angepasst werden)
#define W3_Hi_Winkel 100
#define W3_Lo_Winkel 40
#define W3_Geschwindigkeit 40

//Weiche 4 Einstellungen(müssen pro Weichen angepasst werden)
#define W4_Hi_Winkel 100
#define W4_Lo_Winkel 40
#define W4_Geschwindigkeit 40


//Nicht verändern!!
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
  servoObjW1.attach(servoW1);
 
  
  pinMode(optoW2,INPUT);
  pinMode(relayW2,OUTPUT);
  pinMode(servoW2,OUTPUT);
  servoObjW2.attach(servoW2);
  
  pinMode(optoW3,INPUT);
  pinMode(relayW3,OUTPUT);
  pinMode(servoW3,OUTPUT);
  servoObjW3.attach(servoW3);
  
  pinMode(optoW4,INPUT);
  pinMode(relayW4,OUTPUT);
  pinMode(servoW4,OUTPUT);
  servoObjW4.attach(servoW4);
  
  delay(1000);
}

// TODO: Attach noch anpassen

void loop() {
  delay(100);

/*
 * Weiche 1
 */
  if (digitalRead(optoW1) == hi) {
    Serial.println("Weiche1 HIGH");
    if (!servoObjW1.attached()) {
      servoObjW1.attach(servoW1);
      delay(200);
    }
    
    if (servoObjW1.read() != W1_Hi_Winkel){
      for (int pulselen = servoObjW1.read(); pulselen < W1_Hi_Winkel; pulselen++) {
        servoObjW1.write(pulselen);  
        delay(W1_Geschwindigkeit);
      }  
    }
    digitalWrite(relayW1,hi);
    
  } else {
    Serial.println("Weiche1 LOW");
    if (!servoObjW1.attached()) {
      servoObjW1.attach(servoW1);
      delay(200); 
    }
    
    if (servoObjW1.read() != W1_Lo_Winkel){
      for (int pulselen = servoObjW1.read(); pulselen > W1_Lo_Winkel; pulselen--) {
        servoObjW1.write(pulselen);  
        delay(W1_Geschwindigkeit);
      }
    }
    digitalWrite(relayW1,lo);
  }

/*
 * Weiche 2
 */
  if (digitalRead(optoW2) == hi) {
    Serial.println("Weiche2 HIGH");
    if (servoObjW2.read() != W2_Hi_Winkel){
      servoObjW2.attach(servoW2);
      delay(200);
      if (servoObjW2.attached()) {
        for (int pulselen = servoObjW2.read(); pulselen < W2_Hi_Winkel; pulselen++) {
          servoObjW2.write(pulselen);  
          delay(W2_Geschwindigkeit);
        }  
      }
    }
    digitalWrite(relayW2,hi);
    
  } else {
    Serial.println("Weiche2 LOW");
    if (servoObjW2.read() != W2_Lo_Winkel  ){
      servoObjW2.attach(servoW2);
      delay(200);
      if (servoObjW2.attached()) {
        for (int pulselen = servoObjW2.read(); pulselen > W2_Lo_Winkel; pulselen--) {
          servoObjW2.write(pulselen);  
          delay(W2_Geschwindigkeit);
        }
      }
    }
    digitalWrite(relayW2,lo);
  }
  

/*
 * Weiche 3
 */
    if (digitalRead(optoW3) == hi) {
    Serial.println("Weiche2 HIGH");
    if (servoObjW3.read() != W3_Hi_Winkel){
      servoObjW3.attach(servoW3);
      delay(200);
      if (servoObjW3.attached()) {
        for (int pulselen = servoObjW3.read(); pulselen < W3_Hi_Winkel; pulselen++) {
          servoObjW3.write(pulselen);  
          delay(W3_Geschwindigkeit);
        }  
      }
    }
    digitalWrite(relayW3,hi);
    
  } else {
    Serial.println("Weiche3 LOW");
    if (servoObjW3.read() != W3_Lo_Winkel  ){
      servoObjW3.attach(servoW3);
      delay(200);
      if (servoObjW3.attached()) {
        for (int pulselen = servoObjW3.read(); pulselen > W3_Lo_Winkel; pulselen--) {
          servoObjW3.write(pulselen);  
          delay(W3_Geschwindigkeit);
        }
      }
    }
    digitalWrite(relayW3,lo);
  }


/*
* Weiche 4
*/
  if (digitalRead(optoW4) == hi) {
    Serial.println("Weiche4 HIGH");
    if (servoObjW4.read() != W4_Hi_Winkel){
      servoObjW4.attach(servoW4);
      delay(200);
      if (servoObjW4.attached()) {
        for (int pulselen = servoObjW4.read(); pulselen < W4_Hi_Winkel; pulselen++) {
          servoObjW4.write(pulselen);  
          delay(W4_Geschwindigkeit);
        }  
      }
    }
    digitalWrite(relayW4,hi);
    
  } else {
    Serial.println("Weiche4 LOW");
    if (servoObjW4.read() != W4_Lo_Winkel  ){
      servoObjW4.attach(servoW4);
      delay(200);
      if (servoObjW4.attached()) {
        for (int pulselen = servoObjW4.read(); pulselen > W4_Lo_Winkel; pulselen--) {
          servoObjW4.write(pulselen);  
          delay(W4_Geschwindigkeit);
        }
      }
    }
    digitalWrite(relayW4,lo);
  }}
