#include <stdio.h>

void main()
{
    /* programa para calcular a área de um retângulo, conhecidas as dimensões dos lados */

    float lado1,lado2;
    printf("Lado1= ");
    scanf("%f",&lado1);                     /* leitura do 1º lado */

    printf("Lado2= ");
    scanf("%f",&lado2);                     /* leitura do 2º lado */

    printf("Area= %4.1f\n",lado1*lado2);    /* escrita da área */
}
