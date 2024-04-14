#include<iostream>
#include<map>
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

void sort012(){
    int zero=0,one=0,two=0;
    node* temp=head;
    while(temp!=NULL){
        if(temp->data==0){
            zero++;
        }
        else if(temp->data==1){
            one++;
        }
        else if(temp->data==2){
            two++;
        }
        temp=temp->next;
    }
    temp=head;
    while(temp!=NULL){
        if(zero!=0){
            temp->data=0;
            zero--;
        }
        else if(one!=0){
            temp->data=1;
            one--;
        }
        else if(two!=0){
            temp->data=2;
            two--;
        }
        temp=temp->next;
    }
}
void byUsingMaps(){
    node* temp=head;
    map<int,int>m;
    while(temp!=NULL){
        if(temp->data==0){
            m[0]++;
        }
        else if(temp->data==1){
            m[1]++;
                }
        else if(temp->data==2){
            m[2]++;
            }
        temp=temp->next;
    }
    temp=head;
    while(temp!=NULL){
        if(m[0]!=0){
            temp->data=0;
            m[0]--;
        }
        else if(m[1]!=0){
            temp->data=1;
            m[1]--;
        }
        else if(m[2]!=0){
            temp->data=2;
            m[2]--;
        }
        temp=temp->next;
    }
}

int main(){
    insertAtTail(0);
    print();
    insertAtTail(1);
    print();
    insertAtTail(1);
    print();
    insertAtTail(2);
    print();
    insertAtTail(2);
    print();
    insertAtTail(1);
    print();
    insertAtTail(1);
    print();
    insertAtTail(0);
    print();
    cout<<endl;
    cout<<"The sorted list is: "<<endl;
    byUsingMaps();
    print();
    return 0;
}