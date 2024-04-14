#include<iostream>
using namespace std;
void optimizesSolution(int* a,int* b,int m,int n){
    int i=0,j=0;
    cout<<"Answer is: ";
    while(i<m && j<n){
        if(a[i]==b[j]){
            cout<<a[i]<<"  ";
            // break;
            i++,j++;
        }
        else if(a[i]<b[j]){
            i++;
        }
        else{
            j++;
        }
    }
}
int main(){
    int a[]={1,2,3,4,5};
    int b[]={3,4,5,6,7};
    int m=5;
    int n=5;
      for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(a[i]<b[j]){     //optimization
                    break;
                }
                if(a[i]==b[j]){
                   cout<<a[i]<<endl;
                    // nums2[j]=INT_MIN;
                    break;
                }
            }
        }
        // optimizesSolution(a,b,5,5);
    return 0;
}