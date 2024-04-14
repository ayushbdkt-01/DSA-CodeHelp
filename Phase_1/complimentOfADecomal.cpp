#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int n;
    cout<<"Enter number: ";
    cin>>n;
    int ans=0;
    int i=0;

    while(n!=0){
        int rem=n%2;
        ans=(rem*pow(10,i))+ans;
        n=n/2;
        i++;
    }
    cout<<"The number in binary is: "<<ans<<endl;
    int finalAns=0;
    while(ans!=0){
        int rem=ans%10;
        if(rem==1){
            rem=0;
        }
        else{
            rem=1;
        }
        finalAns=(finalAns*10)+rem;
        ans=ans/10;
    }
    cout<<"The compliment is: "<<finalAns<<endl;
    return 0;
}