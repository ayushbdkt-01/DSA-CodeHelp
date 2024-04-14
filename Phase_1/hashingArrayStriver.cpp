#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter number of elements: ";
    cin>>n;
    int a[n];
    cout<<"Enter elements: "<<endl;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int hash[n]={0};     // size of hash == max size of array
    for(int i=0;i<n;i++){
        hash[a[i]]++;
    }
    int nn;
    cout<<"Enter number of elements: ";
    cin>>nn;
    while(nn--){
        int number;
        cin>>number;
        cout<<number<<" : "<<hash[number]<<endl;
    }
    int arr[10000000];
    return 0;
}