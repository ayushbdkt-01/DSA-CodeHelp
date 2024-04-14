#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
    vector<int> v;
    v.push_back(10);
    v.push_back(20);
    v.push_back(300);
    v.push_back(40);
    v.push_back(500);
    v.push_back(60);

    sort(v.begin(),v.end());
    cout<<"Sorted vector: ";
    for(int i:v){
        cout<<i<<" ";
    }cout<<endl;
    cout << "Present or not: " << binary_search(v.begin(), v.end(), 50); //(start,end,key)
    cout<<endl;
    rotate(v.begin(),v.begin()+1,v.end());
    cout<<"Vector after rotating: ";
    for(int i:v){
        cout<<i<<" ";
    }cout<<endl;
    cout << "Upper Bound: " << upper_bound(v.begin(), v.end(), 20) - v.begin() << endl;
    cout << "Lower Bound: " << lower_bound(v.begin(), v.end(), 40) - v.begin() << endl;

    cout << "Maximum element is: " << max(10, 20) << endl;
    cout << "Mimimum element is: " << min(10, 20) << endl;

    int a=3;
    int b=5;
    cout<<"Before swapping: "<<a<<" "<<b<<endl;
    swap(a,b);
    cout<<"After swapping: "<<a<<" "<<b<<endl;

    string s="ayush budhlakoti";
    reverse(s.begin(),s.end());
    cout<<"Reversed string: "<<s<<endl;
    return 0;
}