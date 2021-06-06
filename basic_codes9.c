#include <stdio.h>

int main()
{
    /*Logical operators &&-> AND, ||->OR, !->NOT*/
    /*If output is 1 then true condition else false*/
    unsigned int a, b, r1, r2, r3, r4;
    printf("\n Enter the number a = \n");
    scanf("%u", &a);
    printf("\n Enter the number b = \n");
    scanf("%u", &b);
    r1 = a && b;
    r2 = a || b;
    r3 = !a;
    r4 = !b;
    printf("\n and = %u, or = %u, not a = %u, not b = %u", r1, r2, r3, r4);

    return 0;
}