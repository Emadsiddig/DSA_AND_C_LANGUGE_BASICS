#include<stdio.h>

int remove_dup(int arr[],int n){

    int j=0;
    for(int i=1;i<n-1;i++){
        if(arr[j] != arr[i]){
            arr[++j]=arr[i];
        }
    }
    return j+1;
} 

int main(){
    int arr[]={1,2,2,3,3,4,5,6};
    int n=sizeof(arr)/sizeof(arr[0]);

    n=remove_dup(arr,n);

    for(int i=0;i<n;i++){
      printf("%d",arr[i]);
    }
    return 0;
}