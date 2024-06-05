// lcd assignment 1
// Link: https://www.tinkercad.com/things/2HI5oCxxree-01lcdassignment?sharecode=jD9Hvmbgplsv4dyOIICQwHSImzu_dqoCnSVKvavAHtQ

#include <LiquidCrystal.h>
LiquidCrystal lcd(12,11,2,3,4,5);

void setup()
{
  lcd.begin(16,2);
  lcd.setCursor(3,0);
  lcd.print("Hello World!");
  
}

void loop()
{
  
}