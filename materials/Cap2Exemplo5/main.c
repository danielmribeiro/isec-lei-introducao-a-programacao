#include <stdio.h>

void main()
{
    /* programa para determinar se um dado n�mero inteiro � positivo ou negativo.
    Caso seja positivo deve indicar se � par ou �mpar */

    int numero;

    printf("Qual o n�mero?");
    scanf("%d",&numero);

    if(numero<0)                        /* 1� condi��o */
        printf("N�mero negativo!\n");
    else
        if(numero%2==0)                 /* 2� condi��o */
            printf("N�mero par!\n");
        else
            printf("N�mero �mpar!\n");
}
