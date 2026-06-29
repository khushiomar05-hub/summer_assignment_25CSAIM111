#include <stdio.h>

struct Item {
    int id;
    char name[30];
    int qty;
    float price;
};

int main() {
    struct Item list[50]; 
    int total = 0;        
    int choice;

    do {
        
        printf("\n--- INVENTORY MENU ---");
        printf("\n1. Add Item");
        printf("\n2. View Items");
        printf("\n3. Exit");
        printf("\nEnter choice (1-3): ");
        scanf("%d", &choice);

        
        switch (choice) {
            case 1: // Add item
                if (total < 50) {
                    printf("Enter ID: ");
                    scanf("%d", &list[total].id);
                    
                    printf("Enter Name (No spaces): ");
                    scanf("%s", list[total].name); 
                    
                    printf("Enter Quantity: ");
                    scanf("%d", &list[total].qty);
                    
                    printf("Enter Price: ");
                    scanf("%f", &list[total].price);

                    total++; 
                    printf("Item added successfully!\n");
                } else {
                    printf("Inventory full!\n");
                }
                break;

            case 2: 
                if (total == 0) {
                    printf("No items to show.\n");
                } else {
                    printf("\nID\tName\tQty\tPrice\n");
                    printf("--------------------------------\n");
                    for (int i = 0; i < total; i++) {
                        printf("%d\t%s\t%d\t%.2f\n", 
                               list[i].id, list[i].name, list[i].qty, list[i].price);
                    }
                }
                break;

            case 3:
                printf("Goodbye!\n");
                break;

            default:
                printf("Invalid choice! Try again.\n");
        }
    } while (choice != 3);

    return 0;
}
