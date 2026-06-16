#include<stdio.h>
int main(){
    int size,i;
    printf("the size of array is:");
    scanf("%d",&size);
    int arr[size];
    printf("enter the array elements:");
    for(i=0;i<size;i++){
        printf("\n element no.%d:",i+1);
        scanf("%d",&arr[i]);

    }
    int d;
    printf("the no. of rotation is:");
    scanf("%d",&d);

    d=d%size;
    for(i=0;i<d/2;i++){
        int temp=arr[i];
        arr[i]=arr[d-1-i];
        arr[d-1-i]=temp;

    }
    int rem_num=size-d;
    for(i=0;i<rem_num/2;i++){
        int temp=arr[d+i];
        arr[d+i]=arr[size-1-i];
        arr[size-1-i]=temp;

    }
    for(i=0;i<size/2;i++){
       int temp=arr[i];
       arr[i]=arr[size-1-i];
       arr[size-1-i]=temp;

    }
    printf("the array after rotation is");
    for(i=0;i<size;i++){
        printf("%d",arr[i]);
      }
      printf("\n");
      return 0;}
;