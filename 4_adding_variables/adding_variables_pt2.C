#include <stdio.h>

// Code snippet from Chapter 5 Adding Variables To Your Programs
// C Programming Absolute Beginner's Guide, Third Edition, Perry and Miller
main() {
    char first_initial, middle_initial;
    int number_of_pencils;
    int number_of_notebooks;
    float pencils = 0.23;
    float notebooks = 2.89;
    float lunchbox = 4.99;

    first_initial = 'J';
    middle_initial = 'R';

    number_of_pencils = 7;
    number_of_notebooks = 4;

    printf("%c%c needs %d pencils, %d notebooks, and 1 lunchbox\n", first_initial, middle_initial, number_of_pencils, number_of_notebooks);
    printf("The total cost is $%.2f\n", number_of_pencils * pencils + number_of_notebooks * notebooks + lunchbox);

    return 0;
}