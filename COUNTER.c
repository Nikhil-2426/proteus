#include <lpc214x.h>
void delay(unsigned int count);
int main()
{
	IODIR0 |=(1 << 1);
	IODIR0 |=(1 << 2);
	IODIR0 |=(1 << 3);
	
	while(1){
		//0 0 0
		IOCLR0 |=(1<<1);
		IOCLR0 |=(1<<2);
		IOCLR0 |=(1<<3);
		delay(30000); 
		
    //0 0 1
		IOCLR0 |=(1<<1);
		IOCLR0 |=(1<<2);
		IOSET0 |=(1<<3);
		delay(30000);

//0 1 0
		IOCLR0 |=(1<<1);
		IOSET0 |=(1<<2);
		IOCLR0 |=(1<<3);
		delay(30000);	

//0 1 1
		IOCLR0 |=(1<<1);
		IOSET0 |=(1<<2);
		IOSET0 |=(1<<3);
		delay(30000);		
		
//1 0 0
		IOSET0 |=(1<<1);
		IOCLR0 |=(1<<2);
		IOCLR0 |=(1<<3);
		delay(30000);		
	
//1 0 1
		IOSET0 |=(1<<1);
		IOCLR0 |=(1<<2);
		IOSET0 |=(1<<3);
		delay(30000);
	
//1 1 0
		IOSET0 |=(1<<1);
		IOSET0 |=(1<<2);
		IOCLR0 |=(1<<3);
		delay(30000);	
	
//1 1 1
		IOSET0 |=(1<<1);
		IOSET0 |=(1<<2);
		IOSET0 |=(1<<3);
		delay(30000);	
	}
}
void delay(unsigned int count)
{
	unsigned int i;
	for(i=0;i<count;i++);
}

