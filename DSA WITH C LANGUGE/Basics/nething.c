#include <stdio.h>
int sum(int num1,int num2){
    int add=num1+num2;

    return add;
}
void main(){
 int num1,num2;
 printf("enter to numbers spreated by space: ");
 scanf("%d %d",&num1,&num2);
 sum(num1,num2);
printf("%d",sum(num1,num2));
    return 0;
}
