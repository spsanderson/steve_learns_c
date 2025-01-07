#include <stdio.h>
#include <string.h>

int main() {
    char msg[] = "C is fun";
    for (int i = 0; i < strlen(msg); i++) {
        putchar(msg[i]);
    }
    putchar('\n');
    return 0;
}
