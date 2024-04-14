#include<iostream>
#include<cmath>

using namespace std;
int main(){
    int n;
    cout<<"Enter number in decimal: ";
    cin>>n;
    int ans=0;
    int i=0;
    while(n!=0){
        int rem=n%2;
        ans=rem*pow(10,i)+ans;
        n=n/2;
        i++;
    }
    cout<<"The number in binary is: "<<ans<<endl;
    return 0;
}