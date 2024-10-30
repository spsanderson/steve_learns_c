#include <stdio.h>

int main(int argc, char const *argv[])
{
    /* 
    This program increases a counter from 1 to 5, printing updates
    and then counts it back down to 1. 
    Start at 0 and increment by 1 until 5, then decrement by 1 until 0.
    print the counter at each step. Do not use a loop, do it manually.
    */
    int counter = 0;

    // Incrementing
    counter = counter + 1;
    printf("Counter: %d\n", counter);
    counter = counter + 1;
    printf("Counter: %d\n", counter);
    counter = counter + 1;
    printf("Counter: %d\n", counter);
    counter = counter + 1;
    printf("Counter: %d\n", counter);
    counter = counter + 1;
    printf("Counter: %d\n", counter);
    
    // Decrementing
    counter = counter - 1;
    printf("Counter: %d\n", counter);
    counter = counter - 1;
    printf("Counter: %d\n", counter);
    counter = counter - 1;
    printf("Counter: %d\n", counter);
    counter = counter - 1;
    printf("Counter: %d\n", counter);
    counter = counter - 1;
    printf("Counter: %d\n", counter);

    return 0;
}
