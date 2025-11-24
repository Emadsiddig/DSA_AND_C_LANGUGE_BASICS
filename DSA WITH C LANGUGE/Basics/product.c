#include <stdio.h>
void main(){
	int i,n;
	float product=1;
	printf("enter tne number of array : ");
	scanf("%d",&n);
	float a[n];
	
	for(i=0;i<n;i++){
		printf("enter number %d",i+1);
		scanf("%f",&a[i]); 
		product*=a[i];
	}
	printf("the product= %.1f",product);
	
return 0;
}
