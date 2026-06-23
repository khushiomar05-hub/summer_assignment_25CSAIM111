#include <stdio.h>

int main() {
    char str1[100], str2[100];
    int count[256] = {0}; 
    int i = 0;
    int isAnagram = 1;    

    printf("Enter first string: ");
    fgets(str1, sizeof(str1), stdin);

    printf("Enter second string: ");
    fgets(str2, sizeof(str2), stdin);

    
    while (str1[i] != '\0' && str1[i] != '\n') {
        count[(unsigned char)str1[i]]++;
        i++;
    }

    
    i = 0;
    while (str2[i] != '\0' && str2[i] != '\n') {
        count[(unsigned char)str2[i]]--;
        i++;
    }

    
    for (i = 0; i < 256; i++) {
        if (count[i] != 0) {
            isAnagram = 0; 
            break;
        }
    }

    if (isAnagram == 1) {
        printf("The strings are anagrams.\n");
    } else {
        printf("The strings are not anagrams.\n");
    }

    return 0;
}
