#include<stdio.h>
int main(){
    int n1,n2,a,b,lcm;
    printf("enter two numbers: ");
    scanf("%d%d",&n1,&n2);
    a=n1;
    b=n2;
    while(a!=b){
        if(a>b)
            a-=b;
        else
            b-=a;
    }
    lcm=(n1*n2)/a;
    printf("LCM: %d",lcm);
    return 0;
}