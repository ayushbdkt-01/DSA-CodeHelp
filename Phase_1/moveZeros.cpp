#include<iostream> // move all zeros to right side of the array
using namespace std;
int main(){
    int a[]={10,0,0,2,3,0,4,0,0};
    int n=9;
    int i=0;
    for(int j=0;j<n;j++){
        if(a[j]!=0){
            swap(a[i],a[j]);
            i++;
        }
    }
    cout<<"The final array is: ";
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }cout<<endl;
    return 0;
}