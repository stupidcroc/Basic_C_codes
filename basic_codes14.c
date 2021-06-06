#include <stdio.h>

int main()
{
    /*Bitwise operators
     
    */
    /*Setting, clearing, toggling and checking the bits*/
    unsigned int num1, bitpos, set, clear, toggle, check;
    printf("\n Enter the number = \n");
    scanf("%u", &num1);
    printf("\n Enter the bitposition = \n");
    scanf("%u", &bitpos);
    set = (num1 | (1 << bitpos));
    clear = (num1 & (~(1 << bitpos)));
    toggle = (num1 ^ (1 << bitpos));
    check = (num1 & (1 << bitpos));
    printf("\n set = %u \n clear = %u \n toggle = %u \n check = %u \n", set, clear, toggle, check);

    return 0;
}