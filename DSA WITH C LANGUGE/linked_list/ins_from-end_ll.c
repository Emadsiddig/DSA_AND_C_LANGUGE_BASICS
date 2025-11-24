#include<stdio.h>
#include<stdlib.h>
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
void insertfromend(struct node *head){
    int num;
  struct node *newnode=(struct node *)malloc(sizeof(struct node));
  struct node *temp=(struct node *)malloc(sizeof(struct node));
    printf("\nenter the data to insert at the end:");
    scanf("%d",&num);
    newnode->date=num;
    newnode->next=0;
    //insert
    temp=head;
    while(temp->next != NULL){
        temp=temp->next;
    }
    temp->next=newnode;
    printf("\n the nodes after insert:\n");
     travers(head);
    

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
     struct node *newnode,*temp;
     temp =head;
    for(int i=2;i<=n;i++){
       newnode=(struct node*)malloc(sizeof(struct node));
       printf("enter date %d :",i);
       scanf("%d",&num);
       newnode->date=num;
       newnode->next=0;
       temp->next=newnode;
       temp=temp->next;
    }
    // traverse :like printing the data in nodes
   travers(head);
   // insert at begining
   insertfromend(head);
     
    
    return 0;
}