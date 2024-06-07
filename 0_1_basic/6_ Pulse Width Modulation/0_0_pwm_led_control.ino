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
    	delay(10);
    	duty_cycle_value++;
  }
  
  if((duty_cycle_value >= 0) && (flag == false))
  {
    	if(duty_cycle_value == 0)
        {
        	flag = true;
        }
  		analogWrite(pwm_pin, duty_cycle_value);
    	delay(10);
    	duty_cycle_value--;
  }
  
  
}