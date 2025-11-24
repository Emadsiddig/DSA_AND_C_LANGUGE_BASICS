#include<stdio.h>
int main(){
  int num;
  printf("enter a number:");
  scanf("%d",&num);
  if(num>1){
    printf("the number is positive");
  }
  else if(num==0){
    printf("the number is zero");
  }
  else{
    printf("the number is nigative");
  }
    return 0;
}