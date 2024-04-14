#include<iostream>
using namespace std;

struct node{
    int data;
    struct node* next;
};

struct node* head=NULL;

void insert(int d){
    struct node* temp=(struct node*)malloc(sizeof(struct node));
    temp->data=d;
    temp->next=NULL;
    if(head==NULL){
        head=temp;
        temp->next=NULL;
        return;
    }
    temp->next=head;
    head=temp;
}

void print(){
    struct node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }cout<<endl;
}

struct node* reverseInKGroups(struct node* curr,int k){
    struct node* prev=NULL;
     curr=head;
    struct node* forw=NULL;
    int count=0;
    while(curr!=NULL && count<k){
        forw=curr->next;
        curr->next=prev;
        prev=curr;
        curr=curr->next;
        count++;
    }
    if(forw!=NULL){
        head->next=reverseInKGroups(forw,k);
    }
    head= prev;
}
int main(){
    insert(10);
    print();

        insert(20);
    print();

        insert(30);
    print();
        insert(40);
    print();

        insert(50);
    print();

    reverseInKGroups(head,2);
    print();


    return 0;
}