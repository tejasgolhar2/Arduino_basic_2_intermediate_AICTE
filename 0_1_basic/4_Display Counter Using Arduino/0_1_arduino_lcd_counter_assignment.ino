#include <LiquidCrystal.h>

LiquidCrystal lcd(11,12,2,3,4,5);
int button_pin = 7;
int count = 0;

void setup()
{
  lcd.begin(16,2);
  pinMode(button_pin, INPUT);
}

void loop()
{
  if(digitalRead(button_pin) == HIGH)
  {
    lcd.setCursor(0,0);
    lcd.print(count+=2);							// Update the counter
    while(digitalRead(button_pin) == HIGH);		// It will keep 
  }
}