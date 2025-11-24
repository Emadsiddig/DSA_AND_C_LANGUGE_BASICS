/*// no arg no rt
#include<stdio.h>
void sum1(void);
int main(){
    sum1();
    return 0;
}
void sum1(){
    int c=9,d=6,sum2=0;
   sum2=c+d;
   printf("the sum =%d",sum2);
}
//no arg with rt
#include<stdio.h>
int sum(void);
int main(){
   int r= sum(); 
   printf("the summ in 2=%d",r);
    return 0;
}
int sum(){
    int a=9,b=6,summ=0;
   summ=a+b;
   return summ;
}*/
//wih arg no rt
#include<stdio.h>
void prime(int); // function prototype

int main(){
    int a;
    printf("enter a number: ");
    scanf("%d",&a);
    prime(a); // call the function
    return 0;
}

void prime(int x){
    int i, flag = 0;
    if(x <= 1){
        printf("%d is not a prime number.\n", x);
        return;
    }
    for(i = 2; i <= x/2; i++){
        if(x % i == 0){
            flag = 1;
            break;
        }
    }
    if(flag == 0)
        printf("%d is a prime number.\n", x);
    else
        printf("%d is not a prime number.\n", x);
}