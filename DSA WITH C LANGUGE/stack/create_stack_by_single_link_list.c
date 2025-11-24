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
struct node* pop(struct  node *head){
    struct node *deln;
    if(head == NULL){
        printf("Stack is empty.\n");
        return NULL;
    }
    deln = head;
    printf("\nPopped element is: %d\n", deln->date);
    head = head->next;
    free(deln);
    return head;
}
void peek(struct node *top){
     if(top == NULL){
        printf("Stack is empty.\n");
    }
    else{
    printf("the top is %d",top->date);
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
     struct node *newnode,*temp,*top;
     temp =head;
    for(int i=2;i<=n;i++){
       newnode=(struct node*)malloc(sizeof(struct node));
       printf("enter date %d",i);
       scanf("%d",&num);
       newnode->date=num;
       newnode->next=0;
       temp->next=newnode;
       temp=temp->next;
       top=temp;
    }
    // traverse 
    travers(head);
    //pop
    head=pop(head);
     travers(head);
     //peek 
     peek(top);
    return 0;
}