#include <stdio.h>
int main(){
  FILE *fp=NULL;
  char ch;
  fp =fopen("abc.txt","w+");
  if(fp==NULL){
    printf("error");
  }
  fputs("janny",fp);
  rewind(fp);//use to make the index at the first element

  while(!feof(fp)){
  ch=fgetc(fp);
  printf("%c",ch);
  }
  fclose(fp);

    return 0;
}