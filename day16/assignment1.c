#include <stdio.h>

int main() {
    int n;
    printf("Enter the value of n: ");
    scanf("%d", &n);

    int size = n - 1;
    int arr[size];
    printf("Enter %d elements: ", size);
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }
    for (int target = 1; target <= n; target++) {
        int found = 0;
        for (int i = 0; i < size; i++) {
            if (arr[i] == target) {
                found = 1; 
                break;     
            }
        }
        if (found == 0) {
            printf("The missing number is: %d\n", target);
            break; 
        }
    }

    return 0;
}
