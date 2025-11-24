#include<stdio.h>

int partions(int a[],int lb,int ub){
 int piovt=a[lb];
 int start=lb;
 int end=ub;
 while(start<end){

    while(a[start]<=a[piovt]){
        start++;
    }
    while(a[end]>piovt){
        end--;
    }
    if(start<end){
    int temp=a[start];
    a[start]=a[end];
    a[end]=temp;
    return end;
    }
}
 
}

void Quick_sort(int a[],int lb,int ub){
  if(lb<ub){
   int loc=partions(a,lb,ub);
   Quick_sort(a,lb,loc-1);
   Quick_sort(a,loc+1,ub);
  }
}

int main(){  
    int a[]={4,5,6,7,2,19};
    int n=6;
    int lb=0;
    int ub=n-1;
   Quick_Sort(a,lb,ub);
   for(int i=0;i<n;i++){
    printf("%d ",a[i]);
   }
   
return 0;
}