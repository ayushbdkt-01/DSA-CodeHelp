#include<iostream>
#include<queue>
using namespace std;

int main(){

    queue<int>q;
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    q.push(50);
    q.push(60);
    cout<<"Size: "<<q.size()<<endl;
    cout<<"Empty or not: "<<q.empty()<<endl;
    cout<<"Froont: "<<q.front()<<endl;
    cout<<"Back: "<<q.back()<<endl;
    q.pop();
    cout<<endl;
    cout<<"Size: "<<q.size()<<endl;
    cout<<"Empty or not: "<<q.empty()<<endl;
    cout<<"Froont: "<<q.front()<<endl;
    cout<<"Back: "<<q.back()<<endl;
    return 0;
}