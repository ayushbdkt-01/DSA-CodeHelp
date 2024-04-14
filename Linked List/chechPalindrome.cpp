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

void print(node*head){
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

bool checkPalindrome(){
    node* temp=head;
    int count=0;
    while(temp!=NULL){
        count++;
        temp=temp->next;
    }
    int a[count];
    temp=head;
    for(int i=0;i<count;i++){
        a[i]=temp->data;
        temp=temp->next;
    }
    int s=0,e=count-1;
    while(s<e){
        if(a[s]!=a[e]){
            return false;
        }
        s++,e--;
    }
    return true;
    
}

bool checkByDividingInto2Parts(){

    node*slow=head;
    node*fast=head->next;

    while(fast->next!=NULL){
        slow=slow->next;
        fast=fast->next->next;
    }

    node*head1=head;
    node*head2=slow->next;
    slow->next=NULL;

cout<<"First: ";
print(head1);
cout<<"Second: ";
print(head2);

    node* prev=NULL;
    node* curr=head2;
    node* forward=NULL;

    while(curr!=NULL){
        forward=curr->next;
        curr->next=prev;
        prev=curr;
        curr=forward; 
    }
    head2=prev;
    cout<<"Reversed second: ";
    print(head2);

    while(head1!=NULL && head2!=NULL){
        if(head1->data!=head2->data){
            return false;
        }
        head1=head1->next;
        head2=head2->next;
    }
    return true;
}

int main(){
    insertAtTail(10);
    print(head);
    insertAtTail(20);
    print(head);
    insertAtTail(30);
    print(head);
    insertAtTail(30);
    print(head);
    insertAtTail(20);
    print(head);
    insertAtTail(10);
    print(head);
    // if(checkPalindrome()){
    //     cout<<"Linked List is palindrome"<<endl;
    // }
    // else{
    //     cout<<"Linked list is not palindrome"<<endl;
    // }
    if(checkByDividingInto2Parts()){
        cout<<"Palindrome"<<endl;
    }
    else{
        cout<<"Not palindrome"<<endl;
    }
    return 0;
}