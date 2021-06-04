#include <stdio.h>

int main()
{
    /*Converting uppercase to lowercase and vice-versa*/
    unsigned char ch, ch1, result1, result2;
    printf("\n Enter uppercase ch and ");
    printf(" Enter lowercase ch = \n");
    scanf("%c %c",&ch, &ch1);
    result1 = ch + 32;
    result2 = ch1 - 32;
    printf("\n result_upper_to_lower = %c", result1);
    printf("\n result_lower_to_upper = %c", result2);
	func2();

    return 0;
}


int func2()
{
    /*Seperation of the digits*/
    unsigned int digit, d1, d2, d3, d4;
    printf("\n Enter 4 digit = \n");
    scanf("%u", &digit);
    d1 = digit % 10;
    digit = digit / 10;
    d2 = digit % 10;
    digit = digit / 10;  
    d3 = digit % 10;
    digit = digit / 10;
    d4 = digit;
    printf("\n seperate nos are %u %u %u %u",d4, d3, d2, d1);

    return 0;
}
