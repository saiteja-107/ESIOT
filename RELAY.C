/*Program to interface relay*/

#include<reg51.h> //include at89c51 microcontoller header file

#define relay P0 //connect p0.4 to relay & p0.0-p0.3 to leds  

void delay_ms(unsigned int);

void main(void)
{
	while(1)  //infinite loop
	{
      relay=0x16; //relay on, led2 & led3 on
		delay_ms(1000); //delay 1000 milli seconds
      relay=0x09; //relay off, led1 & led4 on
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
