#include <stdio.h>

int main()
{
    /*A program to reverse the bits and then swap them for each of the 2 bits
    e.g. i/p -> 31425364-----> (46352413 intermediate stage i.e. reversed)-----
    o/p--> (after the reversed stage now its 2 bits swapping)64534231*/
    unsigned int num1, num2, d1, d2, d3, d4;
    printf("\n Enter the number = \n");
    scanf("%x", &num1);
    d1 = num1 & 0xFF000000; /*Extracting the desired bits*/
    d2 = num1 & 0x00FF0000;
    d3 = num1 & 0x0000FF00;
    d4 = num1 & 0x000000FF;
    d4 = d4 << 24; /*Swaping/shifting the bits*/
    d3 = d3 << 8;
    d2 = d2 >> 8;
    d1 = d1 >> 24;
    num2 = d4 | d3 | d2 | d1; /*Oring it together*/
    printf("\n num2 = %x", num2);
    return 0;
}
