#include<stdio.h>
int main(){
    int a,b,i,j;
    printf("enter the nummber of row:");
    scanf("%d",&a);
    printf("enter the nummber of columns:");
    scanf("%d",&b);
    int arr[a][b];
    printf("enter the element of array:");
  for(i=0;i<a;i++){
    for(j=0;j<b;j++){
   
    scanf("%d",&arr[i][j]);
    }
  }
  printf("the elemant of 2d array is :");
   for(int i=0;i<a;i++){
    for(int j=0;j<b;j++){
    printf("%d",arr[i][j]);
    }
    printf("\n");
  }

    return 0;
}