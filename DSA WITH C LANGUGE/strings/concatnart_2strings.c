#include<stdio.h>


void concat(char *st1,char  *st2){
    int i=0;

    while (st1[i]!= '\0'){
       i++;
    }
    int j=0;
    while (st2[j] != '\0')
    {
        st1[i]=st2[j];
        i++;
        j++;
    }
    
    st1[i]='\0';
}
int main(){
    char st1[]="hello";
    char st2[]="emad";

    concat(st1,st2);

    printf("%s ",st1);
    return 0;  
}