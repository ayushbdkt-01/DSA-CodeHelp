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

void getMiddle(){
    struct node* slow=head;
    struct node* fast=head->next;
    int count=1;
    while(fast!=NULL){
        slow=slow->next;
        fast=fast->next;
        if(fast!=NULL){
        fast=fast->next;
        }
        count++;
    }
    cout<<"The "<<count<<"th node is the middle node"<<endl;

}
int main(){
    insertAtHead(10);
    insertAtHead(20);
    insertAtHead(30);
    insertAtHead(40);
    insertAtHead(50);
    insertAtHead(60);
    getMiddle();
    return 0;
}