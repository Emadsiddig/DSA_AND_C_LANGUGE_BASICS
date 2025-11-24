#include<stdio.h>
#include<stdlib.h>

int main(){
    FILE  *fp = NULL;
    fp = fopen("abc.txt", "a+");
    char ch[] = " emad";
    int cont=1;   //to count the number of lines
    if(fp == NULL){
        printf("error");
        exit(1);
    }
    fputs(ch, fp); // Write string to file
    rewind(fp);    // Go back to start for reading
   
    int c;
    while ((c = fgetc(fp)) != EOF) {
        if(c=='\n'){
         cont++;
        }
       
        printf("%c", c);
    }
     printf("\the number of lines=%d", cont);
   fseek(fp,0,SEEK_END);
   int pos=ftell(fp);
   printf("\nthe length of file=%d",pos);
    fclose(fp);
    return 0;
}