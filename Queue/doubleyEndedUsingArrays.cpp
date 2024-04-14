#include<iostream>
#define n 5
using namespace std;

int f=-1;
int r=-1;
int queue[n];

void push_rear(int d){
    if(r==n){
        cout<<"Queue is Full "<<endl;
        return;
    }
    if(f==-1){
        f=r=0;
    }
    queue[r]=d;
    r++;
}

void push_front(int d){
    if(f==0 && r==n-1){
        cout<<"Queue is Full "<<endl;
        return;
    }
    else if(f==-1){
        f=0;
        r=0;
    }
    else if(f==0){
        f=n-1;
    }
    else{
        f--;
    }
}

void pop_front(){
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

void pop_back(){

}

int main(){
    
    return 0;
}