#include <stdio.h>

int main()
{
    /*Bitwise operators
    &->AND, |->OR, ^->XOR, ~->NOT, >>->Right shift, <<->Left shift 
    */
    /*Oring, Xoring, Inverting and Anding
    %x->to get hex values*/
    unsigned int num1, num2, result1, result2, result3, result4, result5;
    printf("\n Enter the 1st number = \n");
    scanf("%x", &num1);
    printf("\n Enter the 2nd number = \n");
    scanf("%x", &num2);
    result1 = num1 & num2;
    result2 = num1 | num2;
    result3 = num1 ^ num2;
    result4 = ~num1;
    result5 = ~num2;
    printf("\n AND = %x \n OR = %x \n XOR = %x \n NOT1 = %x \n NOT2 = %x \n", result1, result2, result3, result4, result5);
    

    return 0;
}