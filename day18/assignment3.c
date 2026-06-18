#include <stdio.h>

int main() {
    int n, temp, min_index, target;
    int low, high, mid, found;
    
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    
    int arr[n];

    printf("Enter %d integers (in any order):\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    for (int i = 0; i < n - 1; i++) {
        min_index = i;
        for (int j = i + 1; j < n; j++) {
            if (arr[j] < arr[min_index]) {
                min_index = j;
            }
        }
        if (min_index != i) {
            temp = arr[i];
            arr[i] = arr[min_index];
            arr[min_index] = temp;
        }
    }
    
    printf("\nSorted array (for searching):\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n\n");

    printf("Enter the number you want to find: ");
    scanf("%d", &target);
    low = 0;
    high = n - 1;
    found = 0; 
    
    while (low <= high) {
        mid = low + (high - low) / 2; 
        
        if (arr[mid] == target) {
            printf("Element found at index %d (0-indexed position).\n", mid);
            found = 1;
            break;
        }
        else if (arr[mid] < target) {
            low = mid + 1; 
        }
        else {
            high = mid - 1; 
        }
    }
    
    if (found == 0) {
        printf("Element not found in the array.\n");
    }
    
    return 0;
}
