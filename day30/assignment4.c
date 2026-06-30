#include <stdio.h>

// Global Arrays so all functions can use them easily
int itemIDs[3] = {101, 102, 103};
char itemNames[3][20] = {"Bread", "Milk", "Eggs"};
float itemPrices[3] = {2.50, 1.80, 3.00};
int itemStock[3] = {10, 5, 8};
float totalBill = 0.0; // Tracks the customer's total bill

// Function 1: Show the price list
void showMenu() {
    printf("\n--- ITEM MENU ---\n");
    for (int i = 0; i < 3; i++) {
        printf("ID: %d | %s | Price: $%.2f | Stock: %d\n", 
               itemIDs[i], itemNames[i], itemPrices[i], itemStock[i]);
    }
}


void buyItem() {
    int searchID, quantity, found = 0;

    printf("\nEnter Item ID to buy: ");
    scanf("%d", &searchID);

    for (int i = 0; i < 3; i++) {
        if (itemIDs[i] == searchID) {
            found = 1;
            printf("Enter quantity: ");
            scanf("%d", &quantity);

    
            if (itemStock[i] >= quantity) {
                itemStock[i] = itemStock[i] - quantity; // Reduce stock
                float cost = itemPrices[i] * quantity; 
                totalBill = totalBill + cost;        
                
                printf("Added %d %s to your cart!\n", quantity, itemNames[i]);
            } else {
                printf("Sorry, not enough stock. Only %d left.\n", itemStock[i]);
            }
            break;
        }
    }
    if (found == 0) {
        printf("Invalid Item ID!\n");
    }
}


void printReceipt() {
    printf("\n=============================\n");
    printf("        FINAL RECEIPT        \n");
    printf("=============================\n");
    printf(" Total Amount Paid: $%.2f\n", totalBill);
    printf(" Thank you for shopping!\n");
    printf("=============================\n");
    totalBill = 0.0; 
}


int main() {
    int choice;

    printf("=== MINI SUPERMARKET ===\n");

    while (1) {
        printf("\n1. Show Items\n");
        printf("2. Buy Item\n");
        printf("3. Checkout & Print Bill\n");
        printf("4. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);

        if (choice == 4) {
            printf("Goodbye!\n");
            break;
        }

        if (choice == 1) {
            showMenu();
        } else if (choice == 2) {
            buyItem();
        } else if (choice == 3) {
            printReceipt();
        } else {
            printf("Invalid choice!\n");
        }
    }

    return 0;
}
