#include <stdio.h>
int main(){
 int l,m,i,j;
 float sum[l][m];
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
 int sum1=0,sum2=0;
 for(i=0;i<l;i++){
 	for(j=0;j<m;j++){
    sum+=matrix1[i][0];
 }
 int sum2+=matrix1[0][j];
 	
 }	
 printf("%d %d ",sum1,sum2);
	return 0;
}
