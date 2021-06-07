#include <stdio.h>
int pattern1();
int spacepattern();
int pattern2();

int main()
{
    /*Printing patterns*/
    pattern1();
    spacepattern();
    pattern2();


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

int spacepattern(){
    int i, j;
    for(i = 0; i < 3; i++){
        for(j = 0; j < 3; j++){
            printf(" ");
        }
        printf("\n");
    }
    return 0;
}


int pattern2(){
    int i, j;
    for(i = 0; i < 5; i++){
        for(j = i; j < 5; j++){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}