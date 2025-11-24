#include<stdio.h>
//method one
int main(){
    long binary1=100,binary2=0100;

    int reminder=0,i=0,sum[20];

    while(binary1 != 0 || binary2 !=0){

        sum[i++]=(binary1 %10+ binary2 %10 +reminder)%2;
        reminder=(binary1 %10+ binary2 %10 +reminder)/2;
        binary1 =binary1/10;
        binary2 =binary2/10;
    }

    if(reminder != 0){
        sum[i++]=reminder;
    }
    i--;

    printf("the sum of elemen:");
    while(i>= 0){
        printf("%d",sum[i--]);
    
    }
    return 0;
}