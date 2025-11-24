#include<stdio.h>
int main(){
	int i;
	int arr[8],max;
	printf("enter 8 numbers:"); 
	for(i= 0;i<8;i++){
		scanf("%d",&arr[i]);
		if(i == 0 || arr[i]> max){
			max = arr[i];
		}	
	}
	printf("largest number = %d",max);
	
	return 0;
}
