/*
Write a C program that:

Declares an array of 15 integers.
Prompts the user to enter a target value to search within the array.
Uses a linear search to determine if the target value exists.
If found, prints the index at which the target appears; if not found, informs the user accordingly.

After implementing the linear search, modify your program to count how many times the target value appears 
in the array and display that count.
*/

#include <stdio.h>

int main() {
    int arr[15] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15};
    int target, i, count = 0, found = 0;

    printf("Enter a target value to search within the array: ");
    scanf("%d", &target);

    for(i = 0; i < 15; i++) {
        if(arr[i] == target) {
            found = 1;
            count++;
            printf("Target value found at index %d.\n", i);
        }
    }

    if(found) {
        printf("Target value appears %d times in the array.\n", count);
    } else {
        printf("Target value not found in the array.\n");
    }

    return 0;
}

