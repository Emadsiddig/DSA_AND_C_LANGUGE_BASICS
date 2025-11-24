#include <stdio.h>

int main() {
    int l,m, i, j;
 printf("enter the number of raw: ");
 scanf("%d",&l);
 printf("enter the number of col: ");
 scanf("%d",&m);
 int a[l][m];
    int determinant;
    printf("Enter elements of 3x3 matrix:\n");
    for(i=0;i<l;i++) {
        for(j=0;j<m;j++) {
        printf("enter the element[%d][%d]",i,j);	
        scanf("%d", &a[i][j]);
        }
    }
    determinant = a[0][0]*(a[1][1]*a[2][2] - a[1][2]*a[2][1])
                - a[0][1]*(a[1][0]*a[2][2] - a[1][2]*a[2][0])
                + a[0][2]*(a[1][0]*a[2][1] - a[1][1]*a[2][0]);

    printf("Determinant of the matrix = %d\n", determinant);

    return 0;
}
