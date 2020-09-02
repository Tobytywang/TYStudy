#include<reg52.h>

sbit led1 = P1^0;

void main()
{
	while(1)
	{
		led1 = 0;
	}
}