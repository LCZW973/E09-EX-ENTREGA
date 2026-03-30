void setup()
{

DDRB |= (1<<PB0) + (1<<PB1) + (1<<PB2);
DDRD &= ~((1<<PD0) + (1<<PD1) + (1<<PD2));
PORTD |=((1<<PD0) | (1<<PD1)|(1<<PD2)) ;
 
}
void loop()
{
    PORTB=((~PIND)&(7));
}
