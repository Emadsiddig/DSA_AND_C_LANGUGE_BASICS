#include<stdio.h>


int main(){
    int arr1[]={1,3,4,5,5,5,29};
    int arr2[]={2,3,3,5,8,9};
    int n1=sizeof(arr1)/sizeof(arr1[0]);
    int n2=sizeof(arr2)/sizeof(arr2[0]);
    int i=0,k=0,j=0,x,flag;
    int result[100];
   printf("the commen elemnt are:");
    while(i< n1 && j< n2){
   
     if(arr1[i]<arr2[j]){
        i++;
     }
     if(arr1[i]>arr2[j]){
        j++;
     }
     else {
        flag=0;
        
        for(x=0;x<k;x++){
          if(result[x]==arr1[i]){
            flag++;
          }
        }
     
        if(flag == 0){
         
            printf("%d ",arr1[i]);
            result[k]=arr1[i];
            k++;
        }
     
     i++;
     j++;
   }
 }
    return 0;
}