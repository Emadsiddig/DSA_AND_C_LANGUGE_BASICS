#include<stdio.h>
#include<stdlib.h>
/// complet the backword traverse
struct node {
    int data;
    struct node *prev;
    struct node *next;
};

void trevers(struct node *head){
    if(head == NULL) return;
    struct node *temp = head;
   while(temp != head){
        printf("%d ", temp->data);
        temp = temp->next;
    } 
    printf("\n");
}


int main(){
    int n, num;
    printf("enter the number of nodes:");
    scanf("%d", &n);
    //create the first node
    struct node *head = (struct node *)malloc(sizeof(struct node));
    printf("entet the first date:");
    scanf("%d", &num);
    head->data = num;
    head->prev = 0;
    head->next = 0;
    //create the other nodes
    struct node *newnode, *temp, *tail;
    temp = head;
    tail = head;
    for(int i = 1; i < n; i++){
        newnode = (struct node *)malloc(sizeof(struct node));
        printf("enter the data %d:", i);
        scanf("%d", &num);
        newnode->data = num;
        newnode->prev = 0;
        newnode->next = 0;
        temp->next = newnode;
        newnode->prev = temp;
        temp = newnode;
        tail = newnode;
    }
    //circalar double link list 
    head->prev=tail;
    tail->next=head;
   
    //trevers
    temp=head;
    int first =1;
    while(temp != head || first){
        printf("%d ", temp->data);
        temp = temp->next;
        first=0;
    }
  

    return 0;
}