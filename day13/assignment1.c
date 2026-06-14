#include<stdio.h>
int main(){
int size,i;
printf("enter the size of array:");
scanf("%d",&size);
int arr[size];
printf("enter array elments");
for(i=0;i<size;i++){
    scanf("%d",&arr[i]);
}
printf("the elements of array are:");
for(i=0;i<size;i++){
    printf("%d",arr[i]);}
    printf("\n");
    return 0;
 }