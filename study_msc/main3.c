#include<reg52.h>
#include<intrins.h>

#define uint unsigned int

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
	P1 = 0xfe;
	while(1)
	{
		delay(500);
		P1 = _crol_(P1, 1);
	}
}