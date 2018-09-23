#define optoW1 10
#define optoW2 11
#define optoW3 12
#define optoW4 13


#define relayW1 6
#define relayW2 7
#define relayW3 8
#define relayW4 9

#define hi HIGH
#define lo LOW

Servo servoW1;
Servo servoW2;
Servo servoW3;
Servo servoW4;

void setup() {
  // put your setup code here, to run once:
Serial.begin(19200);
  
  pinMode(optoW1,INPUT);
  pinMode(relayW1,OUTPUT);
  
  pinMode(optoW2,INPUT);
  pinMode(relayW2,OUTPUT);
  
  pinMode(optoW3,INPUT);
  pinMode(relayW3,OUTPUT);
  
  pinMode(optoW4,INPUT);
  pinMode(relayW4,OUTPUT);
  
  
}

void loop() {
  delay(1000);
  if (digitalRead(optoW1) == hi) {
    Serial.println("Weiche1 HIGH");
  } else {
    Serial.println("Weiche1 LOW");
  }

  if (digitalRead(optoW2) == hi) {
    Serial.println("Weiche2 HIGH");
  } else {
    Serial.println("Weiche2 LOW");
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
