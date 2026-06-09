#include <stdio.h>

int main() {
    int num, originalNum;
    int count = 0;

    printf("Enter an integer: ");
    scanf("%d", &num);

    originalNum = num; 

    while (num > 0) {
        
        if (num & 1) {
            count++;
        }
        num = num >> 1;
    }

    printf("The number of set bits in %d is: %d\n", originalNum, count);

    return 0;
}
