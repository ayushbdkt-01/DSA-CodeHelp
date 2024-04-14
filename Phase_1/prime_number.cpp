#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter number to be checked: ";
    cin>>n;
    for(int i=2;i<n;i++){
        if(n%i==0){
            cout<<"Number is not prime"<<endl;
            return 0;
        }
    }
    cout<<"Number is prime"<<endl;
    return 0;
}