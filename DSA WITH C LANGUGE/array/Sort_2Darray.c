#include<stdio.h>


void sortRows(int arr[][4],int r,int c){

    int temp=0,i,k,j;
    for( i=0;i<r;i++){

     for(j=0;j<c;j++){

      for(k=0;k<c-j-1;k++){
        if(arr[i][k] > arr[i][k+1]){
          temp=arr[i][k];
          arr[i][k]=arr[i][k+1];
          arr[i][k+1]=temp;
       }
      }
     }
    }
     printf("the sorted array :\n");
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            printf("%d ",arr[i][j]);
          
        }
          printf("\n");
    }
}

int main()
{
    // Input Array
    int arr[][4] = { { 8, 5, 7, 2 },
                     { 7, 3, 0, 1 },
                     { 8, 5, 3, 2 },
                     { 9, 4, 2, 1 } };

    // print input array
    printf("\n Input Array \n");
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            printf(" %d", arr[i][j]);
        }
        printf("\n");
    }

    sortRows(arr, 4, 4);
    return 0;
}