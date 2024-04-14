#include<iostream>
using namespace std;
struct node{
    int data;
    struct node* next;
};

struct node* head=NULL;
struct node* tail=NULL;

void insertAtTail(int d){
    struct node* temp=new node;
    temp->data=d;
    if(tail==NULL){
        head=temp;
        tail=temp;
        temp->next=NULL;
        return;
    }
    tail->next=temp;
    tail=tail->next;
    temp->next=NULL;
}


void print(){
    if(head==NULL){
        cout<<"Linked List is empty"<<endl;
        return;
    }
    struct node* temp=head;
    // temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }cout<<endl;
}

void removeDuplicates(){
    if(head==NULL){
        cout<<"List is empty"<<endl;
        return;
    }
    struct node* curr=head;
    while(curr->next!=NULL){
        if(curr->data==curr->next->data){
            curr->next=curr->next->next;
        }
        else{
            curr=curr->next;
        }
    }
}

int main(){
    insertAtTail(10);
    print();
    insertAtTail(20);
    print();
    insertAtTail(20);
    print();
    insertAtTail(30);
    print();
    insertAtTail(30);
    print();
    insertAtTail(30);
    print();
    insertAtTail(40);
    print();
    insertAtTail(40);
    print();
    cout<<endl<<"The new list is: "<<endl;
    removeDuplicates();
    print();
    return 0;
}