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

int getLength(){
    if(head==NULL){
        return 0;
    }
    struct node* temp=head;
    int count=0;
    while(temp!=NULL){
        count++;
        temp=temp->next;
    }
    return count;
}

int main(){
    insertAtHead(10);
    insertAtHead(20);
    insertAtHead(30);
    insertAtHead(40);
    insertAtHead(50);
    insertAtHead(60);
    int l=getLength();
    cout<<"Length is: "<<l<<endl;
    int mid=(l/2);
    cout<<"Position of middle element is: "<<mid<<endl;
    struct node* temp=head;
    int count=1;
    while(count<mid){
        temp=temp->next;
        count++;
    }
    cout<<"Middle node is: "<<temp->data<<endl;
    return 0;
}