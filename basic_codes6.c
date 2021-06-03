#include <stdio.h>
#include <limits.h>
#include <math.h>
int main()
{
    unsigned int a, b, c, d;
    printf("\n Enter the first no. to swap = \n");
    scanf("%u", &a);
    printf("\n Enter the second no. to swap = \n");
    scanf("%u", &b);
    /* call swapfun1-> uses arithmetic operations to swap 2 nos good when memory consumption is less*/
    swapfun1(a,b);

    /* call swapfun2-> uses temporary varible to swap 2 nos good when instructions cycles are to be less*/
    swapfun2(a,b);
    
    /* call swapfun3-> uses bitwise operators to swap*/
    swapfun3(a,b);
    return 0;
}

int swapfun1(int num1, int num2)
{
    unsigned int e, f;
    e = num1;
    f = num2;
    e = e + f;
    f = e - f;
    e = e - f;
    printf("\n swapped nos by method1 are = %u and %u", e, f);
    return 0;
    
}

int swapfun2(int num4, int num5)
{
    unsigned int g, h, num3;
    g = num4;
    h = num5;
    num3 = g;
    g = num5;
    h = num3;
    printf("\n swapped nos by method2 are = %u and %u", g, h);
    return 0;
    
}
int swapfun3(int num6, int num7)
{
    unsigned int i, j;
    i = num6;
    j = num7;
    i = i ^ j;
    j = i ^ j;
    i = i ^ j;
    printf("\n swapped nos by method3 are = %u and %u", i, j);
    return 0;
}