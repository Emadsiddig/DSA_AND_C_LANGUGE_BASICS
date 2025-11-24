#include <stdio.h>

int main(){
 int i,col[4],sm=0;
 for(i=0;i<=3;i++){
 	printf("enter the s: ");
 	scanf("%d",&col[i]);
	 }
for(i=0;i<=3;i++){
	printf("the  out put %d\n",col[i]);
	sm=sm+col[i];
}
 	printf("the sum =%d",sm);
	
return 0;
}
