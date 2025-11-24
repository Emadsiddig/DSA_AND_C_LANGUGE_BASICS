#include <stdio.h>
int main(){
  FILE *fp=NULL;
  char c='w';
  fp =fopen("abc.txt","r+");
  if(fp==NULL){
    printf("error");
  }
  fputc(c,fp);
  fclose(fp);

    return 0;
}