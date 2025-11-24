#include <stdio.h>


void reverse_string(char *p) {
int len=0,i=0;
while (*(p+i) != '\0'){
    len++;   
    i++;
}
for(i=len-1;i>=0;i--){
	printf("%c", *(p+i));
}
printf("\n");
}
int main()  {
    char name[100];
   
    printf("Enter eyour name: ");
    scanf("%s",name);
     char *p=&name[0];
     printf("the string %s\n ",name);
    reverse_string(p); 
    
    return 0;
}


