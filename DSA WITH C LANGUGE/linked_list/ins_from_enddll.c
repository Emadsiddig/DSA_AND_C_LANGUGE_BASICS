#include<stdio.h>
#include<stdlib.h>

struct node {
    int data;
    struct node *prev;
    struct node *next;
};

void trevers(struct node *head){
    struct node *temp = head;
    while(temp != 0){
        printf("%d ", temp->data);
        temp = temp->next;
    }
    printf("\n");
}

// Change: Pass pointer to pointer to update head
struct node *insFROMend(struct node *tail){
    int num;
    printf("enter the data to ins : ");
    scanf("%d", &num);
    struct node *newnode = (struct node *)malloc(sizeof(struct node));
    newnode->data = num;
    newnode->next=0;
    tail->next=newnode;
    newnode->prev=tail;
    
    return tail;
    
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
    struct node *newnode, *temp,*tail;
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
        tail=newnode;
    }
    //trevers
   trevers(head);
    //ins from end
   tail= insFROMend(tail);
   trevers(head);
    return 0;
    }