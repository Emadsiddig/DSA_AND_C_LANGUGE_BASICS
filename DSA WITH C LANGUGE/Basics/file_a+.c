#include<stdio.h>

int main(){
  FILE *fp=NULL;
  char ch[30]=" emad siddig";
  fp=fopen("abc.txt","a+");
  if(fp==NULL){
    printf("error");
  }
  fputs(ch,fp);
  rewind(fp);
  int c;
  while(!feof(fp)){
    c=fgetc(fp);
    printf("%c",c);
  }
fclose(fp);

    return 0;
}