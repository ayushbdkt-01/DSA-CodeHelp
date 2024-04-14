#include<iostream>
using namespace std;
int gcd(int a,int b){
    if(a==0){
        return b;
    }
    if(b==0){
        return a;
    }
    while(a!=b){
        if(a>b){
            a=a-b;
        }
        else{
            b=b-a;
        }
    }
    return a;
}
int old_method(int a,int b){
    if(a==0){
        return b;
    }
    if(b==0){
        return a;
    }
    int mini=min(a,b);
    int ans=1;
    for(int i=1;i<=mini;i++){
        if(a%i==0 && b%i==0){
            ans=i;
        }
    }
    return ans;
}
int main(){
    int a,b;
    cout<<"Enter two numbers: ";
    cin>>a>>b;
    // cout<<"GCD is: "<<gcd(a,b)<<endl;
    cout<<"GCD is: "<<old_method(a,b)<<endl;

    return 0;
}