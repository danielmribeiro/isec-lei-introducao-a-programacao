#include <stdio.h>

void main()
{
    /* programa para calcular quantos n�meros pares e �mpares existem existem num conjunto de 10 inteiros */

    int i, numero, pares, impares;

    pares=0;        /* inicializa��o dos contadores de n� pares e de n� impares */
    impares=0;
    for(i=1;i<=10;i++)
    {
        printf("%d� numero:",i);
        scanf("%d",&numero);

        if(numero%2==0)
            pares++;    /* Ou pares=pares+1; */
        else
            impares++;  /* Ou impares=impares+1; */
    }
    printf("\nTotal de n�meros pares:%5d",pares);
    printf("\nTotal de n�meros �mpares:%5d",impares);
}
