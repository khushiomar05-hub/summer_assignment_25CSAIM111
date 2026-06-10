#include<stdio.h>
int sum=0;
int reverse(int n){
    if(n == 0){
        return sum; 
    }
    sum = sum * 10 + (n % 10); 
    return reverse(n / 10); 
}
int main(){
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    printf("Reverse of %d is %d\n", num, reverse(num));
    return 0;

}