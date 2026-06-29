#include <stdio.h>
#include <string.h>

struct Contact {
    char name[50];
    char phone[15];
    char email[50];
};

int main() {
    struct Contact phonebook[100]; 
    int totalContacts = 0;        
    int choice, found, i;
    char searchName[50];

    while(1) {
        printf("\n--- CONTACT MANAGEMENT SYSTEM ---\n");
        printf("1. Add New Contact\n");
        printf("2. Display All Contacts\n");
        printf("3. Search Contact by Name\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        getchar(); 

        if (choice == 1) {
            
            if (totalContacts >= 100) {
                printf("Phonebook is full!\n");
            } else {
                printf("Enter Name: ");
                gets(phonebook[totalContacts].name);

                printf("Enter Phone Number: ");
                gets(phonebook[totalContacts].phone);

                printf("Enter Email Address: ");
                gets(phonebook[totalContacts].email);

                totalContacts++;
                printf("Contact saved successfully!\n");
            }

        } else if (choice == 2) {
            
            if (totalContacts == 0) {
                printf("Phonebook is empty!\n");
            } else {
                printf("\n%-20s %-15s %-25s\n", "Name", "Phone", "Email");
                printf("------------------------------------------------------------\n");
                for(i = 0; i < totalContacts; i++) {
                    printf("%-20s %-15s %-25s\n", 
                           phonebook[i].name, 
                           phonebook[i].phone, 
                           phonebook[i].email);
                }
            }

        } else if (choice == 3) {
            
            if (totalContacts == 0) {
                printf("No contacts saved to search.\n");
            } else {
                printf("Enter Name to search: ");
                gets(searchName);
                found = 0;

                for(i = 0; i < totalContacts; i++) {
                    
                    if(strcmp(phonebook[i].name, searchName) == 0) {
                        found = 1;
                        printf("\n--- Contact Found! ---\n");
                        printf("Name : %s\n", phonebook[i].name);
                        printf("Phone: %s\n", phonebook[i].phone);
                        printf("Email: %s\n", phonebook[i].email);
                        break;
                    }
                }
                if(!found) printf("Contact not found!\n");
            }

        } else if (choice == 4) {
            printf("Exiting system. Goodbye!\n");
            break;
        } else {
            printf("Invalid choice! Try again.\n");
        }
    }
    return 0;
}
