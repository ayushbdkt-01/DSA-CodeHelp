#include<iostream>
using namespace std;
int main(){
    int amount;
    cout<<"Enter amount: ";
    cin>>amount;
    int hundred=amount/100;
    amount=amount%100;
    int twenty=amount/20;
    amount=amount%20;
    int ten=amount/10;
    amount=amount%10;
    cout<<"100rs note: "<<hundred<<endl;
     cout<<"20rs note: "<<twenty<<endl;

    cout<<"10rs note: "<<ten<<endl;
    cout<<"Remaining amount: "<<amount<<endl;

    return 0;
}