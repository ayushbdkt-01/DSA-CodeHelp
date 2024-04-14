#include<iostream>
using namespace std;
int main(){
    int a[]={0,1,2,3,4,5,6,7,8,9};   // array should be monotonic
    int n=10;
    int i=0;
    int j=n-1;
    int key;

    cout<<"Enter key: ";
    cin>>key;

    int mid=(i+j)/2;

    while(i<=j){
        if(a[mid]==key){
            cout<<"Element found"<<endl;
            return 0;
        }
        else if(a[mid]<key){
            i=mid+1;
        }
        else{
            j=mid-1;
        }
        mid=(i+j)/2;
    }
    
    cout<<"Element not found"<<endl;
    return 0;
}