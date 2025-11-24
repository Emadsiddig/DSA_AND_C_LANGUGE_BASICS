#include<stdio.h>
#include<stdlib.h>


struct node {
    int data;
    struct node *next;
};

void revers(struct node *head){
 struct node *curnode,*prevnode,*nextnode,*temp;
 prevnode=0;
 nextnode=curnode=head;
 while(nextnode != 0){
    nextnode=nextnode->next;
    curnode->next=prevnode;
    prevnode=curnode;
    curnode=nextnode;
}
head=prevnode;
temp=head;
while(temp!= 0){
 printf("%d ->",temp->data);
 temp=temp->next;
}
printf("null\n");
}
int main(){
int data;
printf("enter the first data: ");
scanf("%d",&data);
int n;
printf("enter the size of liked list: ");
scanf("%d",&n);
struct node *head,*temp;
head=(struct node *)malloc(sizeof(struct node));
head->data=data;
head->next=0;\
temp=head;
for(int i=0;i<n;i++){
struct node *nn=(struct node *)malloc(sizeof(struct node));
printf("enter the data: ");
scanf("%d",&data);
nn->data=data;
nn->next=0;
temp->next=nn;
temp=nn;
}
temp=head;
while(temp!= 0){
 printf("%d ->",temp->data);
 temp=temp->next;
}
printf("null");

revers(head);
return 0;
}