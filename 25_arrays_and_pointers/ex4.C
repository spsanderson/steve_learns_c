#include <stdio.h>

int main() {
    int numbers[5] = {10, 20, 30, 40, 50};
    
    printf("Array name points to first element: %p\n", numbers);
    printf("Address of first element: %p\n", &numbers[0]);
    
    // These two print the same value
    printf("First element using array notation: %d\n", numbers[0]);
    printf("First element using pointer notation: %d\n", *numbers);
    
    return 0;
}
