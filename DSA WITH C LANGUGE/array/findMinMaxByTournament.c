#include<stdio.h>

struct pair {
    int min;
    int max;
};

struct pair getminmax(int arr[],int left,int right){
    int mid;
    struct pair minmax;
    struct pair mml;
    struct pair mmr;
 
    if(left==right){
        minmax.min=arr[0];
        minmax.max=arr[0];
        return minmax;
         
    }
    if(right == left + 1){
        if(arr[left]>arr[right]){
            minmax.max=arr[left];
            minmax.min=arr[right];
        }
        else{
            minmax.min=arr[left];
            minmax.max=arr[right];

        }
        return minmax;
    } 
   mid=(left+right)/2;
   mml=getminmax(arr,left,mid);
   mmr=getminmax(arr,mid+1,right);
   if(mml.min< mmr.min){
     minmax.min=mml.min;
   }
   else 
   minmax.min=mmr.min;
   
   if(mml.max<mmr.max){
    minmax.max=mmr.max;
   }
   else {
    minmax.max=mml.max;
   }
   return minmax;
}
int main(){
    int arr[]={3,4,5,622,68,4};
    int size=6;
    struct pair minmax=getminmax(arr,0,size-1);
    printf("the min=%d",minmax.min);
    printf("\nthe max=%d",minmax.max);
    return 0;
}