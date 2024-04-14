#include <iostream>
#include <vector>
#include<climits>

using namespace std;

struct node
{
    int data;
    struct node *left;
    struct node *right;
};

void insert(struct node *&root, int d)
{
    if (root == NULL)
    {
        root = new node;
        root->data = d;
        root->left = NULL;
        root->right = NULL;
        return;
    }
    if (d < root->data)
    {
        insert(root->left, d);
    }
    else
    {
        insert(root->right, d);
    }
}

void inOrder(struct node *root)
{
    if (root == NULL)
    {
        return;
    }
    inOrder(root->left);
    cout << root->data << " ";
    inOrder(root->right);
}

void inOrderStore(struct node *root,vector<int>& ans)
{
    if (root == NULL)
    {
        return;
    }
    inOrderStore(root->left,ans);
    ans.push_back(root->data);
    inOrderStore(root->right,ans);
}

bool searchRecursion(struct node *root, int key)
{
    if (root == NULL)
    {
        return false;
    }
    if (root->data == key)
    {
        return true;
    }
    if (key < root->data)
    {
        searchRecursion(root->left, key);
    }
    else
    {
        searchRecursion(root->right, key);
    }
}

bool searchIteration(struct node *&root, int key)
{
    if (root == NULL)
    {
        return false;
    }
    struct node *temp = root;
    while (temp != NULL)
    {
        if (temp->data == key)
        {
            return true;
        }
        else if (key < temp->data)
        {
            temp = temp->left;
        }
        else
        {
            temp = temp->right;
        }
    }
    return false;
}

int getMax(struct node *root)
{
    struct node *temp = root;
    while (temp->right != NULL)
    {
        temp = temp->right;
    }
    return temp->data;
}

int getMin(struct node *root)
{
    struct node *temp = root;
    while (temp->left != NULL)
    {
        temp = temp->left;
    }
    return temp->data;
}

struct node *deleteByValue(struct node *&root, int val)
{
    if (root == NULL)
    {
        return root;
    }
    if (root->data == val)
    {
        if (root->left == NULL && root->right == NULL)  // 0 child (Leaf node)
        {
            delete root;
            return NULL;
        }
        else if (root->left != NULL && root->right == NULL) // 1 child (only left)
        {
            struct node *temp = root->left;
            delete root;
            return temp;
        }
        else if (root->left == NULL && root->right != NULL) // 1 child (only right)
        {
            struct node *temp = root->right;
            delete root;
            return temp;
        }
        else if (root->left != NULL && root->right != NULL) // 2 child
        {
            int mini = getMin(root->right);
            root->data = mini;
            root->right = deleteByValue(root->right, mini);
            return root;
        }
    }
    else if (root->data > val)
    {
        root->left = deleteByValue(root->left, val);
        return root;
    }
    else
    {
        root->right = deleteByValue(root->right, val);
        return root;
    }
}

bool validateBST(struct node* root){
    vector<int>ans;
    inOrderStore(root,ans);
    for(int i=1;i<ans.size();i++){
        if(ans[i-1]>=ans[i]){
            return false;
        }
    }
    return true;
}

bool validateBSTRecursion(struct node* root,int minValue,int maxValue){
    if(root==NULL){return true;}
    if(root->data<minValue || root->data>maxValue){
        return false;
    }
    bool left=validateBSTRecursion(root->left,minValue,root->data);
    bool right=validateBSTRecursion(root->right,root->data,maxValue);
    return left && right;
}

int KthSmallest(struct node* root,int k){
    vector<int>ans;
    inOrderStore(root,ans);
    k--;
    int i;
    for(i=0;i<ans.size();i++){
        if(i>=k){break;}
    }
    return ans[i];
}

int KthLargest(struct node* root,int k){
    vector<int>ans;
    inOrderStore(root,ans);
    int i;
    k=ans.size()-k+1;
    for(i=0;i<ans.size();i++){
        if(i+1>=k){break;}
    }
    return ans[i];
}

pair<int,int> predecessorSuccessor(struct node* root,int key){
    vector<int>ans;
    inOrderStore(root,ans);
    int pred=0;
    int succ=0;
    int keyIndex=-1;
    for(int i=0;i<ans.size();i++){
        if(ans[i]==key){
            keyIndex=i;
            break;
        }
    }
    if(keyIndex==0){
        succ=ans[1];
        pred=-1;
    }
    else if(keyIndex==ans.size()-1){
        succ=-1;
        pred=ans[ans.size()-2];
    }
    else{
        pred=ans[keyIndex-1];
        succ=ans[keyIndex+1];
    }
    pair<int,int> p=make_pair(pred,succ);
    return p;

}

pair<int,int> predecessorSuccessor2(struct node* root,int key){
    int pred=-1;
    int succ=-1;
    struct node* temp=root;
    while(temp->data!=key){
        if(temp->data>key){
            succ=temp->data;
            temp=temp->left;
        }
        else{
            pred=temp->data;
            temp=temp->right;
        }
    }
    struct node* leftTree=temp->left;
    struct node* rightTree=temp->right;

    while(leftTree!=NULL){
        pred=leftTree->data;
        leftTree=leftTree->right;
    }
    while(rightTree!=NULL){
        succ=rightTree->data;
        rightTree=rightTree->left;
    }
    pair<int,int> p=make_pair(pred,succ);
    return p;
}

bool twoSum(struct node* root,int target){
    vector<int>ans;
    inOrderStore(root,ans);
    int s=0;
    int e=ans.size()-1;
    while(s<e){
        if(ans[s]+ans[e]==target){
            return true;
        }
        else if(ans[s]+ans[e]<target){
            s++;
        }
        else{
            e--;
        }
    }
    return false;
}

bool twoSum2(struct node* root,int target){
    target=target-root->data;
    struct node* temp=root;
    while(temp!=NULL){
        if(temp->data==target){
            return true;
        }
        else if(temp->data>target){
            temp=temp->right;
        }
        else{
            temp=temp->right;
        }
    }
    return false;
}

void flattenToLL(struct node* root){
    vector<int>ans;
    inOrderStore(root,ans);
    struct node* head=new node;
    head->data=ans[0];
    head->left=NULL;
    head->right=NULL;
    struct node* curr=head;
    for(int i=1;i<ans.size();i++){
        struct node* temp=new node;
        temp->data=ans[i];
        temp->left=NULL;
        temp->right=NULL;
        curr->right=temp;
        curr->left=NULL;
        curr=temp;
    }
    curr->left=NULL;
    curr->right=NULL;

    curr=head;
    cout<<"Printing the sorted Linked List: ";
    while(curr!=NULL){
        cout<<curr->data<<" ";
        curr=curr->right;
    }cout<<endl;
    
}

struct node* BSTtoBalancedBST(struct node* root,vector<int>ans,int s,int e){
    if(s>e){return NULL;}
    int mid=(s+e)/2;
    struct node* balancedRoot=new node;
    balancedRoot->data=ans[mid];
    balancedRoot->left=BSTtoBalancedBST(balancedRoot->left,ans,s,mid-1);
    balancedRoot->right=BSTtoBalancedBST(balancedRoot->right,ans,mid+1,e);
    return balancedRoot;
}

struct node* preOrderToBST(vector<int>pre){
    struct node* newRoot=NULL;
    for(int i=0;i<pre.size();i++){
        insert(newRoot,pre[i]);
    }
    return newRoot;
}

int main()
{
    struct node *root = NULL;
    int d;
    cout << "Enter data to insert in BST: ";
    cin >> d;
    // 10 20 30 40 35 25 15 5 -1
    while (d != -1)
    {
        insert(root, d);
        cin >> d;
    }
    return 0;
}