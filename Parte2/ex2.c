#define chave  ((PINB)&0b11110)

void setup()
{
  DDRD |= (1<<PD3);

  DDRB &= ~((1<<PB1)|(1<<PB2)|(1<<PB3)|(1<<PB4)); // entradas
  PORTB |= ((1<<PB1)|(1<<PB2)|(1<<PB3)|(1<<PB4)); // pull-up
}

char estado = 0;

void loop()
{
  switch(estado)
  {
    case 0:
      if(chave == 0b11010)
      {
        _delay_ms(50);
        if(chave == 0b11010)
          estado = 1;
      }
    break;

    case 1:
      if(chave == 0b10010)
      {
        _delay_ms(50);
        if(chave == 0b10010)
          estado = 2;
      }
    break;

    case 2:
      if(chave == 0b00010)
      {
        _delay_ms(50);
        if(chave == 0b00010)
          estado = 3;
      }
    break;

    case 3:
      if(chave == 0b00000)
      {
        _delay_ms(50);
        if(chave == 0b00000)
          estado = 4;
      }
    break;

    case 4:
      PORTD |= (1<<PD3);
    break;

    default:
      estado = 0;
    break;
  }
}
