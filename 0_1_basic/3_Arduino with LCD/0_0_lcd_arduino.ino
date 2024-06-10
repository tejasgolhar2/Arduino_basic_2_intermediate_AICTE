// Project to display custom characters on lcd display using Arduino
//Link: https://www.tinkercad.com/things/1keVHvy5AX6-00lcdarduino?sharecode=l4njEF0wzRtHvU07eSHaUZdNUywixQ3egIEFl3GWE8U

#include <LiquidCrystal.h>
LiquidCrystal lcd(12,11,2,3,4,5);

void setup()
{
  lcd.begin(16,2);
  lcd.setCursor(0,0);
  lcd.print("Hello Arduino!");
  
  lcd.setCursor(0,1);
  lcd.print("I am Tejas");
}

void loop()
{
  
}