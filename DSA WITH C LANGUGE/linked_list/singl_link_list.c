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
int countLength(struct node *head) {
    int count = 0;
    struct node *temp = head;
    while(temp != NULL) {
        count++;
        temp = temp->next;
    }
    return count;
}

void reverse(struct node *head){
    struct node *temp ;
    struct node *next=0 ;
    struct node *prev=0 ;
    temp =head;
  while(temp != 0){
    next=temp->next;
    temp->next=prev;
    prev=temp;
    temp=next;
    
  }
  head=prev;
  temp=head;
  while(temp != 0){
    printf("\n%d",temp->date);
    temp=temp->next;
  }
 


}
int main(){
    int n,num;
    printf("how many node :");
    scanf("%d",&n);
    //create first node 
    struct node *head=(struct node*)malloc(sizeof(struct node));
    printf("enter date 1");
    scanf("%d",&num);
    head->date=num;
    head->next=0;
    //create other nodes
     struct node *newnode,*temp;
     temp =head;
    for(int i=2;i<=n;i++){
       newnode=(struct node*)malloc(sizeof(struct node));
       printf("enter date %d",i);
       scanf("%d",&num);
       newnode->date=num;
       newnode->next=0;
       temp->next=newnode;
       temp=temp->next;
    }
    // traverse :like printing the data in nodes
   travers(head);
   //revares the single link list
   reverse (head);
   //count th length of link list
   printf("\nLength of the linked list: %d\n", countLength(head));
    return 0;
}