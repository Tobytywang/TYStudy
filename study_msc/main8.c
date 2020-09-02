#include<reg52.h>

sbit led1 = P1^0;
sbit k1 = P3^4;

void delay(unsigned int xms)
{
	unsigned int i,j;
	for(i=xms; i>0; i--)
		for(j=112; j>0; j--);
}

void main()
{
	P1 = 0xff;
	while(1)
	{
		if(k1 == 0)
		{
			delay(10);
			if(k1 == 0)
			{
				// while(k1 == 0);
				led1 = ~led1;
			}
		}
	}
}