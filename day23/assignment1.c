#include <stdio.h>

int main() {
    char str[100];
    int count[256] = {0}; 
    int i;
    int found = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    
    i = 0;
    while (str[i] != '\0' && str[i] != '\n') {
        count[(unsigned char)str[i]]++;
        i++;
    }


    i = 0;
    while (str[i] != '\0' && str[i] != '\n') {
        if (count[(unsigned char)str[i]] == 1) {
            printf("The first non-repeating character is: '%c'\n", str[i]);
            found = 1;
            break; 
        }
        i++;
    }

    if (found == 0) {
        printf("All characters are repeating or the string is empty.\n");
    }

    return 0;
}
