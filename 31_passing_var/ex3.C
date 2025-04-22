#include <stdio.h>
#include <string.h>

void change(char name[15]) {
    // Copy a new string into the memory location of name.
    strcpy(name, "XXXXXXXXXXXXXX");
}

int main() {
    char name[15] = "Michael Hatton";
    
    // Call the function and pass the array.
    change(name);
    
    // Print the modified string.
    printf("Back in main(), the name is now %s.\n", name);
    return 0;
}
