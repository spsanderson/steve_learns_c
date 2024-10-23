// Example program #4 from Chapter 9 of Absolute Beginner's Guide to C, 3rd Edition Chapter 9 Page 80

#include <stdio.h>

int main(int argc, char const *argv[])
{
    int grade1, grade2, grade3, grade4;
    float averageGrade, gradeDelta, percentDiff;

    grade1 = grade3 = 88;

    grade2 = 79;

    // The user needs to enter the fourth grade
    printf("What did you get on the fourth test ");
    printf(" (An integer between 0 and 100)? ");
    scanf(" %d", &grade4);

    averageGrade = (grade1 + grade2 + grade3 + grade4) / 4;

    printf("Your average is %.1f.\n", averageGrade);

    gradeDelta = 95 - averageGrade;
    percentDiff = 100 * ((95 - averageGrade) / 95);
    printf("Your grade is %.1f points lower than the ", gradeDelta);
    printf("top grade of 95, or %.1f%%\n", percentDiff);
    printf("You are %.1f percent behind ", percentDiff);
    printf("that grade!\n");
    
    return 0;
}
