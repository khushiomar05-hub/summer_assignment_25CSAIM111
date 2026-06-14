#include <stdio.h>

int main() {
    int size, i,target;
    printf("Enter the size of the array: ");
    scanf("%d", &size);
    int arr[size];
    printf("Enter the elements of the array:\n");
    for (i = 0; i < size; i++) {
        printf("Element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }
    printf("Enter the number to search for: ");
    scanf("%d", &target);
    for ( i = 0; i < size; i++) {
        if (arr[i] == target) {
            printf("Found! %d is at index position %d.\n", target, i);
            return 0; 
        }
    }
    printf("Not found! %d is not in the array.\n", target);
    return 0;
}
