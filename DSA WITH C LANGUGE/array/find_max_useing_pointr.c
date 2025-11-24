#include<stdio.h>
#include<stdlib.h>
#include<math.h>

void great(int *arr,int n){
    int i;
    for(i=0;i<n;i++)
    {
        if(*arr< *(arr+i)){
            *arr=*(arr+i);
        }
    }
    printf("%d",*arr);
}
int main(){
    int i,n=4;

    // memory allocation
    int *
    arr =(int *)calloc(n,sizeof(int));
  // cheek if the memory allocated
    if(arr == NULL){
        printf("memory if not allocate.");
        exit;
    }
   //stor the elemnts
    *(arr+0)=14;
    *(arr+1)=1;
    *(arr+2)=5;
    *(arr+3)=4;

   //function call
   great(arr,n);

   return 0;
}