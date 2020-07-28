//Emma Dayan 
//z5239740
//Jun 19 2020

#include <stdio.h>

int main(void) {
    int firstNum;
    int secondNum;
    int thirdNum;
    
    printf("Enter integer: ");
    scanf("%d", &firstNum);
    printf("Enter integer: ");
    scanf("%d", &secondNum);
    printf("Enter integer: ");
    scanf("%d", &thirdNum);
    
    printf("The integers in order are: ");
    
    if (firstNum <= secondNum && secondNum <= thirdNum) {
        printf("%d %d %d\n", firstNum, secondNum, thirdNum);
    } else if (firstNum <= thirdNum && thirdNum <= secondNum) {
        printf("%d %d %d\n", firstNum, thirdNum, secondNum);
    } else if (secondNum <= firstNum && firstNum <= thirdNum) {
        printf("%d %d %d\n", secondNum, firstNum, thirdNum);
    } else if (secondNum <= thirdNum && thirdNum <= firstNum) {
        printf("%d %d %d\n", secondNum, thirdNum, firstNum);
    } else if (thirdNum <= firstNum && firstNum <= secondNum) {
        printf("%d %d %d\n", thirdNum, firstNum, secondNum);
    } else if (thirdNum <= secondNum && secondNum <= firstNum) {
        printf("%d %d %d\n", thirdNum, secondNum, firstNum);
    }
    
    return 0;
}
