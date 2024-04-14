#include<iostream>
using namespace std;
int main(){
    int a[]={1,3,5,7,2,4,6,8};
    int n=8;
    int j;
    for(int i=1;i<n;i++){
        for(j=i-1;j>=0;j--){
            if(a[j]>a[i]){
                a[j+1]=a[j];
            }
            else{
                break;
            }

        }
        a[j+1]=a[i];
    }
    cout<<"The sorted array is: ";
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    return 0;
}