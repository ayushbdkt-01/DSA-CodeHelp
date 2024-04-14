#include<iostream>
using namespace std;
int isPrime(int n){
    if(n==1 || n==0){
        return false;
    }
    for(int i=2;i<n;i++){
        if(n%i==0){
            return false;
        }
    }
    return true;
}
int main(){
    int n;
    cout<<"Enter range: ";
    cin>>n;
    int count=0;
    for(int i=2;i<=n;i++){
        if(isPrime(i)){
            count++;
        }
    }
    cout<<"Answer is: "<<count<<endl;
    return 0;
}