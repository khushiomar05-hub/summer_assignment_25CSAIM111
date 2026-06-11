#include <stdio.h>

// Function declaration
int max(int num1, int num2);

int main() {
    int a,b;
    printf("Enter first number: ");
    scanf("%d", &a);
    printf("Enter second number: ");
    scanf("%d", &b);
    int maximum;


    maximum = max(a, b);
    
    printf("The maximum between %d and %d is: %d\n", a, b, maximum);
    return 0;
}

int max(int num1, int num2) {
    
    return (num1 > num2) ? num1 : num2;
}
