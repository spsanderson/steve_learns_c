#include <stdio.h>
#include <string.h>

// Example program modified from Chapter 6 of
// Absolute Beginner's Guide to C, 3rd Edition
main() {
    // Child1 Can hold 6 characters and a null terminator
    char Child1[7];
    char Child2[] = "Steven";
    char Child3[7] = "Johnny";
    char Hero1[7] = "Batman";
    char Hero2[34] = "Superman";
    char Hero3[25];

        Child1[0] = 'A';
        Child1[1] = 'l';
        Child1[2] = 'e';
        Child1[3] = 'x';
        Child1[4] = 'i';
        Child1[5] = 'a';
        Child1[6] = '\0';

        strcpy(Hero3, "The Incredible Hulk");

        printf("%s\'s favorite hero is %s.\n", Child1, Hero1);
        printf("%s\'s favorite hero is %s.\n", Child2, Hero2);
        printf("%s\'s favorite hero is %s.\n", Child3, Hero3);

    return 0;

}
