#include <stdio.h>

int main(int argc, char const *argv[])
{
    // Example from Chapter 8 Interacting with users from the book:
    // C Programming Absolute Beginner's Guide: Third Edition by Perry and Miller
    char topping[24];
    int slices;
    int month, day, year;
    float cost;

    printf("How much does a pizza cost in your area");
    printf("enter as $XX.XX: ");
    scanf("%f", &cost);

    printf("What is your favorite one-word pizza topping? ");
    scanf(" %s", topping);

    printf("How many slices of %s pizza", topping);
    printf("can you eat in one sitting? ");
    scanf(" %d", &slices);

    printf("What is todays' date (enter it in XX/XX/XX format): ");
    scanf(" %d/%d/%d", &month, &day, &year);

    printf("\n\nWhy not treat yourself to dinner on %d/%d/%d", month, day, year);
    printf("\nand have %d slices of %s pizza!\n", slices, topping);
    printf("It will only cost you $%.2f!\n\n\n", cost);

    // end of programe
    return 0;
}
