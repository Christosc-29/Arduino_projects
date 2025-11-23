#include <Servo.h>

Servo door;
bool doorOpen = false;

const int button = 2;
const int buzzer = 8;
const int servo = 9;

void open() {
  tone(buzzer, 600); delay(150);
  tone(buzzer, 900); delay(150);
  notone(buzzer);
}

void close() {
  tone(buzzer, 400); delay(150);
  tone(buzzer, 200); delay(150);
  notone(buzzer);
}

void setup() {
  pinMode(button, INPUT_PULLUP);  
  door.attach(servoPin);
  door.write(0); 
}

void loop() {
  if (digitalRead(button) == LOW) {
    delay(200); 

    if (!doorOpen) {
      open();
      door.write(90);
      doorOpen = true;
    } else {
      close();
      door.write(0);
      doorOpen = false;
    }

        while (digitalRead(button) == LOW);
  }
}
