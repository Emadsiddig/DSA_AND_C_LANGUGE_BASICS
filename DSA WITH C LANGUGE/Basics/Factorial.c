#include<stdio.h>


int main(){

    int num;
    int mult=1;
    printf("enter number:");
    scanf("%d",&num);

    for(int i=1;i<=num;i++){
         mult*=i;
    }
    
        printf("factorila =%d",mult);
    return 0;
}
