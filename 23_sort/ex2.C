#include <stdio.h>

void bubbleSort(int arr[], int n) {
    int i, j, temp;
    for (i = 0; i < n-1; i++) {
        for (j = 0; j < n-i-1; j++) {
            if (arr[j] > arr[j+1]) {
                // Swap elements
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}

int main() {
    int numbers[] = {64, 34, 25, 12, 22, 11, 90};
    int n = sizeof(numbers)/sizeof(numbers[0]);
    
    printf("Before sorting: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", numbers[i]);
    }
    
    bubbleSort(numbers, n);
    
    printf("\nAfter sorting: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", numbers[i]);
    }
    return 0;
}
