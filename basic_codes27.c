#include <stdio.h>
#include <math.h>
int main()
{
    /*Program for power of a number*/
    unsigned int base, index, result = 1, i;
    printf("\n Enter the base = \n");
    scanf("%u", &base);
    printf("\n Enter the index = \n");
    scanf("%u", &index);
    for(i = 1; i <= index; i++){
        result = result * base;
    }
    printf("\n Result = %u", result);

    return 0;
}