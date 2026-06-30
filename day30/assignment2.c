#include <stdio.h>
#include <string.h>

int main() {

    int bookIDs[3] = {101, 102, 103};
    char bookTitles[3][50] = {"The_C_Language", "Basic_Coding", "Algorithms"};
    char bookAuthors[3][30] = {"Dennis", "John_Doe", "Alan_Turing"};
    int isIssued[3] = {0, 0, 0};

    int choice;
    int searchID;
    int found;

    printf("=== MINI LIBRARY MANAGEMENT SYSTEM ===\n");

    
    while (1) {
        printf("\n1. View All Books\n");
        printf("2. Borrow a Book\n");
        printf("3. Return a Book\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

    
        if (choice == 4) {
            printf("Thank you for using the library!\n");
            break;
        }

        switch (choice) {
            case 1:
                
                printf("\n--- Book List ---\n");
                for (int i = 0; i < 3; i++) {
                    printf("ID: %d | Title: %s | Author: %s | Status: %s\n", 
                           bookIDs[i], bookTitles[i], bookAuthors[i], 
                           (isIssued[i] == 1) ? "Borrowed" : "Available");
                }
                break;

            case 2:
                
                printf("\nEnter Book ID to borrow: ");
                scanf("%d", &searchID);
                found = 0;

                for (int i = 0; i < 3; i++) {
                    if (bookIDs[i] == searchID) {
                        found = 1;
                        if (isIssued[i] == 0) {
                            isIssued[i] = 1; 
                            printf("Success! You have borrowed '%s'.\n", bookTitles[i]);
                        } else {
                            printf("Sorry, this book is already borrowed.\n");
                        }
                        break;
                    }
                }
                if (found == 0) {
                    printf("Book ID not found.\n");
                }
                break;

            case 3:
                
                printf("\nEnter Book ID to return: ");
                scanf("%d", &searchID);
                found = 0;

                for (int i = 0; i < 3; i++) {
                    if (bookIDs[i] == searchID) {
                        found = 1;
                        if (isIssued[i] == 1) {
                            isIssued[i] = 0; 
                            printf("Success! '%s' has been returned.\n", bookTitles[i]);
                        } else {
                            printf("This book was not borrowed.\n");
                        }
                        break;
                    }
                }
                if (found == 0) {
                    printf("Book ID not found.\n");
                }
                break;

            default:
                printf("Invalid choice! Please select between 1 and 4.\n");
        }
    }

    return 0;
}
