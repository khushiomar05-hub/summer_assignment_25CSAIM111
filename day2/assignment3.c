#include<stdio.h>
int main(){
    int n,rem,mul=1;    
    printf("enter any number: ");
    scanf("%d",&n);
    while(n>0){
        rem=n%10;
        mul*=rem;
        n/=10;
    }
    printf("product of digits: %d",mul);
    return 0;

}