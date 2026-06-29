#include <stdio.h>
#include <stdlib.h>

int main() {
    int choice;
    float num1, num2, result;

    while(1) {
        printf("\n--- CALCULATOR MENU ---\n");
        printf("1. Addition (+)\n");
        printf("2. Subtraction (-)\n");
        printf("3. Multiplication (*)\n");
        printf("4. Division (/)\n");
        printf("5. Exit\n");
        printf("Enter your choice (1-5): ");
        scanf("%d", &choice);
        if (choice == 5) {
            printf("Exiting calculator. Goodbye!\n");
            break;
        }

        
        if (choice < 1 || choice > 5) {
            printf("Invalid choice! Please select a valid option.\n");
            continue; 
        }

        printf("Enter first number: ");
        scanf("%f", &num1);
        printf("Enter second number: ");
        scanf("%f", &num2);


        if (choice == 1) {
            result = num1 + num2;
            printf("Result: %.2f + %.2f = %.2f\n", num1, num2, result);
        } 
        else if (choice == 2) {
            result = num1 - num2;
            printf("Result: %.2f - %.2f = %.2f\n", num1, num2, result);
        } 
        else if (choice == 3) {
            result = num1 * num2;
            printf("Result: %.2f * %.2f = %.2f\n", num1, num2, result);
        } 
        else if (choice == 4) {
    
            if (num2 == 0) {
                printf("Error! Division by zero is not allowed.\n");
            } else {
                result = num1 / num2;
                printf("Result: %.2f / %.2f = %.2f\n", num1, num2, result);
            }
        }
    }
    return 0;
}
