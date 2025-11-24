#include<stdio.h>
#include<ctype.h>
#include<string.h>

int main(){
   char str[30]="emad siddig ahmed";
    int l=strlen(str);

    char re[30];
    int m=0;
    for(int i=0;i<l;i++){
        if(i=0){
          re[m]=toupper(str[i]);
          m++;
        }
        else if(str[i]==' '){
                str[i+1]=toupper(str[i+1]);
                re[m]=str[i+1];
                m++;
        }
    }
    re[l]=' ';
    int lenght =strlen(re);
    for(int i=0;i<lenght;i++){
        printf("%d ",re[i]);
        if(re[i]==' '){
            break;
        }
    }
    return 0;
}