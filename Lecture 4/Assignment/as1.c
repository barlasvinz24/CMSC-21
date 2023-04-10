#include <stdio.h>

int main(void){
    int i;

    i=1;

    // Initial value of i is 1 and for each iteration i is multiplied to 2
    // and its value is updated as long as i is less than or equal to 128. s
    while(i<=128){
        printf("%d ", i);
        i*=2;
    }

    return 0;
}