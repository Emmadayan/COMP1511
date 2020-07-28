/*
Author: Emma dayan z5239740
Date: Jun 11 2020
Lab02: determines whether or not a year is a leap year
*/

#include <stdio.h>

int main (void) {
    
    int sides;
    int amount;
    
    printf("Enter the number of sides on your dice: ");
    scanf("%d", &sides);
    printf("Enter the number of dice being rolled: ");
    scanf("%d", &amount);
    
    if (sides < 1 || amount < 1) {
        printf("These dice will not produce a range.\n");
        return 1;
    }
    
    int diceRangeMin = amount;
    int diceRangeMax = sides * amount;
    
    printf("Your dice range is %d to %d.\n", diceRangeMin, diceRangeMax);
    
    //find average value 
    double average = (diceRangeMin/2.0) + (diceRangeMax/2.0);
    printf("The average value is %lf\n", average);
    

    return 0;
}
