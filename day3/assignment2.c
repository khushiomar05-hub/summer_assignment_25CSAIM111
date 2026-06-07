#include <stdio.h>
int main() {
    int start, end, i, j, isprime;
    printf("enter the range: ");
    scanf("%d %d", &start, &end);
    for (i = start; i <= end; i++) {
        if (i == 1) {
            continue;
        }
        isprime = 1;
        for (j = 2; j < i; j++) {
            if (i % j == 0) {
                isprime = 0;
                break;
            }
        }
        if (isprime == 1) {
            printf("%d ", i);
        }
    }
    return 0;
}