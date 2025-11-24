#include <stdio.h>
int main(){
 int l,m,i,j;
 printf("enter the number of raw: ");
 scanf("%d",&l);
 printf("enter the number of col: ");
 scanf("%d",&m);
 int matrix1[l][m];
 for(i=0;i<l;i++){
 	for(j=0;j<m;j++){
 	printf("enter the element[%d][%d]",i,j); 
	 scanf("%d",&matrix1[i][j]) ;   
	  }	
   printf("\n");
   }
 for(i=0;i<l;i++){
   int sumr=0;	
    for(j=0;j<l;j++){
     sumr+=matrix1[i][j];
    }
   printf("the sum of row %d =%d\n",i+1,sumr);
  }	
 for(i=0;i<l;i++){
   int sumcol=0;	
    for(j=0;j<l;j++){
     sumcol+=matrix1[i][j];
    }
   printf("the sum of columns %d =%d\n",i+1,sumcol);
  }	
 	  
	return 0;
}
