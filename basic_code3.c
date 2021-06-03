#include <stdio.h>
#include <limits.h>
int main()
{
    /*Check the sizeof each datatypes*/
    printf("%d \n", sizeof(int));
    printf("%d \n", sizeof(float));
    printf("%d \n", sizeof(double));
    printf("%d \n", sizeof(char));
    /*print a number in decimal, octal, hex*/
    int num = 25;
    printf("%d \n", num); //decimal
    printf("%o \n", num); //octal
    printf("%x \n", num); //hex
    return 0;
}