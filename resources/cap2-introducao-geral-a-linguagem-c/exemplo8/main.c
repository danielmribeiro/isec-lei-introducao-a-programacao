#include <stdio.h>

void f1()                           /* definição da função f1 */
{
    printf("Função 1\n");
}

void f2()                           /* definição da função f2 */
{
    f1();                           /* chamada da função f1 */
    printf("Função 2\n");
}

void main()                         /* definição da função main */
{
    f2();                           /* chamada da função f2 */
    printf("Função Principal\n");
}
