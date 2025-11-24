#include <stdio.h>

void reverse_string(char std[]) {
int len=0,i=0;
while (std[i] !='\0'){
i++;
len++;   
}
for(i=len-1;i>=0;i--){
	printf("%c",std[i]);
}
}
int main() {
    char name[20];
    printf("Enter eyour name: ");
    fgets(name, sizeof(name), stdin);
    reverse_string(name); 

     return 0;
}
//by pointer 
void div(char *p){
	int len=0,i=0;
	while (*p+i!='\0')
	{
	len++;
	i++;
	}
	for(int i=len-1;i>=0;i--){
		printf("%c",*p+i)
	}
}

