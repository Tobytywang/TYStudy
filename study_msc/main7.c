#include<reg52.h>

sbit led1 = P1^0;
sbit led2 = P2^1;
sbit led3 = P1^2;
sbit led4 = P2^3;
sbit led5 = P1^4;
sbit led6 = P2^5;
sbit led7 = P1^6;
sbit led8 = P2^7;

sbit k1 = P3^4;
sbit k2 = P3^5;
sbit k3 = P3^6;
sbit k4 = P3^7;

void main()
{
	P1 = 0xff;
	while(1)
	{
		led1 = k1;
		led2 = k1;
		led3 = k2;
		led4 = k2;
		led5 = k3;
		led6 = k3;
		led7 = k4;
		led8 = k4;
	}
}