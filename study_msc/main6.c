#include<reg52.h>

#define duan P0
#define uchar unsigned char

sbit wei1 = P2^4;
sbit wei2 = P2^5;
sbit wei3 = P2^6;
sbit wei4 = P2^7;

uchar code sz[17] = {
	0x3f,
	0x06,
	0x5b,
	0x4f,
	0x66,
	0x6d,
	0x7d,
	0x07,
	0x7f,
	0x6f,
	0x77,
	0x7c,
	0x39,
	0x5e,
	0x79,
	0x71,
	0x00
};

void delay(unsigned int xms)
{
	unsigned int i,j;
	for(i=xms; i>0; i--)
		for(j=112; j>0; j--);
}

void main()
{
	while(1)
	{
		duan = sz[4];
		wei1 = 0;
		wei2 = 0;
		wei3 = 0;
		wei4 = 1;
		delay(1000);

		duan = sz[3];
		wei1 = 0;
		wei2 = 0;
		wei3 = 1;
		wei4 = 0;
		delay(1000);

		duan = sz[2];
		wei1 = 0;
		wei2 = 1;
		wei3 = 0;
		wei4 = 0;
		delay(1000);

		duan = sz[1];
		wei1 = 1;
		wei2 = 0;
		wei3 = 0;
		wei4 = 0;
		delay(1000);
	}
}