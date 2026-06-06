#include <stdio.h>
int main() {
    int sum = 0, n;
    printf("enter n natural number: ");
    scanf("%d", &n);
    for(int i = 1; i <= n; i++) {
        sum += i;
    }
    printf("sum of first %d natural numbers is %d\n", n, sum);
    return 0;
}