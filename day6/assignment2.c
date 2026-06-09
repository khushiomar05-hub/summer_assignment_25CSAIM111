#include <stdio.h>

int main() {
    int binary;
    int decimal = 0, base = 1, remainder;

    // Accept binary input from the user
    printf("Enter a binary number (using only 0s and 1s): ");
    scanf("%d", &binary);
    int temp = binary; 

    
    while (binary > 0) {
        remainder = binary % 10;          
        decimal = decimal + remainder * base; 
        binary = binary / 10;          
        base = base * 2;                 
    }

    
    printf("%d in binary = %d in decimal\n", temp, decimal);

    return 0;
}
