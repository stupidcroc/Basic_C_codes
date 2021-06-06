#include <stdio.h>
int funcup_low(unsigned char ch);
int vowel_stuff(unsigned char ch);
int main()
{
    unsigned char ch, ch1, ch2;
    printf("\n Enter the character = \n");
    scanf("%c", &ch);
    ch1 = ch;
    ch2 = ch;
    funcup_low(ch1);
    vowel_stuff(ch2);
    return 0;
}
int funcup_low(unsigned char ch)
{
    /*Program to check if given character is uppercase, lowercase or a symbol*/
    /*If 1 is set then that is the appropriate case for any of the above lowercase, uppercase, if not any then its a symbol*/
    unsigned int r1, r2;
    r1 = ((ch >= 65) && (ch <= 90));
    r2 = ((ch >= 97) && (ch <= 122));
    printf("\n uppercase = %u \n", r1);
    printf("\n lowercase = %u \n", r2);
    return 0;
}
int vowel_stuff(unsigned char ch)
{
    unsigned int result;
    /*Program to check if a char is vowel or not, if vowel the result is printed as 1*/
    result = ((ch == 'a') || (ch == 'e') || (ch == 'i') || (ch == 'o') || (ch == 'u'));
    printf("\n vowel = %u", result);
    return 0;
}