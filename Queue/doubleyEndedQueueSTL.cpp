#include <iostream>
#include <deque>
using namespace std;
int main()
{
    deque<int> d;
    d.push_front(10);
    d.push_back(20);
    d.push_front(5);
    d.push_back(25);
    cout << "Front: " << d.front() << endl;
    ;
    cout << "Back: " << d.back() << endl;
    return 0;
}