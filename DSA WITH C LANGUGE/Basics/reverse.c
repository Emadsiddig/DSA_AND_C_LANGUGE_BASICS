#include <stdio.h>

int main(){
	
	int n,i;
	printf("enter the number of elemant: ");
	scanf("%d",&n);
	char a[n];
	for(i=0;i<n;i++){
	printf("enter the elemant %d: ",i+1);
	scanf(" %c",&a[i]);
	}
	 printf("the inverse :");
	for(i=n-1;i>=0;i--){
    printf("%c\n",a[i]);
	}

	
	return 0;
}