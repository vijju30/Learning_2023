#include<stdio.h>
//sum alter array
int sum_func(int arr[],int size){
    int sum=0;
    for(int i=0;i<size;i+=2){
        sum+=arr[i];
    }
    return sum;
}
int main(){
    int size;
    printf("Enter size of array:");
    scanf("%d",&size);
    int arr[size];
    printf("Enter elements to array:");
    for(int i=0;i<size;i++){
        scanf("%d",&arr[i]);
    }
    int result=sum_func(arr,size);
    printf("sum of alternate elements in an array is: %d\n",result);
    return 0;
}