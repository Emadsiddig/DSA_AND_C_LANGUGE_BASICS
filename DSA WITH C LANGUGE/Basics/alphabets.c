#include<stdio.h>

int main(){
  
  char ch1=65,ch2=90,*p;
  printf("The alphabet are:\n");
  for(p=&ch1;ch1 <= ch2;ch1++){
  printf("%c ",*p);
  }
  return 0;
}