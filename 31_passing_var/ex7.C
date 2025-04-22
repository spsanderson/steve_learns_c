#include <stdio.h>

void modifyArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        arr[i] = arr[i] * 2;  // This will modify the original array
    }
}

int main() {
    int numbers[] = {1, 2, 3, 4, 5};
    int size = sizeof(numbers) / sizeof(numbers[0]);
    
    printf("Before function call:\n");
    for (int i = 0; i < size; i++) {
        printf("%d ", numbers[i]);
    }
    
    modifyArray(numbers, size);  // No & operator needed
    
    printf("\nAfter function call:\n");
    for (int i = 0; i < size; i++) {
        printf("%d ", numbers[i]);
    }
    
    return 0;
}
