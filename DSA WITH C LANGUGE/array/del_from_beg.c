#include<stdio.h>


void delfrombeg(int a[],int n){
if(n==0){
    printf("error");
}
else{
for(int i=0;i<n-1;i++){
  a[i]=a[i+1];
}
n--;
}
printf("array after del ");
for(int i=0;i<n;i++){
    printf(" %d ",a[i]);
}

}
int main(){
int n;
printf("enter the size of array:");
scanf("%d",&n);
int a[n];
printf("enter the elements:");
for(int i=0;i<n;i++){
    scanf("%d",&a[i]);
}
//delete from beg 
 delfrombeg(a,n);

    return 0;
}
