#include <stdio.h>

// Function prototypes.
float add(float a, float b);
float subtract(float a, float b);
float multiply(float a, float b);
float divide(float a, float b); // Note: Ensure b is not zero.

int main() {
    float num1 = 10.0, num2 = 5.0;
    
    printf("Addition: %.2f + %.2f = %.2f\n", num1, num2, add(num1, num2));
    printf("Subtraction: %.2f - %.2f = %.2f\n", num1, num2, subtract(num1, num2));
    printf("Multiplication: %.2f * %.2f = %.2f\n", num1, num2, multiply(num1, num2));
    printf("Division: %.2f / %.2f = %.2f\n", num1, num2, divide(num1, num2));
    
    return 0;
}

float add(float a, float b) {
    return a + b;
}

float subtract(float a, float b) {
    return a - b;
}

float multiply(float a, float b) {
    return a * b;
}

float divide(float a, float b) {
    if (b != 0)
        return a / b;
    else {
        printf("Error: Division by zero!\n");
        return 0;
    }
}
