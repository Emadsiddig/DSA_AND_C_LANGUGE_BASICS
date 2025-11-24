#include<stdio.h>

int ternarySearch(int arr[],int n,int key){
    int lb=0,rb=n,mid1,mid2;
    while(lb <= rb){
        mid1=lb+(rb+lb)/3;
        mid1=rb-(rb+lb)/3;

        if(arr[mid1]==key){
            return mid1;
        }
        else if(arr[mid2]==key){
            return mid2;
        }
        else if(arr[mid1]> key){
            
        }
    }
}
int main(){
int arr[]={4,5,6,2,34,67};
int n=sizeof(arr)/sizeof(arr[0]);
int result,key;
printf("enter the key you want to search it:");
scanf("%d",&key);
result =ternarySearch(arr,n,key);
 if(result == -1){
    ptintf("the number is not found.");
 }
 else{
    printf("the number is in index %d",result);
 }
 return 0;
}