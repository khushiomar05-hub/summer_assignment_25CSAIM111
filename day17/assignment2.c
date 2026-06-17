#include <stdio.h>

int main() {
    int n1, n2, i, j, exists;
    printf("Enter sizes of array 1 and 2: ");
    scanf("%d %d", &n1, &n2);
    int total = n1 + n2;
    int merged[total];

    printf("Enter elements for array 1: ");
    for (i = 0; i < n1; i++) scanf("%d", &merged[i]);

    printf("Enter elements for array 2: ");
    for (i = 0; i < n2; i++) scanf("%d", &merged[n1 + i]);
    printf("Union of arrays: ");
    for (i = 0; i < total; i++) {
        exists = 0;
        for (j = 0; j < i; j++) {
            if (merged[i] == merged[j]) {
                exists = 1;
                break;
            }
        }
        if (!exists) {
            printf("%d ", merged[i]);
        }
    }

    return 0;
}
