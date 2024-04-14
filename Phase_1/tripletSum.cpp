#include<iostream>
using namespace std;
int main(){
    int a[]={1,2,3,4,5,6};
    int n=6;
    int target;
    cout<<"Enter target sum: ";
    cin>>target;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            for(int k=j+1;k<n;k++){
                if(a[i]+a[j]+a[k]==target){
                    cout<<"Triplet is: ("<<a[i]<<","<<a[j]<<","<<a[k]<<")"<<endl;
                }
            }
        }
    }
    return 0;
}