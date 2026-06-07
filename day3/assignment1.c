#include<stdio.h>
int main(){
    int n,i,isprime=1;
    printf("enter any number: ");
    scanf("%d",&n);
    for(i=2;i<n;i++){
        if(n%i==0){
            isprime=0;
            break;
        }
    }
    if(isprime==1)
        printf("prime number");
    else
        printf("not a prime number");
    return 0;
}