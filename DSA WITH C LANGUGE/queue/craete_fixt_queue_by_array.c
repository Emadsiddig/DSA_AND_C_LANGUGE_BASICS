#include<stdio.h>
#define max 5
int queue[max];
int front=-1;
int rear=-1;

void enqueue(){
  int num;
  printf("enter the data:");
  scanf("%d",&num);
  if(rear == max-1){
    printf("the queue is full.");
  }
  else if(rear==-1 && front==-1){
    rear++;
    front++;
    queue[rear]=num;
  }
  else{
    rear++;
    queue[rear]=num;
  }
}
void dequeue(){
    if(front == -1 && rear==-1){
        printf("empty");
    }
    else if(rear==front){
     front=-1;
     rear=-1;
    }
    else{
        front++;
    }
}
int peek(){
    if(front==-1){
        printf("empty");
    }
    else{
        printf("\nthe front numbr is:%d",front);
    }
}
int main(){
    int n;
    printf("\nhow many data to insert:");
    scanf("%d",&n);
//function to input ele
for(int i=0;i<n;i++){
  enqueue();
}
  //display
  printf("\nele in queue are: \n");
  for(int i=front;i<=rear;i++){
    printf("%d",queue[i]);
  }  
// to del front 
 dequeue();
   //display afret del 
  printf("\nele in queue after del: \n");
  for(int i=front;i<=rear;i++){
    printf("%d",queue[i]);
  } 
  front ++;
  //display the front ele 
   peek(); 
 
    return 0;
}