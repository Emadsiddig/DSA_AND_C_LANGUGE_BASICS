#include <stdio.h>

char str1[100],op;
int calnum1,calnum2,result,stringlength = 0;
float div;

void strlength() {
    char *p = str1;
    stringlength = 0;
    while (*p != '\0') {
        stringlength++;
        p++;
}
void is_even(int num1, int *flag) {
    if (num1 % 2 == 0) {
        *flag = 0;
    } else {
        *flag = 1;
    }
}

void calculator() {
    printf("Enter the operation you want using it's symbol(/,*,-,+,%): ");
    scanf(" %c", &op);

    if (op == '/')
    {
        div=(float)calnum1/calnum2;
        printf("The division is %.2f\n",div);   
    }
    else if (op == '-')
    {
           result=calnum1-calnum2;
           printf("The difference is %d\n",result);   
    }
    else if (op == '+')
    {
           result=calnum1+calnum2;
           printf("The addition is %d\n",result);
    }
    else if (op == '*')
    {
           result=calnum1*calnum2;
           printf("The product is %d\n",result);
    }
    else if (op == '%')
    {
           result=calnum1%calnum2;
           printf("The modulus is %d\n",result);      
    }
    else{
        printf("invalid symbol");
    }
}
//function for checking if a number is prime or not
int is_Prime(int n)
{
    int i;
    if (n < 2){ 
        return 0;
    }
    for (i = 2; i <= n / 2; i++) {
        if (n % i == 0) {
            return 0;
        }
    }
    return 1;
}

int main() {
    int flag = 0, num1,num2;
    printf("Input a string :");
    fgets(str1, sizeof(str1), stdin);
    strlength();
    printf("the length of the given string is : %d\n", stringlength-1);
    printf("enter two numbers:");
    scanf("%d %d", &calnum1, &calnum2);
    calculator();
    is_even(calnum1, &flag);
    if (flag == 0) {
        printf("%d is even\n", calnum1);
    } else {
        printf("%d is odd\n", calnum1);
    }
    num2 = is_Prime(calnum2);
    if (num2 == 1) {
        printf("%d is prime\n", calnum2);
    } else {
        printf("%d is not prime\n", calnum2);
    }
    return 0;
}
