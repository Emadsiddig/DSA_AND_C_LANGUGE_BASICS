#include<stdio.h>

struct def{
   int max;
   int min;
};
struct def minmaxfun(int arr[],int n){
 struct def type;
 int i;
 if(n==1){
   type.max=arr[0];
   type.min=arr[0];
   return type;
 }
 if(arr[1]<arr[0]){
  type.max=arr[0];
  type.min=arr[1];
 }
 else{
  type.min=arr[0];
  type.max=arr[1];
 }
 for(i=2;i<n;i++){
  if(arr[i]<type.min){
   type.min=arr[i];
  }
  else if(arr[i]>type.max){
    type.max=arr[i];
  }
 }
return type;
}
int main(){
  int size;
  printf("enter the size of elemnt:");
  scanf("%d",&size);
  int arr[size];
  printf("Enter the Array:");
  for(int i=0;i<size;i++){
    scanf("%d",&arr[i]);
  }
  struct def type = minmaxfun(arr,size);
  printf("The maxmm =%d",type.max);
  printf("The minmum =%d",type.min);
  return 0;
}
































/*int main(){
  int num,i,max,min;
  printf("enter the number of element:");
  scanf("%d",&num);

  int arr[num];
  printf("\n Enter the elements of array: ");
  for(i=0;i<num;i++){
    scanf("%d",&arr[i]);
  }
  max = arr[0];
  min = arr[0];
  for(i=1;i<num;i++){
    if(max<arr[i]){
        max=arr[i];
    }
    if(min>arr[i]){
        min=arr[i];
    }
  }
  printf("the maximum=%d",max);
  printf("\nthe minimum=%d",min);
    return 0;
}
    */