#include <stdio.h>

int main() {
    int choice;
    
    printf("Select an option:\n");
    printf("1. View balance\n");
    printf("2. Deposit money\n");
    printf("3. Withdraw money\n");
    printf("4. Exit\n");
    
    scanf("%d", &choice);
    
    switch(choice) {
        case 1:
            printf("Your balance is $1000\n");
            break;
        case 2:
            printf("Enter amount to deposit\n");
            break;
        case 3:
            printf("Enter amount to withdraw\n");
            break;
        case 4:
            printf("Thank you for using our service\n");
            break;
        default:
            printf("Invalid option\n");
    }
    
    return 0;
}
