#include <stdio.h>

int main()
{
    /*Reversing a digit*/
    unsigned int num, digit, temp, rev;
    printf("\n Enter the number = \n");
    scanf("%u", &num);
    temp = num;
    rev = 0;
    while(temp != 0)
    {
        digit = temp % 10;
        rev = (rev * 10) + digit;
        temp = temp / 10;
    }
    printf("\n reverse of number = %u", rev);

    return 0;
}