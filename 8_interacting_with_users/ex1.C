#include <stdio.h>

int main(int argc, char const *argv[])
{
    /* 
    Sample program to demonstrate the scanf function
    Taken from the book "C Programming Absolute Beginner's Guide" by Perry and Miller
     */

    // Variables
    char firstInitial;
    char lastInitial;
    int age;
    int favorite_number;

    printf("What letter does your first name begin with?\n");
    scanf(" %c", &firstInitial);

    printf("What letter does your last name begin with?\n");
    scanf(" %c", &lastInitial);

    printf("How old are you?\n");
    scanf(" %d", &age);

    printf("What is your favorite number?\n");
    scanf(" %d", &favorite_number);

    printf("\nYour initials are %c.%c. and you are %d years old", firstInitial, lastInitial, age);
    printf("\nYour favorite number is %d.\n", favorite_number);

    return 0;
}
