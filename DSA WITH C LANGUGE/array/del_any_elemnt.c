#include<stdio.h>


void delfromanyind(int a[],int n){
int ind;
printf("\nenter the index of the number you want to del:");
scanf("%d",&ind);
if(ind>n-1){
    printf("the delted number is not exist.\n ");
}
else if(n==0){
    printf("no element in array.");
}
else{
for(int i=ind-1;i<n;i++){
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
//delete from index 

 delfromanyind(a,n);

    return 0;
}
