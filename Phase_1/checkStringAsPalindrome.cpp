#include<iostream>
using namespace std;
 
int getLength(char name[]){
    int count=0;
    for(int i=0;name[i]!='\0';i++){
        count++;
    }
    return count;
}

bool checkPal(char name[],int l){
    int i=0,j=l-1;
    while(i<j){
        if(name[i]==name[j]){
            i++,j--;
        }
        else{
            return false;
        }
    }
    return true;
}

int main(){
    char name[100];
    cout<<"Enter name: ";
    cin>>name;
    int l=getLength(name);
    if(checkPal(name,l)){
        cout<<"String is palindrome"<<endl;
    }
    else{
        cout<<"String is not palindrome"<<endl;
    }

    return 0;
}