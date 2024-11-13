#include <stdio.h>

int main() {
    int number;
    printf("Enter a number: ");
    scanf("%d", &number);
    
    if (number >= 1 && number <= 100 && number % 2 == 0) {
        printf("%d is a valid even number\n", number);
    } else {
        printf("%d is not valid\n", number);
    }
    return 0;
}
