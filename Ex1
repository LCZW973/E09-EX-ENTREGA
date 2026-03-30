#define leitura (PIND&31)
#define onled1 (PORTB|=(1<<PB0))
#define offled1 (PORTB&=~(1<<PB0))
#define onled2 (PORTB|=(1<<PB1))
#define offled2 (PORTB&=~(1<<PB1))
void setup()
{
DDRB |= ((1<<PB0) |(1<<PB1));
  DDRD &= ~((1<<PD0)|(1<<PD1)|(1<<PD2)|(1<<PD3)|(1<<PD4));
 PORTD |=((1<<PD0) | (1<<PD1)|(1<<PD2)|(1<<PD3)|(1<<PD4));
}
void loop()
{
    if((leitura==21)||(leitura==10))
    { 
      onled1;
      offled2;
    }
    else if((leitura==31)||(leitura==0))
    {
      offled1;
      onled2;
    }
    else 
    {
      offled1;
      offled2;
    }
  
}
