#include<stdio.h>
#include<math.h>
int main(){
    int num, originalnum,rem,digits=0,result=0;
    printf("enter any number: ");
    scanf("%d",&num);
    originalnum=num;
    while(num!=0){
        num/=10;
        digits++;
    }
    num=originalnum;
    while(num!=0){
        rem=num%10;
        result+=pow(rem,digits);
        num/=10;
    }
    if(result==originalnum){
        printf("%d is an Armstrong number.\n",originalnum);
    }
    else{
        printf("%d is not an Armstrong number.\n",originalnum);
    }
    return 0;
}