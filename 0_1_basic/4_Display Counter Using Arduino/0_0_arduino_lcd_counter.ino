// Link: https://www.tinkercad.com/things/6sB0y1oId8H-00arduinolcdcounter?sharecode=K7zGKjw6D90fohbtONV0h88mQ9YvNdiWuLlisUBLMok

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
    lcd.print(count++);							// Update the counter
    while(digitalRead(button_pin) == HIGH);		// It will keep 
  }
}