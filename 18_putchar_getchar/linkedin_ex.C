// Echo characters until '.' is pressed, counting lines as we go

#include <stdio.h>

int main() {
    char c;
    int line_count = 0;

    while ((c = getchar()) != '.') {
        putchar(c);
        if (c == '\n') {
            line_count++;
        }
    }

    printf("Number of lines: %d\n", line_count);
    return 0;
}