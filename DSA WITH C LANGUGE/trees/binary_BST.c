#include<stdio.h>
#include<stdlib.h>

struct node {
    int data;
    struct node*left;
    struct node *right;
};

struct node *createBST(int num){
     struct node *newnode=(struct node *)malloc(sizeof(struct node));
     if(!newnode){
        printf("memory allocation fild");
     }
     else{
     newnode->data=num;
     newnode->right=0;
     newnode->left=0;
     return newnode;
     }
}
struct node *insertBST(struct node *root,int num){
    if(root == 0){
        root=createBST(num);
    return root;
    }
    else if (num<= root->data){  
            root->left=insertBST(root->left,num);
    return root;
    }
    else {
        root->right=insertBST(root->right,num);
     return root;
    }
}
void inorder(struct node *root){
 if(root ==0 )
{
    return;
}   
else {
   inorder(root->left);
   printf("%d ",root->data);
   inorder(root->right);
}
}
struct node *getMin(struct node *root){
    struct node *temp;
    temp=root;
    while(temp->left != 0){
        temp=temp->left;
    }
    return temp;
}
struct node *deln(struct node *root,int key){
if(root== 0){
        return root;
    }
else if(key < root->data) {
       root->left=deln(root->left,key);
       return root;
    }
else if(key> root->data){
        root->right=deln(root->right,key);
        return root;
    }
else {
    //no child 
    if(root->left ==0 && root->right==0){
       
        free(root);
         root =0;
        return root;
    }
    //one left child
    else if(root->right ==0 ){
        struct node *temp;
        temp=root;
        root=root->left;
        free(temp);
        return root;
    }
    //one right child
    else if(root->left==0){
     struct node *temp=root;
     root=root->right;
     free(temp);
     return root;
    }
    else{
        //two children
        struct node *temp=getMin(root->right);
        root->data=temp->data;
        root->right=deln(root->right,temp->data);
        return root;
    }
}
}
int searchBST(struct node *root,int key){
    if(root ==0){
        return 0;
    }
    else if(key == root->data){
    return 1;
    }
    else if(key <root->data){
        return searchBST(root->left,key);
    }
    else if(key >root->data){
     return searchBST(root->right,key);
    }
    else {
        return 0;
    }
}

int main(){
    struct node *root = 0;
    //to insert data`
    int  x;
    printf("enter the new data:");
    scanf("%d",&x);
    root = insertBST(root, 9);
    root = insertBST(root, 3);
  /// to print the data 
    inorder(root);
    int num ;
    printf("enter the selelted node to del:");
    scanf("%d",&num);
    //to daalet num from the tree 
    root = deln(root,num);
    //to print the tree after the deltion
    inorder(root);
    // to search for number in binry seach tree
    int key;
    printf("enter the number you to search it:");
    scanf("%d",&key);
    int re=searchBST(root,key);
    if(re==1){
        printf("the number is exist.");
    }
    else {
        printf("the number is not exist.");
    }
    return 0;
}