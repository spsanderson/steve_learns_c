#include <stdio.h>

// Function that modifies the value at the address it receives
void modifyValue(int *x) {
    *x = *x * 2;    // This modification affects the original variable
    printf("Inside function: *x = %d\n", *x);
}

int main() {
    int num = 5;
    printf("Before function call: num = %d\n", num);
    modifyValue(&num);    // Pass the address of num
    printf("After function call: num = %d\n", num);
    return 0;
}
