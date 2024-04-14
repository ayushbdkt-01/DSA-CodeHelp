#include<iostream>
using namespace std;
int main(){
    unsigned int n;
    cout<<"Enter number in binary: ";
    cin>>n;
    int count=0;
    while(n!=0){
        if(n&1){
            count++;
        }
           n=n/10;
    }
    cout<<"The number of 1 bits is: "<<count<<endl;
    return 0;
}