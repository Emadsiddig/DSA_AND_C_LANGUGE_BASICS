#include<stdio.h>

void selection_sort(int arr[],int n){
   for(int i=0;i<n-1;i++){
    int min=i;
    for(int j=i+1;j<n;j++){
        if(arr[j]<arr[min]){
         min=j;
        }
    }
    if(min!= i){
        int temp;
        temp=arr[i];
        arr[i]=arr[min];
        arr[min]=temp;
    }
   } 
   printf("the array after sorting:");
   for(int i=0;i<n;i++){
    printf("%d ",arr[i]);
   }
}

int main(){
    int arr[]={7,4,8,10,3,1};
    int n=6;
    
   selection_sort(arr,n);
   

    return 0;
}