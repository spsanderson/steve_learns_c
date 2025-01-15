#include <stdio.h>
#include <string.h>

int main() {
    char firstName[50];
    char lastName[50];
    char fullName[100] = "";
    
    printf("Enter first name: ");
    fgets(firstName, sizeof(firstName), stdin);
    firstName[strcspn(firstName, "\n")] = 0; // Remove newline
    
    printf("Enter last name: ");
    fgets(lastName, sizeof(lastName), stdin);
    lastName[strcspn(lastName, "\n")] = 0; // Remove newline
    
    // Safe concatenation
    strncat(fullName, firstName, sizeof(fullName) - strlen(fullName) - 1);
    strncat(fullName, " ", sizeof(fullName) - strlen(fullName) - 1);
    strncat(fullName, lastName, sizeof(fullName) - strlen(fullName) - 1);
    
    printf("Full name: %s\n", fullName);
    return 0;
}
