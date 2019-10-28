#include<avr/io.h>
int main(void)
{
  DDRC=0x00;
  DDRB=0xff;
  DDRD=0xff;
  PORTC=0xff;
  unsigned char temp;
while(1)
{
  temp=PINC;
if(temp<100)
{
   PORTB=temp;
   }
   else
   {
     PORTD=temp;
	 }
	 }
	 return 0;
	 }
