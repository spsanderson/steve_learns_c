#include <stdio.h>

// Function that attempts to modify its parameter
void modifyValue(int x) {
    x = x * 2;    // This modification only affects the local copy
    printf("Inside function: x = %d\n", x);
}

int main() {
    int num = 5;
    printf("Before function call: num = %d\n", num);
    modifyValue(num);
    printf("After function call: num = %d\n", num);
    return 0;
}
