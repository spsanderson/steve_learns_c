#include <stdio.h>

void half(int i) {
    i = i / 2; // Divide the copy of i by 2.
    printf("Your value halved is %d.\n", i);
}

int main() {
    int i;
    printf("Please enter an integer: ");
    scanf("%d", &i);
    
    // Call the function and pass i by value.
    half(i);
    
    // Notice that i is unchanged after the function call.
    printf("In main(), i is still %d.\n", i);
    return 0;
}
