#include<stdio.h>

int Binary_search(int arr[],int n,int data){
int left=0,right=n-1;

while(left<=right){
    int mid=(left+right)/2;
    if(data ==arr[mid]){
     return mid;
      break;
    }
    else if(data<arr[mid]){
        right=mid-1;
    }
    else if(data>arr[mid]){
        left=mid+1;
    }
}
 return -1;
}
int main(){
int arr[]={1,2,3,4,5,6};
int size=sizeof(arr)/sizeof(arr[0]);
printf("the array is :\n");
for(int i=0;i<size;i++){
    printf("%d ",arr[i]);
}
int data;
printf("\nEnter the number u want to search on it:");
scanf("%d",&data);
//call the searching function
int f =Binary_search(arr,size,data);
if(f==-1){
    printf("is not found");
}
else{
    printf("the number in index %d",f);
}

}