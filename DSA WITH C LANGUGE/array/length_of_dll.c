#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node *next;
    struct node *prev;
};

void travers(struct node* head){
    struct node* temp = head;
    while(temp != NULL){
        printf("%d ", temp->data);
        temp = temp->next;
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
void traversback(struct node *tail){
    struct node *temp;
    temp = tail;
    printf("\n the data after back travers is \n");
    while(temp!=NULL){
        printf("%d ",temp->data);
        temp = temp->prev;
    }
    printf("\n");
}
int main(){
    int num, choice = 1;
    struct node *head=NULL,*newnode,*temp;

    while(choice != 0){
        newnode = (struct node*)malloc(sizeof(struct node));
        printf("enter the first data: ");
        scanf("%d", &num);
        newnode->data=num;
        newnode->next=NULL;
        newnode->prev=NULL;
      
        if(head==NULL){
            head=newnode;
            temp=head;
        } 
        else {
            newnode->prev=temp;
            temp->next = newnode;
            temp = newnode;
        }
     
        printf("Do you want to add another node? 1 for Yes, 0 for No: ");
        scanf("%d", &choice);
    }

    travers(head);
    traversback(temp);
    printf("\nLength of the linked lis t: %d\n", countLength(head));
    
    return 0;
}