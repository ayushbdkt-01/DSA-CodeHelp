#include<iostream>
#include<map>
using namespace std;

struct node{
    int data;
    struct node* next;
};

struct node* head=NULL;
struct node* tail=NULL;

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

    temp->next=head;   // this makes a loop
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

bool floydDetectLoop(){
    if(head==NULL){
        return false;
    }
    node* slow=head;
    node* fast=head;
    while(slow!=NULL && fast!=NULL){
        slow=slow->next;
        fast=fast->next;
        if(fast!=NULL){
            fast=fast->next;
        }
        if(slow==fast){
            return true;
        }
    }
    return false;
}

int main(){
    insertAtHead(10);
    insertAtHead(20);
    insertAtHead(30);
    insertAtHead(40);
    insertAtHead(50);
    insertAtHead(60);
    if(floydDetectLoop()){
        cout<<"Loop is present"<<endl;
    }
    else{
        cout<<"Loop is not present"<<endl;
    }
    return 0;
}