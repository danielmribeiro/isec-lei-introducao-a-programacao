#include <stdio.h>

void main()
{
    /* programa para determinar se um dado n�mero inteiro � par ou �mpar */

    int numero;

    printf("Qual o n�mero? ");
    scanf("%d",&numero);

    if(numero%2==0)                 /* condi��o a testar */
        printf("N�mero par!\n");    /* se condi��o verdadeira */
    else
        printf("N�mero �mpar!\n");  /* se condi��o falsa */
}
