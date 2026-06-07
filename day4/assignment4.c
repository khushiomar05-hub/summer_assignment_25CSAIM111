#include<stdio.h>
#include<math.h>
int main(){
    int start,end,i,temp,rem,digits,sum;
    printf("enter the range: ");
    scanf("%d %d",&start,&end);
    for(i=start;i<=end;i++){
        temp=i;
        digits=0;
        sum=0;
        while(temp>0){
            temp/=10;
            digits++;
        }
        temp=i;
        while(temp>0){
            rem=temp%10;
            sum+=pow(rem,digits);
            temp/=10;
        }
        if(sum==i){
            printf("%d ",i);
        }
    }
    return 0;
}