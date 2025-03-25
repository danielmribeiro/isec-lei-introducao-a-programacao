#include <stdio.h>

void main()
{
    /* definição das variáveis */

    char ch;
    int x1,x2;
    float y;
    double z;

    /* atribuição de valores às variáveis */

    ch='A';
    y=40.54;
    x1=2;
    x2=x1+4;
    z=123.456;

    /*escrita na saída standard */
    printf("y=%f\n",y);
    printf("%d é maior do que %d\n",x2,x1);
    printf("%c\n",ch);
    printf("%5.21f\n",z);
}
