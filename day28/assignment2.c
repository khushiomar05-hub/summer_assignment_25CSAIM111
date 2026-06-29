#include <stdio.h>
#include <string.h>


struct Account {
    int accountNumber;
    char name[50];
    float balance;
};

int main() {
    struct Account bank[100]; 
    int totalAccounts = 0;   
    int choice, searchAcc, found, i;
    float amount;

    while(1) {
        printf("\n--- BANKING MENU ---\n");
        printf("1. Create New Account\n");
        printf("2. Deposit Money\n");
        printf("3. Withdraw Money\n");
        printf("4. Check Balance\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        if (choice == 1) {
            
            printf("Enter unique Account Number: ");
            scanf("%d", &bank[totalAccounts].accountNumber);
            getchar(); 

            printf("Enter Holder Name: ");
            gets(bank[totalAccounts].name);
        

            printf("Enter Initial Deposit Amount: ");
            scanf("%f", &bank[totalAccounts].balance);

            totalAccounts++;
            printf("Account created successfully!\n");

        } else if (choice == 2) {
            // Deposit Logic
            printf("Enter Account Number: ");
            scanf("%d", &searchAcc);
            found = 0;

            for(i = 0; i < totalAccounts; i++) {
                if(bank[i].accountNumber == searchAcc) {
                    found = 1;
                    printf("Enter Deposit Amount: ");
                    scanf("%f", &amount);
                    bank[i].balance += amount; 
                    printf("Deposited successfully! New Balance: %.2f\n", bank[i].balance);
                    break;
                }
            }
            if(!found) printf("Account number not found!\n");

        } else if (choice == 3) {
            // Withdraw Logic
            printf("Enter Account Number: ");
            scanf("%d", &searchAcc);
            found = 0;

            for(i = 0; i < totalAccounts; i++) {
                if(bank[i].accountNumber == searchAcc) {
                    found = 1;
                    printf("Enter Withdrawal Amount: ");
                    scanf("%f", &amount);
                    
                    if(amount > bank[i].balance) {
                        printf("Insufficient balance! Current Balance: %.2f\n", bank[i].balance);
                    } else {
                        bank[i].balance -= amount; // Deduct money
                        printf("Withdrawn successfully! Remaining Balance: %.2f\n", bank[i].balance);
                    }
                    break;
                }
            }
            if(!found) printf("Account number not found!\n");

        } else if (choice == 4) {
            
            printf("Enter Account Number: ");
            scanf("%d", &searchAcc);
            found = 0;

            for(i = 0; i < totalAccounts; i++) {
                if(bank[i].accountNumber == searchAcc) {
                    found = 1;
                    printf("\n--- Account Details ---\n");
                    printf("Acc No: %d\n", bank[i].accountNumber);
                    printf("Name  : %s\n", bank[i].name);
                    printf("Balance: %.2f\n", bank[i].balance);
                    break;
                }
            }
            if(!found) printf("Account number not found!\n");

        } else if (choice == 5) {
            printf("Thank you for using our bank system!\n");
            break;
        } else {
            printf("Invalid choice! Try again.\n");
        }
    }
    return 0;
}
