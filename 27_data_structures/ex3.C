#include <stdio.h>
#include <string.h>

struct Date {
    int day;
    int month;
    int year;
};

struct Student {
    char name[50];
    int age;
    float gpa;
    struct Date birthday;
};

int main() {
    struct Student student1;
    
    strcpy(student1.name, "John Doe");
    student1.age = 20;
    student1.gpa = 3.8;
    student1.birthday.day = 15;
    student1.birthday.month = 5;
    student1.birthday.year = 2003;
    
    printf("Student: %s\n", student1.name);
    printf("Birthday: %d/%d/%d\n", 
           student1.birthday.day, 
           student1.birthday.month, 
           student1.birthday.year);
    
    return 0;
}
// This code extends the previous example by adding a `Date` structure to hold the student's birthday information.
// The `Student` structure now includes a `birthday` member of type `Date`, allowing for more complex data representation.