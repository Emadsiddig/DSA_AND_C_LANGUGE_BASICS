#include<stdio.h>

void Bubble_sort(int arr[] ,int n){

for(int i=0;i<n-1;i++){
    int temp,flag=-1;
    for(int j=0;j<n-1-i;j++){
        if(arr[j]>arr[j+1]){
            temp=arr[j];
            arr[j]=arr[j+1];
            arr[j+1]=temp;
            flag=1;
        }
    }
    if(flag==-1){
        break;
    }
}

}
int main(){
int arr[]={4,5,7,8,6,4,9,2};
int n =sizeof(arr)/sizeof(arr[0]);
printf("the array is :\n");
for(int i=0;i<n;i++){
    printf("%d ",arr[i]);
}
Bubble_sort(arr,n);
printf("\nthe array after sort :\n");
for(int i=0;i<n;i++){
    printf("%d ",arr[i]);
}
    return 0;
}