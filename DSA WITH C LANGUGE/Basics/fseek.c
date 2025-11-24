#include<stdio.h>
#include<stdlib.h>

int filelength(FILE *fp){
    fseek(fp, 0, SEEK_END);
    int pos = ftell(fp);
    rewind(fp);
    return pos;
}

int main(){
    FILE *fp = NULL;
    char ch[20];
    char c;
    fp = fopen("abc.txt", "r");
    if(fp == NULL){
        printf("ERROR\n");
        exit(1);
    }
    int len = filelength(fp);
    printf("The length of file = %d\n", len);

    fseek(fp, 2, SEEK_SET);
    c = fgetc(fp);
    printf("Current position: %ld\n", ftell(fp));
    printf("The third element = %c\n", c);

    fclose(fp);
    return 0;
}