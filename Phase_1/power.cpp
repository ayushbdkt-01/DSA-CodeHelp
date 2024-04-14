#include<iostream>
using namespace std;
int main(){
    int a,b;
    cout<<"Enter two numbers: ";
    cin>>a>>b;\
    int ans=1;
    for(int i=1;i<=b;i++){
        ans=ans*a;
    }
    cout<<"The answer is: "<<ans<<endl;
    return 0;
}