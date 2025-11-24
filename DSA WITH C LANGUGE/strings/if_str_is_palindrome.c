#include<stdio.h>
#include<string.h>
#include<stdlib.h>


char *revers(char *str){
    int len=strlen(str);
    char *rev =(char *)malloc(sizeof(str)*len+1);

    for(int i=0;i<len;i++){
        rev[i]=str[len-i-1];
    }
    rev[len]='\0';

    return rev;
}
void ispalindrome(char *str){
  char *reve=revers(str);
  if(strcmp(str,reve)==0){// strcmp to compare the strings
    printf("the string( %s )is palindrome.",str);
  }
  else{
    printf("the string (%s )is not palindrome.",str);
  }

}
int main(){
 ispalindrome("hello");
 ispalindrome("madam");
 return 0;
}