#include<stdio.h>
#include<stdlib.h>

int main(){
 int n,i,*ptr;
 printf("enter the number of values  u need:");
 scanf("%d",&n);
 ptr=(int*)malloc(n*sizeof(int));
 //ptr=(int*)calloc(n,sizeof(int));  we can use it to allocte block of memory which have the same datetype
 for(i=0;i<n;i++){
printf("the value number:");
scanf("%d",(ptr+i));
 }
 for(i=0;i<n;i++){
printf("the value number:=%d",*(ptr+i));
 }
 
 free(ptr);


    return 0;
}