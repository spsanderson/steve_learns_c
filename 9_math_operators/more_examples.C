#include <stdio.h>

int main(int argc, char const *argv[])
{
    int x = 5;
    int y = 7;
    int z = x%y;
    printf("The remainder of %d divided by %d is %d\n", x, y, z);

    int zz = x/y;
    printf("The result of %d divided by %d is %d\n", x, y, zz);

    double a = 5.0;
    double b = 7.0;
    double c = a/b;
    printf("The result of %f divided by %f is %f\n", a, b, c);

    int d = 5;
    double e = 2.5;
    printf("The result of %d divided by %f is %f\n", d, e, d/e);

    double f = 5.0;
    int g = 2;
    printf("The result of %f divided by %d is %f\n", f, g, f/g);

    int h = 5;
    double i = 2.5;
    printf("The result of %d + %f is %f\n", h, i, h+i);

    return 0;
}
