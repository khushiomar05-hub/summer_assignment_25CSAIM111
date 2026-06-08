#include <stdio.h>

int main() {
    int n;
    int factor = 2; 

    printf("Enter a number: ");
    scanf("%d", &n);
    while (n > 1) {
        if (n % factor == 0) {
            n = n / factor; 
        } else {
            factor++; 
        }
    }
    printf("Largest prime factor is: %d\n", factor);

    return 0;
}

