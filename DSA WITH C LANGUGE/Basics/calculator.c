#include<stdio.h>
int main(){
	
	char name[100],*p;
	int v=0,constant=0,digits=0,spaces=0;
	printf("enter the string:");
	scanf("%s",name);
	p=&name[0];
	while(*p!='\0'){
	
	switch(*p){
	case 'i': case'I':
	case 'o': case'O':
	case 'e': case'E':	
	case 'a': case'A':
	case 'u': case'U':
	v++;
	break;
	case '0': case'5':
	case '1': case'6':
	case '2': case'7':	
	case '3': case'8':
	case '4': case'9':
		digits++;
		break;
	case ' ':
	spaces++;
	break;
	default :
		constant++;	
	}
	p++;
	}
	printf("the vowel= %d\n",v);
	printf("the constans= %d",c);
	return 0;
}