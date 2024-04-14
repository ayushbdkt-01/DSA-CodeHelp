#include<iostream>
using namespace std;

struct node{
    int data;
    struct node* next;
};

struct node* head=NULL;
struct node* tail=NULL;

void insertTail(int d){
    node* temp=new node;
    temp->data=d;
    if(head==NULL){
        head=temp;
        tail=temp;
        temp->next=NULL;
        return;
    }
    tail->next=temp;
    tail=temp;
    tail->next=NULL;
    tail->next=head;
}

void insertHead(int d){
    node* temp=new node;
    temp->data=d;
    if(head==NULL){
        head=temp;
        temp->next=NULL;
        tail=temp;
        return;
    }
    temp->next=head;
    head=temp;
    tail->next=head;   
}

void insertAfterValue(int element,int d){
    node* temp=new node;
    temp->data=d;
    if(head==NULL){
        head=temp;
        tail=temp;
        temp->next=temp;
        return;
    }
    node* curr=head;
    while(curr->next!=head){
        if(curr->data==element){
            temp->next=curr->next;
            curr->next=temp;
            return;
        }
        curr=curr->next;
    }
}

void print(){
    if(head==NULL){
        cout<<"Linked List is empty"<<endl;
        return;
    }
    node* temp=head;
    do{
        cout<<temp->data<<" ";
        temp=temp->next;
    }while(temp!=NULL && temp!=head);
    cout<<endl;
}

void deleteNodeByValue(int element){
    if(head==NULL){
        cout<<"Linked List is empty"<<endl;
        return;
    }
    node* prev=NULL;
    node* curr=head;
    if(head->data==element){
        head=head->next;
        curr->next=NULL;
        delete(curr);
        tail->next=head;
        return;
    }
   while(curr->next!=head){
        if(curr->data==element){
            prev->next=curr->next;
            curr->next=NULL;
            delete(curr);
            return;
        }
        prev=curr;
        curr=curr->next;
    }
}

int main(){

    insertTail(10);
    print();

    insertTail(20);
    print();

    insertTail(30);
    print();

    insertTail(40);
    print();

    insertTail(50);
    print();

    insertAfterValue(20,1000);
    print();

    deleteNodeByValue(10);
    print();
    return 0;
}