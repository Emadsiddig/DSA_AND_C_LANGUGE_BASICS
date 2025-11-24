#include<stdio.h>


void removeElemnt(int arr[],int n,int elem){

    for(int i=0;i<n;i++){
        if(arr[i]!= elem){
            printf("%d ",arr[i]);
        }
    }
}

int main(){
    int arr[] ={2,3,5,6,6,7,8,8};
    int n=sizeof(arr)/sizeof(arr[0]);
    int elem =6;
    removeElemnt(arr,n,elem);

}