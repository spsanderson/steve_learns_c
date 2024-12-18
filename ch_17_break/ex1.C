#include <stdio.h>

int main() {
    int count = 0;
    while (1) {
        int num;
        printf("Enter a number (0 to stop): ");
        scanf("%d", &num);
        
        if (num == 0) {
            break;
        }
        
        if (num <= 0 || num % 2 != 0) {
            continue;
        }
        
        count++;
    }
    printf("You entered %d positive even numbers\n", count);
    return 0;
}