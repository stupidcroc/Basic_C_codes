#include <stdio.h>
#include <string.h>
#define MAX_LENGTH 100
int stringlength();
int stringcopy();
int concatinatestr();

int main()
{
    stringlength();
    stringcopy();
    concatinatestr();

    return 0;
}

int stringlength(){
    /*stringlength without the string.h inclusion*/
    int i;
    char arr[MAX_LENGTH];
    printf("\n Enter string:");
    scanf("%s", arr);
    for(i = 0; *(arr + i) != '\0'; i++){
    }
    printf("stringlength = %d", i);    
    return 0;
}

int stringcopy(){
    /*stringcopy function*/
    char src[MAX_LENGTH], dst[MAX_LENGTH];
    int i;
    printf("\n Enter string:");
    scanf("%s", src);
    for(i = 0; src[i] != 0; i++){
        dst[i] = src[i];
    }
    i++;
    dst[i] = '\0';
    printf("copied string: %s", dst);
    return 0;
}

int concatinatestr(){
    /*Concatinate 2 strings*/
    int i, j;
    char src[MAX_LENGTH], dst[MAX_LENGTH];
    printf("\n Enter string 1:");
    scanf("%s", src);
    printf("\n Enter string 2:");
    scanf("%s", dst);
    for(i = 0; src[i] != '\0'; i++){
        
    }
    for(j = 0; dst[j] != '\0'; j++, i++){
        src[i] = dst[j];
    }
    printf("concatinated string: %s", src);
    return 0;
}