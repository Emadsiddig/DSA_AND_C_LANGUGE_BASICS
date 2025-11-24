#include<stdio.h>

void linar_search(int arr[],int size ,int data){
    int i;
    for(i=0;i<size;i++){
        if(arr[i]==data){
            printf("the elemnt if found at indax:%d",i);
            break;
        }
    }
    if(i==size){
        printf("the element is not exit");
    }
}
int main(){

int arr[]={5,6,3,4,1,2};
int size=sizeof(arr)/sizeof(arr[0]);
printf("the array is :\n");
for(int i=0;i<size;i++){
    printf("%d ",arr[i]);
}
int data;
printf("\nEnter the number u want to search on it:");
scanf("%d",&data);
//call the searching function
linar_search(arr,size,data);

    return 0;
}