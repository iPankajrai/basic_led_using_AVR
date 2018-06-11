unsigned char value[9]= {0x01, 0x03, 0x07, 0x0f, 0x1f, 0x3f, 0x7f, 0xff, 0x00};
#include<avr/io.h>
#define F_CPU 1600000UL
#include <util/delay.h>
void main()
{
DDRB= 0b11111111;
  while(1)
    {
	  for(int i=0;i<8;i++)
	  {
		
		PORTB= value[i];
		_delay_ms(1000);
        
	}	}}
