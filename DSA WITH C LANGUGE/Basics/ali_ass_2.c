#include<stdio.h>
int main(){
	int i;
	int arr[10];
	int sum =0;
	printf("enter 10 numbers:"); 
	for(i= 0;i<10;i++){
		scanf("%d",&arr[i]);
		sum+= arr[i];
		
	}
	printf("sum = %d",sum);
	return 0;
}
