#include<iostream>
using namespace std;
struct node{
    int data;
    struct node* next;
};

struct node* head1=NULL;
struct node* tail1=NULL;

struct node* head2=NULL;
struct node* tail2=NULL;

void insertAtTail1(int d){
    struct node* temp=new node;
    temp->data=d;
    if(tail1==NULL){
        head1=temp;
        tail1=temp;
        temp->next=NULL;
        return;
    }
    tail1->next=temp;
    tail1=tail1->next;
    temp->next=NULL;
}

void insertAtTail2(int d){
    struct node* temp=new node;
    temp->data=d;
    if(tail2==NULL){
        head2=temp;
        tail2=temp;
        temp->next=NULL;
        return;
    }
    tail2->next=temp;
    tail2=tail2->next;
    temp->next=NULL;
}

void print1(){
    if(head1==NULL){
        cout<<"Linked List is empty"<<endl;
        return;
    }
    struct node* temp=head1;
    // temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }cout<<endl;
}

void print2(){
    if(head2==NULL){
        cout<<"Linked List is empty"<<endl;
        return;
    }
    struct node* temp=head2;
    // temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }cout<<endl;
}

void merge(){
    node* prev=head1;
    node* curr=head1->next;
    while(curr!=NULL){
        if(head2->data>prev->data && head2->data<curr->data){
            node* newNode=new node;
            newNode->data=head2->data;
            prev->next=newNode;
            newNode->next=curr;
        }
        else{
            prev=curr;
            curr=curr->next;
        }
    }
}
int main(){
    insertAtTail1(10);
    print1();
    insertAtTail1(20);
    print1();
    insertAtTail1(30);
    print1();
    insertAtTail1(40);
    print1();
    insertAtTail1(50);
    print1();
    insertAtTail1(60);
    print1();

    insertAtTail2(5);
    print2();
    insertAtTail2(15);
    print2();
    insertAtTail2(25);
    print2();
    insertAtTail2(35);
    print2();
    insertAtTail2(45);
    print2();
    insertAtTail2(55);
    print2();

    merge();
    print1();
    return 0;
}