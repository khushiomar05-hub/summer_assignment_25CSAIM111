#include <stdio.h>

int main() {
    char str[1000];
    int i = 0;
    int words = 0;

    printf("Enter a sentence: ");
    fgets(str, sizeof(str), stdin);

    
    while (str[i] != '\0') {
        
        
        
        if (str[i] != ' ' && str[i] != '\n' && str[i] != '\t') {
            if (i == 0 || str[i - 1] == ' ' || str[i - 1] == '\t') {
                words++; 
            }
        }
        i++;
    }

    printf("Total number of words: %d\n", words);
    return 0;
}
