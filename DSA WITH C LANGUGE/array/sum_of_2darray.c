#include<stdio.h>

int main(){
int i,j,rows,cols;
printf("enter the number of rows:");
scanf("%d",&rows);
printf("enter the number of cols:");
scanf("%d",&cols);
//first array
float let[rows][cols];
printf("enter the array:");
for(i=0;i<rows;i++){
    for(j=0;j<cols;j++){
        scanf("%f",&let[i][j]);
    }
}
for(i=0;i<rows;i++){
    for(j=0;j<cols;j++){
        printf("%.0f",let[i][j]);
    }
    printf("\n");
}
// secand array
float let2[rows][cols];
printf("enter the secand array:");
for(i=0;i<rows;i++){
    for(j=0;j<cols;j++){
        scanf("%f",&let2[i][j]);
    }
}
for(i=0;i<rows;i++){
    for(j=0;j<cols;j++){
        printf("%.0f",let2[i][j]);
    }
    printf("\n");
}
//the sum of first and secand arrays
float sum[rows][cols];
for(i=0;i<rows;i++){
    for(j=0;j<cols;j++){
        sum[i][j]=let[i][j]+let2[i][j];
    }
}
printf("the sum is:\n");
for(i=0;i<rows;i++){
    for(j=0;j<cols;j++){
       printf("%.1f",sum[i][j]);
    }
     printf("\n");
}
    return 0;
}