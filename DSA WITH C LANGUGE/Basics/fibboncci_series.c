#include <stdio.h>

int main(){
	
	int fib1=1,fib2=1,fib,i,n;
	printf("enter the number of series you want:");
	scanf("%d",&n);
	printf("%d %d ",fib1,fib2);
	for(i=0;i<=n;i++){
		fib=fib1+fib2;
		fib1=fib2;
		fib2=fib;
		printf("%d ",fib);
	}
	
	return 0;
}