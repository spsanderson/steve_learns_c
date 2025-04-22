#include <stdio.h>

// Function that demonstrates both pass by value and pass by address
void updateValues(int *a, int b) {
    *a = *a + b;    // Modifies the original variable
    b = b * 2;      // Only modifies the local copy
    printf("Inside function: *a = %d, b = %d\n", *a, b);
}

int main() {
    int x = 5, y = 10;
    printf("Before function call: x = %d, y = %d\n", x, y);
    updateValues(&x, y);
    printf("After function call: x = %d, y = %d\n", x, y);
    return 0;
}
