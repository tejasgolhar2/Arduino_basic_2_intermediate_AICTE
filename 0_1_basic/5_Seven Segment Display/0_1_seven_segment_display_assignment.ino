// Link: https://www.tinkercad.com/things/lmy0FVePevD-01sevensegmentdisplayassignment?sharecode=F_oHvjZLggxCgHcbkZale_sdBXLr9-jEbK3LpxJ0mYU

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
  	// Display Five
	digitalWrite(a, HIGH);
  	digitalWrite(b, LOW);
  	digitalWrite(c, HIGH);
  	digitalWrite(d, HIGH);
  	digitalWrite(e, LOW);
  	digitalWrite(f, HIGH);
  	digitalWrite(g, HIGH);
  	delay(1000);
  	// Display Six
	digitalWrite(a, HIGH);
  	digitalWrite(b, LOW);
  	digitalWrite(c, HIGH);
  	digitalWrite(d, HIGH);
  	digitalWrite(e, HIGH);
  	digitalWrite(f, HIGH);
  	digitalWrite(g, HIGH);
  	delay(1000);
  	// Display Seven
	digitalWrite(a, HIGH);
  	digitalWrite(b, HIGH);
  	digitalWrite(c, HIGH);
  	digitalWrite(d, LOW);
  	digitalWrite(e, LOW);
  	digitalWrite(f, LOW);
  	digitalWrite(g, LOW);
  	delay(1000);
  	// Display Eight
	digitalWrite(a, HIGH);
  	digitalWrite(b, HIGH);
  	digitalWrite(c, HIGH);
  	digitalWrite(d, HIGH);
  	digitalWrite(e, HIGH);
  	digitalWrite(f, HIGH);
  	digitalWrite(g, HIGH);
  	delay(1000);
  	// Display Four
	digitalWrite(a, HIGH);
  	digitalWrite(b, HIGH);
  	digitalWrite(c, HIGH);
  	digitalWrite(d, HIGH);
  	digitalWrite(e, LOW);
  	digitalWrite(f, HIGH);
  	digitalWrite(g, HIGH);
  	delay(1000);
  	
}