#include <stdio.h>
#include <limits.h>
#include <math.h>
int main()
{
    /*Range of certain datatype using the limits.h header includes SCHAR_MIN etc are included in the limits.h file*/
    printf("\n signed char %d %%c %d %d", sizeof(signed char), SCHAR_MIN, SCHAR_MAX);
    unsigned int num1, num2, result1, result2, result3, result4, result5;
    printf("\n Enter num1 = \n");
    scanf("%u", &num1);
    printf("\n Enter num2 = \n");
    scanf("%u", &num2);
    result1 = num1 + num2;
    result2 = num1 - num2;
    result3 = num1 * num2;
    result4 = num1 / num2;
    result5 = num1 % num2;
    printf("\n addition = %d subtraction = %d product = %d division = %d mod = %d", result1, result2, result3, result4, result5);

    return 0;
}