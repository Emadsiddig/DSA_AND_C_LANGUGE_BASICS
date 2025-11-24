#include<stdio.h>


void insertion(int a[],int n){
    int temp,j;
    for(int i=1;i<n;i++){
     temp=a[i];
     j=i-1;
    while (a[j]>temp && j>=0){
        a[j+1]=a[j];
        j--;
    }
    a[j+1]=temp;
    }
}

int main(){
int a[]={5,4,1,10,6,2};
int n =5;

insertion(a,n);
for(int i=0;i<n;i++){
    printf("%d ",a[i]);
}
return 0;
}