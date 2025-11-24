#include<stdio.h>
#include <ctype.h>

int main(){
  char ch;
  printf("enter a charecter:");
  scanf("%c",&ch);
  ch=tolower(ch);
  switch (ch)
  {
  case 'a': case 'e':case 'o':case 'u':case 'i':
    printf("the charecter is vowel");
    break;
  
  default:
  printf("the charecter is constant");
    break;
  }
    return 0;
}