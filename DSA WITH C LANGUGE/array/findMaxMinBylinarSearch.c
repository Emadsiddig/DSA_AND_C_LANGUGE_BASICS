#include<stdio.h>

struct pair {
    int min;
    int max;
};

struct pair getmaxmin(int a[],int n){
    struct pair minmax; 
    if(n==1){
        minmax.min=a[0];
        minmax.max=a[0];
        return minmax;
    }
    else if(a[1]>a[0]){
        minmax.min=a[0];
        minmax.max=a[1];
    }
    else{
        minmax.min=a[1];
        minmax.max=a[0];
    }
    
    for(int i=2;i<n;i++){
        if(a[i]>minmax.max){
            minmax.max=a[i];
        }
        else if(a[i]<minmax.min){
            minmax.min=a[i];
        }
    }
    return minmax;
}

int main(){
    int a[]={2,3,5,7,8,9,77};
    int n=7;
    struct pair minmax = getmaxmin(a,n); 
    printf("the minimum is %d",minmax.min);
    printf("\nthe maximum is %d",minmax.max);

    return 0;

}