#include <stdio.h>

int main() {
    int num, fact = 1;

    printf("Enter a number: ");
    scanf("%d", &num);

    while (num > 0) {
        fact = fact * num;
        num--; 
    }

    printf("Factorial is %d\n", fact);

    return 0;
}
