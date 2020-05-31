#include<reg52.h>
#include <intrins.h>
#define uint unsigned int
#define uchar unsigned char
uchar temp;
void delay(uint);
sbit beep=P2^3;
void main()
{
	temp=0xfe;
	P1=temp;
	beep=0;
	while(1)
	{
		temp=_crol_(temp,1);
		delay(100); 
		P1=temp;
	}
}

void delay(z)
{
	uint x,y;
	for(x=100;x>0;x--)
		for(y=z;y>0;y--);
}