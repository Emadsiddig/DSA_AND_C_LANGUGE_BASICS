#include <stdio.h>


int reverse_string(char std[]) {
int len=0,i=0;
while (std[i] !='\0'){
i++;
len++;   
}
for(i=len-1;i>=0;i--){
	printf("%c",std[i]);
}
printf("\n");
}
int main() {
    char name[20];
    printf("Enter eyour name: ");
   scanf("%s",&name);
    reverse_string(name); 
    
    return 0;
}


