#include<stdio.h>

int delfrombeg(int a[],int n){
if(n==0){
    printf("error");
}
else{
for(int i=0;i<n-1;i++){
  a[i]=a[i+1];
}
n--;
}
printf("array after del the first element:");
for(int i=0;i<n;i++){
    printf(" %d ",a[i]);
}
return n;
}
int delfromanyindx(int a[],int n){
int ind;
printf("\nEnter the index of the number you want to del:");
scanf("%d",&ind);
if(ind>n-1){
    printf("The delted number is not exist.\n ");
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

return n;
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
 n=delfrombeg(a,n);
//del from spacefice position 
 n=delfromanyindx(a,n);
    return 0;
}
