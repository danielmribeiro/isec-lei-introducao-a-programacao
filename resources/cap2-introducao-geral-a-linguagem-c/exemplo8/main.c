#include <stdio.h>

void f1()                           /* defini��o da fun��o f1 */
{
    printf("Fun��o 1\n");
}

void f2()                           /* defini��o da fun��o f2 */
{
    f1();                           /* chamada da fun��o f1 */
    printf("Fun��o 2\n");
}

void main()                         /* defini��o da fun��o main */
{
    f2();                           /* chamada da fun��o f2 */
    printf("Fun��o Principal\n");
}
