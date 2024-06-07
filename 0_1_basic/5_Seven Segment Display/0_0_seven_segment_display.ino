// Link: https://www.tinkercad.com/things/cGAxbJi5AS5-00sevensegmentdisplay?sharecode=pHv7skIx2jmAWE9Rg1L72PUMh3VzQ7FXWb559TugGDg

#define a 2
#define b 3
#define c 4
#define d 5
#define e 6
#define f 8
#define g 9

void setup()
{
	pinMode(a, OUTPUT);
  	pinMode(b, OUTPUT);
  	pinMode(c, OUTPUT);
  	pinMode(d, OUTPUT);
  	pinMode(e, OUTPUT);
  	pinMode(f, OUTPUT);
  	pinMode(g, OUTPUT);
}

void loop()
{	
  	// Display Zero
	digitalWrite(a, HIGH);
  	digitalWrite(b, HIGH);
  	digitalWrite(c, HIGH);
  	digitalWrite(d, HIGH);
  	digitalWrite(e, HIGH);
  	digitalWrite(f, HIGH);
  	digitalWrite(g, LOW);
  	delay(1000);
  	// Display One
	digitalWrite(a, LOW);
  	digitalWrite(b, HIGH);
  	digitalWrite(c, HIGH);
  	digitalWrite(d, LOW);
  	digitalWrite(e, LOW);
  	digitalWrite(f, LOW);
  	digitalWrite(g, LOW);
  	delay(1000);
  	// Display Two
	digitalWrite(a, HIGH);
  	digitalWrite(b, HIGH);
  	digitalWrite(c, LOW);
  	digitalWrite(d, HIGH);
  	digitalWrite(e, HIGH);
  	digitalWrite(f, LOW);
  	digitalWrite(g, HIGH);
  	delay(1000);
  	// Display Three
	digitalWrite(a, HIGH);
  	digitalWrite(b, HIGH);
  	digitalWrite(c, HIGH);
  	digitalWrite(d, HIGH);
  	digitalWrite(e, LOW);
  	digitalWrite(f, LOW);
  	digitalWrite(g, HIGH);
  	delay(1000);
  	// Display Four
	digitalWrite(a, LOW);
  	digitalWrite(b, HIGH);
  	digitalWrite(c, HIGH);
  	digitalWrite(d, LOW);
  	digitalWrite(e, LOW);
  	digitalWrite(f, HIGH);
  	digitalWrite(g, HIGH);
  	delay(1000);
  	
}