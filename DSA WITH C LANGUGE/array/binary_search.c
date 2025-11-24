#include<stdio.h>
int main(){
   int arr[]={2,4,5,6,7,8,9,6,44};
   int first =arr[0];
   int last = (sizeof(arr)/sizeof(arr[0]))-1;
   // req the requerd element 
   int req=44,num=-1;
   
   while(first<=last){
    int mid = (first+last)/2;
       if(arr[mid]==req){
         num=mid;
         break;
       }
       else if(arr[mid]<req){
        first=mid+1;
       }
       else{
        last=mid-1;
       }
   }
   if(num!= -1){
    printf("the elment in index %d",num);
   }
   else{
    printf("not found the elment");
   }
   
    return 0;
}

