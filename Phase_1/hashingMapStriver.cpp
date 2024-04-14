#include<iostream>
#include<map>
using namespace std;
int main(){
    int n;
    cout<<"Enter number of elements: ";
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    map<int,int> m;     // <key,value>
    for(int i=0;i<n;i++){
        m[a[i]]++;
    }
    int q;
    cout<<"Enter number of query: ";
    cin>>q;
    while(q--){
        int number;
        cin>>number;
        cout<<"Frequency of "<<number<<" in the array is: "<<m[number]<<endl;
    }
    return 0;
}

//////////   same way strings can also be hashed