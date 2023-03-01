#include<stdio.h>

int main(void){
    int i, j; /*Declares the data types of i and j variables as integers*/
    float x, y; /*Declares the data types of x and y variables as floats*/

    i=10;
    j=20;
    x=43.2892f;
    y=5527.0f;

    printf("i = %d, j = %d, x = %f, y = %f\n", i, j, x, y); /*Indicate that a variables's value is to be printed using "%", followed by character of data type. Then pass the variables i, j, x, and y as arguments to be printed respectively.*/
}
