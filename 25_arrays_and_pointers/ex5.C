#include <stdio.h>

int main() {
    int numbers[5] = {10, 20, 30, 40, 50};
    
    // Using array notation
    printf("Array notation:\n");
    for(int i = 0; i < 5; i++) {
        printf("numbers[%d] = %d\n", i, numbers[i]);
    }
    
    // Using pointer notation
    printf("\nPointer notation:\n");
    for(int i = 0; i < 5; i++) {
        printf("*(numbers + %d) = %d\n", i, *(numbers + i));
    }
    
    return 0;
}
