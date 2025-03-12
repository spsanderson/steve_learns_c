#include <stdio.h>

void reverseArray(int *arr, int size) {
    int *start = arr;          // Pointer to the start of array
    int *end = arr + size - 1; // Pointer to the end of array
    int temp;
    
    while(start < end) {
        // Swap elements
        temp = *start;
        *start = *end;
        *end = temp;
        
        // Move pointers toward the center
        start++;
        end--;
    }
}

int main() {
    int arr[5] = {10, 20, 30, 40, 50};
    
    printf("Original array: ");
    for(int i = 0; i < 5; i++) {
        printf("%d ", arr[i]);
    }
    
    reverseArray(arr, 5);
    
    printf("\nReversed array: ");
    for(int i = 0; i < 5; i++) {
        printf("%d ", arr[i]);
    }
    
    return 0;
}