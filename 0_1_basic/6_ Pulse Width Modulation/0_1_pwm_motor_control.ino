// Link:  https://www.tinkercad.com/things/9jDpgz6ADdT-01pwmmotorcontrol?sharecode=Dbyt0FR0qcJaADR7vkfFk4BotjjooumenKRuwfm4h2o

const int fwdPin = 2;
const int bckPin = 4;
const int speedPin = A0;
const int icPin_10 = 5;	// Motor Signal 1
const int icPin_15 = 6;	// Motor Signal 2

//start conditions for Pot, Motor and Buttons
int potValue = 0;
int motorSupply = 0;
int fwdbuttonState = 0;
int bckbuttonState = 0;

void setup()
{
  	pinMode(fwdPin, INPUT_PULLUP);	// Active Low
  	pinMode(bckPin, INPUT_PULLUP);	// Active Low
  	pinMode(icPin_10, OUTPUT);
  	pinMode(icPin_15, OUTPUT);
}


void loop()
{
	potValue = analogRead(speedPin);
  	
  	// Convert analog pot value to digital to be fed to motor
  	// Analog Range (10 bits) = 0 - (2^10 -1)
  	// Digital Range (8 bits) = 0 - (2^8 -1)
  	motorSupply = map(potValue,0,1023,0,255);
  
  	// Read Button States - continuously
  	fwdbuttonState = digitalRead(fwdPin);
  	bckbuttonState = digitalRead(bckPin);
  
  	delay(30);
  
  	//Either fwd or bck motion with the motorValue
  	if( fwdbuttonState == LOW || bckbuttonState == LOW )
    {
  		// When at least one pin HIGH
  	  	analogWrite(fwdbuttonState == LOW ? icPin_10 : icPin_15, motorSupply);
  	  	digitalWrite(fwdbuttonState == LOW ? icPin_15 : icPin_10, motorSupply);
    }
  	else
    {	
      	// IC inputs are low when buttons not pressed
    	digitalWrite(icPin_15, LOW);
      	digitalWrite(icPin_10, LOW);
    }
  
}