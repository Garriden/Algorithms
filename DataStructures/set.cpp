#include <iostream>
#include <set>

using namespace std;

int main()
{
    set<int> s;
    s.insert(3);
    s.insert(2);
    s.insert(5);
    cout << s.count(3); // 1
    cout << s.count(4); // 0
    s.erase(3);
    s.insert(4);
    cout << s.count(3); // 0
    cout << s.count(4) << "\n"; // 1
    
    
    set<int> s1 = {2,5,6,8};
    cout << s1.size() << "\n"; // 4
    for (auto x : s1) {
        cout << x << ", ";
    } cout << "\n";
    
    set<int> s2;
    s2.insert(5);
    s2.insert(5);
    s2.insert(5);
    cout << s2.count(5) << "\n"; // 1
    
    multiset<int> ms;
    ms.insert(5);
    ms.insert(5);
    ms.insert(5);
    ms.insert(5);
    cout << "multiset: " << ms.count(5) << "\n"; // 4
    
    ms.erase(ms.find(5));
    cout << ms.count(5) << "\n"; // 3
    
    ms.erase(5);
    cout << ms.count(5) << "\n"; // 0

    return 0;
}
