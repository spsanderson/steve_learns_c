#include <stdio.h>

int main() {
    int custID[10] = {313, 453, 502, 101, 892, 475, 792, 912, 343, 633};
    float custBal[10] = {0.00, 45.43, 71.23, 301.56, 9.08, 192.41, 389.00, 229.67, 18.31, 59.54};
    int idSearch, i, found = 0;

    printf("\n*** Customer Balance Lookup ***\n");
    printf("Enter the Customer ID: ");
    scanf("%d", &idSearch);

    // Search for the customer in the custID array
    for(i = 0; i < 10; i++) {
        if(custID[i] == idSearch) {
            found = 1;
            break;
        }
    }

    if(found) {
        if(custBal[i] > 100.00) {
            printf("Customer %d has a high balance of $%.2f. No additional credit allowed.\n", idSearch, custBal[i]);
        } else {
            printf("Customer %d has a good credit record.\n", idSearch);
        }
    } else {
        printf("Customer ID %d not found.\n", idSearch);
    }

    return 0;
}
