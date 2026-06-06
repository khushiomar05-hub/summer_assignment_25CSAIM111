#include<stdio.h>
int main(){
    int n,rem,count=0;
    printf("enter any number: ");
    scanf("%d",&n);
    while(n>0){
        n/=10;
        count++;
          }
    printf("number of digits: %d",count);
    return 0;}