#include<stdio.h>
void swap(int *a,int *b);

int main(){
int x=3,y=4;
printf("the value of a=%d tha value of b =%d\n",x,y);
int *num1,*num2;
num1=&x;
num2=&y;
swap(num1,num2);
return 0;
}
void swap(int *a,int *b){
	int c;
	c=*a;
	*a=*b;
	*b=c; 
	printf("a is=%d\nb=%d",*a,*b);
}
