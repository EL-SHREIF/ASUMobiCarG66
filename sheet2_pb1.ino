#define F_CPU 16000000
#include <avr/io.h>
#include <util/delay.h>
#include <avr/interrupt.h>
void hi(int t)
{
     int i=1;
   for(i=1;i<=t;i++)
   {
   _delay_ms(40);
   }
   return 0;
}

int main (void){
  DDRC=0x03;
  DDRA=0x00;
  PORTA=0b11111111;
  int x,f;

  while (1)
  {
    x=PINA;
    y=1;
    PORTC=0b00000001;
      hi(x);
    PORTC=0b00000010;
    while(f==1)
    {
    if(PINA==x)
    {
    f=1;
    }
    else
    {
    f=0;
    }
    }
  }

        return 0;
   }
