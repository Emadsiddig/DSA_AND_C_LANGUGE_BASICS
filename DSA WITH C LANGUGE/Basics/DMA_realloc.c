#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){
  int *ptr,n;

  printf("enter yhr size of ur pointer");
  scanf("%d",&n);
 ptr=(int*)malloc(n*sizeof(int));
 printf("\nentr the element o allocate block:");
 for(int i=0;i<n;i++){
scanf("%d",(ptr+i));
 }
 printf("\nentr the updated value :");
scanf("%d",&n);
int *ptr1=(int*)realloc(ptr,n*sizeof(int));
printf("\nthe old add=%d and the new add =%d\n",ptr,ptr1);
for(int i=0;i<n;i++){
    printf("%d\t",*(ptr1+i));
}

free(ptr1);
    return 0;
}