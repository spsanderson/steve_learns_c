#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *filePtr;
    char letter;
    int i;
    
    // Open file for both writing and reading
    filePtr = fopen("letters.txt", "w+");
    
    // Always check if file opened successfully
    if (filePtr == NULL) {
        printf("Error opening file!\n");
        return 1;
    }
    
    // Write A to Z to the file
    for (letter = 'A'; letter <= 'Z'; letter++) {
        fputc(letter, filePtr);
    }
    
    printf("Just wrote the letters A through Z\n");
    
    // Position file pointer at the last character (Z)
    // -1 because pointer is positioned AFTER the last write
    fseek(filePtr, -1, SEEK_END);
    
    printf("Here is the file backwards:\n");
    
    // Read backwards from Z to A
    for (i = 26; i > 0; i--) {
        letter = fgetc(filePtr);  // Read current character
        printf("The next letter is %c.\n", letter);
        
        // Move back 2 positions (1 for the character we just read,
        // and 1 more to go to the previous character)
        if (i > 1) {  // Avoid seeking before beginning of file on last iteration
            fseek(filePtr, -2, SEEK_CUR);
        }
    }
    
    // Always close the file
    fclose(filePtr);
    
    return 0;
}