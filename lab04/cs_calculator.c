// Calculator 
//Emma Dayan
//z5239740
//Jun 26 2020

#include <stdio.h>
#include <math.h>

int main(void) {
    printf("Enter instruction: ");
    int number;
    //scanf("%d", &number);
      
    while (scanf("%d", &number) != EOF) {

        if (number == 1) {
            int int1;
            scanf("%d", &int1);
            int total = int1 * int1;
            printf("%d", total);
        } else if (number == 2) {
            int int1, int2;
            scanf("%d %d", &int1, &int2);
            int total = pow(int1, int2);
            printf("%d", total);
        }
        printf("\n");
        printf("Enter instruction: ");
        //scanf("%d", &number);
            
    }
    
   
    return 0;
}
