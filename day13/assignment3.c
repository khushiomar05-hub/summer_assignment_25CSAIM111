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
    int smallest=arr[0];
    int largest=arr[0];
    for(i=1;i<size;i++){
        if(arr[i]<smallest){
            smallest=arr[i];
        }
        if(arr[i]>largest){
            largest=arr[i];
        }
    }
    printf("the smallest element is %d\n", smallest);
    printf("the largest element is %d\n", largest); 
    return 0;
}