#include <stdio.h>


struct Student {
    int roll;
    char name[30];
    float marks;
};

int main() {
    struct Student s[100]; 
    int count = 0;         
    int choice;

    while (1) {
        printf("\n--- STUDENT RECORD SYSTEM ---\n");
        printf("1. Add Student\n");
        printf("2. Display All Students\n");
        printf("3. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("\nEnter Roll Number: ");
                scanf("%d", &s[count].roll);
                printf("Enter Name: ");
                scanf("%s", s[count].name);
                printf("Enter Marks: ");
                scanf("%f", &s[count].marks);
                
                count++; 
                printf("Record added successfully!\n");
                break;

            case 2:
                if (count == 0) {
                    printf("\nNo records found!\n");
                } else {
                    printf("\n--- STUDENT LIST ---\n");
                    printf("Roll\tName\t\tMarks\n");
                    printf("-----------------------------\n");
                    for (int i = 0; i < count; i++) {
                        printf("%d\t%s\t\t%.2f\n", s[i].roll, s[i].name, s[i].marks);
                    }
                }
                break;

            case 3:
                printf("Exiting program. Goodbye!\n");
                return 0;

            default:
                printf("Invalid choice! Please try again.\n");
        }
    }
}
