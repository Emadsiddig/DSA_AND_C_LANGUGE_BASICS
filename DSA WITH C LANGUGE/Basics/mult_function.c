#include <stdio.h>
int num1,num2,fl;
char str_len();
void odd_or_even(int);
void calculater(); 
int prime();
int main(){
str_len();
printf("enter the first number:");
scanf("%d",&num1);
odd_or_even(num1);
printf("enter the secand number:");
scanf("%d",&num2);
prime();
if(fl==1){
	printf("prime\n");
}
else{
	printf("not prime\n");
}
calculater();
return 0;
}
char str_len(){

  char name[100],*p;
  int len=0;
  printf("enter ur name: ");
  gets(name);
  p=&name[0];
  while(*p!='\0'){
  p++;
  len++;
  }
  printf("the string length =%d\n",len);
  
}
	

int prime(int){
if(num2<2){
  return 0;
}
   for (i = 2; i <= n / 2; i++) {
        if (n % i == 0) {
            return 0;
        }
    }
    return 1;
  }
void odd_or_even(num1){
  
  if(num1%2==0){
    printf("the num is even\n");
  }
   else{
  printf("the num is odd\n");
  }    
}
void calculater() {
    int result;
    float div;
    char calcu;
    printf("enter the operation you want:");
    scanf(" %c",&calcu);
    switch(calcu){
	
    	
    case'/':
    div=(float)num1/num2;
    printf("The division is %.2f\n",div);
    break;
    case '-':
    result=num1-num2;
    printf("The difference is %d\n", result);
    break;
     case '+':
    result=num1+num2;
    printf("The addition is %d\n", result);
    break;
     case '*':
    result=num1*num2;
    printf("The product is %d\n", result);
    break;
     case '%':
    result=num1%num2;
    printf("The module is %d\n", result);
    break;
    default: 
    	printf("invalid");
	}
}

