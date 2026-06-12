#include<stdio.h>
int palindrome(int num){
    int rev=0,rem,temp;
    int original=num;
    if(num<0)
        return 0;
        while(num!=0){
            rem=num%10;
            rev=rev*10+rem;
            num=num/10;
        }
        return (rev==original);
    }
    int main(){
        int n;
        printf("Enter a number: ");
        scanf("%d", &n);
        if(palindrome(n))
            printf("%d is a palindrome.\n", n);
        else
            printf("%d is not a palindrome.\n", n);
        return 0;
}