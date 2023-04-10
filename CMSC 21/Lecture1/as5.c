#include <stdio.h>

int main(void){
    int startDay, daysOfMonth, i;

    printf("Enter number of days in month: ");
    scanf("%d", &daysOfMonth);

    printf("Enter starting day of the week (1=Sun, 7=Sat): ");
    scanf("%d", &startDay);

    printf("\n");

    //If daysOfMonth entered is less than 28, more than 31, negative, or startDay is negative tell user that input is invalid.
    if(((daysOfMonth<28 || daysOfMonth>31) || daysOfMonth<=0) || (startDay<=0)){
        printf("Invalid input. Try again");
    }
    
    else{
        //Prints spaces depending to the starting day of the month provided by the user.
        //For example starting day is 3 therefore print spaces for the first 2 spots.
        for(i=1; i<startDay; i++){
            printf("   ");
        }

        //After printing the spaces print the days of the month
        //%2d is used since days can be two digits
        //If the day of the week reaches 7 print on the next line.
        for(i=1; i<=daysOfMonth; i++){
            printf("%2d ", i);
            if((i+startDay-1)%7==0){
                printf("\n");
            }
        }
    }
}