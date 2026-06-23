#include <stdio.h>

int main() {
    char str[100];
    int count[256] = {0}; 
    int i = 0;
    int maxCount = 0;
    char maxChar = ' ';

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    
    while (str[i] != '\0' && str[i] != '\n') {
        count[(unsigned char)str[i]]++;
        i++;
    }
    for (i = 0; i < 256; i++) {
        
        if (i != ' ' && count[i] > maxCount) {
            maxCount = count[i];
            maxChar = (char)i;
        }
    }

    
    if (maxCount > 0) {
        printf("The maximum occurring character is '%c'.\n", maxChar, maxCount);
    } else {
        printf("The string is empty.\n");
    }

    return 0;
}
