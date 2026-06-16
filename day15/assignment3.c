#include <stdio.h>

int main() {
    int size, d;
    printf("Enter size of array: ");
    scanf("%d", &size);

    int arr[size];
    printf("Enter elements: ");
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }
    printf("Enter positions to rotate right: ");
    scanf("%d",&d);
    d = d % size;
    int temp[d];
    for (int i = 0; i < d; i++) {
        temp[i] = arr[size - d + i];
    }
    for (int i = size - 1; i >= d; i--) {
        arr[i] = arr[i - d];
    }
    for (int i = 0; i < d; i++) {
        arr[i] = temp[i];
    }
    printf("Right rotated array: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
