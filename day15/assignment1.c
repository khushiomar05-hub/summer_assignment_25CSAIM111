#include<stdio.h>
int main(){
    int size,i;
    printf("Enter the size of the array: ");
    scanf("%d",&size);
    int arr[size];
    printf("the elements of array are:");
    for(i=0;i<size;i++){
        printf("\n element no.%d:",i+1);
        scanf("%d",&arr[i]);
    }
    for(i=0;i<size/2;i++){
       int temp=arr[i];
       arr[i]=arr[size-1-i];
       arr[size-1-i]=temp;
       
    }
    printf("the reversed array is:");
    for(i=0;i<size;i++){
        printf("%d",arr[i]);  }
        printf("\n");
        return 0;

}