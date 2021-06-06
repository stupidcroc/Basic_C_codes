#include <stdio.h>

int main()
{
    /*Relational operations
    >,<,==,>=,<=!=*/
    /*Compare 2 numbers relationally*/
    /*If the output is 1 then it is a true case else its a false*/
    unsigned int a, b, r1, r2, r3, r4, r5, r6;
    printf("\n Enter number a = \n");
    scanf("%u",&a);
    printf("\n Enter number b = \n");
    scanf("%u",&b);
    r1 = a > b;
    r2 = a >= b;
    r3 = a <= b;
    r4 = a < b;
    r5 = a == b;
    r6 = a != b;
    printf("\n greater = %u, greater or equal = %u, smaller or equal = %u, smaller = %u, equal = %u, not equal = %u", r1, r2, r3, r4, r5, r6);

    return 0;
}