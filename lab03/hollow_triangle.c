//Emma Dayan 
//z5239740
//Jun 19 2020

#include <stdio.h>

int main(void) {
    int size;
    printf("Enter size: ");
    scanf("%d", &size);
    
    int i = 1;
    while (i <= size) {
        int j = 1;
        while (j <= size){
            if(j == i || j == 1 || i == size) {
                printf("*");
            }
            else {
                printf(" ");
            }
            j++;
        }
        printf("\n");
        i++;
    }

    return 0;
}
