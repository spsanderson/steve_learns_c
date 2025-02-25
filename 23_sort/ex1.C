// Example program #1 from Chapter 23 of Absolute Beginner's Guide
// to C, 3rd Edition
// File 23ex1.c

/* This program takes a series of integers from the user and places them in an array.  The user can search the array for a specific number. */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
 
int main(int argc, char const *argv[])
{
    int ctr, inner, outer, didSwap, temp;
    int nums[10];
    time_t t;

    // If you don't include this statement, your program will always
    // generate the same random numbers each time you execute it
    srand(time(&t));

    // Load the array with random numbers
    for (ctr = 0; ctr < 10; ctr++)
    {
        nums[ctr] = (rand() % 99) + 1;
    }

    // Now list the array as it currently is before sorting
    puts("\nHere is the list before the sort: ");
    for (ctr = 0; ctr < 10; ctr++)
    {
        printf("%d\n", nums[ctr]);
    }

    // Sort the array

    for (outer = 0; outer < 9; outer++)
    {
        didSwap = 0; // Becomes 1 (true) if list is not yet ordered
        for (inner = outer; inner < 10; inner++)
        {
            if (nums[inner] < nums[outer])
            {
                temp = nums[inner];
                nums[inner] = nums[outer];
                nums[outer] = temp;
                didSwap = 1;
            }
        }
        if (didSwap == 0)
        {
            break;
        }
    }

    // Now list the array as it currently is after sorting
    puts("\nHere is the list after the sort: ");
    for (ctr = 0; ctr < 10; ctr++)
    {
        printf("%d\n", nums[ctr]);
    }
    
    return 0;
}
