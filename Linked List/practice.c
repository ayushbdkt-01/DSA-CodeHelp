#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node* left;
    struct node* right;
};

struct node* buildTree(struct node* root){
    root=(struct node*)malloc(sizeof(struct node));
    int d;
    printf("Enter data: ");
    scanf("%d",&d);
    root->data=d;
    root->left=NULL;
    root->right=NULL;
    if(d==-1){
        return NULL;
    }
    printf("For left node: ");
    root->left=buildTree(root->left);
    printf("For right node: ");
    root->right=buildTree(root->right);
    return root;
}

void inOrder(struct node* root){
    if(root==NULL){
        return;
    }
    inOrder(root->left);
    printf("%d",root->data);
    printf(" ");
    inOrder(root->right);
}

void postOrder(struct node* root){
    if(root==NULL){
        return;
    }
    postOrder(root->left);
    postOrder(root->right);
    printf("%d",root->data);
    printf(" ");
}

void preOrder(struct node* root){
    if(root==NULL){
        return;
    }
    printf("%d",root->data);
    printf(" ");
    preOrder(root->left);
    preOrder(root->right);
}

int main(){
    struct node* root=buildTree(root);
    printf("Inorder traversal: ");
    inOrder(root);
    printf("PreOrder traversal: ");
    preOrder(root);
    printf("Postorder traversal: ");
    postOrder(root);
}