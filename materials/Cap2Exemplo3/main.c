#include <stdio.h>

void main()
{
    /* programa para calcular a �rea de um ret�ngulo, conhecidas as dimens�es dos lados */

    float lado1,lado2;
    printf("Lado1= ");
    scanf("%f",&lado1);                     /* leitura do 1� lado */

    printf("Lado2= ");
    scanf("%f",&lado2);                     /* leitura do 2� lado */

    printf("Area= %4.1f\n",lado1*lado2);    /* escrita da �rea */
}
