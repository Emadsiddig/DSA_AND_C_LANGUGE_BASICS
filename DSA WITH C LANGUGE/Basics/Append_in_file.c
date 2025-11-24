#include <stdio.h>

int main(){
    FILE *fp=NULL;
    char str[30];
    fp=fopen("abc.txt","a");//a use to add in the file
    if(fp==NULL){
        printf("error");
    }
  printf("enetr the string u want to append");
  gets(str);

  fputs(str,fp);
  //fprintf(fp,"%s",str); we can use it instead of fputs
  printf("done the appended");
 fclose(fp);
    return 0;
}