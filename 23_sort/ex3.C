#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int nums[10];
    time_t t;
    srand(time(&t)); // Initialize random number generator
    
    // Generate random numbers
    for (int i = 0; i < 10; i++) {
        nums[i] = (rand() % 99) + 1;
    }
    
    // Print original array
    printf("Original numbers: ");
    for (int i = 0; i < 10; i++) {
        printf("%d ", nums[i]);
    }
    
    // Sort array
    for (int outer = 0; outer < 9; outer++) {
        int didSwap = 0;
        for (int inner = outer; inner < 10; inner++) {
            if (nums[inner] < nums[outer]) {
                int temp = nums[inner];
                nums[inner] = nums[outer];
                nums[outer] = temp;
                didSwap = 1;
            }
        }
        if (didSwap == 0) break;
    }
    
    // Print sorted array
    printf("\nSorted numbers: ");
    for (int i = 0; i < 10; i++) {
        printf("%d ", nums[i]);
    }
    
    return 0;
}