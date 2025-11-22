#include <LiquidCrystal.h>

// LCD pin setup
const int rs = 12, en = 11, d4 = 5, d5 = 4, d6 = 3, d7 = 2;
LiquidCrystal lcd(rs, en, d4, d5, d6, d7);

// Sensor pin
const int sensorPin = A0;

void setup() {
  lcd.begin(16, 2);
  lcd.print("Light Sensor");
  delay(1000);
}

void loop() {
  int sensorValue = analogRead(sensorPin);
  lcd.clear();

  lcd.setCursor(0, 0);
  lcd.print("Light Level:");
  lcd.setCursor(0, 1);
  lcd.print(sensorValue);

  delay(500);

  lcd.clear();
  if (sensorValue > 200) {
    lcd.print("It's Bright!");
  } else {
    lcd.print("It's Dark!");
  }

  delay(1000);
}
