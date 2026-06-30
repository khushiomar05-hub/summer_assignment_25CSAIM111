#include <stdio.h>
#include <string.h>

int main() {
    
    int empIDs[3] = {101, 102, 103};
    char empNames[3][30] = {"Alice_Smith", "Bob_Jones", "Charlie_Brown"};
    char empRoles[3][30] = {"Manager", "Developer", "Designer"};
    float empSalaries[3] = {55000.0, 45000.0, 40000.0};

    int choice;
    int searchID;
    int found;

    printf("=== MINI EMPLOYEE MANAGEMENT SYSTEM ===\n");

    
    while (1) {
        printf("\n1. View All Employees\n");
        printf("2. Search Employee by ID\n");
        printf("3. Update Salary\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        
        if (choice == 4) {
            printf("Exiting system. Goodbye!\n");
            break;
        }

        switch (choice) {
            case 1:
                
                printf("\n--- Employee List ---\n");
                for (int i = 0; i < 3; i++) {
                    printf("ID: %d | Name: %s | Role: %s | Salary: $%.2f\n", 
                           empIDs[i], empNames[i], empRoles[i], empSalaries[i]);
                }
                break;

            case 2:
            
                printf("\nEnter Employee ID to search: ");
                scanf("%d", &searchID);
                found = 0;

                for (int i = 0; i < 3; i++) {
                    if (empIDs[i] == searchID) {
                        found = 1;
                        printf("\nEmployee Found:\n");
                        printf("Name: %s\nRole: %s\nSalary: $%.2f\n", 
                               empNames[i], empRoles[i], empSalaries[i]);
                        break;
                    }
                }
                if (found == 0) {
                    printf("Employee ID not found.\n");
                }
                break;

            case 3:
                
                printf("\nEnter Employee ID to update salary: ");
                scanf("%d", &searchID);
                found = 0;

                for (int i = 0; i < 3; i++) {
                    if (empIDs[i] == searchID) {
                        found = 1;
                        printf("Current Salary for %s: $%.2f\n", empNames[i], empSalaries[i]);
                        printf("Enter New Salary: ");
                        scanf("%f", &empSalaries[i]);
                        printf("Salary updated successfully!\n");
                        break;
                    }
                }
                if (found == 0) {
                    printf("Employee ID not found.\n");
                }
                break;

            default:
                printf("Invalid choice! Please select between 1 and 4.\n");
        }
    }

    return 0;
}
