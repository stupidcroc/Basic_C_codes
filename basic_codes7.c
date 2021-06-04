#include <stdio.h>

int main()
{
    /*Converting uppercase to lowercase and vice-versa*/
    unsigned char ch, ch1, result1, result2;
    printf("\n Enter uppercase ch and ");
    printf(" Enter lowercase ch = \n");
    scanf("%c %c",&ch, &ch1);
    result1 = ch + 32;
    result2 = ch1 - 32;
    printf("\n result_upper_to_lower = %c", result1);
    printf("\n result_lower_to_upper = %c", result2);

    return 0;
}