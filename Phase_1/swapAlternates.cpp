#include<iostream>
using namespace std;
int main(){
    int a[7]={1,2,3,4,5,6,7};
    int n=7;
    int i=0;
    while(i<n){
        swap(a[i],a[i+1]);
        i=i+2;
    }
    cout<<"The modified array is: ";
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    return 0;
}