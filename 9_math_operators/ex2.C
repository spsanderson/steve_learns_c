#include <stdio.h>

int main(int argc, char const *argv[])
{
    // Example from C Programming Absolute Beginner's Guide by Perry and Miller

    float a = 19.0;
    float b = 5.0;
    float floatAnswer;

    int x = 19;
    int y = 5;
    int intAnswer;

    // Using two float variables create an answer of 3.8
    floatAnswer = a / b;
    printf("%.1f divided by %.1f equals %.1f\n", a, b, floatAnswer);

    floatAnswer = x / y;
    printf("%d divided by %d equals %.1f\n", x, y, floatAnswer);

    intAnswer = a / b;
    printf("%.1f divided by %.1f equals %d\n", a, b, intAnswer);

    intAnswer = x % y;
    printf("%d modulus %d equals a remainder of %d\n", x, y, intAnswer);

    return 0;
}
