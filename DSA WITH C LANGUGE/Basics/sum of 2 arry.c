#include<stdio.h>

int main(){
	
	int a[5],b[5],c[5],i;
	
	printf("enter 10 numbers in array a: ");
	for(i=0;i<5;i++)
		scanf("%d",&a[i]);
	
	printf("\nenter 10 numbers in array b: ");
	for(i=0;i<5;i++)
		
		scanf("%d",&a[i]);
	
   for(i=0;i<5;i++){
   c[i]=a[i]+b[i];
   printf("the element in index %d =%d\n",i,c[i]);
   }
   
   
   
return 0;
}
