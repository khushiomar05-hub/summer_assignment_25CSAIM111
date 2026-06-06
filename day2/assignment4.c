#include<stdio.h>
int main(){
    int n,rem,t,rev=0,originalnum;
    printf("enter any number: ");
    scanf("%d",&n);
    originalnum=n;
    while(n>0){
        rem=n%10;
        rev=rev*10+rem;
        n/=10;
    }
    if(rev==originalnum)
        printf("the number is palindrome");
    else
        printf("the number is not palindrome");
    return 0;
}