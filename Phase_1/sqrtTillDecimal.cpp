#include <iostream>
using namespace std;
int tempSol(int n)
{
    int s = 0, e = n;
    int mid = (s + e) / 2;
    int ans = -1;
    while (s < e)
    {
        if (mid * mid == n)
        {
            return mid;
        }
        else if (mid * mid > n)
        {
            e = mid;
        }
        else
        {
            ans = mid;
            s = mid + 1;
        }
        mid = (s + e) / 2;
    }
    return ans;
}

double preciseSol(int n, int ans, int precision)
{
    double factor = 1;
    double finalAns = ans;
    for (int i = 0; i < precision; i++)
    {
        factor = factor / 10;
        for (double j = finalAns; j * j < n; j = j + factor)
        {
            finalAns = j;
        }
    }
    return finalAns;
}
int main()
{
    int n;
    cout << "Enter number: ";
    cin >> n;
    int ans = tempSol(n);
    cout << "Answer in integer is: " << ans << endl;
    double finalAns = preciseSol(n, ans, 3);
    cout << "Final ans is: " << finalAns << endl;
    return 0;
}