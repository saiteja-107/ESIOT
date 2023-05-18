/*Program to interface buzzer*/

#include<reg51.h> //include at89c51 microcontoller header file

#define buzzer P0  //connect p0.5 to buzzer & p0.0-p0.3 to leds  

void delay_ms(unsigned int);

void main(void)
{
	while(1) //infinite loop
	{
      buzzer=0x2f; //buzzer on, all leds on
		delay_ms(1000);  //delay 1000 milli seconds
      buzzer=0x00; //buzzer off, all leds off
		delay_ms(1000); //delay 1000 milli seconds
	}
}

//generates delay in milli seconds
void delay_ms(unsigned int i)
{
unsigned int j;
	while(i-->0)
	{
		for(j=0;j<500;j++)
		{
			;
		}
	}
}


