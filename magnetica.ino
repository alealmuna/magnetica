#include <Servo.h> 

#define OUT1_PIN 13
#define DOOR_PIN 5

Servo door;

void setup() {
  Serial.begin(9600);
  pinMode(OUT1_PIN, OUTPUT);
  door.attach(DOOR_PIN)
}

void loop() {
  if(Serial.available()) {
    delay(3);
    char mode = Serial.read();
    switch (mode){
    case '0':
      readMode();
      break;
    case '1':
      writeMode();
      break;
    case '2':
      open_door();
      break;
    }  
  }
}

void readMode(){
  char resource = Serial.read();
  switch (resource){
  case '0':
    break;
  }
}

void writeMode(){
  char resource = Serial.read();
  int value = Serial.read();
  switch (value){
  case '0':
    digitalWrite(OUT1_PIN, LOW);
    break;
  case '1':
    digitalWrite(OUT1_PIN, HIGH);
    break;
  }
}

void writeMode(){
  digitalWrite(DOOR_SERVO, HIGH);
  delay()
  digitalWrite(DOOR_SERVO, HIGH);
}

