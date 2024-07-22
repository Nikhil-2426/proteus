#include <lpc214x.h>
int main()
{
IODIR0 |=(0x01 << 2);
while(1){
IOSET0 |=(1<<2);
}
}