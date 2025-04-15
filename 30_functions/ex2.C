#include <stdio.h>

// Prototypes for all functions used in the program.
void greetUser();
int multiply(int x, int y);

int main() {
    greetUser();
    int product = multiply(4, 5);
    printf("The product of 4 and 5 is: %d\n", product);
    return 0;
}

void greetUser() {
    printf("Hello, welcome to this C program demo!\n");
}

int multiply(int x, int y) {
    return x * y;
}
