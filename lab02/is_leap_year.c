/*
Author: Emma dayan z5239740
Date: Jun 11 2020
Lab02: determines whether or not a year is a leap year
*/

#include <stdio.h>

int main (void){

    int conditionOne = 4;
    int conditionTwo = 100;
    int conditionThree = 400;
    int year;
    printf("Enter year: ");
    scanf("%d", &year);
    
    if (year % conditionOne != 0) {
        printf("%d is not a leap year.\n", year);
    } else if (year % conditionTwo != 0) {
        printf("%d is a leap year.\n", year);
    } else if (year % conditionThree != 0) {
        printf("%d is not a leap year.\n", year);
    } else {
        printf("%d is a leap year.\n", year);
    }

    return 0;
}
