#include <stdio.h>
#include <string.h>


struct Book {
    int id;
    char title[30];
    int isIssued; 
};

int main() {
    struct Book library[100]; 
    int bookCount = 0;        
    int choice, searchId, found;

    while(1) {
        printf("\n--- LIBRARY MENU ---\n");
        printf("1. Add Book\n");
        printf("2. Display All\n");
        printf("3. Issue Book\n");
        printf("4. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);

        if (choice == 1) {
            
            printf("Enter Book ID: ");
            scanf("%d", &library[bookCount].id);
            getchar(); 

            printf("Enter Title: ");
            gets(library[bookCount].title); 

            library[bookCount].isIssued = 0; 
            bookCount++;
            printf("Book added successfully!\n");

        } else if (choice == 2) {
    
            if (bookCount == 0) {
                printf("Library is empty!\n");
            } else {
                printf("\nID\tTitle\t\tStatus\n");
                for(int i = 0; i < bookCount; i++) {
                    printf("%d\t%s\t\t%s\n", library[i].id, library[i].title, 
                           library[i].isIssued ? "Issued" : "Available");
                }
            }

        } else if (choice == 3) {
            // Issue Logic
            printf("Enter Book ID to issue: ");
            scanf("%d", &searchId);
            found = 0;

            for(int i = 0; i < bookCount; i++) {
                if(library[i].id == searchId) {
                    found = 1;
                    if(library[i].isIssued == 1) {
                        printf("Book is already issued!\n");
                    } else {
                        library[i].isIssued = 1;
                        printf("Book issued successfully!\n");
                    }
                    break;
                }
            }
            if(!found) printf("Book ID not found!\n");

        } else if (choice == 4) {
            printf("Goodbye!\n");
            break;
        } else {
            printf("Invalid choice! Try again.\n");
        }
    }
    return 0;
}
