/*Program to interface stepper motor*/

#include<reg51.h> //include at89c51 microcontoller header file

sbit sw=P0^0;   //connect p0.0 to switch
#define motor P2 //connect lower nibble of port2 to stepper motor

void delay_ms(unsigned int);

bit dir=0; //define direction flag
void main(void)
{
while(1) //infinite loop
{
	do
	{       
		if(dir==0) //if dir==0, motor rotates in counter clockwise direction
		{
      	motor=0x0c;   //for CCW direction "C639"
			delay_ms(5);
	      motor=0x06;
			delay_ms(5);
	      motor=0x03;
			delay_ms(5);
        	motor=0x09;
			delay_ms(5);
		}else	
		if(dir==1) //if dir==1, motor rotates in clockwise direction
		{
        	motor=0x09;   //for CW direction "936C"
			delay_ms(5);
	      motor=0x03;
			delay_ms(5);
	      motor=0x06;
			delay_ms(5);
        	motor=0x0c;
			delay_ms(5);
		}	
	}while(sw==1); //wait till switch is pressed
	delay_ms(200); //switch debounce delay 200 milli seconds
	dir=1-dir; // if switch pressed, toggle direction flag
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

