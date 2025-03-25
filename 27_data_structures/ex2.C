#include <stdio.h>
#include <string.h>

struct Student {
    char name[50];
    int age;
    float gpa;
};

int main() {
    // Array of 3 student structures
    struct Student classroom[3];
    
    // Assign values for the first student
    strcpy(classroom[0].name, "John");
    classroom[0].age = 20;
    classroom[0].gpa = 3.8;
    
    // Assign values for the second student
    strcpy(classroom[1].name, "Emma");
    classroom[1].age = 21;
    classroom[1].gpa = 3.9;
    
    // Assign values for the third student
    strcpy(classroom[2].name, "Michael");
    classroom[2].age = 19;
    classroom[2].gpa = 3.5;
    
    // Print all students' information
    printf("Classroom Information:\n");
    for(int i = 0; i < 3; i++) {
        printf("\nStudent %d:\n", i+1);
        printf("Name: %s\n", classroom[i].name);
        printf("Age: %d\n", classroom[i].age);
        printf("GPA: %.1f\n", classroom[i].gpa);
    }
    
    return 0;
}
// This code defines a structure to hold student information and creates an array of structures to represent a classroom of students.
// It assigns values to each student's members and prints out their information in a loop.
// The structure `Student` contains three members: `name`, `age`, and `gpa`, and the array `classroom` holds multiple students' data.