#include<iostream>
using namespace std;

void babbarKiApporach(int* a,int n){
    int minIndex;
     for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            minIndex=i;
            if(a[i]>a[j]){
                minIndex=j;
            }
        }
         swap(a[minIndex],a[i]);
    }
    cout<<"The sorted array is ";
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
}

int main(){
    int a[]={1,3,5,7,9,2,4,6,8};
    int n=9;
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if(a[i]>a[j]){
                swap(a[i],a[j]);
            }
        }
    }
    cout<<"The sorted array is ";
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
    babbarKiApporach(a,n);
    return 0;
}