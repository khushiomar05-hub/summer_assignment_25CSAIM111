#include <stdio.h>

int main() {
    int choice;
    float balance = 1000.0; 

    float amount;

    while (1) {
        
        printf("\n--- ATM MENU ---\n");
        printf("1. Check Balance\n");
        printf("2. Deposit Money\n");
        printf("3. Withdraw Money\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        
        switch (choice) {
            case 1:
                printf("Your current balance is: $%.2f\n", balance);
                break;
                
            case 2:
                printf("Enter deposit amount: ");
                scanf("%f", &amount);
                balance += amount; 
                printf("$%.2f deposited successfully.\n", amount);
                break;
                
            case 3:
                printf("Enter withdrawal amount: ");
                scanf("%f", &amount);
                if (amount > balance) {
                    printf("Insufficient balance!\n");
                } else {
                    balance -= amount; 
                    printf("$%.2f withdrawn successfully.\n", amount);
                }
                break;
                
            case 4:
                printf("Thank you for using our ATM. Goodbye!\n");
                return 0; 
                
            default:
                printf("Invalid choice! Please try again.\n");
        }
    }
}
