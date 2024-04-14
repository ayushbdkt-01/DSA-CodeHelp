#include<iostream>
using namespace std;
int findDuplicate(int* arr,int n){
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]==arr[j]){
                return i;
            }
        }
    }
}
int main(){
    int a[]={1,2,3,4,5,5};
    int n=6;
    int ans=findDuplicate(a,n);
    cout<<"The duplicate element is: "<<a[ans]<<endl;
    return 0;
}