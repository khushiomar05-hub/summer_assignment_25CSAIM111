#include <stdio.h>
#include <string.h>


int isPalindrome(char str[]) {
    int left = 0;
    int right = strlen(str) - 1;

    
    if (right >= 0 && str[right] == '\n') {
        str[right] = '\0';
        right--;
    }

    
    while (left < right) {
        if (str[left] != str[right]) {
            return 0;         }
        left++;
        right--;
    }
    return 1; 
}

int main() {
    char str[100];

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    if (isPalindrome(str)) {
        printf("The string is a palindrome.\n");
    } else {
        printf("The string is not a palindrome.\n");
    }

    return 0;
}
