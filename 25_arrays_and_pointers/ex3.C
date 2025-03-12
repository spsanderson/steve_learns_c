#include <stdio.h>

int main() {
    int num = 10;      // Regular integer variable
    int *ptr;          // Pointer to integer
    
    ptr = &num;        // Assign address of num to ptr
    
    printf("Value of num: %d\n", num);
    printf("Address of num: %p\n", &num);
    printf("Value stored in ptr: %p\n", ptr);
    printf("Value that ptr points to: %d\n", *ptr);
    
    // Change the value using the pointer
    *ptr = 20;
    printf("New value of num: %d\n", num);
    
    return 0;
}
