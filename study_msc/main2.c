#include<reg52.h>

#define uint unsigned int
#define on 0
#define off 1

sbit led1 = P1^0;
sbit led2 = P1^1;
sbit led3 = P1^2;
sbit led4 = P1^3;
sbit led5 = P1^4;
sbit led6 = P1^5;
sbit led7 = P1^6;
sbit led8 = P1^7;

void delay(uint xms)
{
	uint i,j;
	for(i=xms; i>0; i--)
	{
		for(j=112; j>0; j--);
	}
}

void main()
{
	while(1)
	{
		led1 = on;
		delay(200);
		led1 = off;
		
		led2 = on;
		delay(200);
		led2 = off;
		
		led3 = on;
		delay(200);
		led3 = off;
		
		led4 = on;
		delay(200);
		led4 = off;
		
		led5 = on;
		delay(200);
		led5 = off;
		
		led6 = on;
		delay(200);
		led6 = off;
		
		led7 = on;
		delay(200);
		led7 = off;
		
		led8 = on;
		delay(200);
		led8 = off;
	}
}