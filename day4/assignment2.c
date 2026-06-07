#include<stdio.h>
int main(){
    int n,i;
    int first=0,second=1,next=0;
    printf("enter the number of terms: ");
    scanf("%d",&n);
    for(i=2;i<=n;i++){
        next=first+second;
        first=second;
        second=next;
    }
    if(n==0){
        printf("the 0th term is:0\n");}
        else if(n==1){
            printf("the 1st term is:1\n");
        }
        else{
            printf("the %dth term is:%d\n",n,next);
        }
        return 0;
    }