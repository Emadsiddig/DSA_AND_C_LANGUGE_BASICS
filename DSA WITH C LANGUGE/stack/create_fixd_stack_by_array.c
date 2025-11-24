#include<stdio.h>
#define max 5
//work in del
int stack[max];
int top=-1;
    
void push(){
int num;
printf("enter the data to push:");
scanf("%d",&num);
 if(top == max-1){
    printf("is full.");
 }
 else{
    top++;
    stack[top]=num;
 }
}
void display(){
for(int i=0;i<=top;i++){
    printf("%d",stack[i]);
}
}
void backword_display(){
for(int i=top;i>=0;i--){
    printf("%d",stack[i]);
}
}
void pop(int top){
   
        printf("the del elemnt is:");
        printf("%d",stack[top]);
        top--;
    
}

int main(){
for(int i=0;i<max-1;i++){
    push();
}
// print the elements
display();
//backword display
printf("the backword display:\n");
backword_display();
//del by use pop()
pop(top);
// print the elements after del
display();
    return 0;
}