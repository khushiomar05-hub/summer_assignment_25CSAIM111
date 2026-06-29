#include <stdio.h>

int main() {
    int arr[100]; 
    int size = 0; 
    int choice, element, position, i, found;

    while(1) {
        printf("\n--- ARRAY OPERATIONS MENU ---\n");
        printf("1. Insert Element\n");
        printf("2. Display Array\n");
        printf("3. Search Element\n");
        printf("4. Delete Element\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        if (choice == 1) {
            
            if (size >= 100) {
                printf("Array is full!\n");
            } else {
                printf("Enter integer element to insert: ");
                scanf("%d", &element);
                
                
                arr[size] = element;
                size++;
                printf("Element %d inserted successfully!\n", element);
            }

        } else if (choice == 2) {
            
            if (size == 0) {
                printf("Array is empty!\n");
            } else {
                printf("Current Array Elements: ");
                for(i = 0; i < size; i++) {
                    printf("%d ", arr[i]);
                }
                printf("\n");
            }

        } else if (choice == 3) {
            
            printf("Enter element to search: ");
            scanf("%d", &element);
            found = 0;

            for(i = 0; i < size; i++) {
                if(arr[i] == element) {
                    printf("Element found at Index position: %d\n", i);
                    found = 1;
                    break;
                }
            }
            if(!found) printf("Element not found in the array!\n");

        } else if (choice == 4) {
            
            if (size == 0) {
                printf("Array underflow! Nothing to delete.\n");
            } else {
                printf("Enter the Index position to delete (0 to %d): ", size - 1);
                scanf("%d", &position);

                if(position < 0 || position >= size) {
                    printf("Invalid index position!\n");
                } else {
                    
                    for(i = position; i < size - 1; i++) {
                        arr[i] = arr[i + 1];
                    }
                    size--; // Decrease actual size count
                    printf("Element deleted successfully!\n");
                }
            }

        } else if (choice == 5) {
            printf("Exiting program. Goodbye!\n");
            break;
        } else {
            printf("Invalid choice! Please select between 1-5.\n");
        }
    }
    return 0;
}
