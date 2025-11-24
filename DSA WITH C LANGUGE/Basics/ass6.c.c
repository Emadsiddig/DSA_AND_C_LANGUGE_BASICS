#include <stdio.h>

int main() {
    int l, m, i, j;

    printf("Enter the number of rows: ");
    scanf("%d", &l);
    printf("Enter the number of columns: ");
    scanf("%d", &m);
    int matrix[l][m];
    for (i = 0; i < l; i++) {
        for (j = 0; j < m; j++) {
        printf("Enter element [%d][%d]: ", i, j);
        scanf("%d", &matrix[i][j]);
        }
    }
    printf("\nRow-wise largest and smallest:\n");
    for (i = 0; i < l; i++) {
        int rowMax = matrix[i][0];
        int rowMin = matrix[i][0];
        for (j = 1; j < m; j++) {
            if (matrix[i][j] > rowMax) {
            rowMax = matrix[i][j];	
			}
            if (matrix[i][j] < rowMin){
            	 rowMin = matrix[i][j];
			}
        }
        printf("Row %d ? Max: %d, Min: %d\n", i, rowMax, rowMin);
    }

    printf("\nColumn-wise largest and smallest:\n");
    for (j = 0; j < m; j++) {
        int colMax = matrix[0][j];
        int colMin = matrix[0][j];
        for (i = 1; i < l; i++) {
            if (matrix[i][j] > colMax) {
            	colMax = matrix[i][j];
			}
            if (matrix[i][j] < colMin){
            	colMin = matrix[i][j];
			} 
        }
        printf("Column %d ? Max: %d, Min: %d\n", j, colMax, colMin);
    }

    return 0;
}
