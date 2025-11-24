#include<stdio.h>
int findCatalan(int n){
 long long i,j,catalan[n+1];
 catalan[0]=1;
 for(i=1;i<=n;i++){
  catalan[i]=0;
  for(j=0;j<i;j++){
    catalan[i]+=catalan[j]*catalan[i-j-1];

  }
 }
 return catalan[n];
}
int main(){
    int catnum,n;
     printf("enter the number of the clataln:");
     scanf("%d" ,&n);
    catnum =findCatalan(n);
   printf("the catlan number of %d is %d",n,catnum);
}