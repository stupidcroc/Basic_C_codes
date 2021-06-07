#include <stdio.h>

int main()
{
    /*Program for palindrome*/
    int n, reversedN = 0, remaindar, originalN;
    printf("Enter an integer: ");
    scanf("%d", &n);
    originalN = n;

    // reversed integer is stored in reversedN
    while (n != 0) {
        remaindar = n % 10;
        reversedN = reversedN * 10 + remaindar;
        n /= 10;
    }

    // palindrome if orignalN and reversedN are equal
    if (originalN == reversedN)
        printf("%d is a palindrome.", originalN);
    else
        printf("%d is not a palindrome.", originalN);
    return 0;
}
