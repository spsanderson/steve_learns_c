#include <stdio.h>

int main() {
    float length, width;
    
    // Get user input
    printf("Enter rectangle length: ");
    scanf("%f", &length);
    printf("Enter rectangle width: ");
    scanf("%f", &width);
    
    // Calculate area and perimeter
    float area = length * width;
    float perimeter = 2 * (length + width);
    
    // Display results
    printf("Area: %.2f\n", area);
    printf("Perimeter: %.2f\n", perimeter);
    
    return 0;
}
