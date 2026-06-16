#include <stdio.h>

int main() {
    int size, target, found = 0;

    printf("Enter size: ");
    scanf("%d", &size);

    int arr[size];
    printf("Enter elements: ");
    for (int i = 0; i < size; i++) scanf("%d", &arr[i]);

    printf("Enter the target sum: ");
    scanf("%d", &target);
    for (int i = 0; i < size; i++) {

        int partner_needed = target - arr[i];
        for (int j = i + 1; j < size; j++) {
            if (arr[j] == partner_needed) {
                printf("Pair found: %d and %d\n", arr[i], partner_needed);
                found = 1;
                break;
            }
        }
        if (found) break;
    }

    if (!found) printf("No pair found.\n");
    return 0;
}
