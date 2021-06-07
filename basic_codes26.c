#include <stdio.h>

int main()
{
    /*Factorial of a number*/
    unsigned int num, fact, i;
    printf("\n Enter the num = \n");
    scanf("%u", &num);
    fact = 1;
    for(i = 1; i <= num; i++)
    {
        fact = fact * i;
    }
    printf("\n factorial = %u", fact);

    return 0;
}