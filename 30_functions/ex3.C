#include <stdio.h>

/* Function declaration (prototype) */
int add(int x, int y);

/* Main function to test our add function */
int main() {
    /* Test case 1: Adding positive numbers */
    int result1 = add(5, 3);
    printf("Test 1: 5 + 3 = %d (Expected: 8)\n", result1);
    
    /* Test case 2: Adding a negative number */
    int result2 = add(-4, 7);
    printf("Test 2: -4 + 7 = %d (Expected: 3)\n", result2);
    
    return 0;
}

/* Function definition */
int add(int x, int y) {
    return x + y;
}
