#include <stdio.h>
#include <string.h> 

int main() {
    char str1[100], str2[100];
    int choice;

    do {
        
        printf("\n--- STRING MENU ---");
        printf("\n1. Find Length");
        printf("\n2. Copy String");
        printf("\n3. Combine Strings");
        printf("\n4. Compare Strings");
        printf("\n5. Exit");
        printf("\nEnter choice (1-5): ");
        scanf("%d", &choice);
        getchar();

        
        switch (choice) {
            case 1:
                printf("Enter a string: ");
                gets(str1); 
                printf("Length: %d characters\n", strlen(str1));
                break;

            case 2:
                printf("Enter source string: ");
                gets(str2);
                strcpy(str1, str2);
                printf("Copied! Target now holds: %s\n", str1);
                break;

            case 3:
                printf("Enter first string: ");
                gets(str1);
                printf("Enter string to add: ");
                gets(str2);
                strcat(str1, str2); 
                printf("Combined string: %s\n", str1);
                break;

            case 4:
                printf("Enter first string: ");
                gets(str1);
                printf("Enter second string: ");
                gets(str2);
                if (strcmp(str1, str2) == 0) { 
                    printf("Result: Both strings are exactly equal.\n");
                } else {
                    printf("Result: Strings are different.\n");
                }
                break;

            case 5:
                printf("Goodbye!\n");
                break;

            default:
                printf("Invalid choice! Try again.\n");
        }
    } while (choice != 5); 

    return 0;
}
