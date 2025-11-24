#include<stdio.h>
int main(){
  
  char name[100],*p;
  int len=0;
  printf("enter the string: ");
  gets(name);
  p=&name[0];
  while(*p!='\0'){
  p++;
  len++;
  }
  printf("%d",len);
  return 0;
}