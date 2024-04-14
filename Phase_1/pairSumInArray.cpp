#include<iostream>
using namespace std;
void twoPointerApproach(int* a,int n,int sum){
    int i=0;
    int j=n-1;
    while(i<j){
        if(a[i]+a[j]==sum){
            cout<<"Pair is: ("<<a[i]<<","<<a[j]<<")"<<endl;
            i++;
            j--;
        }
        else if(a[i]+a[j]>sum){
            j--;
        }
        else{
            i++;
        }
    }
}
int main(){
    int a[]={1,2,3,4,5};
    int n=5;
    int sum;
    cout<<"Enter sum you wamt: ";
    cin>>sum;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(a[i]+a[j]==sum){
                cout<<"Pair is: ("<<a[i]<<","<<a[j]<<")"<<endl;
            }
        }
    }
    twoPointerApproach(a,n,sum);
    return 0;
}