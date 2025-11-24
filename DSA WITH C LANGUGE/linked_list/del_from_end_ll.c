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
void delfromend(struct node *head,int n){
    
  struct node *deln,*prev;
  if(head==NULL){
    printf("empty");
  }
  else{
  deln=head;
  for(int i=1;i<n;i++){
    prev=deln;
   deln=deln->next;
   
  }
  prev->next=0;
  free(deln);  
}
    printf("\nthe nodes after del:\n");
     travers(head);
    

}
int main(){
    int n,num;
    printf("how many node to create:");
    scanf("%d",&n);
    //create first node 
    struct node *head=(struct node*)malloc(sizeof(struct node));
    printf("enter date 1 :");
    scanf("%d",&num);
    head->date=num;
    head->next=0;
    //create other nodes
     struct node *newnode,*temp;
     temp =head;
    for(int i=2;i<=n;i++){
       newnode=(struct node*)malloc(sizeof(struct node));
       printf("enter date %d :",i);
       scanf("%d",&num);
       newnode->date=num;
       newnode->next=0;
       temp->next=newnode;
       temp=temp->next;
    }
    // traverse :like printing the data in nodes
   travers(head);
   // del at begining
   delfromend(head,n);
     
    
    return 0;
}