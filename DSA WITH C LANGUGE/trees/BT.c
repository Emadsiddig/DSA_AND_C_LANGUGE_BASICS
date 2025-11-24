#include<stdio.h>
#include<stdlib.h>

struct node{
    int date;
    struct node *left;
    struct node *right;
};
struct node *create_tree(){
  struct node *newnode = (struct node *)malloc(sizeof(struct node));
  int num ;
  printf("enter the num (press -1 to exit):");
  scanf("%d",&num);
  if(num<0){
   return 0;    
  }
  else{
    newnode->date=num;
    newnode->left=0;
    newnode->right=0;
    printf("enter the left node for %d:",num);
    newnode->left=create_tree();
    printf("enter the right node for %d",num);
    newnode->right=create_tree();
    return newnode;

  }
}
void preorder(struct node *root){
  if(root==0){
    return ;
  }
  else {
    printf("%d ", root->date);
    preorder(root->left);
    preorder(root->right);
  }
}
void inorder(struct node *root){
  if(root ==0){
    return ;
  }
  else{
   inorder(root->left);
   printf("%d ",root->date);
   inorder(root->right);
  }
}
void postorder(struct node *root){
  if(root ==0){
    return ;
  }
  else{
   postorder(root->left);
   postorder(root->right);
   printf("%d ",root->date);
  }
}
int main(){
    struct node *root=0;
    root = create_tree();
    //travers 
    //1.preorder 
     preorder(root);
     printf("\n");
    //2.inorder
    inorder(root);
    printf("\n");
    //3.postorder
    postorder(root);

    return 0;
}