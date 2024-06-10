// Link: https://www.tinkercad.com/things/kN79GrT9qCV-02pwmbuzzercontrol?sharecode=hYE0jUAl6n2CrHw2UgIraXcxu3nIK6Ly4HVHkV4yvSI

int pwm_pin = 3;
int duty_cycle_value = 0;
bool flag = true;

void setup()
{
  pinMode(pwm_pin, OUTPUT);
}

void loop()
{
  if((duty_cycle_value <= 255) && (flag == true))
  {
    	if(duty_cycle_value == 255)
        {
        	flag = false;
        }
  		analogWrite(pwm_pin, duty_cycle_value);
    	delay(30);
    	duty_cycle_value++;
  }
  
  if((duty_cycle_value >= 0) && (flag == false))
  {
    	if(duty_cycle_value == 0)
        {
        	flag = true;
        }
  		analogWrite(pwm_pin, duty_cycle_value);
    	delay(30);
    	duty_cycle_value--;
  }
  
  
}