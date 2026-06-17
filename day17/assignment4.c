#include <stdio.h>

int main() {
    int n1, n2, i, j, k, isDuplicate;

    printf("Enter sizes of array 1 and 2: ");
    scanf("%d %d", &n1, &n2);

    int arr1[n1], arr2[n2];
    printf("Enter elements for array 1: ");
    for (i = 0; i < n1; i++) scanf("%d", &arr1[i]);

    printf("Enter elements for array 2: ");
    for (i = 0; i < n2; i++) scanf("%d", &arr2[i]);
    printf("Common elements are: ");
    for (i = 0; i < n1; i++) {
        isDuplicate = 0;
        for (k = 0; k < i; k++) {
            if (arr1[i] == arr1[k]) {
                isDuplicate = 1;
                break;
            }
        }

        if (isDuplicate) continue;
        for (j = 0; j < n2; j++) {
            if (arr1[i] == arr2[j]) {
                printf("%d ", arr1[i]);
                break; 
            }
        }
    }

    return 0;
}
