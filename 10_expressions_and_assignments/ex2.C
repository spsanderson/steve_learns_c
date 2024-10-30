#include <stdio.h>

int main(int argc, char const *argv[])
{
    /*
    Write a program that counts from 1 to 5 and then back down to 1. Do
    not use a loop, do it manually with compound assignment operators.
    */
    int counter = 0;

    // Incrementing
    counter += 1;
    printf("Counter: %d\n", counter);
    counter += 1;
    printf("Counter: %d\n", counter);
    counter += 1;
    printf("Counter: %d\n", counter);
    counter += 1;
    printf("Counter: %d\n", counter);
    counter += 1;
    printf("Counter: %d\n", counter);

    // Decrementing
    counter -= 1;
    printf("Counter: %d\n", counter);
    counter -= 1;
    printf("Counter: %d\n", counter);
    counter -= 1;
    printf("Counter: %d\n", counter);
    counter -= 1;
    printf("Counter: %d\n", counter);
    counter -= 1;
    printf("Counter: %d\n", counter);

    return 0;
}
