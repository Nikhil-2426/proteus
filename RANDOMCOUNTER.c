#include <lpc214x.h>
void delay(unsigned int count);
int main()
{
	IODIR0 |=(1 << 1);
	IODIR0 |=(1 << 2);
	IODIR0 |=(1 << 3);
	IODIR0 |=(1 << 4);
	IODIR0 |=(1 << 5);
	IODIR0 |=(1 << 6);
	IODIR0 |=(1 << 7);
	IODIR0 |=(1 << 8);
	while(1)
	{
	// 1
		IOSET0 |=(1<<1);
		IOCLR0 |=(1<<2);
		IOCLR0 |=(1<<3);
		IOCLR0 |=(1<<4);
		IOCLR0 |=(1<<5);
		IOCLR0 |=(1<<6);
		IOCLR0 |=(1<<7);
		IOCLR0 |=(1<<8);
		delay(300000);
		IOCLR0 |=(1<<1);
		IOCLR0 |=(1<<2);
		IOCLR0 |=(1<<3);
		IOCLR0 |=(1<<4);
		IOCLR0 |=(1<<5);
		IOCLR0 |=(1<<6);
		IOCLR0 |=(1<<7);
		IOCLR0 |=(1<<8);
		delay(300000);
	// 7
		IOCLR0 |=(1<<1);
		IOCLR0 |=(1<<2);
		IOCLR0 |=(1<<3);
		IOCLR0 |=(1<<4);
		IOCLR0 |=(1<<5);
		IOCLR0 |=(1<<6);
		IOSET0 |=(1<<7);
		IOCLR0 |=(1<<8);
		delay(300000);
		IOCLR0 |=(1<<1);
		IOCLR0 |=(1<<2);
		IOCLR0 |=(1<<3);
		IOCLR0 |=(1<<4);
		IOCLR0 |=(1<<5);
		IOCLR0 |=(1<<6);
		IOCLR0 |=(1<<7);
		IOCLR0 |=(1<<8);
		delay(300000);
	// 3
		IOCLR0 |=(1<<1);
		IOCLR0 |=(1<<2);
		IOSET0 |=(1<<3);
		IOCLR0 |=(1<<4);
		IOCLR0 |=(1<<5);
		IOCLR0 |=(1<<6);
		IOCLR0 |=(1<<7);
		IOCLR0 |=(1<<8);
		delay(300000);
		IOCLR0 |=(1<<1);
		IOCLR0 |=(1<<2);
		IOCLR0 |=(1<<3);
		IOCLR0 |=(1<<4);
		IOCLR0 |=(1<<5);
		IOCLR0 |=(1<<6);
		IOCLR0 |=(1<<7);
		IOCLR0 |=(1<<8);
		delay(300000);
	// 3 4
		IOCLR0 |=(1<<1);
		IOCLR0 |=(1<<2);
		IOSET0 |=(1<<3);
		IOSET0 |=(1<<4);
		IOCLR0 |=(1<<5);
		IOCLR0 |=(1<<6);
		IOCLR0 |=(1<<7);
		IOCLR0 |=(1<<8);
		delay(300000);
		IOCLR0 |=(1<<1);
		IOCLR0 |=(1<<2);
		IOCLR0 |=(1<<3);
		IOCLR0 |=(1<<4);
		IOCLR0 |=(1<<5);
		IOCLR0 |=(1<<6);
		IOCLR0 |=(1<<7);
		IOCLR0 |=(1<<8);
		delay(300000);
	// 8
		IOCLR0 |=(1<<1);
		IOCLR0 |=(1<<2);
		IOCLR0 |=(1<<3);
		IOCLR0 |=(1<<4);
		IOCLR0 |=(1<<5);
		IOCLR0 |=(1<<6);
		IOCLR0 |=(1<<7);
		IOSET0 |=(1<<8);
		delay(300000);
		IOCLR0 |=(1<<1);
		IOCLR0 |=(1<<2);
		IOCLR0 |=(1<<3);
		IOCLR0 |=(1<<4);
		IOCLR0 |=(1<<5);
		IOCLR0 |=(1<<6);
		IOCLR0 |=(1<<7);
		IOCLR0 |=(1<<8);
		delay(300000);
	}
}
void delay(unsigned int count)
{
	unsigned int i;
	for(i=0;i<count;i++);
}