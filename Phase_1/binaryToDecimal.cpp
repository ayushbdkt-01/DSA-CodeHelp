#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int n;
    cout<<"Enter number in binary: ";
    cin>>n;
    int i=0;
    int ans=0;
    while(n!=0){
        int rem=n%10;
        ans=ans+rem*pow(2,i);
        n=n/10;
        i++;
    }
    cout<<"The number in decimal is: "<<ans<<endl;
    return 0;
}