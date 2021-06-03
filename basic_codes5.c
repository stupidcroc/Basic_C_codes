#include <stdio.h>
#include <limits.h>
#include <math.h>
int main()
{
    /* Temperature conversion from centigrade to farheniet*/
    unsigned int c, f;
    printf("\n Enter temperature in centigrade = \n");
    scanf("%u", &c);
    f = (float)(((9*c)/5)+32); //now thats called typecasting
    printf("\n temperature in farheiniet = %u", f);

    return 0;
}