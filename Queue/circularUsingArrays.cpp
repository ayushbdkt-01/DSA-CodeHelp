#include<iostream>
#define n 5
using namespace std;

int q[n];
int f=-1;
int r=-1;

void enque(int d){
    if((f==0 && r==n-1) ||(r==f-1)){
        cout<<"Queue is Full "<<endl;
        return;
    }
    else if(f==-1){
        f=0;
        r=0;
        q[r]=d;
    }
    else if(r==n-1 && f!=0){
        r=0;
        q[r]=d;
    }
    else{
        r++;
        q[r]=d;
    }
}

void deque(){
    if(f==-1){
        cout<<"Queue is empty "<<endl;
        return;
    }
    int storing=q[f];
    if(f==r){
        f=-1;
        r=-1;
    }
    else if(f==n-1){
        f=0;
    }
    else{
        f++;
    }
}

void print(){
    if(f==-1){
        cout<<"Queue is Empty. Nothing to display "<<endl;
        return;
    }
    for(int i=f;i<=r;i++){
        cout<<q[i]<<" ";
    }
    for(int i=r+1;i<f;i++){
        cout<<q[i]<<" ";
    }
    cout<<endl;
}

int main(){
    print();
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

    enque(100);
    
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