#include<stdio.h>

int main(){
   int a=1;
   int b=2;
   int e=3;
   int large;

   if(a >= b && a >= e){
       large = a;
   }
   else if(b >= a && b >= e){
       large = b;
   }
   else{
       large = e;
   }

   printf("The largest number is: %d\n", large);