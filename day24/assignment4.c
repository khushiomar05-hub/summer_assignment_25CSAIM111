#include <stdio.h>

int main() {
    char str[100];
    int seen[256] = {0}; 


    
    printf("Enter a string: ");
    scanf("%s", str);

    printf("Result: ");
    
    
    for (int i = 0; str[i] != '\0'; i++) {
        
        
        int position = str[i]; 

    
        if (seen[position] == 0) {
            printf("%c", str[i]); 
            seen[position] = 1;   
        }
    }
    
    printf("\n");
    return 0;
}
