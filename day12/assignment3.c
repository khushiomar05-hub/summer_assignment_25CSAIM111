#include <stdio.h>

int main() {
    int a = 0; 
    int b = 1; 
    int next;

    
    printf("%d\n", a);
    printf("%d\n", b);

    
    int i = 0;
    while (i < 10) {
        next = a + b; 
        printf("%d\n", next);

        a = b;        
        b = next;    
        
        i++;          
    }

    return 0;
}
