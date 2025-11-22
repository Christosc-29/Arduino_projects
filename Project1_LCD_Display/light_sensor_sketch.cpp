#include <LiquidCrystal.h>

const int rs = 12, en = 11, d4 = 5, d5 = 4, d6 = 3, d7 = 2;
LiquidCrystal lcd(rs, en, d4, d5, d6, d7);

void setup() {
  lcd.begin(16, 2);   
}

void loop() {
  lcd.clear();
  lcd.setCursor(0, 0);
  lcd.print("Get Ready!");
  delay(1000);         


  for (int i = 3; i > 0; i--) {
    lcd.clear();
    lcd.setCursor(0, 0);
    lcd.print(i);
    delay(1000);
  }

  // Display "GO!!!!"
  lcd.clear();
  lcd.setCursor(0, 0);
  lcd.print("GO!!!!");
  delay(2000);        
}
