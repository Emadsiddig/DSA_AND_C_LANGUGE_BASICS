#include<stdio.h>
int main(){
	
	int num1,num2,*nu1,*nu2,sum;
	printf("enter the number 1:");
	scanf("%d",&num1);
	printf("enter the number 2:");
	scanf("%d",&num2);
	nu1=&num1;
	nu2=&num2;
	sum=*nu1+*nu2;
	printf("enter the SUM =%d",sum);
	
	
	return 0;
}
