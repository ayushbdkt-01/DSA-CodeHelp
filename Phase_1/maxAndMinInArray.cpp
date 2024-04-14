#include<iostream>
#include<climits>
using namespace std;
int main(){
    int n,a[5]={1,30,5,-7,9};
    int maximum=INT_MIN;
    int minimum=INT_MAX;
    for(int i=0;i<5;i++){
        if(a[i]>maximum){
            maximum=a[i];
        }
        if(a[i]<minimum){

            minimum=a[i];
        }
    }
    cout<<"Maximum element is: "<<maximum<<endl;
    cout<<"Minimum element is: "<<minimum<<endl;
    return 0;
}