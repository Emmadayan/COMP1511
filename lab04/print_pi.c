//Prints the first n digits of pi, where n is specified 
// by the user

#include <stdio.h>

#define MAX_DIGITS 10

int main(void) {
    int pi[MAX_DIGITS] = {3, 1, 4, 1, 5, 9, 2, 6, 5, 3};
    printf("How many digits of pi would you like to print? ");
    //TODO: Insert your code here
    int digits;
    scanf("%d", &digits);
    
    int i = 0;
    while(i < digits && i < MAX_DIGITS) {
        if (i == 1) {
            printf(".%d",pi[i]);
        } else {
            printf("%d", pi[i]); 
        }
    i++;
    }
    printf("\n");

    return 0;
}
