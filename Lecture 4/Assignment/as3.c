#include <stdio.h>

int main(void){
    int i, product=1;

    // Initial value of product is 1 and it is multiplied to 2 and updated
    // for each iteration as long as i is less than or equal to 7
    for(i=0; i<=7; i++){
        printf("%d ", product);
        product*=2;
    }
}