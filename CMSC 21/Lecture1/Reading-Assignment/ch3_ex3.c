#include<stdio.h>

int main(void)
{
    int num1, denom1, num2, denom2, result_num, result_denom; /*Declare the data types of variables num1, denom1, num2, denom2, result_num, result_denom as integers*/

    printf("Enter first fraction: "); /*Tells the user to input the first fraction*/
    scanf("%d/%d", &num1, &denom1); /*Stores the integer numerator of the inputted first fraction to the num1 variable and the integer denominatior to the denom1 variable*/

    printf("Enter second fraction: "); /*Tells the user to input the second fraction*/
    scanf("%d/%d", &num2, &denom2); /*Stores the integer numerator of the inputted second fraction to the num2 variable and the integer denominatior to the denom2 variable*/

    result_num = num1 * denom2 + num2 *denom1; /*Computes the final numerator value by adding the product of num1 and denom2, and num2 and denom1, then storing it in variable result_num*/

    result_denom = denom1 * denom2; /*Computes the final denominator value by multiplying denom1 and denom2 and storing it in variable result_denom*/
    printf("The sum is %d/%d\n", result_num, result_denom); /*Displays the final sum in fraction form; the result_num as final numerator and the result_denom as the final denominator*/

    return 0;
}