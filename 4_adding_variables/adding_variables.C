#include <stdio.h>

// Global variable
int global_count = 0;

void increment_count() {
    // Static variable
    static int call_count = 0;
    call_count++;
    global_count++;
    
    printf("Function called %d times\n", call_count);
    printf("Global count: %d\n", global_count);
}

int main() {
    // Local variables
    int local_var = 5;
    float pi = 3.14159;
    char grade = 'A';

    printf("Local variable: %d\n", local_var);
    printf("Pi: %.2f\n", pi);
    printf("Grade: %c\n", grade);

    increment_count();
    increment_count();
    increment_count();

    int num1 = 5, num2 = 10;
    int sum = num1 + num2;
    printf("Sum: %d\n", sum);

    return 0;
}