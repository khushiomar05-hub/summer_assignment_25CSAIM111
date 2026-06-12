#include <stdio.h>

int main() {
    int number;
    int sum=0;
    printf("Enter a number: ");
    scanf("%d",&number);


    for (int i = 1; i < number; i++) {
        if (number % i == 0) {
            sum = sum + i;
        }
    }

    if (sum == number) {
        printf("%d is a Perfect Number.\n", number);
    } else {
        printf("%d is NOT a Perfect Number.\n", number);
    }

    return 0;
}
