#include<reg52.h>

#define duan P0

sbit wei1 = P2^4;
sbit wei2 = P2^5;
sbit wei3 = P2^6;
sbit wei4 = P2^7;

void main()
{
	wei1 = 1;
	wei2 = 0;
	wei3 = 0;
	wei4 = 0;
	duan = 0x7c;
	while(1);
}