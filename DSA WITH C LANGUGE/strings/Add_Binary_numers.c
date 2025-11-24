#include<stdio.h>
#include<string.h>

void sumt(char binary1[],char binary2[],int l1,int l2){
    int num1,num2,i,carry=0,temp;
    char result[100];
    result[l1 + 1] = '\0';

    while(l2>=0){
        num1=binary1[l1-1]-'0';
        num2=binary2[l2-1]-'0';
        temp=num1+num2+carry;
        carry=temp/2;
        temp=temp%2;
        result[l1]=temp+'0';
        l1--;
        l2--;
    }
    while(l1-1>=0){
        temp=binary1[l1-1]-'0' + carry;
        carry=temp/2;
        temp=temp%2;
        result[l1]=temp+'0';
        l1--;
    }
    if(carry){
        result[0]='1';
    }
    else{
        for(int i=0;i<strlen(result);i++){
            result[i]=result[i+1];
        }
    }
    
        printf("the sum =%s",result);
}

int main(){
      char bi1[100] = "10001", bi2[100] = "111";
    int l1 = strlen(bi1), l2 = strlen(bi2);

    sumt(bi2, bi1, l2, l1);
return 0;
}