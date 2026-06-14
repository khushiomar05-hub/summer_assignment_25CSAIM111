#include<stdio.h>
int main(){
    int size,i;
    printf("enter the size of array:");
    scanf("%d",&size);
    int arr[size];
    printf("enter the elements of array:");
    for(i=0;i<size;i++){
        scanf("%d",&arr[i]);
    }
    int evencount=0;
    int oddcount=0;
    for(i=0;i<size;i++){
        if(arr[i]%2==0){
            evencount++;
        }
        else{
            oddcount++;
        }
    }
    printf("the even elements in array is:%d\n", evencount);
    printf("the odd elements in array is:%d\n", oddcount);
    return 0;
}