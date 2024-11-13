#include <stdio.h>

int main() {
    int number;

    printf("Enter a number: ");
    scanf("%d", &number);

    if (!number) {  // Checks if the number is zero
        printf("You entered zero.\n");
    } else {
        printf("You entered a non-zero number: %d\n", number);
    }

    return 0;
}
