#include<reg52.h>
#include<intrins.h>

#define on 0
#define off 1
sbit fm = P2^3;

void delay(unsigned int xms)
{
	unsigned int i,j;
	for(i=xms; i>0; i--)
	{
		for(j=112; j>0; j--);
	}
}

void main()
{
	P1 = 0xfe;
	while(1)
	{
		delay(100);
		P1 = _crol_(P1, 1);
		fm = on;
		delay(100);
		fm = off;
	}
}