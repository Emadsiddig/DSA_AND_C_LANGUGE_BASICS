#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node *next;
}; 
void insert(struct node **head_ref,int a){
    
    struct node *newnode =(struct node *)malloc(sizeof(struct node));

    newnode->data= a;
    newnode->next = *head_ref;
    *head_ref  =newnode;
}
struct node *create(int arr[],int n){
    struct node *head_ref =NULL;

    for(int i=n-1;i>=0;i--){
        insert(&head_ref,arr[i]);
    }

    return head_ref;
}
struct node *copylist(struct node * head){

    if(head ==NULL){
        return NULL;
    }
    else {
        struct node *newnode =(struct node *)malloc(sizeof(struct node));

         newnode->data=head->data;
         newnode->next=copylist(head->next);

        return head;
    }
}
void printlist(struct node *head){

    while(head){
        printf("%d-> ",head->data);
        head=head->next;
    }
    printf("NULL");
}
void printlists(struct node *head,struct node *dup){

    printf("the ogriginal list:\n");

    printlist(head);

    printf("\nthe copy list :\n");
    printlist(dup);
}
int main(){
    int arr[]={2,3,4,5,6,7};
    int n=sizeof(arr)/sizeof(arr[0]);
    //create the orginal linked list
    struct node *head_ref=create(arr,n);
                                                  
    //the duplicate linked list     
    struct node *dup =copylist(head_ref);

    printlists(head_ref,dup);
    return 0;
}