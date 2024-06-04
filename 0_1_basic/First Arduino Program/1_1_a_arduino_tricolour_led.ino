// C++ code
// Link: https://www.tinkercad.com/things/5M1S7kDl0qL-11arduinotricolourled?sharecode=4aHJYYgjseqFrdP0P5A-GEnNampgJrJBfPlQJz_giRI
void setup()
{
  pinMode(12, OUTPUT);	// RED LED
  pinMode(11, OUTPUT);	// BLUE LED
  pinMode(10, OUTPUT);	// GREEN LED
}

void loop()
{
  digitalWrite(12, HIGH);
  digitalWrite(11, LOW);
  digitalWrite(10, LOW);
  delay(1000); 			// Wait for 1000 millisecond(s)
  
  digitalWrite(12, LOW);
  digitalWrite(11, HIGH);
  digitalWrite(10, LOW);
  delay(1000); 			// Wait for 1000 millisecond(s)
  
  digitalWrite(12, LOW);
  digitalWrite(11, LOW);
  digitalWrite(10, HIGH);
  delay(1000); 			// Wait for 1000 millisecond(s)
  
}