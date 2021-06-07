#include <stdio.h>

int main()
{
    /*Program to check if the year is leap year or not input-> year*/
    unsigned int y;
    printf("\n Enter the year y = \n");
    scanf("%u", &y);
    if(((y % 4) == 0) && ((y % 100) != 0) || ((y % 400) == 0))
    {
        printf("\n Leap year");
    }
    else
    {
        printf("\n Not a Leap year");
    }

    return 0;
}