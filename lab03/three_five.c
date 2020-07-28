//Emma Dayan 
//z5239740
//Jun 19 2020
//Three or Five

#include <stdio.h>

int main(void) {
    int number;
    printf("Enter number: ");
    scanf("%d", &number);
    
    int i = 1;
    while (i < number) {
        if (i % 3 == 0 || i % 5 == 0) {
            printf("%d\n", i);
        }
        i++;
    }
    
    return 0;
}


