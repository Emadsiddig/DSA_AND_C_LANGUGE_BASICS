#include<stdio.h>
#include<stdlib.h>

struct node {
    int data;
    struct node *prev;
    struct node *next;
};

void trevers(struct node *head){
    struct node *temp = head;
    while(temp != NULL){
        printf("%d ", temp->data);
        temp = temp->next;
    }
    printf("\n");
}

// Change: Pass pointer to pointer to update head
struct node *insFROMpos(struct node *head,int n){
    int num,pos;
    printf("enter the data: ");
    scanf("%d", &num);
    struct node *newnode = (struct node *)malloc(sizeof(struct node));
    newnode->data = num;
    newnode->next=0;
    newnode->prev=0;
    printf("enter the position :");
    scanf("%d", &pos);
    if(pos>n){
        printf("the position is not exist");
    }
    else{
    struct node *temp;
    temp=head;
for(int i=1;i<pos-1;i++){
    temp=temp->next;
}
newnode->prev=temp;
newnode->next=temp->next;
temp->next->prev=newnode;
temp->next=newnode;
    }
    trevers(head);
    return newnode;
}

int main(){
    int n, num;
    printf("enter the number of nodes: ");
    scanf("%d", &n);
    //create the first node
    struct node *head = (struct node *)malloc(sizeof(struct node));
    printf("entet the first date: ");
    scanf("%d", &num);
    head->data = num;
    head->prev = 0;
    head->next = 0;
    //create the other nodes
    struct node *newnode, *temp;
    temp = head;
    for(int i = 1; i < n; i++){
        newnode = (struct node *)malloc(sizeof(struct node));
        printf("enter the data %d: ", i);
        scanf("%d", &num);
        newnode->data = num;
        newnode->prev = 0;
        newnode->next = 0;
        temp->next = newnode;
        newnode->prev = temp;
        temp = newnode;
    }
    //trevers
    trevers(head);
    //ins from beg
    insFROMpos(head,n);
    return 0;
    }