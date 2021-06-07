#include <stdio.h>
int even_odd_modulo(int num1);
int even_odd_checkbit(int num2);
int main()
{
    /*Program to check if the number is even or odd with 2 logics*/
    int num, num3;
    printf("\n Enter the number = \n");
    scanf("%d", &num);
    num3 = num;
    even_odd_modulo(num);
    even_odd_checkbit(num3);

    return 0;
}

int even_odd_modulo(int num1)
{
    /*Program using the modulo operator to find the even or odd number*/
    int result;
    result = num1 % 2;
    if(result == 0)
    {
        printf("\n Even number by modulo");
    }
    else
    {
        printf("\n Odd number by modulo");
    }
    return 0;
}

int even_odd_checkbit(int num2)
{
    /*Program using checkbit to find the even or odd number
    checkbit logic: check = (num1 & (1 << bitpos)); here bitpos is 0, for even its 0 for odd its 1*/
    if((num2 & (1 << 0)) == 1)
    {
        printf("\n Odd number by checkbit");
    }
    else
    {
        printf("\n Even number by checkbit");
    }
    return 0;
}