#include<iostream>
#include<queue>

using namespace std;

struct node{
    int data;
    struct node* left;
    struct node* right;
};

struct node* makeTree(struct node* root){
    int d;
    cout<<"Enter data: ";
    cin>>d;
    root=new node;
    root->data=d;
    root->left=NULL;
    root->right=NULL;
    if(d==-1){
        return NULL;
    }
    cout<<"Enter data for left of "<<d<<": ";
    root->left=makeTree(root->left);
    cout<<"Enter data for right of "<<d<<": ";
    root->right=makeTree(root->right);
    return root;
}

void levelOrder(struct node* root){
    queue<node*>q;
    q.push(root);
    while(!q.empty()){
        struct node* temp=q.front();
        q.pop();
        cout<<temp->data<<" ";
        if(temp->left!=NULL){
            q.push(temp->left);
        }
        if(temp->right!=NULL){
            q.push(temp->right);
        }    
    }
}
int getHeight(struct node* root){
    if(root==NULL){
        return 0;
    }
    int left=getHeight(root->left);
    int right=getHeight(root->right);
    return max(left,right)+1;
}
void preOrder(struct node* root){
    if(root==NULL){
        return;
    }
    cout<<root->data<<" ";
    preOrder(root->left);
    preOrder(root->right);
}

void postOrder(struct node* root){
    if(root==NULL){
        return;
    }
    postOrder(root->left);
    postOrder(root->right);
    cout<<root->data<<" ";
}

void inOrder(struct node* root){
    if(root==NULL){
        return;
    }
    inOrder(root->left);
    cout<<root->data<<" ";
    inOrder(root->right);
}

int main(){
    struct node* root;
    root=makeTree(root);
    cout<<endl<<"Level order traversal: ";
    levelOrder(root);
    cout<<endl<<"Pre order traversal: ";
    preOrder(root);
    cout<<endl<<"In order traversal: ";
    inOrder(root);
    cout<<endl<<"Post order traversal: ";
    postOrder(root);
    cout<<endl;
    cout<<"Height: "<<getHeight(root)<<endl;
    return 0;
}