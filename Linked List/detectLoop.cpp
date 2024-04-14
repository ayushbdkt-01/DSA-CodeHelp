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

bool detectLoop(){
    if(head==NULL){
        return false;
    }
    map<node*,bool> visited;
    node* temp=head;
    while(temp!=NULL){
        if(visited[temp]==true){
            return true;
        }
        visited[temp]=true;
        temp=temp->next;
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
    if(detectLoop()){
        cout<<"Loop is present"<<endl;
    }
    else{
        cout<<"Loop is not present"<<endl;
    }
    return 0;
}