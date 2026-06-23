#include <stdio.h>

int main() {
    char str[100];
    int count[256] = {0}; 
    int i = 0;
    int found = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    
    while (str[i] != '\0' && str[i] != '\n') {
        
        
        if (count[(unsigned char)str[i]] == 1) {
            printf("The first repeating character is: '%c'\n", str[i]);
            found = 1;
            break; 
        }
        
    
        count[(unsigned char)str[i]] = 1;
        i++;
    }
    if (found == 0) {
        printf("No repeating characters found.\n");
    }

    return 0;
}
