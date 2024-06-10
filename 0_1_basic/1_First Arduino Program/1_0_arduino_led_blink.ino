// LED BLINK CODE
// Link: https://www.tinkercad.com/things/h6nMJFcmNDB-10arduinoledblink?sharecode=9dLLGcJKxveSBZ3k2KH3uYYrUjqRF6VVV2VpCfSJ8mM
void setup()
{
  	// Select the builtin LED Pin
	pinMode(13,OUTPUT);	
}

void loop()
{
  	digitalWrite(13,HIGH);	// HIGH --> ON
  	delay(1000);			// delay of 1 sec
  	digitalWrite(13,LOW);	// LOW --> OFF	
  	delay(1000);
}