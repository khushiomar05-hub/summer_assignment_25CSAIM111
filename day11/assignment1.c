#include <stdio.h>
int findSum(int num1, int num2);

int main() {
    int a, b, result;

    // Taking input from the user
    printf("Enter first number: ");
    scanf("%d", &a);
    
    printf("Enter second number: ");
    scanf("%d", &b);
    result = findSum(a, b);
 printf("The sum of %d and %d is: %d\n", a, b, result);
 return 0;
}

int findSum(int num1, int num2) {
    return num1 + num2;
}
