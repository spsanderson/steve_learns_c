#include <stdio.h>
#include <string.h>

struct Book {
    char title[100];
    char author[50];
    int year;
};

int main() {
    // Create an array of 3 Book structures
    struct Book library[3];
    
    // Fill the first book
    strcpy(library[0].title, "The C Programming Language");
    strcpy(library[0].author, "Kernighan and Ritchie");
    library[0].year = 1978;
    
    // Fill the second book
    strcpy(library[1].title, "The Pragmatic Programmer");
    strcpy(library[1].author, "Hunt and Thomas");
    library[1].year = 1999;
    
    // Fill the third book
    strcpy(library[2].title, "Algorithms");
    strcpy(library[2].author, "Sedgewick and Wayne");
    library[2].year = 2011;
    
    // Print all books
    printf("Library Contents:\n");
    printf("-----------------\n");
    
    for(int i = 0; i < 3; i++) {
        printf("Book %d:\n", i+1);
        printf("  Title: %s\n", library[i].title);
        printf("  Author: %s\n", library[i].author);
        printf("  Year: %d\n", library[i].year);
        printf("\n");
    }
    
    return 0;
}
// This code defines a structure to hold book information and creates an array of structures to represent a library of books.
// It assigns values to each book's members and prints out their information in a loop.