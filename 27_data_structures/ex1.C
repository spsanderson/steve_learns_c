#include <stdio.h>
#include <string.h>

struct Student {
    char name[50];
    int age;
    float gpa;
};

int main() {
    // Create a structure variable
    struct Student student1;
    
    // Assign values to members
    strcpy(student1.name, "John Doe");
    student1.age = 20;
    student1.gpa = 3.8;
    
    // Print the values
    printf("Student Information:\n");
    printf("Name: %s\n", student1.name);
    printf("Age: %d\n", student1.age);
    printf("GPA: %.1f\n", student1.gpa);
    
    return 0;
}
// This code defines a structure to hold student information, assigns values to its members, and prints them out.
// It demonstrates the use of structures in C for organizing related data.
// The structure `Student` contains three members: `name`, `age`, and `gpa`.