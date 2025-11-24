#include<stdio.h>

int sort(int *arr,int n){

    int i,j,temp;

    for(i=0;i<n;i++){
        for(j=i+1;j<n;j++){
            if(*(arr+j)<*(arr+i)){
             temp=*(arr+i);
             *(arr+i)=*(arr+j);
             *(arr+j)=temp;
            }
        }
    }
    for(i=0;i<n;i++){
      printf("%d ",*(arr+i));
    }
   
}
int main(){
    int arr[]={4,5,1,2,3,22,7};
    int n =sizeof(arr)/sizeof(arr[0]);

   sort(arr,n);
     
    return 0;
}