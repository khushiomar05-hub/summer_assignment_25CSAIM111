#include <stdio.h>

int main() {
    int size1, size2;
    printf("Enter size of first array: ");
    scanf("%d", &size1);
    int arr1[size1];
    printf("Enter elements of first array: ");
    for (int i = 0; i < size1; i++) scanf("%d", &arr1[i]);

    printf("Enter size of second array: ");
    scanf("%d", &size2);
    int arr2[size2];
    printf("Enter elements of second array: ");
    for (int i = 0; i < size2; i++) scanf("%d", &arr2[i]);
    printf("Common elements: ");
    int found_any = 0;
    for (int i = 0; i < size1; i++) {

        for (int j = 0; j < size2; j++) {
            if (arr1[i] == arr2[j]) {
                printf("%d ", arr1[i]);
                found_any = 1;
                break; 
            }
        }
    }

    if (found_any == 0) {
        printf("None");
    }
    printf("\n");

    return 0;
}
