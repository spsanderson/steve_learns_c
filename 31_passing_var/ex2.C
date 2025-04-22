#include <stdio.h>

void half(int *i) {
    *i = *i / 2;  // Dereference the pointer and update the value at that address.
    printf("Your value halved is %d.\n", *i);
}

int main() {
    int i;
    printf("Please enter an integer: ");
    scanf("%d", &i);
    
    // Call the function and pass the address of i using the & operator.
    half(&i);
    
    // Here, i is changed by the half() function.
    printf("In main(), i is now %d.\n", i);
    return 0;
}
