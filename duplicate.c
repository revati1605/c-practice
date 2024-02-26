#include <stdio.h>
#include<stdlib.h>
#define MAX 100
void nonDuplicate(int *arr,int size){
    int i,j=0;
    int ar[MAX] = {0};
    for(i=0;i<size;i++){
        ar[arr[i]]++;
        if(ar[arr[i]]==1){
            printf("%d\n",arr[i]);
        }
    }
}
void main(){
    int size,i,*arr;
    printf("Please enter the array size (not max to 100) : \n");
    scanf("%d", &size);
    arr=(int*)malloc(sizeof(int)*size);
    printf("please enter the array elements \n");
    for(i=0; i<size; i++){
        scanf("%d",&arr[i]);
    }
    printf("After removing duplicate elements:\n");
    nonDuplicate(arr, size);
   
} 

