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
 int matrix2[l][m];
 for(i=0;i<l;i++){
 	for(j=0;j<m;j++){
 	printf("enter the element[%d][%d]",i,j);
 	scanf("%d",&matrix2[i][j]);
 }	
 printf("\n");
 }	
 for(i=0;i<l;i++){
 	for(j=0;j<m;j++){
    sum[i][j]=(float)matrix1[i][j]+matrix2[i][j];
    	printf("%.2f ",sum[i][j]);
 }
  printf("\n");	
 }	
	return 0;
}
