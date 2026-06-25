#include <stdio.h>

int main() {
    int n1, n2;


    printf("Enter size of first array: ");
    scanf("%d", &n1);
    int arr1[n1];
    printf("Enter %d sorted elements: ", n1);
    for (int i = 0; i < n1; i++) {
        scanf("%d", &arr1[i]);
    }

    printf("Enter size of second array: ");
    scanf("%d", &n2);
    int arr2[n2];
    printf("Enter %d sorted elements: ", n2);
    for (int j = 0; j < n2; j++) {
        scanf("%d", &arr2[j]);
    }

    
    int merged[n1 + n2];
    int i = 0, j = 0, k = 0;

    while (i < n1 && j < n2) {
        if (arr1[i] < arr2[j]) {
            merged[k] = arr1[i];
            i++;
        } else {
            merged[k] = arr2[j];
            j++;
        }
        k++;
    }

    
    while (i < n1) {
        merged[k] = arr1[i];
        i++;
        k++;
    }


    while (j < n2) {
        merged[k] = arr2[j];
        j++;
        k++;
    }

    
    printf("\nMerged sorted array: ");
    for (k = 0; k < (n1 + n2); k++) {
        printf("%d ", merged[k]);
    }
    printf("\n");

    return 0;
}
