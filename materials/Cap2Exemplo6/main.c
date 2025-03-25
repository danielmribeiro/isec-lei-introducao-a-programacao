#include <stdio.h>

void main()
{
    /* programa para calcular quantos números pares e ímpares existem existem num conjunto de 10 inteiros */

    int i, numero, pares, impares;

    pares=0;        /* inicialização dos contadores de nº pares e de nº impares */
    impares=0;
    for(i=1;i<=10;i++)
    {
        printf("%dº numero:",i);
        scanf("%d",&numero);

        if(numero%2==0)
            pares++;    /* Ou pares=pares+1; */
        else
            impares++;  /* Ou impares=impares+1; */
    }
    printf("\nTotal de números pares:%5d",pares);
    printf("\nTotal de números ímpares:%5d",impares);
}
