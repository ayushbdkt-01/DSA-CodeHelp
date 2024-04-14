#include <iostream>
using namespace std;
int getPeak1(int *a, int n)
{
    int s = 0, e = n - 1;
    int mid = (s + e) / 2;
    while (s < e)
    {
        if (a[mid] < a[mid + 1])
        {
            s = mid + 1;
        }
        else
        {
            e = mid;
        }
        mid = (s + e) / 2;
    }
    return s;
}
int main()
{
    int a[]{3, 8, 10, 17, 1, 2};
    int n = 6;
    int ans1 = getPeak1(a, n);
    cout << "The peak element is at index : " << ans1 << endl;
    // int ans2=getPivot2(a,n);
    return 0;
}