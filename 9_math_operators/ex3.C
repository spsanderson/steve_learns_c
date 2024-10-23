// Example Program 2 from C Programming Absolute Beginner's Guide by Perry and Miller Chapter 9 Page 77

#include <stdio.h>
#define SALESTAX .07

int main(int argc, char const *argv[])
{
    int numTires;
    float tirePrice, beforeTax, netSales;

    // Get the number of tires purchased and price per tire
    printf("How many tires did you purchase? ");
    scanf(" %d", &numTires);
    printf("What was the cost per tire (enter in $xx.xx format)? ");
    scanf(" $%f", &tirePrice);

    // Calculate the price

    beforeTax = tirePrice * numTires;
    netSales = beforeTax + (beforeTax * SALESTAX);

    printf("%You spent $%.2f on your tires\n", netSales);

    return 0;
}
