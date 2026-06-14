#include <stdio.h>

int main() {
    int size,i,target;
    int count = 0;
    printf("Enter the size of the array: ");
    scanf("%d", &size);
    int arr[size];
    printf("Enter the elements of the array:\n");
    for (i = 0; i < size; i++) {
        printf("Element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }
    printf("Enter the number to find its frequency: ");
    scanf("%d", &target);

    for (int i = 0; i < size; i++) {
        if (arr[i] == target) {
            count++; 
        }
    }
    printf("The number %d appears %d time(s) in the array.\n", target, count);

    return 0;
}
