#include <stdio.h>

int main() {
    int numbers[5];
    int sum = 0;
    int max;
    
    // Input
    for (int i = 0; i < 5; i++) {
        printf("Enter number %d: ", i+1);
        scanf("%d", &numbers[i]);
    }
    
    // Processing
    max = numbers[0];
    for (int i = 0; i < 5; i++) {
        sum += numbers[i];
        if (numbers[i] > max) {
            max = numbers[i];
        }
    }
    
    // Output
    printf("Sum: %d\n", sum);
    printf("Average: %.2f\n", (float)sum/5);
    printf("Maximum: %d\n", max);
    
    return 0;
}
