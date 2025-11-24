#include<stdio.h>
#include <stdlib.h>


int main(){
FILE *fp=NULL;
fp=fopen("abc.txt","w");

if(fp==NULL){
    printf("FILE DID NOT OPEN");
    exit(1);
}
char ch[]="emad siddig";
fputs(ch, fp);

fclose(fp);
    return 0;
}