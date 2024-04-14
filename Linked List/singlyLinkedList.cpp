#include<iostream>
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
}

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

void insertAtPosition(int position,int d){
    if(position==1){  // inserting at first
        insertAtHead(d);
        return;
    }
    struct node* temp=head;
    int count=1;
    while(count<position-1){
        temp=temp->next;
        count++;
    }
    if(temp->next==NULL){  //inserting at last
        insertAtTail(d);
        return;
    }
    struct node* newNode=new node;
    newNode->data=d;
    newNode->next=temp->next;
    temp->next=newNode;
}

void deleteByPosition(int position){
    struct node* temp=head;
    int count=1;
    if(position==1){
        head=head->next;
        delete(temp);
        return;
    }
    struct node* pre=NULL;
    struct node* curr=head;
    while(count<position){
        pre=curr;
        curr=curr->next;
        count++;
        }
        pre->next=curr->next;
        curr->next=NULL;
        delete(curr);
}

void deleteByValue(int element){
    struct node* pre=NULL;
    struct node* curr=head;
    if(head->data==element){
        head=head->next;
        curr->next=NULL;
        delete(curr);
        return;
    }
    while(curr!=NULL){
        if(curr->data==element){
            pre->next=curr->next;
            curr->next=NULL;
            delete(curr);
            return;
        }
        pre=curr;
        curr=curr->next;
    }
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

int main(){
    insertAtTail(10);
    print();
    insertAtTail(20);
    print();
    insertAtTail(30);
    print();
    insertAtTail(40);
    print();
    insertAtTail(50);
    print();
    insertAtTail(60);
    print();
    insertAtPosition(3,100);
    print();
    deleteByValue(100);
    print();
    cout<<"Head: "<<head->data<<endl;
    cout<<"Tail: "<<tail->data<<endl; // just for verifying
    return 0;
}