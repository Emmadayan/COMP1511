//Emma Dayan 
//z5239740
//Jun 19 2020

#include <stdio.h>

int main(void) {
    int number;
    printf("Enter number: ");
    scanf("%d", &number);
    
    printf("The factors of %d are:\n", number);
    
    int i = 1;
    
    int sum = 0;
    while (i <= number) {
        if (number % i == 0) {
            printf("%d\n", i);
            sum = sum + i;
        }
        i++;
    }
    
    int perfect = 0;
    int j = 1;
    while (j < number) {
        if (number % j == 0) {
            perfect = perfect + j;
        }
        j++;
    }
    
    printf("Sum of factors = %d\n", sum);
    
    if (perfect == number) {
        printf("%d is a perfect number\n", number);
    } else {
        printf("%d is not a perfect number\n", number);
    }

    return 0;
}
