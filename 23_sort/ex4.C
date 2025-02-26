#include <stdio.h>

struct Customer {
    int id;
    float balance;
};

void sortCustomers(struct Customer customers[], int n) {
    int i, j;
    struct Customer temp;
    
    for (i = 0; i < n-1; i++) {
        for (j = 0; j < n-i-1; j++) {
            if (customers[j].id > customers[j+1].id) {
                temp = customers[j];
                customers[j] = customers[j+1];
                customers[j+1] = temp;
            }
        }
    }
}

int main() {
    struct Customer customers[] = {
        {313, 150.50},
        {202, 75.25},
        {101, 225.75},
        {405, 50.00},
        {108, 125.50}
    };
    int n = 5;
    
    printf("Before sorting:\n");
    for (int i = 0; i < n; i++) {
        printf("ID: %d, Balance: $%.2f\n", 
               customers[i].id, customers[i].balance);
    }
    
    sortCustomers(customers, n);
    
    printf("\nAfter sorting by ID:\n");
    for (int i = 0; i < n; i++) {
        printf("ID: %d, Balance: $%.2f\n", 
               customers[i].id, customers[i].balance);
    }
    
    return 0;
}