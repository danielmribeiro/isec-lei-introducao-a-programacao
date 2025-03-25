#include <stdio.h>

void main()
{
    /* programa para determinar se um dado número inteiro é par ou ímpar */

    int numero;

    printf("Qual o número? ");
    scanf("%d",&numero);

    if(numero%2==0)                 /* condição a testar */
        printf("Número par!\n");    /* se condição verdadeira */
    else
        printf("Número ímpar!\n");  /* se condição falsa */
}
