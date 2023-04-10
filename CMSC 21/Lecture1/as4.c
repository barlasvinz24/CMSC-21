#include <stdio.h>

int main(void){
    int i, product=1;

    printf("TABLE OF POWERS OF TWO\nn\t2 to the n\n\n");

    // Initial value of product is 1 and it is multiplied to 2 and updated
    // for each iteration as long as i is less than or equal to 10. Value of 
    // product is tabbed printed to the right of the value of i.
    for(i=0; i<=10; i++){
        printf("%d\t%d\n", i, product);
        product*=2;
    }
    
}