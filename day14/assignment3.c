#include <stdio.h>

int main() {
    int size,i;
    printf("Enter the size of the array: ");    
    scanf("%d", &size);
    int arr[size];
    printf("Enter the elements of the array:\n");
    for (i = 0; i < size; i++) {
        printf("Element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }
    int largest = arr[0];
    int second_largest = -1; 
    for (int i = 1; i < size; i++) {
        if (arr[i] > largest) {
            second_largest = largest;
            largest = arr[i];       
        } 

        else if (arr[i] > second_largest && arr[i] != largest) {
            second_largest = arr[i]; 
        }
    }
    printf("Largest element: %d\n", largest);
    printf("Second largest element: %d\n", second_largest);

    return 0;
}
