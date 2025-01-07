#include <stdio.h>

int main() {
    int ch, vowels = 0;
    printf("Enter text (end with a period): ");
    
    while ((ch = getchar()) != '.') {
        switch(ch) {
            case 'a': case 'e': case 'i': case 'o': case 'u':
            case 'A': case 'E': case 'I': case 'O': case 'U':
                vowels++;
        }
    }
    printf("\nNumber of vowels: %d\n", vowels);
    return 0;
}