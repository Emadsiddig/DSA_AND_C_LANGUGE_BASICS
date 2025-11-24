#include<stdio.h>

int main(){
  FILE *fp=NULL;
  fp=fopen("abc.txt","r");
  char str[30];
   if(fp==NULL){
    printf("error");
   }
   fgets(str,30,fp);
   printf("%s",str);
   fclose(fp);

    return 0;
}