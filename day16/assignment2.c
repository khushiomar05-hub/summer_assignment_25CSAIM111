#include <stdio.h>

int main() {
    int size;
    printf("Enter size: ");
    scanf("%d", &size);

    int arr[size];
    printf("Enter elements: ");
    for (int i = 0; i < size; i++) scanf("%d", &arr[i]);
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
    int max_element = arr[0], max_count = 1, current_count = 1;

    for (int i = 1; i < size; i++) {
        if (arr[i] == arr[i - 1]) {
            current_count++; 
        } else {
            current_count = 1;

        }

        if (current_count > max_count) {
            max_count = current_count;
            max_element = arr[i];
        }
    }

    printf("Most frequent: %d (appears %d times)\n", max_element, max_count);
    return 0;
}
