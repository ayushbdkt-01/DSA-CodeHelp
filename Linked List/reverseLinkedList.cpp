#include<iostream>
using namespace std;

struct node{
    int data;
    struct node* next;
};

struct node* head=NULL;

void insertAtHead(int d){
    struct node* temp=new node;
    temp->data=d;
    if(head==NULL){
        head=temp;
        temp->next=NULL;
        return;
    }
    temp->next=head;
    head=temp;
}

void print(){
    if(head==NULL){
        cout<<"Linked List is empty"<<endl;
        return;
    }
    struct node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }cout<<endl;
}

void reverse(){
    if(head==NULL){
        cout<<"Linked List is empty"<<endl;
        return;
    }
    struct node* prev=NULL;
    struct node* curr=head;
    struct node* forward=NULL;
    while(curr!=NULL){
        forward=curr->next;
        curr->next=prev;
        prev=curr;
        curr=forward;
    }
    head=prev;
}

void reverseByRecursion(node* prev,node* curr){
    if(curr==NULL){
        head=prev;
        return;
    }
    node* forward=curr->next;
    reverseByRecursion(curr,forward);
    curr->next=prev;
}

int main(){
    insertAtHead(10);
    print();
    insertAtHead(20);
    print();
    insertAtHead(30);
    print();
    insertAtHead(40);
    print();
    insertAtHead(50);
    print();
    insertAtHead(60);
    print();
    struct node* prev=NULL;
    struct node* curr=head;
    cout<<endl<<"By recursion: "<<endl;
    reverseByRecursion(prev,curr);
    print();
    reverse();
    cout<<endl<<"The reversed linked list is: "<<endl;
    print();
    return 0;
}