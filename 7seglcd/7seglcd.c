#include<avr/io.h>
#include<util/delay.h>
#define F_CPU 1000000UL

void main()
{
DDRA=0XFF;
int a=0;
/*while(1){

PORTA=0X6D;  _delay_ms(1000);

}*/
while(1){
int i,j;
int s[]={0x3f,0x06,0x5b,0x4f,0x66,0x6d,0x7d,0x07,0x7f,0x6f};
for(i=0;i<11;i++)
{PORTA=s[i];
	for(j=0;j<11;j++)
	{PORTA=s[j]; _delay_ms(10000);
	}
}
/*
// 1 //
PORTA=0X06; _delay_ms(10000);
// 2 //
PORTA=0X5B;  _delay_ms(10000);
// 3 //
PORTA=0X4F;  _delay_ms(10000);
// 4 //
PORTA=0X66;  _delay_ms(10000);
// 5 //
PORTA=0X6D;  _delay_ms(10000);
// 6 //
PORTA=0X7D;  _delay_ms(10000);
// 7 //
PORTA=0X07;  _delay_ms(10000);
// 8 //
PORTA=0X7F;  _delay_ms(10000);
// 9 //
PORTA=0X6F;  _delay_ms(10000);
// 0 //
PORTA=0X3F;  _delay_ms(10000);

PORTA=0X80;
*/
}
}
