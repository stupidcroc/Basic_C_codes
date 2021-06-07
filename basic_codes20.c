#include <stdio.h>

int main()
{
    /*Switch case for addition, subtraction, multiplication, modulo and division*/
    unsigned int a, b, result1, result2, result3, result4, result5;
    unsigned char opr;
    printf("\n Enter operation opr = \n");
    scanf("%c", &opr);
    printf("\n Enter 1st number = \n");
    scanf("%u", &a);
    printf("\n Enter 2nd number = \n");
    scanf("%u", &b);

    switch(opr)
    {
        case '+' : result1 = a + b;
                   printf("\n Result = %u", result1);
        break;
        
        case '-' : result2 = a - b;
                   printf("\n Result = %u", result2);
        break;
        
        case '*' : result3 = a * b;
                   printf("\n Result = %u", result3);
        break;
        
        case '/' : result4 = a / b;
                   printf("\n Result = %u", result4);
        break;        
        
        case '%' : result5 = a % b;
                   printf("\n Result = %u", result5);
        break;        
        default: printf("\n Invalid input");
    }

    return 0;
}
