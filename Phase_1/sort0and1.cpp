#include<iostream>
using namespace std;
void sorting(int* a,int n){
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if(a[i]>a[j]){
                swap(a[i],a[j]);
                break;
            }
        }
    }
    cout<<"The sorted array is: ";
        for(int i=0;i<n;i++){
            cout<<a[i]<<"  ";
        }
        cout<<endl;
}

void count(int* a,int n){
    int count[2]={0};
    for(int i=0;i<n;i++){
        if(a[i]==0){
            count[0]++;
        }
        else{
            count[1]++;
        }
    }
    int i=0;
    for( i=0;i<count[0];i++){
        a[i]=0;
    }
    while(i<n){
        a[i]=1;
        i++;
    }
    cout<<"The sorted array is: ";
        for(int i=0;i<n;i++){
            cout<<a[i]<<"  ";
        }
        cout<<endl;
}

void twoPointerApproach(int* a,int n){
    int i=0,j=n-1;
    while(i<j){
        if(a[i]==0){
            i++;
        }
        else if(a[j]==1){
            j--;
        }
        else if(a[i]==1 && a[j]==0){
            swap(a[i],a[j]);
        }
    }
    cout<<"The sorted array is: ";
        for(int i=0;i<n;i++){
            cout<<a[i]<<"  ";
        }
        cout<<endl;
}
int main(){
    int a[]={0,1,0,1,1,0,0,0};
    int n=8;
    sorting(a,n);
    count(a,n);
    twoPointerApproach(a,n);
    return 0;
}