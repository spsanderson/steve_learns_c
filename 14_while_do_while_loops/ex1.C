#include <stdio.h>

int main() {
    int number, sum = 0;
    
    do {
        printf("Enter a number (negative to exit): ");
        scanf("%d", &number);
        
        if (number >= 0) {
            sum += number;
        }
    } while (number >= 0);
    
    printf("Sum of entered numbers: %d\n", sum);
    
    return 0;
}
