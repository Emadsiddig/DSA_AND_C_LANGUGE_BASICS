#include<stdio.h>

int max(int newMax,int oldMax){
     return (newMax > oldMax) ? newMax : oldMax;
}

int maxSum(int arr[],int n,int k){
    int windowSum=0,maxSum,i,j;

    for(i=0; i<k; i++){
      windowSum+=arr[i];
      maxSum=windowSum;
    } 
    for(j=k;j<n;j++){
        windowSum+=arr[k]-arr[i-k];
       maxSum=max(maxSum,windowSum);
    }
    

    return maxSum;
}

int main(){
 
    int arr[]={5,2,-1,0,3};
    int n=sizeof(arr)/sizeof(arr[0]);
    int k=3;
    printf("the max sum =%d",maxSum(arr,n,k));
}