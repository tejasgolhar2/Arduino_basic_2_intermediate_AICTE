// C++ code
//Link: https://www.tinkercad.com/things/7fUpKgsiwc0-11barduinotricolourled?sharecode=dR98-mzscHUl5vAHVLwrk-eyB0d7zQIK9TVhN_UG7EA
void setup()
{
  pinMode(12, OUTPUT);  // RED LED
  pinMode(11, OUTPUT);  // BLUE LED
  pinMode(10, OUTPUT);  // GREEN LED
  pinMode(4, INPUT);    // To read Input
}

void loop()
{
  if(digitalRead(4) == HIGH)  // When Pushbutton is pressed
  {
    // Turn on the RED LED
    digitalWrite(12, HIGH);
    delay(500);                // Wait for 500 milliseconds
    digitalWrite(12, LOW);
    delay(500);                // Wait for 500 milliseconds

    // Turn on the BLUE LED
    digitalWrite(11, HIGH);
    delay(500);                // Wait for 500 milliseconds
    digitalWrite(11, LOW);
    delay(500);                // Wait for 500 milliseconds

    // Turn on the GREEN LED
    digitalWrite(10, HIGH);
    delay(500);                // Wait for 500 milliseconds
    digitalWrite(10, LOW);
    delay(500);                // Wait for 500 milliseconds
  }
}
