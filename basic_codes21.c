#include <stdio.h>

int main()
{
    /*Iterations-- Loops for, while, do while
    for loop:
    for(initialization; condition; modification)
    {
        body
        
        
    }
    while loop:
    initialization;
    while(condition)
    {
        body;
        modification;
        
    }*/
    /*Print a table of given number*/
    unsigned int num, i ,result;
    printf("\n Enter the number = \n");
    scanf("%u", &num);
    for(i = 1; i <= 10; i++)
    {
        result = num * i;
        printf("\n %u X %u = %u", num, i, result);
    }

    return 0;
}