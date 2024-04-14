#include<iostream>
using namespace std;
int firstOcc(int* a,int n,int key){
      int i=0,j=n-1;
    int mid=(i+j)/2;
    int ans=-1;
    while(i<=j){
        if(a[mid]==key){
            ans=mid;
            j=mid-1;
        }
        else if(a[i]<key){
            i=mid+1;
        }
        else{
            j=mid-1;
        }
        mid=(i+j)/2;
    }
    return ans;
}
int lastOcc(int* a,int n,int key){
   int i=0,j=n-1;
    int mid=(i+j)/2;
    int ans=-1;
    while(i<=j){
        if(a[mid]==key){
            ans=mid;
            i=mid+1;;
        }
        else if(a[i]<key){
            i=mid+1;
        }
        else{
            j=mid-1;
        }
        mid=(i+j)/2;
    }
    return ans;
}
int main(){
    int a[]={1,2,3,3,3,3,3,4,5};
    int n=9;
    pair<int,int>p;
    int key;
    cout<<"Enter key: ";
    cin>>key;
    p.first=firstOcc(a,n,key);
    p.second=lastOcc(a,n,key);
    cout<<p.first<<" "<<p.second<<endl;

    return 0;
}