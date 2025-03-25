/* programa para construir uma tabela de pot�ncias de 2 */

#include <stdio.h>

/* fun��o para calcular uma pot�ncia com base "base" e expoente "n" */

int potencia(int base, int n)
{
    int i,total;

    total=1;
    for(i=1;i<=n;i++)
        total=total*base;
    return total;       /*devolve resultado*/
}

void main()
{
    int i;

    printf("Tabela de Pot�ncias de 2\n");
    for(i=0;i<=10;i++)
        printf("%2d\t\t%5d\n",i,potencia(2,i));
}
