#include<iostream>
using namespace std;
int main(){
    int a[]={1,3,5,7,9};
    int b[]={2,4,6,8};
    int s1=5;
    int s2=4;
    int i=0,j=0,k=0;
    int c[s1+s2];
    while(i<s1 && j<s2){
        if(a[i]<b[j]){
            c[k]=a[i];
            i++,k++;
        }
        else if(a[i]>b[j]){
            c[k]=b[j];
            j++,k++;
        }
        else{
            c[k]=a[i];
            k++,i++;
            c[k]=b[j];
            k++,j++;
        }
    }
    while(i<s1){
        c[k]=a[i];
        k++,i++;
    }

    while(j<s2){
        c[k]=b[j];
        k++,j++;
    }
    cout<<"Printing the final array: ";
    for(int x=0;x<s1+s2;x++){
        cout<<c[x]<<" ";
    }cout<<endl;
    return 0;
}