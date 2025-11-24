#include <stdio.h>

int main(){
	
	int n,i;
	printf("enter the number of elemant: ");
	scanf("%d",&n);
	char a[n];
	for(i=0;i<n;i++){
	printf("enter the elemant %d: ",i+1);
	scanf(" %s",&a[i]);
	}
	 
	printf("n=%d",n);
	

	
	return 0;
}
