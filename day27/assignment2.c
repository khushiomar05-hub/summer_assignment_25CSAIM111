#include <stdio.h>


struct Employee {
    int id;
    char name[30];
    float salary;
};

int main() {
    struct Employee emp[50]; 
    int count = 0;          
    int choice;

    while (1) {
        printf("\n--- EMPLOYEE MANAGEMENT SYSTEM ---\n");
        printf("1. Add Employee\n");
        printf("2. Display All Employees\n");
        printf("3. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("\nEnter Employee ID: ");
                scanf("%d", &emp[count].id);
                printf("Enter Name: ");
                scanf("%s", emp[count].name);
                printf("Enter Salary: ");
                scanf("%f", &emp[count].salary);
                
                count++; 
                printf("Employee added successfully!\n");
                break;

            case 2:
                if (count == 0) {
                    printf("\nNo records found!\n");
                } else {
                    printf("\n--- EMPLOYEE LIST ---\n");
                    printf("ID\tName\t\tSalary\n");
                    printf("-------------------------------\n");
                    for (int i = 0; i < count; i++) {
                        printf("%d\t%s\t\t%.2f\n", emp[i].id, emp[i].name, emp[i].salary);
                    }
                }
                break;

            case 3:
                printf("Exiting... Goodbye!\n");
                return 0;

            default:
                printf("Invalid choice! Try again.\n");
        }
    }
}
