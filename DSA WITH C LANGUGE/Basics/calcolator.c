#include <stdio.h>

int main() {
    int num1,num2;
    float num3;
    char op;
    printf("Enter the operation you want using it's symbol: ");
    scanf(" %c", &op);
    switch (op)
    {
    case '/':
        printf("enter the numbers for division(separated by space):");
        scanf("%d %d",&num1,&num2);
        num3=(float)num1/num2;
        printf("The division is %.2f",num3);
        break;
    case '-':
     printf("enter the numbers for subtraction(separated by space):");
        scanf("%d %d",&num1,&num2);
        num3=num1-num2;
        printf("The difference is %.0f",num3);
        break;
    case '+':
     printf("enter the numbers for addition(separated by space):");
        scanf("%d %d",&num1,&num2);
        num3=num1+num2;
        printf("The addition is %.0f",num3);
        break;
    case '*':
     printf("enter the numbers for multiplication(separated by space):");
        scanf("%d %d",&num1,&num2);
        num3=num1*num2;
        printf("The product is %.0f",num3);
        break;
    case '%':
     printf("enter the numbers for modulus(separated by space):");
        scanf("%d %d",&num1,&num2);
        num3=num1%num2;
        printf("The product is %.0f",num3);
        break;
    default :
        printf("invalid symbol");
    }
    return 0;
}