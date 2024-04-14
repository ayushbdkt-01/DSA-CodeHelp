#include <iostream>
using namespace std;
int getPivot(int *a, int n)
{
    int s = 0;
    int e = n - 1;
    int mid = (s + e) / 2;
    while (s < e)
    {
       if(a[mid]>a[0]){
        s=mid+1;
       }
       else{
        e=mid;
       }
        mid = (s + e) / 2;
    }
    return s;
}
int main()
{
    int a[]{10,12,2,4,6,8};
    int n = 6;
    int ans1 = getPivot(a, n);
    cout << "The pivot element is at index: " << ans1 << endl;
    return 0;
}