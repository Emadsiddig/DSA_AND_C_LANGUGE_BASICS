#include <stdio.h>

int main(){
 int l,m,i,j,s;
 
 printf("enter the number of raw: ");
 scanf("%d",&l);
 printf("enter the number of col: ");
 scanf("%d",&m);
 int  mult[l][m];
 int matrix1[l][m];
 	printf("enter the martix1\n");
 for(i=0;i<l;i++){
 	for(j=0;j<m;j++){
 	printf("enter the element[%d][%d]",i,j);
 	scanf("%d",&matrix1[i][j]);
 }	
 printf("\n");
 }	
 int matrix2[l][m];
 	printf("enter the martix2\n");
 for(i=0;i<l;i++){
 	for(j=0;j<m;j++){
 	printf("enter the element[%d][%d]",i,j);
 	scanf("%d",&matrix2[i][j]);
 }	
 printf("\n");
 }
 	
 for(i=0;i<l;i++){
 	for(j=0;j<m;j++){
 		mult[i][j]=0;
 		for(s=0;s<m;s++){
 			mult[i][j] +=matrix1[i][s] * matrix2[s][j];
		 }  	 
    }
  printf("\n");	
  }	
 for(i=0;i<l;i++){
 	for(j=0;j<m;j++){
 		printf("%d ",mult[i][j]);
 		
	 }
	  printf("\n");
 }
	return 0;
}
