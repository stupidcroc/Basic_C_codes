#include <stdio.h>

int main()
{
    /*Program to find max of 3 nos*/
    unsigned int a, b, c;
    printf("\n Enter 1st number = \n");
    scanf("%u", &a);
    printf("\n Enter 2nd number = \n");
    scanf("%u", &b);
    printf("\n Enter 3rd number = \n");
    scanf("%u", &c);
    if(a > b)
    {
        if(a > c)
        {
            printf("\n 1st number is the largest");
        }
        else{
            printf("\n 3rd number is the largest");
        }
    }
    else
    {
        if(b > c){
            printf("\n 2nd number is the largest");
        }
        else{
            printf("\n 3rd number is the largest");
        }
    }

    return 0;
}