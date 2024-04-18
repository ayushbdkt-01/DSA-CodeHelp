#include<iostream>
using namespace std;

struct node{
    int data;
    node* next;
};

void insertAtHead(struct node* head,int d){
    struct node* temp=new node;
    temp->data=d;
    if(head==NULL){
        temp->next=NULL;
        head=temp;
        return;
    }
    temp->next=head;
    head=temp;
}

void print(struct node* head){
    if(head==NULL){
        cout<<"Linked List is empty "<<endl;
        return;
    }
    struct node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}

void reverse(struct node* head){
    struct node* prev=NULL;
    struct node* curr=head;
    struct node* forward=NULL;
    while(curr->next!=NULL){
        forward=curr->next;
        curr->next=prev;
        prev=curr;
        curr=forward;
    }
}

void add(struct node* head1,struct node* head2){
}

int main(){

struct node* head1=NULL;
struct node* head2=NULL;
struct node* ansHead=NULL;
    
    insertAtHead(head1,10);
    print(head1);
    insertAtHead(head1,20);
    print(head1);
    insertAtHead(head1,30);
    print(head1);
    reverse(head1);
    print(head1);
    
    return 0;
}
