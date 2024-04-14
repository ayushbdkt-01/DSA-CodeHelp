#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a valid square: ";
    cin>>n;
    int s=0,e=n;
    long int mid=(s+e)/2;
    long int ans=-1;
    while(s<e){
        if(mid*mid==n){
            ans=mid;
            break;
        }
        else if(mid*mid<n){
            ans=mid;
            s=mid+1;
        }
        else{
            e=mid;
        }
        mid=(s+e)/2;
    }
    cout<<"The square root of "<<n<<" is "<<ans<<endl;

    return 0;
}