#include <stdio.h>

void main()
{
    /* defini��o das vari�veis */

    char ch;
    int x1,x2;
    float y;
    double z;

    /* atribui��o de valores �s vari�veis */

    ch='A';
    y=40.54;
    x1=2;
    x2=x1+4;
    z=123.456;

    /*escrita na sa�da standard */
    printf("y=%f\n",y);
    printf("%d � maior do que %d\n",x2,x1);
    printf("%c\n",ch);
    printf("%5.21f\n",z);
}
