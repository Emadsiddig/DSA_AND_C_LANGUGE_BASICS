#include<stdio.h>
int main(){
	int i;
	int arr[10], even = 0, odd =0;
	printf("enter 10 integers:"); 
	for(i= 0;i< 10;i++){
	scanf("%d \n",&arr[i]);
	if(arr[i] % 2 == 0) even++;
	else odd++;
	}
	printf("enter :%d, odd:%d",even,odd);
	
	
	
	
	return 0;
}
