#include<iostream>
using namespace std;

struct node{
    struct node* prev;
    int data;
    struct node* next;
};

struct node* head=NULL;
void insertHead(int d){
    struct node* temp=new node;
    temp->data=d;
    temp->next=NULL;
    temp->prev=NULL;
    if(head==NULL){
        head=temp;
        temp->next=NULL;
        temp->prev=NULL;
        return;
    }
    temp->next=head;
    temp->prev=NULL;
    head=temp;
}

void print(){
    if(head==NULL){
        cout<<"List is empty "<<endl;
        return;
    }
    struct node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }cout<<endl;
}

void reverse(){
    struct node* prev=NULL;
    struct node* forw=NULL;
    struct node* curr=head;
    while(curr!=NULL){
        forw=curr->next;
        curr->next=prev;
        curr->prev=forw;
        prev=curr;
        curr=forw;
    }
    head=prev;
}
int main(){

    insertHead(10);
    print();
    insertHead(20);
    print();
    insertHead(30);
    print();
    insertHead(40);
    print();
    reverse();
    cout<<"Reversed List: ";
    print();
    return 0;
}