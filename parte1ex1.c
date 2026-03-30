
#define F_CPU 16000000UL //um macro que ao digitar F_CPU substitui ao valor a frente no procesamento
#include <avr/io.h>//biblioteca pra micro
#include <util/delay.h>//biblioteca pra delay
int main(void)
{
DDRC |= (1 << PC5);//Seleciona o portal c e define pc5 como um pino de saida
while (1)//loop
{
PORTC ^= (1 << PC5);//operador bit OU exclusivo
_delay_ms(500);//trava o codigo por 500microsegundos
while(!PINC & (1<<< PC6)) //leitura do pino PC6(pino de entrada) atraves do registrador PINC com uma mascara de BIT,se 
{
PORTC &= ~(1 << PC5);//desliga a Saida dO pino PC5
}
}
return 0;
//Explicacao sequencia:O codigo executa um loop na qual quando exibido um valor de saida diferente 
//de um bit com outro o OU exc ira se tornar verdadeiro(1) ativando os pull ups e a saida,ao se tornar
//igual ira ser falso(0) desligando os pullups e saida dependendo do pull up estar ativo ou n quando a
//condicao do segundo while for diferente de 1 o PC ira ser desativado
}
