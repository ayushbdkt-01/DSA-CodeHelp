#include<iostream>
#include<string>

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
    int l=getLength(name);
    int i=0,j=l-1;
    while(i<j){
        swap(name[i++],name[j--]);
    }
    cout<<"The reversed string is: ";
    for(int k=0;name[k]!='\0';k++){
        cout<<name[k];
    }
    return 0;
}