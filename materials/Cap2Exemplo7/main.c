#include <stdio.h>

/* definição de constantes */
#define MINIMO 0
#define MAXIMO 100
#define INCR 20

void main()
{
    /* programa para construir uma tabela de conversão Celsius-Fahrenheit */

    int fahr;

    for(fahr=MINIMO; fahr<=MAXIMO; fahr=fahr+INCR)
        printf("%5d\t%6.1f\n",fahr,(5.0/9.0)*(fahr-32));
}
