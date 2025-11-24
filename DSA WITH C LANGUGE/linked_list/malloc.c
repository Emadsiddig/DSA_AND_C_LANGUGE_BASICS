#include<stdio.h>
#include<stdlib.h>

int main(){
 int n,i,*ptr,sum=0;
 printf("enter the number of values  u need:");
 scanf("%d",&n);
 ptr=(int*)malloc(n*sizeof(int));
 
 for(i=0;i<n;i++){
printf("the value number:");
scanf("%d",(ptr+i));
 }
 for(i=0;i<n;i++){
   sum+=*(ptr+i);
 }
 printf("the sum is %d",sum);
 free(ptr);


    return 0;
}