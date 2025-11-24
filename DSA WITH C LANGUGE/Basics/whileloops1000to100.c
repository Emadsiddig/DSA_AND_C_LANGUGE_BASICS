#include <stdio.h>

int main(){
	
	int marks[5];
	int sum=0,avg,i;
	
	 for(i=1;i<5;i++){
	 scanf("%d",&marks[i]);
	 }
	 for(i=0;i<5;i++){
	 	sum+=marks[i];
	 }
	 avg=sum/5;
	 	printf("%d",marks[i]);
	 	printf("%d",sum);
	return 0;
}
