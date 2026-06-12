#include<stdio.h>
#include<math.h>
int armstrong(int num);
int main(){
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    if(armstrong(n))
        printf("%d is an Armstrong number.\n", n);
    else
        printf("%d is not an Armstrong number.\n", n);
    return 0;
}
int armstrong(int num){
    int sum=0,rem,temp;
    temp=num;
    while(temp!=0){
        rem=temp%10;
        sum=sum+pow(rem,3);
        temp=temp/10;
    }
    if(sum==num)
        return 1;
    else
        return 0;
}
