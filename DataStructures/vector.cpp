#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> v;
    v.push_back(3); // [3]
    v.push_back(2); // [3,2]
    v.push_back(5); // [3,2,5]

    for (int i = 0; i < v.size(); i++) {
        cout << v[i] << ", ";
    } cout << "\n";
    
    for (auto x : v) {
       cout << x << ", ";
    } cout << "\n";

    cout << v.back() << "\n"; // 2
    v.pop_back();
    cout << v.back() << "\n"; // 5
    
    vector<int> v1 = {2,4,2,5,1};
    vector<int> v2(5);

    return 0;
}
