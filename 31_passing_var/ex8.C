#include <stdio.h>

void mystery(int *x, int y) {
    *x = *x + 5;
    y = y + 5;
    printf("Inside function: *x = %d, y = %d\n", *x, y);
}

int main() {
    int a = 10, b = 20;
    mystery(&a, b);
    printf("After function: a = %d, b = %d\n", a, b);
    return 0;
}
