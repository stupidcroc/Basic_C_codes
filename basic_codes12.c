#include <stdio.h>

int main()
{
    /*Bitwise operators
    >>->Right shift, <<->Left shift 
    */
    /*Left shift and right shift operators*/
    unsigned int num1, bitpos, left, right;
    printf("\n Enter the number = \n");
    scanf("%u", &num1);
    printf("\n Enter the bitposition = \n");
    scanf("%u", &bitpos);
    left = num1 << bitpos;
    right = num1 >> bitpos;
    printf("\n left shift = %u \n right shift = %u \n", left, right);

    return 0;
}