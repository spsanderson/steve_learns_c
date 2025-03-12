#include <stdio.h>

int main() {
    int numbers[5] = {10, 20, 30, 40, 50};
    int sum = 0;
    int *ptr = numbers;  // Point to the first element
    
    for(int i = 0; i < 5; i++) {
        sum += *ptr;     // Add the value pointed to by ptr
        ptr++;           // Move to the next element
    }
    
    printf("Sum of array elements: %d\n", sum);
    return 0;
}