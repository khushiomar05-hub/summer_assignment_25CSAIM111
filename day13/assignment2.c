#include <stdio.h>

int main() {
    int size;
    float sum = 0.0;
    float average;

    printf("Enter the number of elements: ");
    scanf("%d", &size);

    if (size <= 0) {
        printf("Error: Size must be greater than 0.\n");
        return 1;
    }

    int arr[size];

    printf("Enter %d integers:\n", size);
    for (int i = 0; i < size; i++) {
        printf("Element %d: ", i + 1);
        scanf("%d", &arr[i]);
        sum += arr[i]; 
    }


    average = sum / size; 

    printf("\n--- Results---\n");
    printf("Sum     = %f\n", sum);
    printf("Average = %f\n", average);

    return 0;
}
