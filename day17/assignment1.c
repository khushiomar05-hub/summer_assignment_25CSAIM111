#include <stdio.h>

int main() {
    int size1, size2, i;

    printf("Enter size of first array: ");
    scanf("%d", &size1);
    int arr1[size1];
    printf("Enter %d elements: ", size1);
    for (i = 0; i < size1; i++) {
        scanf("%d", &arr1[i]);
    }
    printf("Enter size of second array: ");
    scanf("%d", &size2);
    int arr2[size2];
    printf("Enter %d elements: ", size2);
    for (i = 0; i < size2; i++) {
        scanf("%d", &arr2[i]);
    }
    int totalSize = size1 + size2;
    int merged[totalSize];
    for (i = 0; i < size1; i++) {
        merged[i] = arr1[i];
    }
    for (i = 0; i < size2; i++) {
        merged[size1 + i] = arr2[i];
    }
    printf("Merged array: ");
    for (i = 0; i < totalSize; i++) {
        printf("%d ", merged[i]);
    }
    printf("\n");

    return 0;
}
