#include<iostream>
#define n 5
using namespace std;

int queue[n];
int f=0,r=0;

void enque(int d){
    if(r==n){
        cout<<"Queue is Full "<<endl;
        return;
    }
    queue[r]=d;
    r++;
}

void deque(){
    if(f==r){
        cout<<"Queue is Empty "<<endl;
        return;
    }
    int storing=queue[f];
    f++;
    if(f==r){
        f=r=0;
    }
}

void checkEmpty(){
    if(f==r){
        cout<<"Empty"<<endl;
        return;
    }
    cout<<"Not empty";

}

void print(){
    if(f==r){
        cout<<"List is Empty. Nothing to display "<<endl;
        return;
    }
    for(int i=f;i<r;i++){
        cout<<queue[i]<<" ";
    }cout<<endl;
}

int main(){
    enque(10);
    print();
    enque(20);
    print();
    enque(30);
    print();
    enque(40);
    print();
    enque(50);
    print();

    enque(2000);

    deque();
    print();
    deque();
    print();
    deque();
    print();
    deque();
    print();
    deque();
    print();
     
     
    return 0;
}