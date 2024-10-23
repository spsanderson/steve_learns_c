#include <stdio.h>

int main(int argc, char const *argv[])
{
    /* code */
    printf("Hello, World!\n");
    double number = 123.456;
    printf("Formatted number: %10.2f\n", number);
    int value = 42;
    printf("Debug: value = %d\n", value);
    printf("Hello, %s%c\n", "World", '!');
    printf("Integer: %d\n", 42);
    printf("Float: %.3f\n", 3.14159);
    printf("Line 1\nLine 2\n");
    printf("Width: %10d\n", 123);
    printf("Precision: %.2f\n", 3.14159);
    printf("Left-justified: %-10d\n", 99);
    printf("Forced sign: %+d\n", 99);
    int a = 5, b = 10;
    printf("a = %d, b = %d\n", a, b);
    printf("Hello, World!\n");
    return 0;
}
