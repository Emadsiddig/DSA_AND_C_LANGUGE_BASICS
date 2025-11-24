#include<stdio.h>
typedef struct std{
 char name[20];
 int reg;
 float matrks;
} sto;
int main(){
  sto s[2];
  printf("enter the element of stdudent");
  for(int i=0;i<2;i++){
  scanf("%s %d %f",&s[i].name,&s[i].reg,&s[i].matrks);
  }
 printf(" %s %d %f",s[0].name,s[0].reg,s[0].matrks);
   float av =(s[0].matrks+s[1].matrks)/2;
   printf("the averge =%.2f",av);
    return 0;

}