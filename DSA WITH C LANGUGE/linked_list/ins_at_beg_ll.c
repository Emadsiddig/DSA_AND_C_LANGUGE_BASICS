#include<stdio.h>
#include<stdlib.h>
//work on it 
struct node{
 int date;
 struct node *next;
};
void travers(struct node*head){
     struct node*temp =head;
     while(temp != NULL){
        printf("%d ",temp->date);
        temp=temp->next;
     }
}
void insertfrompos(struct node *head){
    int num,pos;
     struct node *newnode,*temp;
     
    printf("\nenter the data to insert:");
    scanf("%d",&num);
 
    newnode=(struct node*)malloc(sizeof(struct node));
    newnode->date=num;
    newnode->next=0;
    printf("\nenter the position:");
    scanf("%d",&pos);
    
    temp=head;
    for(int i=1;i<pos;i++){
      temp=temp->next;
    }
     newnode->next=temp->next;
     temp->next=newnode;
     temp=head;
     travers(head);
}      

void insertATend(struct node*tail){
  int num ;
  printf("entre the data to insert at the end:");
  scanf("%d",&num)


}
int main(){
    int n,num;
    printf("how many node to create:");
    scanf("%d",&n);
    //create first node 
    struct node *head=(struct node*)malloc(sizeof(struct node));
    printf("enter date 1 :");
    scanf("%d",&num);
    head->date=num;
    head->next=0;
    //create other nodes
     struct node *newnode,*temp,*tail;
     temp =head;
    for(int i=2;i<=n;i++){
       newnode=(struct node*)malloc(sizeof(struct node));
       printf("enter date %d :",i);
       scanf("%d",&num);
       newnode->date=num;
       newnode->next=0;
       temp->next=newnode;
       temp=temp->next;
       tail=temp; 
    }
    // traverse :like printing the data in nodes
   travers(head);
   // insert at begining
   insertfrompos(head);
     
    
    return 0;
}