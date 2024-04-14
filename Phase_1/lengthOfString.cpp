#include<iostream>
using namespace std;
int getLength(char name[]){
    int count=0;
    for(int i=0;name[i]!='\0';i++){
        count++;
    }
    return count;
}
int main(){
    char name[100];
    cout<<"Enter name: ";
    cin>>name;
    cout<<"Your name is: "<<name<<endl;
    cout<<"Length of string is: "<<getLength(name)<<endl;
    return 0;
}