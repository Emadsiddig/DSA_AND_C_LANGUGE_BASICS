#include<stdio.h>
int main(){
	int n;
	int num[n],i,s=0;
	printf("enter the number of the element:");
	scanf("%d",&n);
	for(i=0;i<n;i++){
	printf("the element %d:",i+1);
	scanf("%d",&num[i]);
	s+=1;
	}
	for(i=s;i>s;s--){
	 printf("%d",num[s]);	
	}
	
	return 0;
}
