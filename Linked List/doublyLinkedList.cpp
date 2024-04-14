#include<iostream>
using namespace std;
struct node{
    struct node* prev;
    int data;
    struct node* next;
};

struct node* head=NULL;
struct node* tail=NULL;

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
    struct node* temp=head;
    int length=0;
    while(temp!=NULL){
        length++;
        temp=temp->next;
    }
    return length;
}

void insertAtHead(int d){
    struct node* temp=new node;
    temp->data=d;
    if(head==NULL){
        head=temp;
        temp->prev=NULL;
        temp->next=NULL;
        return;
    }
    temp->next=head;
    head->prev=temp;
    head=temp;
}

void insertAtTail(int d){
    struct node* temp=new node;
    temp->data=d;
    if(tail==NULL){
        tail=temp;
        temp->prev=NULL;
        temp->next=NULL;
        head=temp;
        return;
    }
    tail->next=temp;
    temp->prev=tail;
    temp->next=NULL;
    tail=temp;
}

void insertAtPosition(int pos,int d){
    if(pos==1){
        insertAtHead(d);
        return;
    }
    int count=1;
    struct node* temp=head;
    while(count<pos-1){
        temp=temp->next;
        count++;
    }
    if(temp->next==NULL){
        insertAtTail(d);
        return;
    }
    struct node* newNode=new node;
    newNode->data=d;
    newNode->next=temp->next;
    temp->next->prev=newNode;
    temp->next=newNode;
    newNode->prev=temp;
}

void deleteByPosition(int pos){
    if(pos==1){
        struct node* temp=head;
        head=head->next;
        temp->next=NULL;
        temp->prev=NULL;
        delete(temp);
        return;
    }
    struct node* pre=NULL;
    struct node* cur=head;
    int count=1;
    while(count<pos){
        pre=cur;
        cur=cur->next;
        count++;
    }
    cur->prev=NULL;
    pre->next=cur->next;
    cur->next=NULL;
    delete(cur);
}

void deleteByValue(int element){
    if(head==NULL){
        cout<<"Linked List is empty"<<endl;
        return;
    }
    node* prev=NULL;
    node* curr=head;
    if(head->data==element){
        head=head->next;
        head->prev=NULL;
        curr->next=NULL;
        delete(curr);
        return;
    }
    while(curr!=NULL){
        if(curr->data==element){
            prev->next=curr->next;
            curr->next->prev=curr->prev;
            curr->next=curr->prev=NULL;
            delete(curr);
            return;
        }
        prev=curr;
        curr=curr->next;
    }
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
    insertAtPosition(6,100);
    print();
    deleteByValue(10);
    print();
    cout<<"Head: "<<head->data<<endl;
    cout<<"Tail: "<<tail->data<<endl;

    return 0;
}