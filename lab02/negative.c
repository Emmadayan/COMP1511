/*Author: Emma Dayan 
z5239740
Date: Jun 11 2020
COMP1511 Lab02 
'Don't be so negative'
*/

#include <stdio.h>


int main (void){
    
    int number;
    //printf("Please insert a number: ");
    scanf("%d", &number);
    //printf("Number = %d\n", number);
    if (number < 0) {
        printf("Don't be so negative!\n");
    } else if (number > 0) {
        printf("You have entered a positive number.\n");
    } else if (number == 0) {
        printf("You have entered zero.\n");
    }
    
    return 0;
}
