#include <stdio.h>

int main() {
    // Define and initialize regular variables
    int age = 30;
    float salary = 55000.50;
    char grade = 'A';
    
    // Define pointer variables
    int *pAge;
    float *pSalary;
    char *pGrade;
    
    // Initialize pointers with addresses of regular variables
    pAge = &age;
    pSalary = &salary;
    pGrade = &grade;
    
    // Display values using both regular variables and pointers
    printf("Using regular variables:\n");
    printf("Age: %d\n", age);
    printf("Salary: $%.2f\n", salary);
    printf("Grade: %c\n\n", grade);
    
    printf("Using pointers:\n");
    printf("Age: %d\n", *pAge);
    printf("Salary: $%.2f\n", *pSalary);
    printf("Grade: %c\n\n", *pGrade);
    
    // Modify values using pointers
    *pAge = 31;
    *pSalary = 57500.75;
    *pGrade = 'B';
    
    printf("After modifying through pointers:\n");
    printf("Age: %d\n", age);
    printf("Salary: $%.2f\n", salary);
    printf("Grade: %c\n", grade);
    
    return 0;
}
