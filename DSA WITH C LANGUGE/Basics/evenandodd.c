#include<stdio.h>

int main(){
	
	int a[10],i;
	int ev=0,od=0;
	
	for(i=0;i<10;i++){
		printf("enter the numbers: ");
		scanf("%d",&a[i]);
	}
	for(i=0;i<10;i++){
		if(a[i]%2==0){
			
			ev=ev+1;
		}
		else{
		
			od=od+1;
		}
	}
	printf("even =%d ",ev);
	printf("odd =%d ",od);
	
	return 0;
}
