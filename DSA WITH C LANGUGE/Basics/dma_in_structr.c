#include<stdio.h>
#include<stdlib.h>
typedef struct
{
    char name;
    int num;

}s;
int main(){
 int i,n;
 s *ptr;
 printf("enter the number of struct you want:");
 scanf("%d",&n);
 ptr=(s*)malloc(sizeof(s));
 for(i=0;i<n;i++){
printf("the value number %d",(i+1));
scanf("%d",(ptr+i));
 }
 for(i=0;i<n;i++){
printf("the value number %d=%d",i+1,*(ptr+i));
 }
 
 free(ptr);


    return 0;
}