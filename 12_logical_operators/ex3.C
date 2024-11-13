#include <stdio.h>

int main() {
    int number;

    printf("Enter a number: ");
    scanf("%d", &number);

    if (number >= 10 && number <= 20) {
        printf("The number is between 10 and 20 inclusive.\n");
    } else {
        printf("The number is outside the range of 10 to 20.\n");
    }

    return 0;
}
