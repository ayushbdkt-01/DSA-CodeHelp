#include <iostream>
using namespace std;
int main()
{
    string s;
    cout << "Enter string: ";
    cin >> s;
    int hash[26]={0};
    // size == 26 ....only uppercase or lowercase letters in string
    // size == 256 ....for any characters

    for (int i = 0; i < s.size(); i++)
    {
        hash[s[i] - 'a']++;
    }
    int q;
    cout << "Enter number of queries: ";
    cin >> q;
    while (q--)
    {
        char ch;
        cin >> ch;
        cout << ch << " : " << hash[ch - 'a'] << endl;
    }
    return 0;
}