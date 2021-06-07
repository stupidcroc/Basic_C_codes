#include <stdio.h>
int pattern1();
int main()
{
    /*Printing patterns*/
    pattern1();

    return 0;
}
int pattern1(){
    int i, j;
    for(i = 0; i < 5; i++)
    {
        for(j = (5-i); j <= 5; j++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;

}