#include<iostream>
using namespace std;

struct node{
    int data;
    node* next;
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
    tail->next=head;  // main condition for circular ll
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

bool checkCircular(){
    if(head==NULL){
        return false;
    }
    if(head->next==head){
        return true;
    }
    struct node* temp=head;
    while(temp!=NULL){
        if(temp->next==head){
            return true;
        }
        temp=temp->next;
    }
    return false;
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

    if(checkCircular()){
        cout<<"Circular"<<endl;
    }
    else{
        cout<<"Not circular"<<endl;
    }
    return 0;
}