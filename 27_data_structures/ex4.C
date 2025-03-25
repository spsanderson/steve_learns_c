#include <stdio.h>

int main() {
    // Declare and initialize an array
    int numbers[5] = {10, 20, 30, 40, 50};
    
    // Access and print array elements
    printf("Array elements:\n");
    for(int i = 0; i < 5; i++) {
        printf("%d ", numbers[i]);
    }
    printf("\n");
    
    // Modify an array element
    numbers[2] = 35;
    
    // Print the modified array
    printf("Modified array:\n");
    for(int i = 0; i < 5; i++) {
        printf("%d ", numbers[i]);
    }
    printf("\n");
    
    return 0;
}
// This code demonstrates the use of arrays in C by declaring an array of integers, initializing it with values, and printing its elements.
// It also shows how to modify an element of the array and print the modified array.