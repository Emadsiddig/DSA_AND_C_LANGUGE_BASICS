#include<stdio.h>
#include<stdlib.h>
// 
struct node {
    int data;
    struct node *prev;
    struct node *next;
};

void trevers(struct node *head){
    struct node *temp;
    temp = head;
    while(temp != NULL){
        printf("%d ", temp->data);
        temp=temp->next;
    }
    printf("\n");
}

void traversback(struct node *tail){
    struct node *temp;
    temp = tail;
    while(temp != NULL){
        printf("%d ", temp->data);
        temp = temp->prev;
    }
    printf("\n");
}
struct node* delfrombeg(struct node*head){
    struct node *deln;
    if (head == 0){
        printf("the list is empty.");
    }
    else{
    deln=head;
    deln->next->prev=0;
    head=head->next;
    free(deln);
    }
  return head;
}
struct node *delFROMpos(struct node *head){
    int pos;
    struct node *deln;
    deln=head;
    printf("enter the position you want to delete:");
    scanf("%d",&pos);
      for(int i=1;i<pos;i++){
        deln=deln->next;
      }
      deln->next->prev=deln->prev;
      deln->prev->next=deln->next;
      free(deln);
    return head;  
}
void delFROMend(struct node *tail){
    struct node *deln;
    deln=tail;
    deln->prev->next=0;
    tail=deln->prev;
    free(deln);
    
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
    //trevers
    printf("Forward traverse:\n");
    trevers(head);
    //backword travrs 
    printf("Backward traverse:\n");
    traversback(tail);
    //del from beg
     head=delfrombeg(head);
    printf("the nodes after delted from the beginning\n");
     trevers(head);
     //del from posotion 
     head=delFROMpos(head);
     printf("the nodes after del from spcifice position\n");
     trevers(head);
     // del from the end 
     delFROMend(tail);
     printf("the nodes after del from the end ");
     trevers(head);
    return 0;
}