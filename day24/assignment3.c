#include <stdio.h>
#include <string.h>

int main() {
    int n;

    
    printf("How many strings do you want to enter? ");
    scanf("%d", &n);


    char strings[n][100]; 

    
    printf("Enter %d strings:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%s", strings[i]);
    }

    
    int maxLen = 0;
    int longestIndex = 0;

    for (int i = 0; i < n; i++) {
        int currentLen = strlen(strings[i]);
        

        if (currentLen > maxLen) {
            maxLen = currentLen;
            longestIndex = i; 
        }
    }

    
    printf("\nThe longest string is: \"%s\"\n", strings[longestIndex]);
    printf("Its length is: %d characters\n", maxLen);

    return 0;
}
