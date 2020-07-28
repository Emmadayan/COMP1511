/*
Author: Emma dayan z5239740
Date: Jun 11 2020
Lab02: addition
*/

#include <stdio.h>

int main (void){
    int firstNumber;
    int secondNumber;
    printf("Please enter two integers: ");
    scanf("%d ", &firstNumber);
    scanf("%d", &secondNumber);
    int sum = firstNumber + secondNumber;
    printf("%d + %d = %d\n", firstNumber, secondNumber, sum);

    return 0;
}
