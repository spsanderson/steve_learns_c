#include <stdio.h>

int main() {
    int number;

    printf("Enter a number: ");
    scanf("%d", &number);

    if (number < 10 || number > 20) {
        printf("The number is either less than 10 or greater than 20.\n");
    } else {
        printf("The number is between 10 and 20 inclusive.\n");
    }

    return 0;
}
