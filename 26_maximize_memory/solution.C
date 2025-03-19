#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int i, arraySize;
    int *randomNumbers;
    time_t t;
    double total = 0;
    int largest, smallest;
    float average;
    
    // Seed the random number generator
    srand(time(&t));
    
    // Get input from user
    printf("How many random numbers do you want to generate? ");
    scanf("%d", &arraySize);
    
    // Allocate memory
    randomNumbers = (int *) malloc(arraySize * sizeof(int));
    if (!randomNumbers) {
        printf("Memory allocation failed!\n");
        exit(1);
    }
    
    // Generate random numbers
    for (i = 0; i < arraySize; i++) {
        randomNumbers[i] = (rand() % 500) + 1;
    }
    
    // Initialize for statistics
    largest = 0;
    smallest = 501;
    
    // Calculate statistics
    for (i = 0; i < arraySize; i++) {
        total += randomNumbers[i];
        
        if (randomNumbers[i] > largest) {
            largest = randomNumbers[i];
        }
        
        if (randomNumbers[i] < smallest) {
            smallest = randomNumbers[i];
        }
    }
    
    average = (float)total / arraySize;
    
    // Display results
    printf("Largest number: %d\n", largest);
    printf("Smallest number: %d\n", smallest);
    printf("Average: %.2f\n", average);
    
    // Free memory
    free(randomNumbers);
    
    return 0;
}
