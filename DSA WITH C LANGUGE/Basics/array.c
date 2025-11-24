#include <stdio.h>

int main(){
	
	int n,i,sum=0;
	printf("enter the number of variable in array: ");
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++){
		printf("enter the elemant %d: ",i+1);
		scanf("%d",&a[i]);
		sum+=a[i];
	}
	for(i=0;i<n;i++){
		
    	printf("%d\n",a[i]);
	}
	printf("sumation=%d",sum);
	
	
	return 0;
}
