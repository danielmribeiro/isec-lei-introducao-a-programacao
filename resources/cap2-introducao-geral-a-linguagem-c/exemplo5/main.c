#include <stdio.h>

void main()
{
    /* programa para determinar se um dado número inteiro é positivo ou negativo.
    Caso seja positivo deve indicar se é par ou ímpar */

    int numero;

    printf("Qual o número?");
    scanf("%d",&numero);

    if(numero<0)                        /* 1ª condição */
        printf("Número negativo!\n");
    else
        if(numero%2==0)                 /* 2ª condição */
            printf("Número par!\n");
        else
            printf("Número ímpar!\n");
}
