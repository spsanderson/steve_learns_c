#include <stdio.h>

int main() {
    int age;
    printf("Enter your age: ");
    scanf("%d", &age);

    char* status = (age < 18) ? "minor" : "adult";
    printf("You are a%s %s.\n", (status[0] == 'a') ? "n" : "", status);

    printf("In %d year%s, you will be %d.\n", 5, (5 == 1) ? "" : "s", age + 5);

    return 0;
}
