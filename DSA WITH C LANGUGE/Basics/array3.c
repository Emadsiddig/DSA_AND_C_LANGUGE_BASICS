#include <stdio.h>
int main(){
 int l,m,i,j;
 int sum=0;
 printf("enter the number of raw: ");
 scanf("%d",&l);
 printf("enter the number of col: ");
 scanf("%d",&m);
 int matrix1[i][j];
 for(i=0;i<l;i++){
 	for(j=0;j<m;j++){
 	printf("enter the element[%d][%d]",i,j);
 	scanf("%d",&matrix1[i][j]);
 }	
 printf("\n");
 }	
 
 for(i=0;i<l;i++){
 	for(j=0;j<m;j++){
    sum+=matrix1[i][j];
    
 }
  
 }	
 	printf("%d ",sum);
	return 0;
}
