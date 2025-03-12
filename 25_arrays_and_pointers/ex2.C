#include <stdio.h>

int main() {
    // 2D array: 3 rows, 4 columns
    int grid[3][4] = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12}
    };
    
    // Accessing elements
    printf("Element at row 1, column 2: %d\n", grid[1][2]);
    
    return 0;
}
