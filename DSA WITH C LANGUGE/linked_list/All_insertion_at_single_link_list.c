#include<stdio.h>
#include<stdlib.h>
 
struct node { 
    int data ;
    struct node *next;
};
void trevers(struct node*head){
    struct node *temp;
     temp=head;
    while( temp != 0){
        printf("%d",temp->data);
        temp=temp->next;
    }
}
struct node *insATbeg(struct node *head,int n){
    //create the node
    struct node *newnode,*temp;
    temp=head; 
    int num;
    printf("\nenter the new node to insert at the beginning:");
    scanf("%d",&num);
    newnode=(struct node *)malloc(sizeof(struct node));
    newnode->data=num;
    newnode->next=temp;
    head=newnode;
    n++;
    //travers after insrt 
    temp=head;
    printf("\nThe new node after insertion:\n");
    while( temp != 0){
        printf("%d",temp->data);
        temp=temp->next;
    } 
  return head;
}

struct node*insATpos(struct node *head,int n){
    struct node *temp,*newnode;
    int num,pos;
    printf("\nenter the new data to insert at any position: :");
    scanf("%d",&num);
    printf("\nenter the position:");
    scanf("%d",&pos);
    temp=head;
    for(int i=1;i<pos;i++){
      temp = temp->next; 
    }
    newnode=(struct node *)malloc(sizeof(struct node));
    newnode->data=num;
    newnode->next=0;
    newnode->next=temp->next;
    temp->next=newnode;
    return head;
}


struct node *insertfromend(struct node *head){
    int num;
  struct node *newnode=(struct node *)malloc(sizeof(struct node));
  struct node *temp=(struct node *)malloc(sizeof(struct node));
    printf("\nenter the data to insert at the end:");
    scanf("%d",&num);
    newnode->data=num;
    newnode->next=0;
    //insert
    temp=head;
    while(temp->next != NULL){
        temp=temp->next;
    }
    temp->next=newnode;
   
    

  return head;
}
int main(){
    //crate the first node 
    int num,n;
    printf("\nhow many nodes :");
    scanf("%d",&n);
    printf("\nenter the first data:");
    scanf("%d",&num);
    struct node *head =(struct node *)malloc(sizeof(struct node));
    head->data=num;
    head->next=0;
    //create the other nodes
    struct node *newnode,*temp,*tail;
    temp=head;
    for(int i=1;i<n;i++){
      newnode=(struct node *)malloc(sizeof(struct node));
      printf("\nenter the data:");
      scanf("%d",&num);
      newnode->data=num;
      newnode->next=0;
      temp->next=newnode;
      temp=newnode;
       tail =temp;
    }
    
    //inset from the beginning
    head =insATbeg(head,n);
    // insrt from position 
    head=insATpos(head,n);
    trevers(head);
   // insetr at the end 
   head=insertfromend(head);
   trevers(head);
    return 0; 
}