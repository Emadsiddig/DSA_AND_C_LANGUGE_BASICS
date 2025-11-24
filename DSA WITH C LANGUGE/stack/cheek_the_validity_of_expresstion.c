#include<stdio.h>
#include<stdbool.h>

#define str_size 100
#define stack_size 100

char stack[stack_size];
int top=-1;

void push(char openingBra){
 if(top >=stack_size-1){
    printf("stack overflow");
 }
 else{
    top++;
    stack[top]=openingBra;
 }
}
char pop(){
    if(top==-1){
        printf("stack is empty");
        return '\0';
    }
    else{
      char temp =stack[top];
      top--;
      return temp;
    }
}

bool isValid(char *str){
int i;
for(i=0;str[i]!='\0';i++){
    if(str[i]=='(' || str[i]=='{' || str[i]=='['){
        push(str[i]);
    }
    else if(str[i]==')' || str[i]=='}' || str[i]==']'){
        if(top==-1){
            return false;//unbalancy:closing bracket without opening bracket
        }
        char openingBracket=pop();
        if ((str[i]==')' && openingBracket!='(')||(str[i]=='}' && openingBracket!='{')||(str[i]==']' && openingBracket!='[')){
            return false;//unbalanced :mismatched bracket 
        }
    }
}
return top ==-1;//balanced if stack is empty
}
int main(){
 char str[str_size];
 printf("enter string of barnces to cheek if balanced");
scanf("%99s",str);

if(isValid(str)){
    printf("valid");
}
else{
    printf("not vaild");
}
    return 0;
}