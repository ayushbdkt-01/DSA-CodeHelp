#include<iostream>
using namespace std;
int main(){
    int a[]={1,3,5,7,9,2,4,6,8};
    int n=9;
    bool swapped=false;
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-i-1;j++){
            if(a[j]>a[j+1]){
                swap(a[j],a[j+1]);
                swapped=true;
            }
        }
        if(swapped==false){
            break;  // no swapping ...means array is already sorted
        }
    }
    cout<<"The sorted array is: ";
    for(int i=0;i<n;i++){
        cout<<a[i]<<"  ";
    }
    return 0;
}