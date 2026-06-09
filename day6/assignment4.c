#include<stdio.h>
int main()
{
    int n,x;
    int result=1;
    printf("Enter the base number: ");
    scanf("%d",&n);
    printf("Enter the exponent: ");
    scanf("%d",&x);
    for(int i=0;i<x;i++)
    {
        result=result*n;
    }
    printf("The result is: %d",result);
    return 0;
}
