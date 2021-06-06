#include <stdio.h>

int main()
{
    /*Ternery operator: Exp1 ? Exp2 : Exp3
    */
    unsigned int a, b;
    printf("\n Enter a = \n");
    scanf("%u", &a);
    printf("\n Enter b = \n");
    scanf("%u", &b);
    a > b ? printf("\n a is greater\n"): printf("\n b is greater");
    return 0;
}