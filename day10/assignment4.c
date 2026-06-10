#include<stdio.h>
int main() {
    int n, i, j;
    printf("Enter the number of rows: ");
    scanf("%d", &n);
    
    for(i = 1; i <= n; i++) {
        for(j = 1; j <=n-i; j++) {
            printf(" ");
        }
        char ch = 'A';
        for(int j=1;j<=i;j++){
            printf("%c",ch++);
        }
        ch-=2;
        for(int j=1;j<i;j++){
            printf("%c",ch--);
        }
        printf("\n");
    }
    
    return 0;
}