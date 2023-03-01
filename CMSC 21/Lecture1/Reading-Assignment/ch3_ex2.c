#include <stdio.h> 

int main(void)
{
    int i; /*Declares data type of i variable as integer*/
    float x; /*Declares data type of x variable as a float*/

    i =40; 
    x = 839.21f; 

    printf(" |%d|%5d|%-5d|%5.3d|\n", i, i, i, i); /* %d prints i in decimal form with least amount of space, %5d prints i with minimum of 5 characters, %-5d prints i with 5 characters and is left-justified, %5.3d prints i with minimum of 5 characters and 3 digits*/
    printf(" |%10.3f|%10.3e|%-10g|\n" , x, x, x); /* %10.3f prints x in fixed decimal form with 10 characters, %10.3e prints x in scientific notation with 3 digits appearing after the decimal point, -10g prints x in fixed decimal format without the trailing zeroes*/

    return 0; 
}