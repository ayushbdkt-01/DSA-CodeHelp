#include <iostream>
#include <array>  // stl array
#include <vector> // dynamic array
#include <deque>  // insertion and deletion from both ends
#include <list>   // implemented using doubley linked list
#include <stack>
#include <queue> // same header file for priority queue
// maxHeap - decreasing order - first element is largest
// minHeap - increasing order - first element is smallest
#include <set> // elements do not repeat....implemented using BST...no modifications are allowed.....elements are fetched in sorted order
// unordered set - fast and elements are not fetched in sorted order
#include <map> // key value pairs....elements in sorted order.....unordered map - random order...impplemented using red-black tree.... complexity O(log n)
// unordered map - implementation using hash table
using namespace std;
int main()
{

    array<int, 5> a = {1, 2, 3, 4, 5};
    cout << "Size of array is: " << a.size() << endl;
    for (int i = 0; i < a.size(); i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;
    cout << "Element at 2nd index: " << a.at(2) << endl;
    cout << "Check empty: " << a.empty() << endl;
    cout << "First element: " << a.front() << endl;
    cout << "Last element: " << a.back() << endl;





    vector<int> v;
    v.push_back(10);
    v.push_back(20);
    v.push_back(30);
    cout << "Element at 2nd index: " << v.at(2) << endl;
    cout << "Size: " << v.size() << endl;         // number of elements
    cout << "Capacity: " << v.capacity() << endl; // number of blocks //Memory assigned
    cout << "First element: " << v.front() << endl;
    cout << "Last element: " << v.back() << endl;
    v.pop_back();
    vector<int> vec(5, 1); //(sizeOfVector,initialize with);
    cout << "Printing second vector: ";
    for (int i : vec)
    {
        cout << vec[i] << " ";
    }
    cout << endl;
    vector<int> newVec(vec); // copied the vector vec  intu newVec
    cout << "Printing copied vector: ";
    for (int i : newVec)
    {
        cout << vec[i] << " ";
    }
    cout << endl;





    deque<int> d;
    d.push_back(10);
    d.push_back(20);
    d.push_front(30);
    d.push_front(40);
    d.push_back(50);
    d.push_back(60);
    d.push_back(70);

    cout << "Printing deque: ";
    for (int i : d)
    {
        cout << i << " ";
    }
    cout << endl;
    cout << "Element at Oth index: " << d.at(0) << endl;
    cout << "First element: " << d.front() << endl;
    cout << "Last element: " << d.back() << endl;
    d.erase(d.begin());              // deleting single element
    d.erase(d.begin() + 3, d.end()); // deleting range of element
    cout << "Deque after deleting: ";
    for (int i : d)
    {
        cout << i << " ";
    }
    cout << endl;
    d.pop_back();
    d.pop_front();
    cout << "Printing modified deque: ";
    for (int i : d)
    {
        cout << i << " ";
    }
    cout << endl;
    cout << "Empty or not: " << d.empty() << endl;





    list<int> l;
    l.push_back(10);
    l.push_front(20);
    for (int i : l)
    {
        cout << i << " ";
    }
    cout << endl;
    cout << "First element: " << l.front() << endl;
    cout << "Last element: " << l.back() << endl;
    cout << "Size of list: " << l.size() << endl;
    l.erase(l.begin()); // deleting first element
    cout << "Printing list after deleting first element: ";
    for (int i : l)
    {
        cout << i << " ";
    }
    cout << endl;
    list<int> l2(5, 1000); // (number of elements,initialize with)
    cout << "Printing second list: ";
    for (int i : l2)
    {
        cout << i << " ";
    }
    cout << endl;





    stack<string> s;
    s.push("Jai");
    s.push("Shree");
    s.push("Ram");
    cout << "Top element: " << s.top() << endl;
    cout << "Size of stack: " << s.size() << endl;
    s.pop(); // deleted top element
    cout << "Top element after popping: " << s.top() << endl;
    s.pop();
    s.pop();
    cout << "Empty or not: " << s.empty() << endl; // popped 3 times....so stack is empty





    queue<string> q;
    q.push("Jai");
    q.push("Bajrang");
    q.push("Bali");
    cout << "Size before popping: " << q.size() << endl;
    cout << "First element: " << q.front() << endl;

    q.pop();
    cout << "First element: " << q.front() << endl;
    cout << "Size after popping: " << q.size() << endl;





    priority_queue<int> maxHeap;
    priority_queue<int, vector<int>, greater<int>> minHeap;
    maxHeap.push(10);
    maxHeap.push(30);
    maxHeap.push(50);
    maxHeap.push(20);
    int maxHeapSize = maxHeap.size();
    cout << "Printing maxHeap: ";
    for (int i = 0; i < maxHeapSize; i++)
    {
        cout << maxHeap.top() << " ";
        maxHeap.pop();
    }
    cout << endl;
    minHeap.push(3);
    minHeap.push(56);
    minHeap.push(6);
    minHeap.push(0);
    int minHeapSize = minHeap.size();
    cout << "Printing minHeap: ";
    for (int i = 0; i < minHeapSize; i++)
    {
        cout << minHeap.top() << " ";
        minHeap.pop();
    }
    cout << endl;
    cout << "Empty or not: " << minHeap.empty() << endl;





    set<int> ss;
    ss.insert(1);
    ss.insert(1); // timeComplexity - O(log n) - inserttion in a set
    ss.insert(1);
    ss.insert(3);
    ss.insert(2);
    ss.insert(2);
    ss.insert(6);
    ss.insert(6);
    ss.insert(6);

    cout << "Size of set: " << ss.size() << endl;
    cout << "Printing set: ";
    for (int i : ss)
    {
        cout << i << " ";
    }
    cout << endl;
    ss.erase(ss.begin()); // O(log n)
    cout << "Printing set after erasing beginning element: ";
    for (int i : ss)
    {
        cout << i << " ";
    }
    cout << endl;
    cout << "Present or not in set: " << ss.count(6) << endl; // O(log n)
    cout << "Present or not in set: " << ss.count(-6) << endl;
    // ss.find() == O(log n)






    map<int,string> m;
    m[1]="One";
    m[2]="Two";
    m[10]="Ten";
    cout<<"Before erasing: "<<endl;
    for(auto i:m){
        cout<<i.first<<" : "<<i.second<<endl;
    }
    cout<<"Present or not: "<<m.count(10)<<endl;
    m.erase(2);
    cout<<"After erasing: "<<endl;
    for(auto i:m){
        cout<<i.first<<" : "<<i.second<<endl;
    }
    return 0;
}