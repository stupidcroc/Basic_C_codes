#include <stdio.h>
#include <math.h>
int main()
{
    /*GCD of 2 nos.*/
    unsigned int i, num1, num2, gcd;
    printf("\n Enter num1 = \n");
    scanf("%u", &num1);
    printf("\n Enter num2 = \n");
    scanf("%u", &num2);
    for(i = 1; ((i <= num1) || (i <= num2)); i++){
        if((num1 % i == 0) && (num2 % i == 0)){
            gcd = i;
        }
    }
    printf("\n gcd = %u", gcd);

    return 0;
}